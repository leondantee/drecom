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

// Function: entry_0026e9b0
// Address: 0x26e9b0 - 0x26ea70
void entry_0026e9b0_0x26e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e9b0_0x26e9b0");
#endif

    switch (ctx->pc) {
        case 0x26e9c0u: goto label_26e9c0;
        case 0x26e9e4u: goto label_26e9e4;
        case 0x26ea00u: goto label_26ea00;
        case 0x26ea14u: goto label_26ea14;
        case 0x26ea2cu: goto label_26ea2c;
        default: break;
    }

    ctx->pc = 0x26e9b0u;

    // 0x26e9b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26e9b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26E9B8u;
    SET_GPR_U32(ctx, 31, 0x26E9C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26E9B8u, 0x26E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9C0u;
label_26e9c0:
    // 0x26e9c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9c8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x26e9cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26e9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26e9d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26e9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26e9d4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x26e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e9d8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x26e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26e9dc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26E9DCu;
    SET_GPR_U32(ctx, 31, 0x26E9E4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26E9DCu, 0x26E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9E4u;
label_26e9e4:
    // 0x26e9e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x26e9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x26e9ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9f4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x26e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e9f8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x26E9F8u;
    SET_GPR_U32(ctx, 31, 0x26EA00u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x26E9F8u, 0x26EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA00u;
label_26ea00:
    // 0x26ea00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ea00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ea04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26ea08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ea0c: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26EA0Cu;
    SET_GPR_U32(ctx, 31, 0x26EA14u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26EA0Cu, 0x26EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA14u;
label_26ea14:
    // 0x26ea14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea1c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26ea20: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x26ea24: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26EA24u;
    SET_GPR_U32(ctx, 31, 0x26EA2Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26EA24u, 0x26EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA2Cu;
label_26ea2c:
    // 0x26ea2c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26ea2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26ea30: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ea34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ea34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ea38: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ea3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ea40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea44: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ea48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ea4c: 0x0  nop
    ctx->pc = 0x26ea4cu;
    // NOP
    // 0x26ea50: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26EA50u;
    {
        const bool branch_taken_0x26ea50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ea50) {
            ctx->pc = 0x26EA70u;
            return;
        }
    }
    ctx->pc = 0x26EA58u;
    // 0x26ea58: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ea5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ea5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ea60: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ea64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ea68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea6c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26ea6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x26ea70u;
}
