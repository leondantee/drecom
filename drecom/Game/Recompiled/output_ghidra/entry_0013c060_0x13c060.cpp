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

// Function: entry_0013c060
// Address: 0x13c060 - 0x13c070
void entry_0013c060_0x13c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c060_0x13c060");
#endif

    ctx->pc = 0x13c060u;

    // 0x13c060: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13c060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13c064: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x13c064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13c068: 0x1620ffda  bnez        $s1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x13C068u;
    {
        const bool branch_taken_0x13c068 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c068) {
            ctx->pc = 0x13BFD4u;
            return;
        }
    }
    ctx->pc = 0x13C070u;
}
