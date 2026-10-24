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

// Function: entry_00267d18
// Address: 0x267d18 - 0x267d28
void entry_00267d18_0x267d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267d18_0x267d18");
#endif

    ctx->pc = 0x267d18u;

    // 0x267d18: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x267d18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x267d1c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x267D1Cu;
    {
        const bool branch_taken_0x267d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267d1c) {
            ctx->pc = 0x267CF8u;
            return;
        }
    }
    ctx->pc = 0x267D24u;
    // 0x267d24: 0x0  nop
    ctx->pc = 0x267d24u;
    // NOP
    ctx->pc = 0x267d28u;
}
