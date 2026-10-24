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

// Function: entry_002349d8
// Address: 0x2349d8 - 0x234ae0
void entry_002349d8_0x2349d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002349d8_0x2349d8");
#endif

    switch (ctx->pc) {
        case 0x2349e0u: goto label_2349e0;
        case 0x2349f0u: goto label_2349f0;
        case 0x234a3cu: goto label_234a3c;
        case 0x234a48u: goto label_234a48;
        case 0x234a6cu: goto label_234a6c;
        case 0x234a84u: goto label_234a84;
        case 0x234ac0u: goto label_234ac0;
        case 0x234accu: goto label_234acc;
        default: break;
    }

    ctx->pc = 0x2349d8u;

label_2349d8:
    // 0x2349d8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2349D8u;
    SET_GPR_U32(ctx, 31, 0x2349E0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2349D8u, 0x2349E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349E0u;
label_2349e0:
    // 0x2349e0: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x2349e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x2349e4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2349e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2349e8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2349E8u;
    SET_GPR_U32(ctx, 31, 0x2349F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2349E8u, 0x2349F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349F0u;
label_2349f0:
    // 0x2349f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2349f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2349f4: 0x3c05c248  lui         $a1, 0xC248
    ctx->pc = 0x2349f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49736 << 16));
    // 0x2349f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2349f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349fc: 0x0  nop
    ctx->pc = 0x2349fcu;
    // NOP
    // 0x234a00: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x234a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x234a04: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x234a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x234a08: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x234a08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234a0c: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x234a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234a10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234a10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x234a14: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x234a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234a18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x234a1c: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x234a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x234a20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x234a20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234a24: 0x0  nop
    ctx->pc = 0x234a24u;
    // NOP
    // 0x234a28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x234a28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x234a2c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x234a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x234a30: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x234a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234a34: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x234A34u;
    SET_GPR_U32(ctx, 31, 0x234A3Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x234A3Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234A3Cu) { return; }
    ctx->pc = 0x234A3Cu;
label_234a3c:
    // 0x234a3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234a3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234a40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x234A40u;
    SET_GPR_U32(ctx, 31, 0x234A48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x234A40u, 0x234A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A48u;
label_234a48:
    // 0x234a48: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x234a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x234a4c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x234a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x234a50: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x234a50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234a54: 0x0  nop
    ctx->pc = 0x234a54u;
    // NOP
    // 0x234a58: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x234a58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x234a5c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x234a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234a60: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x234a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234a64: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x234A64u;
    SET_GPR_U32(ctx, 31, 0x234A6Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x234A6Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234A6Cu) { return; }
    ctx->pc = 0x234A6Cu;
label_234a6c:
    // 0x234a6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234a6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234a70: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x234a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x234a74: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x234a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234a78: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x234a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x234a7c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x234A7Cu;
    SET_GPR_U32(ctx, 31, 0x234A84u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x234A84u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234A84u) { return; }
    ctx->pc = 0x234A84u;
label_234a84:
    // 0x234a84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234a84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234a88: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x234a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234a8c: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x234a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x234a90: 0x24840980  addiu       $a0, $a0, 0x980
    ctx->pc = 0x234a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2432));
    // 0x234a94: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x234a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x234a98: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x234a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x234a9c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x234a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x234aa0: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x234aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x234aa4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x234aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x234aa8: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x234aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x234aac: 0x24042503  addiu       $a0, $zero, 0x2503
    ctx->pc = 0x234aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9475));
    // 0x234ab0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234ab0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234ab4: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x234ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x234ab8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234AB8u;
    SET_GPR_U32(ctx, 31, 0x234AC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234AB8u, 0x234AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AC0u;
label_234ac0:
    // 0x234ac0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234ac0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234ac4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234AC4u;
    SET_GPR_U32(ctx, 31, 0x234ACCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234AC4u, 0x234ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ACCu;
label_234acc:
    // 0x234acc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234accu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234ad0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x234ad0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x234ad4: 0x16c0ffc0  bnez        $s6, . + 4 + (-0x40 << 2)
    ctx->pc = 0x234AD4u;
    {
        const bool branch_taken_0x234ad4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x234ad4) {
            ctx->pc = 0x2349D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2349d8;
        }
    }
    ctx->pc = 0x234ADCu;
    // 0x234adc: 0x0  nop
    ctx->pc = 0x234adcu;
    // NOP
    ctx->pc = 0x234ae0u;
}
