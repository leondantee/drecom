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

// Function: entry_00379a20
// Address: 0x379a20 - 0x379a30
void entry_00379a20_0x379a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379a20_0x379a20");
#endif

    ctx->pc = 0x379a20u;

    // 0x379a20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x379a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379a24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x379a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379a28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x379A28u;
    {
        const bool branch_taken_0x379a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379a28) {
            ctx->pc = 0x379A54u;
            return;
        }
    }
    ctx->pc = 0x379A30u;
}
