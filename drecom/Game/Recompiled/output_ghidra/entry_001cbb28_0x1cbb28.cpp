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

// Function: entry_001cbb28
// Address: 0x1cbb28 - 0x1cbbe4
void entry_001cbb28_0x1cbb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbb28_0x1cbb28");
#endif

    switch (ctx->pc) {
        case 0x1cbb38u: goto label_1cbb38;
        case 0x1cbb60u: goto label_1cbb60;
        case 0x1cbb74u: goto label_1cbb74;
        case 0x1cbb88u: goto label_1cbb88;
        case 0x1cbba0u: goto label_1cbba0;
        default: break;
    }

    ctx->pc = 0x1cbb28u;

    // 0x1cbb28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbb2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cbb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cbb30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CBB30u;
    SET_GPR_U32(ctx, 31, 0x1CBB38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CBB30u, 0x1CBB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB38u;
label_1cbb38:
    // 0x1cbb38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbb38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cbb3c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbb40: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cbb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbb44: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1cbb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1cbb48: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1cbb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1cbb4c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cbb4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cbb50: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1cbb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1cbb54: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1cbb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1cbb58: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1CBB58u;
    SET_GPR_U32(ctx, 31, 0x1CBB60u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1CBB60u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1CBB60u) { return; }
    ctx->pc = 0x1CBB60u;
label_1cbb60:
    // 0x1cbb60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbb64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbb68: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1cbb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cbb6c: 0xc05cd78  jal         func_1735E0
    ctx->pc = 0x1CBB6Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB74u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x1CBB6Cu, 0x1CBB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB74u;
label_1cbb74:
    // 0x1cbb74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cbb74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cbb78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbb7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cbb7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cbb80: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CBB80u;
    SET_GPR_U32(ctx, 31, 0x1CBB88u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CBB80u, 0x1CBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB88u;
label_1cbb88:
    // 0x1cbb88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cbb88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cbb8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbb90: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cbb94: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cbb98: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1CBB98u;
    SET_GPR_U32(ctx, 31, 0x1CBBA0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CBB98u, 0x1CBBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBA0u;
label_1cbba0:
    // 0x1cbba0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1cbba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1cbba4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cbba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cbba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbbac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cbbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbbb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cbbb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cbbb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbbb8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1cbbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbbbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cbbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbbc0: 0x0  nop
    ctx->pc = 0x1cbbc0u;
    // NOP
    // 0x1cbbc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBBC4u;
    {
        const bool branch_taken_0x1cbbc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cbbc4) {
            ctx->pc = 0x1CBBE4u;
            return;
        }
    }
    ctx->pc = 0x1CBBCCu;
    // 0x1cbbcc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cbbd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cbbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbbd4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cbbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbbd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cbbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cbbdc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbbe0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cbbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1cbbe4u;
}
