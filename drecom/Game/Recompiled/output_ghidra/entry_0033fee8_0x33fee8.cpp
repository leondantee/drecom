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

// Function: entry_0033fee8
// Address: 0x33fee8 - 0x33fef8
void entry_0033fee8_0x33fee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fee8_0x33fee8");
#endif

    ctx->pc = 0x33fee8u;

    // 0x33fee8: 0x2e23000d  sltiu       $v1, $s1, 0xD
    ctx->pc = 0x33fee8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x33feec: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x33FEECu;
    {
        const bool branch_taken_0x33feec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33feec) {
            ctx->pc = 0x33FEC0u;
            return;
        }
    }
    ctx->pc = 0x33FEF4u;
    // 0x33fef4: 0x0  nop
    ctx->pc = 0x33fef4u;
    // NOP
    ctx->pc = 0x33fef8u;
}
