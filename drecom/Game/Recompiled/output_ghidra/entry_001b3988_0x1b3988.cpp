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

// Function: entry_001b3988
// Address: 0x1b3988 - 0x1b39f8
void entry_001b3988_0x1b3988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3988_0x1b3988");
#endif

    switch (ctx->pc) {
        case 0x1b39a0u: goto label_1b39a0;
        case 0x1b39b0u: goto label_1b39b0;
        case 0x1b39c4u: goto label_1b39c4;
        default: break;
    }

    ctx->pc = 0x1b3988u;

    // 0x1b3988: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b3988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b398c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3990: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1b3990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b3994: 0x26260120  addiu       $a2, $s1, 0x120
    ctx->pc = 0x1b3994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1b3998: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3998u;
    SET_GPR_U32(ctx, 31, 0x1B39A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3998u, 0x1B39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39A0u;
label_1b39a0:
    // 0x1b39a0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1b39a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b39a4: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1b39a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b39a8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B39A8u;
    SET_GPR_U32(ctx, 31, 0x1B39B0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B39A8u, 0x1B39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39B0u;
label_1b39b0:
    // 0x1b39b0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1b39b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b39b4: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x1b39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b39b8: 0xc62d00d4  lwc1        $f13, 0xD4($s1)
    ctx->pc = 0x1b39b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b39bc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B39BCu;
    SET_GPR_U32(ctx, 31, 0x1B39C4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B39BCu, 0x1B39C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39C4u;
label_1b39c4:
    // 0x1b39c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b39c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1b39c8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1b39c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b39cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b39ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b39d0: 0x0  nop
    ctx->pc = 0x1b39d0u;
    // NOP
    // 0x1b39d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b39d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b39d8: 0x0  nop
    ctx->pc = 0x1b39d8u;
    // NOP
    // 0x1b39dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B39DCu;
    {
        const bool branch_taken_0x1b39dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b39dc) {
            ctx->pc = 0x1B39F8u;
            return;
        }
    }
    ctx->pc = 0x1B39E4u;
    // 0x1b39e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b39e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b39e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b39ec: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b39ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b39f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b39f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b39f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b39f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x1b39f8u;
}
