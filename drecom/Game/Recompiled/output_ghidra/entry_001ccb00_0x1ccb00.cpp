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

// Function: entry_001ccb00
// Address: 0x1ccb00 - 0x1ccb5c
void entry_001ccb00_0x1ccb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb00_0x1ccb00");
#endif

    ctx->pc = 0x1ccb00u;

    // 0x1ccb00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb04: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1ccb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1ccb08: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CCB08u;
    {
        const bool branch_taken_0x1ccb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb08) {
            ctx->pc = 0x1CCB5Cu;
            return;
        }
    }
    ctx->pc = 0x1CCB10u;
    // 0x1ccb10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ccb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccb14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb18: 0xac851b6c  sw          $a1, 0x1B6C($a0)
    ctx->pc = 0x1ccb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 5));
    // 0x1ccb1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb20: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1ccb20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ccb24: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCB24u;
    {
        const bool branch_taken_0x1ccb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb24) {
            ctx->pc = 0x1CCB5Cu;
            return;
        }
    }
    ctx->pc = 0x1CCB2Cu;
    // 0x1ccb2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb30: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1ccb30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1ccb34: 0x2463ff6a  addiu       $v1, $v1, -0x96
    ctx->pc = 0x1ccb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
    // 0x1ccb38: 0xa48315ec  sh          $v1, 0x15EC($a0)
    ctx->pc = 0x1ccb38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ccb3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb40: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1ccb40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ccb44: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ccb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ccb48: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ccb48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ccb4c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCB4Cu;
    {
        const bool branch_taken_0x1ccb4c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1ccb4c) {
            ctx->pc = 0x1CCB5Cu;
            return;
        }
    }
    ctx->pc = 0x1CCB54u;
    // 0x1ccb54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb58: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1ccb58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ccb5cu;
}
