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

// Function: entry_0018b1e0
// Address: 0x18b1e0 - 0x18b210
void entry_0018b1e0_0x18b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b1e0_0x18b1e0");
#endif

    ctx->pc = 0x18b1e0u;

    // 0x18b1e0: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x18b1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x18b1e4: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x18B1E4u;
    {
        const bool branch_taken_0x18b1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b1e4) {
            ctx->pc = 0x18B14Cu;
            return;
        }
    }
    ctx->pc = 0x18B1ECu;
    // 0x18b1ec: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x18b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18b1f0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18b1f4: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x18B1F4u;
    {
        const bool branch_taken_0x18b1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b1f4) {
            ctx->pc = 0x18B2CCu;
            return;
        }
    }
    ctx->pc = 0x18B1FCu;
    // 0x18b1fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b200: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B200u;
    {
        const bool branch_taken_0x18b200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b200) {
            ctx->pc = 0x18B210u;
            return;
        }
    }
    ctx->pc = 0x18B208u;
    // 0x18b208: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x18B208u;
    {
        const bool branch_taken_0x18b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b208) {
            ctx->pc = 0x18B38Cu;
            return;
        }
    }
    ctx->pc = 0x18B210u;
}
