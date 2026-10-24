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

// Function: entry_0018b28c
// Address: 0x18b28c - 0x18b2a0
void entry_0018b28c_0x18b28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b28c_0x18b28c");
#endif

    ctx->pc = 0x18b28cu;

    // 0x18b28c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B28Cu;
    {
        const bool branch_taken_0x18b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b28c) {
            ctx->pc = 0x18B2A0u;
            return;
        }
    }
    ctx->pc = 0x18B294u;
    // 0x18b294: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x18b294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x18b298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b29c: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x18b29cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18b2a0u;
}
