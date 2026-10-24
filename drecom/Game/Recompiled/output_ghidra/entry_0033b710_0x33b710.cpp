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

// Function: entry_0033b710
// Address: 0x33b710 - 0x33b720
void entry_0033b710_0x33b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b710_0x33b710");
#endif

    ctx->pc = 0x33b710u;

    // 0x33b710: 0x2e23001f  sltiu       $v1, $s1, 0x1F
    ctx->pc = 0x33b710u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x33b714: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x33B714u;
    {
        const bool branch_taken_0x33b714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b714) {
            ctx->pc = 0x33B6E4u;
            return;
        }
    }
    ctx->pc = 0x33B71Cu;
    // 0x33b71c: 0x0  nop
    ctx->pc = 0x33b71cu;
    // NOP
    ctx->pc = 0x33b720u;
}
