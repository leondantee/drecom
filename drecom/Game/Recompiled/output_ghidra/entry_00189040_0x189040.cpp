#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00189040
// Address: 0x189040 - 0x189084
void entry_00189040_0x189040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189040_0x189040");
#endif

    switch (ctx->pc) {
        case 0x18904cu: goto label_18904c;
        default: break;
    }

    ctx->pc = 0x189040u;

    // 0x189040: 0xc62c0180  lwc1        $f12, 0x180($s1)
    ctx->pc = 0x189040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x189044: 0xc06216c  jal         func_1885B0
    ctx->pc = 0x189044u;
    SET_GPR_U32(ctx, 31, 0x18904Cu);
    ctx->pc = 0x1885B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1885B0u, 0x189044u, 0x18904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18904Cu;
label_18904c:
    // 0x18904c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189050: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x189050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189054: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x189054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189058: 0x0  nop
    ctx->pc = 0x189058u;
    // NOP
    // 0x18905c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x18905Cu;
    {
        const bool branch_taken_0x18905c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18905c) {
            ctx->pc = 0x1890F8u;
            return;
        }
    }
    ctx->pc = 0x189064u;
    // 0x189064: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x189064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189068: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x189068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x18906c: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x189070: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x189074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189078: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x189078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x18907c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18907Cu;
    {
        const bool branch_taken_0x18907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18907c) {
            ctx->pc = 0x1890F8u;
            return;
        }
    }
    ctx->pc = 0x189084u;
}
