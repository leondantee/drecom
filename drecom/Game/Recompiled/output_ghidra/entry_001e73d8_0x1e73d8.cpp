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

// Function: entry_001e73d8
// Address: 0x1e73d8 - 0x1e7478
void entry_001e73d8_0x1e73d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e73d8_0x1e73d8");
#endif

    switch (ctx->pc) {
        case 0x1e73fcu: goto label_1e73fc;
        case 0x1e7420u: goto label_1e7420;
        case 0x1e7444u: goto label_1e7444;
        case 0x1e7460u: goto label_1e7460;
        default: break;
    }

    ctx->pc = 0x1e73d8u;

    // 0x1e73d8: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e73d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e73dc: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x1e73dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x1e73e0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e73e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e73e4: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e73e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e73e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e73e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e73ec: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1e73ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e73f0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e73f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e73f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E73F4u;
    SET_GPR_U32(ctx, 31, 0x1E73FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E73FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E73FCu) { return; }
    ctx->pc = 0x1E73FCu;
label_1e73fc:
    // 0x1e73fc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e73fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7400: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1e7400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1e7404: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1e7404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7408: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1e7408u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e740c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e740cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7410: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x1e7410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7414: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e7414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7418: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7418u;
    SET_GPR_U32(ctx, 31, 0x1E7420u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7420u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7420u) { return; }
    ctx->pc = 0x1E7420u;
label_1e7420:
    // 0x1e7420: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e7420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7424: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1e7424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1e7428: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e742c: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e742cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7430: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7434: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1e7434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7438: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e7438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e743c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E743Cu;
    SET_GPR_U32(ctx, 31, 0x1E7444u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7444u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7444u) { return; }
    ctx->pc = 0x1E7444u;
label_1e7444:
    // 0x1e7444: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7448: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e744c: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e744cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7450: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7450u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7454: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1e7454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e7458: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7458u;
    SET_GPR_U32(ctx, 31, 0x1E7460u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7460u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7460u) { return; }
    ctx->pc = 0x1E7460u;
label_1e7460:
    // 0x1e7460: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e7460u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7464: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7468: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e746c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e746cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7470: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x1e7470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e7474: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x1e7474u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e7478u;
}
