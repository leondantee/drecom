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

// Function: entry_002fec88
// Address: 0x2fec88 - 0x2fec98
void entry_002fec88_0x2fec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fec88_0x2fec88");
#endif

    ctx->pc = 0x2fec88u;

    // 0x2fec88: 0x2e230028  sltiu       $v1, $s1, 0x28
    ctx->pc = 0x2fec88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x2fec8c: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2FEC8Cu;
    {
        const bool branch_taken_0x2fec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fec8c) {
            ctx->pc = 0x2FEBCCu;
            return;
        }
    }
    ctx->pc = 0x2FEC94u;
    // 0x2fec94: 0x0  nop
    ctx->pc = 0x2fec94u;
    // NOP
    ctx->pc = 0x2fec98u;
}
