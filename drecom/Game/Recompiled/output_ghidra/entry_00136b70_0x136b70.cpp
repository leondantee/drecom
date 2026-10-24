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

// Function: entry_00136b70
// Address: 0x136b70 - 0x136b80
void entry_00136b70_0x136b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136b70_0x136b70");
#endif

    ctx->pc = 0x136b70u;

    // 0x136b70: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x136b70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x136b74: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x136B74u;
    {
        const bool branch_taken_0x136b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136b74) {
            ctx->pc = 0x136A90u;
            return;
        }
    }
    ctx->pc = 0x136B7Cu;
    // 0x136b7c: 0x0  nop
    ctx->pc = 0x136b7cu;
    // NOP
    ctx->pc = 0x136b80u;
}
