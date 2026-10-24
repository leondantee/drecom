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

// Function: entry_003604d4
// Address: 0x3604d4 - 0x360518
void entry_003604d4_0x3604d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003604d4_0x3604d4");
#endif

    switch (ctx->pc) {
        case 0x3604ecu: goto label_3604ec;
        default: break;
    }

    ctx->pc = 0x3604d4u;

    // 0x3604d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3604d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3604d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3604d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3604dc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3604dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3604e0: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x3604e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3604e4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x3604E4u;
    SET_GPR_U32(ctx, 31, 0x3604ECu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x3604E4u, 0x3604ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3604ECu;
label_3604ec:
    // 0x3604ec: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3604ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3604f0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x3604f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3604f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3604f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3604f8: 0x0  nop
    ctx->pc = 0x3604f8u;
    // NOP
    // 0x3604fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3604fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360500: 0x0  nop
    ctx->pc = 0x360500u;
    // NOP
    // 0x360504: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x360504u;
    {
        const bool branch_taken_0x360504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x360504) {
            ctx->pc = 0x360518u;
            return;
        }
    }
    ctx->pc = 0x36050Cu;
    // 0x36050c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x36050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360510: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x360510u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x360514: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x360514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x360518u;
}
