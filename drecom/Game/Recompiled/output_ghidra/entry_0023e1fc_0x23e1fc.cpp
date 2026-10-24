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

// Function: entry_0023e1fc
// Address: 0x23e1fc - 0x23e228
void entry_0023e1fc_0x23e1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e1fc_0x23e1fc");
#endif

    switch (ctx->pc) {
        case 0x23e214u: goto label_23e214;
        default: break;
    }

    ctx->pc = 0x23e1fcu;

    // 0x23e1fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e200: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e204: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x23e204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x23e208: 0x24100025  addiu       $s0, $zero, 0x25
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x23e20c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E20Cu;
    SET_GPR_U32(ctx, 31, 0x23E214u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E20Cu, 0x23E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E214u;
label_23e214:
    // 0x23e214: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e218: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x23e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23e21c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E21Cu;
    {
        const bool branch_taken_0x23e21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e21c) {
            ctx->pc = 0x23E228u;
            return;
        }
    }
    ctx->pc = 0x23E224u;
    // 0x23e224: 0x24100025  addiu       $s0, $zero, 0x25
    ctx->pc = 0x23e224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x23e228u;
}
