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

// Function: entry_001cfb1c
// Address: 0x1cfb1c - 0x1cfb84
void entry_001cfb1c_0x1cfb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfb1c_0x1cfb1c");
#endif

    ctx->pc = 0x1cfb1cu;

    // 0x1cfb1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfb20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cfb24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cfb28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cfb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cfb2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb30: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1cfb30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfb34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cfb38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cfb40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cfb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1cfb4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfb50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb54: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cfb54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cfb58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cfb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb60: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cfb64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb68: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1cfb68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cfb6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb70: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cfb70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cfb74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb78: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cfb78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CFB7Cu;
    {
        const bool branch_taken_0x1cfb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb7c) {
            ctx->pc = 0x1CFBB4u;
            return;
        }
    }
    ctx->pc = 0x1CFB84u;
}
