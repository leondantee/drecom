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

// Function: entry_00231074
// Address: 0x231074 - 0x2310b4
void entry_00231074_0x231074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231074_0x231074");
#endif

    switch (ctx->pc) {
        case 0x231084u: goto label_231084;
        case 0x231090u: goto label_231090;
        default: break;
    }

    ctx->pc = 0x231074u;

    // 0x231074: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x231074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231078: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x231078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23107c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23107Cu;
    SET_GPR_U32(ctx, 31, 0x231084u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23107Cu, 0x231084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231084u;
label_231084:
    // 0x231084: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x231084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231088: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x231088u;
    SET_GPR_U32(ctx, 31, 0x231090u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x231088u, 0x231090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231090u;
label_231090:
    // 0x231090: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x231090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231094: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x231094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x231098: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x231098u;
    {
        const bool branch_taken_0x231098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231098) {
            ctx->pc = 0x231154u;
            return;
        }
    }
    ctx->pc = 0x2310A0u;
    // 0x2310a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2310a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2310a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2310a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310a8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2310a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2310ac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2310ACu;
    {
        const bool branch_taken_0x2310ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2310ac) {
            ctx->pc = 0x231154u;
            return;
        }
    }
    ctx->pc = 0x2310B4u;
}
