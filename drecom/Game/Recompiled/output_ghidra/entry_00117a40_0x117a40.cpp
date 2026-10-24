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

// Function: entry_00117a40
// Address: 0x117a40 - 0x117a50
void entry_00117a40_0x117a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a40_0x117a40");
#endif

    ctx->pc = 0x117a40u;

    // 0x117a40: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x117A40u;
    {
        const bool branch_taken_0x117a40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x117a40) {
            ctx->pc = 0x117A6Cu;
            return;
        }
    }
    ctx->pc = 0x117A48u;
    // 0x117a48: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x117a48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a4c: 0x0  nop
    ctx->pc = 0x117a4cu;
    // NOP
    ctx->pc = 0x117a50u;
}
