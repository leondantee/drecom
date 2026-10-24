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

// Function: Em04_R1_walk
// Address: 0x33eae0 - 0x33ebcc
void Em04_R1_walk_0x33eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em04_R1_walk_0x33eae0");
#endif

    switch (ctx->pc) {
        case 0x33eaf4u: goto label_33eaf4;
        case 0x33eb3cu: goto label_33eb3c;
        case 0x33eb50u: goto label_33eb50;
        case 0x33eba4u: goto label_33eba4;
        case 0x33ebbcu: goto label_33ebbc;
        default: break;
    }

    ctx->pc = 0x33eae0u;

    // 0x33eae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33eae4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x33eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x33eae8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x33eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x33eaec: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x33EAECu;
    SET_GPR_U32(ctx, 31, 0x33EAF4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x33EAECu, 0x33EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EAF4u;
label_33eaf4:
    // 0x33eaf4: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x33eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x33eaf8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x33eaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x33eafc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33eafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33eb00: 0x0  nop
    ctx->pc = 0x33eb00u;
    // NOP
    // 0x33eb04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33eb04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33eb08: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x33eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x33eb0c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x33eb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x33eb10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33eb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33eb14: 0x0  nop
    ctx->pc = 0x33eb14u;
    // NOP
    // 0x33eb18: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x33eb18u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33eb1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eb20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eb24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x33eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eb28: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x33eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x33eb2c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x33eb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33eb30: 0x8c451250  lw          $a1, 0x1250($v0)
    ctx->pc = 0x33eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x33eb34: 0xc05c848  jal         func_172120
    ctx->pc = 0x33EB34u;
    SET_GPR_U32(ctx, 31, 0x33EB3Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x33EB34u, 0x33EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EB3Cu;
label_33eb3c:
    // 0x33eb3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x33eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eb40: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x33eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33eb44: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x33eb44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33eb48: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x33EB48u;
    SET_GPR_U32(ctx, 31, 0x33EB50u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x33EB48u, 0x33EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EB50u;
label_33eb50:
    // 0x33eb50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x33eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eb54: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x33eb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x33eb58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x33eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eb5c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x33eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33eb60: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x33eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x33eb64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33eb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33eb68: 0x0  nop
    ctx->pc = 0x33eb68u;
    // NOP
    // 0x33eb6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33eb6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33eb70: 0x0  nop
    ctx->pc = 0x33eb70u;
    // NOP
    // 0x33eb74: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x33EB74u;
    {
        const bool branch_taken_0x33eb74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33eb74) {
            ctx->pc = 0x33EB98u;
            goto label_33eb98;
        }
    }
    ctx->pc = 0x33EB7Cu;
    // 0x33eb7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eb80: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x33eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33eb84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x33eb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33eb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33eb8c: 0x0  nop
    ctx->pc = 0x33eb8cu;
    // NOP
    // 0x33eb90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33eb90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33eb94: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x33eb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_33eb98:
    // 0x33eb98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eb9c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x33EB9Cu;
    SET_GPR_U32(ctx, 31, 0x33EBA4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x33EB9Cu, 0x33EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EBA4u;
label_33eba4:
    // 0x33eba4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x33eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eba8: 0x8c421360  lw          $v0, 0x1360($v0)
    ctx->pc = 0x33eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4960)));
    // 0x33ebac: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x33ebacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ebb0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ebb4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x33EBB4u;
    SET_GPR_U32(ctx, 31, 0x33EBBCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x33EBB4u, 0x33EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EBBCu;
label_33ebbc:
    // 0x33ebbc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x33ebbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ebc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33ebc4: 0x3e00008  jr          $ra
    ctx->pc = 0x33EBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EBCCu;
}
