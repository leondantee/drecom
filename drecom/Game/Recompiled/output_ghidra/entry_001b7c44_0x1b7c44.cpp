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

// Function: entry_001b7c44
// Address: 0x1b7c44 - 0x1b7cb4
void entry_001b7c44_0x1b7c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7c44_0x1b7c44");
#endif

    switch (ctx->pc) {
        case 0x1b7c68u: goto label_1b7c68;
        case 0x1b7c80u: goto label_1b7c80;
        default: break;
    }

    ctx->pc = 0x1b7c44u;

    // 0x1b7c44: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7c48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b7c4c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1b7c50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b7c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b7c54: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1b7c58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7c5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7c60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B7C60u;
    SET_GPR_U32(ctx, 31, 0x1B7C68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B7C60u, 0x1B7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C68u;
label_1b7c68:
    // 0x1b7c68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7c6c: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b7c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7c70: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7c74: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x1b7c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b7c78: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B7C78u;
    SET_GPR_U32(ctx, 31, 0x1B7C80u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B7C78u, 0x1B7C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C80u;
label_1b7c80:
    // 0x1b7c80: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b7c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b7c84: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b7c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7c8c: 0x0  nop
    ctx->pc = 0x1b7c8cu;
    // NOP
    // 0x1b7c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7c94: 0x0  nop
    ctx->pc = 0x1b7c94u;
    // NOP
    // 0x1b7c98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7C98u;
    {
        const bool branch_taken_0x1b7c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7c98) {
            ctx->pc = 0x1B7CB4u;
            return;
        }
    }
    ctx->pc = 0x1B7CA0u;
    // 0x1b7ca0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b7ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1b7ca4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7ca8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b7ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7cac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b7cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b7cb0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b7cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1b7cb4u;
}
