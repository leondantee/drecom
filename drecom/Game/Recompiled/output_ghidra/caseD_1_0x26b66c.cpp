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
// Address: 0x26b66c - 0x26b694
void caseD_1_0x26b66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x26b66c");
#endif

    ctx->pc = 0x26b66cu;

    // 0x26b66c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b670: 0x904309db  lbu         $v1, 0x9DB($v0)
    ctx->pc = 0x26b670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x26b674: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x26b674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26b678: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x26b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x26b67c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B67Cu;
    {
        const bool branch_taken_0x26b67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b67c) {
            ctx->pc = 0x26B694u;
            return;
        }
    }
    ctx->pc = 0x26B684u;
    // 0x26b684: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b688: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b688u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b68c: 0xc0bc448  jal         func_2F1120
    ctx->pc = 0x26B68Cu;
    SET_GPR_U32(ctx, 31, 0x26B694u);
    ctx->pc = 0x2F1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1120u, 0x26B68Cu, 0x26B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B694u;
}
