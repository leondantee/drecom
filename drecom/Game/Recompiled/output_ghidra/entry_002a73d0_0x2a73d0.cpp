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

// Function: entry_002a73d0
// Address: 0x2a73d0 - 0x2a7468
void entry_002a73d0_0x2a73d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a73d0_0x2a73d0");
#endif

    switch (ctx->pc) {
        case 0x2a7408u: goto label_2a7408;
        case 0x2a7440u: goto label_2a7440;
        case 0x2a7464u: goto label_2a7464;
        default: break;
    }

    ctx->pc = 0x2a73d0u;

    // 0x2a73d0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a73d4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2a73d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2a73d8: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2a73d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a73dc: 0xa4851278  sh          $a1, 0x1278($a0)
    ctx->pc = 0x2a73dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a73e0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a73e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2a73e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2a73e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a73e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a73ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a73ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a73f0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2a73f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a73f4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A73F4u;
    {
        const bool branch_taken_0x2a73f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a73f4) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A73FCu;
    // 0x2a73fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a7400: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A7400u;
    SET_GPR_U32(ctx, 31, 0x2A7408u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A7400u, 0x2A7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7408u;
label_2a7408:
    // 0x2a7408: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a7408u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a740c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2a740cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2a7410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7414: 0x0  nop
    ctx->pc = 0x2a7414u;
    // NOP
    // 0x2a7418: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2a7418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2a741c: 0x3c0641a0  lui         $a2, 0x41A0
    ctx->pc = 0x2a741cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16800 << 16));
    // 0x2a7420: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a7420u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7424: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a7424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7428: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a7428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a742c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a742cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7430: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2a7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a7434: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7434u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7438: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A7438u;
    SET_GPR_U32(ctx, 31, 0x2A7440u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A7438u, 0x2A7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7440u;
label_2a7440:
    // 0x2a7440: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a7440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2a7444: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7448: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a744c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7450: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a7450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a7454: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2a7454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a7458: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a7458u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a745c: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A745Cu;
    SET_GPR_U32(ctx, 31, 0x2A7464u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A745Cu, 0x2A7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7464u;
label_2a7464:
    // 0x2a7464: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2a7464u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a7468u;
}
