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

// Function: caseD_1
// Address: 0x2de51c - 0x2de57c
void caseD_1_0x2de51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2de51c");
#endif

    switch (ctx->pc) {
        case 0x2de52cu: goto label_2de52c;
        case 0x2de538u: goto label_2de538;
        case 0x2de548u: goto label_2de548;
        case 0x2de554u: goto label_2de554;
        default: break;
    }

    ctx->pc = 0x2de51cu;

    // 0x2de51c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de520: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2de524: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DE524u;
    SET_GPR_U32(ctx, 31, 0x2DE52Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE524u, 0x2DE52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE52Cu;
label_2de52c:
    // 0x2de52c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de530: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DE530u;
    SET_GPR_U32(ctx, 31, 0x2DE538u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE530u, 0x2DE538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE538u;
label_2de538:
    // 0x2de538: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de53c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de53cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2de540: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DE540u;
    SET_GPR_U32(ctx, 31, 0x2DE548u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE540u, 0x2DE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE548u;
label_2de548:
    // 0x2de548: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de54c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DE54Cu;
    SET_GPR_U32(ctx, 31, 0x2DE554u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE54Cu, 0x2DE554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE554u;
label_2de554:
    // 0x2de554: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de558: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2de558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2de55c: 0x10600166  beqz        $v1, . + 4 + (0x166 << 2)
    ctx->pc = 0x2DE55Cu;
    {
        const bool branch_taken_0x2de55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de55c) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DE564u;
    // 0x2de564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de568: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2de56c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de570: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de574: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x2DE574u;
    {
        const bool branch_taken_0x2de574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de574) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DE57Cu;
}
