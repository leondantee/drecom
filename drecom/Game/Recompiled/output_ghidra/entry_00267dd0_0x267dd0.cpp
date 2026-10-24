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

// Function: entry_00267dd0
// Address: 0x267dd0 - 0x267de0
void entry_00267dd0_0x267dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267dd0_0x267dd0");
#endif

    ctx->pc = 0x267dd0u;

    // 0x267dd0: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x267dd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x267dd4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x267DD4u;
    {
        const bool branch_taken_0x267dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267dd4) {
            ctx->pc = 0x267DB0u;
            return;
        }
    }
    ctx->pc = 0x267DDCu;
    // 0x267ddc: 0x0  nop
    ctx->pc = 0x267ddcu;
    // NOP
    ctx->pc = 0x267de0u;
}
