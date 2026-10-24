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

// Function: entry_0023e700
// Address: 0x23e700 - 0x23e794
void entry_0023e700_0x23e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e700_0x23e700");
#endif

    switch (ctx->pc) {
        case 0x23e750u: goto label_23e750;
        case 0x23e760u: goto label_23e760;
        case 0x23e770u: goto label_23e770;
        default: break;
    }

    ctx->pc = 0x23e700u;

    // 0x23e700: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x23e700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23e704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23e708: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23e708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23e70c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e710: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23e710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e714: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23e714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23e718: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23e718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23e71c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23e720: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23e720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23e724: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23e724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23e728: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23e728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e72c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23e72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23e730: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e734: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23e738: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23e738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23e73c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23e73cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e740: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23e740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23e744: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23e744u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e748: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23E748u;
    SET_GPR_U32(ctx, 31, 0x23E750u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23E748u, 0x23E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E750u;
label_23e750:
    // 0x23e750: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23e750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23e754: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x23e754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x23e758: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23E758u;
    SET_GPR_U32(ctx, 31, 0x23E760u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23E758u, 0x23E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E760u;
label_23e760:
    // 0x23e760: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23e760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23e764: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23e764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23e768: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23E768u;
    SET_GPR_U32(ctx, 31, 0x23E770u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23E768u, 0x23E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E770u;
label_23e770:
    // 0x23e770: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23e774: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23e774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23e778: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23e778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23e77c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e780: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23e784: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23e784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23e788: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23e788u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e78c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23E78Cu;
    SET_GPR_U32(ctx, 31, 0x23E794u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23E78Cu, 0x23E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E794u;
}
