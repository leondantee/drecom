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

// Function: entry_001a2364
// Address: 0x1a2364 - 0x1a23bc
void entry_001a2364_0x1a2364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2364_0x1a2364");
#endif

    switch (ctx->pc) {
        case 0x1a2398u: goto label_1a2398;
        default: break;
    }

    ctx->pc = 0x1a2364u;

    // 0x1a2364: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2368: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a2368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a236c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A236Cu;
    {
        const bool branch_taken_0x1a236c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a236c) {
            ctx->pc = 0x1A2460u;
            return;
        }
    }
    ctx->pc = 0x1A2374u;
    // 0x1a2374: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2378: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a237c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a237cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2380: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2380u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2384: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a2384u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2388: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a2388u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a238c: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a238cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a2390: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2390u;
    SET_GPR_U32(ctx, 31, 0x1A2398u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2390u, 0x1A2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2398u;
label_1a2398:
    // 0x1a2398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a239c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23a0: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x1a23a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a23a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23a8: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x1a23a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1a23ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a23b0: 0xa062000a  sb          $v0, 0xA($v1)
    ctx->pc = 0x1a23b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a23b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A23B4u;
    {
        const bool branch_taken_0x1a23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23b4) {
            ctx->pc = 0x1A2460u;
            return;
        }
    }
    ctx->pc = 0x1A23BCu;
}
