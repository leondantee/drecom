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

// Function: entry_001378f0
// Address: 0x1378f0 - 0x137904
void entry_001378f0_0x1378f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001378f0_0x1378f0");
#endif

    ctx->pc = 0x1378f0u;

    // 0x1378f0: 0x2a050002  slti        $a1, $s0, 0x2
    ctx->pc = 0x1378f0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1378f4: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1378F4u;
    {
        const bool branch_taken_0x1378f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1378f4) {
            ctx->pc = 0x1378A8u;
            return;
        }
    }
    ctx->pc = 0x1378FCu;
    // 0x1378fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1378FCu;
    {
        const bool branch_taken_0x1378fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378fc) {
            ctx->pc = 0x137988u;
            return;
        }
    }
    ctx->pc = 0x137904u;
}
