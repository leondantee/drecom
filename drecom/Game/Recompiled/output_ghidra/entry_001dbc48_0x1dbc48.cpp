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

// Function: entry_001dbc48
// Address: 0x1dbc48 - 0x1dbc68
void entry_001dbc48_0x1dbc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbc48_0x1dbc48");
#endif

    ctx->pc = 0x1dbc48u;

    // 0x1dbc48: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbc4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbc50: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1dbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1dbc54: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x1dbc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x1dbc58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbc5c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1dbc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1dbc60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DBC60u;
    {
        const bool branch_taken_0x1dbc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc60) {
            ctx->pc = 0x1DBCB0u;
            return;
        }
    }
    ctx->pc = 0x1DBC68u;
}
