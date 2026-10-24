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

// Function: entry_003671b4
// Address: 0x3671b4 - 0x3671f8
void entry_003671b4_0x3671b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003671b4_0x3671b4");
#endif

    switch (ctx->pc) {
        case 0x3671ccu: goto label_3671cc;
        default: break;
    }

    ctx->pc = 0x3671b4u;

    // 0x3671b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3671b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3671b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3671b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3671bc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3671bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3671c0: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x3671c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3671c4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x3671C4u;
    SET_GPR_U32(ctx, 31, 0x3671CCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x3671C4u, 0x3671CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3671CCu;
label_3671cc:
    // 0x3671cc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3671ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3671d0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x3671d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3671d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3671d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3671d8: 0x0  nop
    ctx->pc = 0x3671d8u;
    // NOP
    // 0x3671dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3671dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3671e0: 0x0  nop
    ctx->pc = 0x3671e0u;
    // NOP
    // 0x3671e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3671E4u;
    {
        const bool branch_taken_0x3671e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3671e4) {
            ctx->pc = 0x3671F8u;
            return;
        }
    }
    ctx->pc = 0x3671ECu;
    // 0x3671ec: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x3671ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3671f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3671f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3671f4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3671f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x3671f8u;
}
