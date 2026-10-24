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

// Function: entry_001aac1c
// Address: 0x1aac1c - 0x1aacd8
void entry_001aac1c_0x1aac1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aac1c_0x1aac1c");
#endif

    switch (ctx->pc) {
        case 0x1aac38u: goto label_1aac38;
        case 0x1aac48u: goto label_1aac48;
        case 0x1aac60u: goto label_1aac60;
        case 0x1aac88u: goto label_1aac88;
        case 0x1aaca0u: goto label_1aaca0;
        default: break;
    }

    ctx->pc = 0x1aac1cu;

    // 0x1aac1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac20: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1aac24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac28: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x1aac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1aac2c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x1aac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1aac30: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1AAC30u;
    SET_GPR_U32(ctx, 31, 0x1AAC38u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1AAC30u, 0x1AAC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC38u;
label_1aac38:
    // 0x1aac38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1aac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac40: 0xc040c24  jal         func_103090
    ctx->pc = 0x1AAC40u;
    SET_GPR_U32(ctx, 31, 0x1AAC48u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1AAC48u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AAC48u) { return; }
    ctx->pc = 0x1AAC48u;
label_1aac48:
    // 0x1aac48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1aac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac54: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x1aac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aac58: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1AAC58u;
    SET_GPR_U32(ctx, 31, 0x1AAC60u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1AAC60u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AAC60u) { return; }
    ctx->pc = 0x1AAC60u;
label_1aac60:
    // 0x1aac60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1aac64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aac64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aac68: 0x0  nop
    ctx->pc = 0x1aac68u;
    // NOP
    // 0x1aac6c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1aac6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1aac70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac74: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1aac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1aac78: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac7c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1aac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac80: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1AAC80u;
    SET_GPR_U32(ctx, 31, 0x1AAC88u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1AAC80u, 0x1AAC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC88u;
label_1aac88:
    // 0x1aac88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1aac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac90: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aac90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac94: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x1aac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aac98: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1AAC98u;
    SET_GPR_U32(ctx, 31, 0x1AACA0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1AACA0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AACA0u) { return; }
    ctx->pc = 0x1AACA0u;
label_1aaca0:
    // 0x1aaca0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1aaca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaca4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1aaca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1aaca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aaca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aacac: 0x0  nop
    ctx->pc = 0x1aacacu;
    // NOP
    // 0x1aacb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aacb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aacb4: 0x0  nop
    ctx->pc = 0x1aacb4u;
    // NOP
    // 0x1aacb8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1AACB8u;
    {
        const bool branch_taken_0x1aacb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aacb8) {
            ctx->pc = 0x1AACD8u;
            return;
        }
    }
    ctx->pc = 0x1AACC0u;
    // 0x1aacc0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aacc4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1aacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1aacc8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aacc8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aaccc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aacccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aacd0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1aacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1aacd4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aacd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x1aacd8u;
}
