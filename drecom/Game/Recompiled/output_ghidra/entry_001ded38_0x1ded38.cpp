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

// Function: entry_001ded38
// Address: 0x1ded38 - 0x1ded48
void entry_001ded38_0x1ded38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ded38_0x1ded38");
#endif

    ctx->pc = 0x1ded38u;

    // 0x1ded38: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1ded38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1ded3c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ded3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ded40: 0x1620ffd1  bnez        $s1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1DED40u;
    {
        const bool branch_taken_0x1ded40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ded40) {
            ctx->pc = 0x1DEC88u;
            return;
        }
    }
    ctx->pc = 0x1DED48u;
}
