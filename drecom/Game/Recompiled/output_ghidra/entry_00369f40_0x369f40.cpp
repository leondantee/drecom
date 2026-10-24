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

// Function: entry_00369f40
// Address: 0x369f40 - 0x369f68
void entry_00369f40_0x369f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369f40_0x369f40");
#endif

    switch (ctx->pc) {
        case 0x369f48u: goto label_369f48;
        default: break;
    }

    ctx->pc = 0x369f40u;

    // 0x369f40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x369F40u;
    SET_GPR_U32(ctx, 31, 0x369F48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x369F40u, 0x369F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F48u;
label_369f48:
    // 0x369f48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x369f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x369f4c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x369f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x369f50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369F50u;
    {
        const bool branch_taken_0x369f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f50) {
            ctx->pc = 0x369F68u;
            return;
        }
    }
    ctx->pc = 0x369F58u;
    // 0x369f58: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f5c: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x369f60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x369F60u;
    {
        const bool branch_taken_0x369f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f60) {
            ctx->pc = 0x369F7Cu;
            return;
        }
    }
    ctx->pc = 0x369F68u;
}
