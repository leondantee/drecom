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

// Function: entry_001965a0
// Address: 0x1965a0 - 0x1965b0
void entry_001965a0_0x1965a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001965a0_0x1965a0");
#endif

    ctx->pc = 0x1965a0u;

    // 0x1965a0: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x1965a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1965a4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1965A4u;
    {
        const bool branch_taken_0x1965a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1965a4) {
            ctx->pc = 0x196570u;
            return;
        }
    }
    ctx->pc = 0x1965ACu;
    // 0x1965ac: 0x0  nop
    ctx->pc = 0x1965acu;
    // NOP
    ctx->pc = 0x1965b0u;
}
