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

// Function: entry_001ad3e8
// Address: 0x1ad3e8 - 0x1ad3f8
void entry_001ad3e8_0x1ad3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad3e8_0x1ad3e8");
#endif

    ctx->pc = 0x1ad3e8u;

    // 0x1ad3e8: 0x2ea207d0  sltiu       $v0, $s5, 0x7D0
    ctx->pc = 0x1ad3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ad3ec: 0x1440fe98  bnez        $v0, . + 4 + (-0x168 << 2)
    ctx->pc = 0x1AD3ECu;
    {
        const bool branch_taken_0x1ad3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad3ec) {
            ctx->pc = 0x1ACE50u;
            return;
        }
    }
    ctx->pc = 0x1AD3F4u;
    // 0x1ad3f4: 0x0  nop
    ctx->pc = 0x1ad3f4u;
    // NOP
    ctx->pc = 0x1ad3f8u;
}
