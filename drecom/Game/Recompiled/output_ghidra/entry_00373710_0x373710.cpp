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

// Function: entry_00373710
// Address: 0x373710 - 0x373748
void entry_00373710_0x373710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373710_0x373710");
#endif

    switch (ctx->pc) {
        case 0x373744u: goto label_373744;
        default: break;
    }

    ctx->pc = 0x373710u;

    // 0x373710: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373714: 0x94710050  lhu         $s1, 0x50($v1)
    ctx->pc = 0x373714u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x373718: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x373718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x37371c: 0x265182a  slt         $v1, $s3, $a1
    ctx->pc = 0x37371cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x373720: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x373720u;
    {
        const bool branch_taken_0x373720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373720) {
            ctx->pc = 0x373654u;
            return;
        }
    }
    ctx->pc = 0x373728u;
    // 0x373728: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37372c: 0x908309e6  lbu         $v1, 0x9E6($a0)
    ctx->pc = 0x37372cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2534)));
    // 0x373730: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x373730u;
    {
        const bool branch_taken_0x373730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373730) {
            ctx->pc = 0x373748u;
            return;
        }
    }
    ctx->pc = 0x373738u;
    // 0x373738: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37373c: 0xc098970  jal         func_2625C0
    ctx->pc = 0x37373Cu;
    SET_GPR_U32(ctx, 31, 0x373744u);
    ctx->pc = 0x2625C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625C0u, 0x37373Cu, 0x373744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373744u;
label_373744:
    // 0x373744: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x373744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x373748u;
}
