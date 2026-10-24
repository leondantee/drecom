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

// Function: caseD_5
// Address: 0x2e70b4 - 0x2e7108
void caseD_5_0x2e70b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2e70b4");
#endif

    switch (ctx->pc) {
        case 0x2e70c4u: goto label_2e70c4;
        case 0x2e70d4u: goto label_2e70d4;
        case 0x2e70e0u: goto label_2e70e0;
        default: break;
    }

    ctx->pc = 0x2e70b4u;

    // 0x2e70b4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e70b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e70b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e70bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E70BCu;
    SET_GPR_U32(ctx, 31, 0x2E70C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E70BCu, 0x2E70C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70C4u;
label_2e70c4:
    // 0x2e70c4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e70c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e70c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e70c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e70cc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E70CCu;
    SET_GPR_U32(ctx, 31, 0x2E70D4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E70CCu, 0x2E70D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70D4u;
label_2e70d4:
    // 0x2e70d4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e70d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e70d8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E70D8u;
    SET_GPR_U32(ctx, 31, 0x2E70E0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E70D8u, 0x2E70E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70E0u;
label_2e70e0:
    // 0x2e70e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e70e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e70e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e70e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e70e8: 0x106001dc  beqz        $v1, . + 4 + (0x1DC << 2)
    ctx->pc = 0x2E70E8u;
    {
        const bool branch_taken_0x2e70e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e70e8) {
            ctx->pc = 0x2E785Cu;
            return;
        }
    }
    ctx->pc = 0x2E70F0u;
    // 0x2e70f0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e70f4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e70f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e70f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e70fc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2e70fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7100: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x2E7100u;
    {
        const bool branch_taken_0x2e7100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7100) {
            ctx->pc = 0x2E785Cu;
            return;
        }
    }
    ctx->pc = 0x2E7108u;
}
