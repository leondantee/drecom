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

// Function: entry_0030d068
// Address: 0x30d068 - 0x30d0a8
void entry_0030d068_0x30d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d068_0x30d068");
#endif

    ctx->pc = 0x30d068u;

    // 0x30d068: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d06c: 0x8c631274  lw          $v1, 0x1274($v1)
    ctx->pc = 0x30d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4724)));
    // 0x30d070: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30D070u;
    {
        const bool branch_taken_0x30d070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d070) {
            ctx->pc = 0x30D0A8u;
            return;
        }
    }
    ctx->pc = 0x30D078u;
    // 0x30d078: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d07c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d080: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d088: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d08c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d08cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d090: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d094: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d098: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d09c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d0a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d0a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30d0a8u;
}
