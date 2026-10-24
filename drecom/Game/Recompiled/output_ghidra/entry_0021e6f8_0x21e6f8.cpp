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

// Function: entry_0021e6f8
// Address: 0x21e6f8 - 0x21e794
void entry_0021e6f8_0x21e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e6f8_0x21e6f8");
#endif

    switch (ctx->pc) {
        case 0x21e704u: goto label_21e704;
        case 0x21e740u: goto label_21e740;
        case 0x21e788u: goto label_21e788;
        default: break;
    }

    ctx->pc = 0x21e6f8u;

    // 0x21e6f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x21e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e6fc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x21E6FCu;
    SET_GPR_U32(ctx, 31, 0x21E704u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x21E6FCu, 0x21E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E704u;
label_21e704:
    // 0x21e704: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21e704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21e708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e70c: 0x0  nop
    ctx->pc = 0x21e70cu;
    // NOP
    // 0x21e710: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x21e710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x21e714: 0xa7a00064  sh          $zero, 0x64($sp)
    ctx->pc = 0x21e714u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x21e718: 0xa3a00066  sb          $zero, 0x66($sp)
    ctx->pc = 0x21e718u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x21e71c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x21e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21e720: 0xa3a20067  sb          $v0, 0x67($sp)
    ctx->pc = 0x21e720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 103), (uint8_t)GPR_U32(ctx, 2));
    // 0x21e724: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e728: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x21e728u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e72c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x21e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21e730: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x21e730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e734: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x21e734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21e738: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x21E738u;
    SET_GPR_U32(ctx, 31, 0x21E740u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x21E738u, 0x21E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E740u;
label_21e740:
    // 0x21e740: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x21E740u;
    {
        const bool branch_taken_0x21e740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e740) {
            ctx->pc = 0x21E930u;
            return;
        }
    }
    ctx->pc = 0x21E748u;
    // 0x21e748: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e74c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e750: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x21e750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x21e754: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x21e754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x21e758: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x21e758u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x21e75c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x21e75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x21e760: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21e760u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x21e764: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E764u;
    {
        const bool branch_taken_0x21e764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e764) {
            ctx->pc = 0x21E7B0u;
            return;
        }
    }
    ctx->pc = 0x21E76Cu;
    // 0x21e76c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x21e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21e770: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21e770u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e774: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x21e774u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e778: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21e778u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e77c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x21e77cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e780: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x21E780u;
    SET_GPR_U32(ctx, 31, 0x21E788u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x21E780u, 0x21E788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E788u;
label_21e788:
    // 0x21e788: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21e788u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e78c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21E78Cu;
    {
        const bool branch_taken_0x21e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e78c) {
            ctx->pc = 0x21E7A0u;
            return;
        }
    }
    ctx->pc = 0x21E794u;
}
