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

// Function: entry_001c9d6c
// Address: 0x1c9d6c - 0x1c9dd4
void entry_001c9d6c_0x1c9d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9d6c_0x1c9d6c");
#endif

    ctx->pc = 0x1c9d6cu;

    // 0x1c9d6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9d70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d74: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c9d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c9d78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c9d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9d7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c9d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c9d84: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c9d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9d8c: 0x8fb10088  lw          $s1, 0x88($sp)
    ctx->pc = 0x1c9d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d90: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x1c9d90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9d94: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c9d9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9da0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9da4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c9da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c9da8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9dac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c9dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9db0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c9db4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9db8: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1c9db8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c9dbc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9dc0: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1c9dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c9dc4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9dc8: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1c9dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9dcc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C9DCCu;
    {
        const bool branch_taken_0x1c9dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9dcc) {
            ctx->pc = 0x1C9E04u;
            return;
        }
    }
    ctx->pc = 0x1C9DD4u;
}
