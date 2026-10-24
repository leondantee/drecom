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

// Function: entry_0012c618
// Address: 0x12c618 - 0x12c660
void entry_0012c618_0x12c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c618_0x12c618");
#endif

    switch (ctx->pc) {
        case 0x12c628u: goto label_12c628;
        case 0x12c634u: goto label_12c634;
        default: break;
    }

    ctx->pc = 0x12c618u;

    // 0x12c618: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c61c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c620: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12C620u;
    SET_GPR_U32(ctx, 31, 0x12C628u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C620u, 0x12C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C628u;
label_12c628:
    // 0x12c628: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c62c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12C62Cu;
    SET_GPR_U32(ctx, 31, 0x12C634u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C62Cu, 0x12C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C634u;
label_12c634:
    // 0x12c634: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12c634u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c638: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c63c: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x12c63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x12c640: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x12C640u;
    {
        const bool branch_taken_0x12c640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c640) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C648u;
    // 0x12c648: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c64c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x12c64cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x12c650: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c654: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x12c654u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c658: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x12C658u;
    {
        const bool branch_taken_0x12c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c658) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C660u;
}
