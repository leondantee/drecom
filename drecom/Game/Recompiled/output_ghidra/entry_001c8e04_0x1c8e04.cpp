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

// Function: entry_001c8e04
// Address: 0x1c8e04 - 0x1c8e6c
void entry_001c8e04_0x1c8e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8e04_0x1c8e04");
#endif

    ctx->pc = 0x1c8e04u;

    // 0x1c8e04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8e08: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e0c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c8e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8e10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8e14: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e18: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1c8e18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8e1c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e20: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c8e20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8e24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8e2c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c8e34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8e38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e3c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c8e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c8e40: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8e44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8e48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8e4c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e50: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1c8e50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c8e54: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e58: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1c8e58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c8e5c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e60: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1c8e60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8e64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C8E64u;
    {
        const bool branch_taken_0x1c8e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e64) {
            ctx->pc = 0x1C8E9Cu;
            return;
        }
    }
    ctx->pc = 0x1C8E6Cu;
}
