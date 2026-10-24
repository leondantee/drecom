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

// Function: entry_0026ef0c
// Address: 0x26ef0c - 0x26efcc
void entry_0026ef0c_0x26ef0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ef0c_0x26ef0c");
#endif

    switch (ctx->pc) {
        case 0x26ef1cu: goto label_26ef1c;
        case 0x26ef40u: goto label_26ef40;
        case 0x26ef5cu: goto label_26ef5c;
        case 0x26ef70u: goto label_26ef70;
        case 0x26ef88u: goto label_26ef88;
        default: break;
    }

    ctx->pc = 0x26ef0cu;

    // 0x26ef0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ef14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26EF14u;
    SET_GPR_U32(ctx, 31, 0x26EF1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26EF14u, 0x26EF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF1Cu;
label_26ef1c:
    // 0x26ef1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef24: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x26ef28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26ef2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26ef2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26ef30: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x26ef30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26ef34: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x26ef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26ef38: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26EF38u;
    SET_GPR_U32(ctx, 31, 0x26EF40u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26EF38u, 0x26EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF40u;
label_26ef40:
    // 0x26ef40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x26ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x26ef48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef50: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x26ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26ef54: 0xc05cd58  jal         func_173560
    ctx->pc = 0x26EF54u;
    SET_GPR_U32(ctx, 31, 0x26EF5Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x26EF54u, 0x26EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF5Cu;
label_26ef5c:
    // 0x26ef5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ef5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ef60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26ef64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ef68: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26EF68u;
    SET_GPR_U32(ctx, 31, 0x26EF70u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26EF68u, 0x26EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF70u;
label_26ef70:
    // 0x26ef70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef78: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26ef7c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x26ef80: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26EF80u;
    SET_GPR_U32(ctx, 31, 0x26EF88u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26EF80u, 0x26EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF88u;
label_26ef88:
    // 0x26ef88: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26ef88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26ef8c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ef90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ef90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ef94: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ef98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ef98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ef9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26efa0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26efa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26efa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26efa8: 0x0  nop
    ctx->pc = 0x26efa8u;
    // NOP
    // 0x26efac: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26EFACu;
    {
        const bool branch_taken_0x26efac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26efac) {
            ctx->pc = 0x26EFCCu;
            return;
        }
    }
    ctx->pc = 0x26EFB4u;
    // 0x26efb4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26efb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26efb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26efbc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26efbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26efc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26efc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26efc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26efc8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x26efccu;
}
