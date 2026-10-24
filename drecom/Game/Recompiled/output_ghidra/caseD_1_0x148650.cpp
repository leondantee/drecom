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
// Address: 0x148650 - 0x148684
void caseD_1_0x148650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x148650");
#endif

    switch (ctx->pc) {
        case 0x148660u: goto label_148660;
        default: break;
    }

    ctx->pc = 0x148650u;

    // 0x148650: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148654: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148658: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x148658u;
    SET_GPR_U32(ctx, 31, 0x148660u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x148658u, 0x148660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148660u;
label_148660:
    // 0x148660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148664: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x148664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x148668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x148668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14866c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x148670: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148670u;
    {
        const bool branch_taken_0x148670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148670) {
            ctx->pc = 0x148684u;
            return;
        }
    }
    ctx->pc = 0x148678u;
    // 0x148678: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x148678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14867c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148680: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x148680u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x148684u;
}
