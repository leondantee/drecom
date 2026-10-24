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

// Function: entry_00127e04
// Address: 0x127e04 - 0x127e40
void entry_00127e04_0x127e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127e04_0x127e04");
#endif

    ctx->pc = 0x127e04u;

    // 0x127e04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127e08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127e0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127e10: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x127e14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127e18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127e18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127e1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127e20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127e24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127e28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127e2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x127e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127e30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127e34: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x127e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x127e38: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x127E38u;
    {
        const bool branch_taken_0x127e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e38) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x127E40u;
}
