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
// Address: 0x26fb04 - 0x26fb30
void caseD_1_0x26fb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x26fb04");
#endif

    ctx->pc = 0x26fb04u;

    // 0x26fb04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fb08: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x26fb08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x26fb0c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x26fb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x26fb10: 0x30450080  andi        $a1, $v0, 0x80
    ctx->pc = 0x26fb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x26fb14: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FB14u;
    {
        const bool branch_taken_0x26fb14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb14) {
            ctx->pc = 0x26FB30u;
            return;
        }
    }
    ctx->pc = 0x26FB1Cu;
    // 0x26fb1c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x26fb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fb20: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26fb20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x26fb24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fb24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fb28: 0xc0bc448  jal         func_2F1120
    ctx->pc = 0x26FB28u;
    SET_GPR_U32(ctx, 31, 0x26FB30u);
    ctx->pc = 0x2F1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1120u, 0x26FB28u, 0x26FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB30u;
}
