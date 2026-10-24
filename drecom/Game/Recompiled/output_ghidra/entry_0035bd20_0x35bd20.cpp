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

// Function: entry_0035bd20
// Address: 0x35bd20 - 0x35bd70
void entry_0035bd20_0x35bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bd20_0x35bd20");
#endif

    ctx->pc = 0x35bd20u;

    // 0x35bd20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd24: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x35bd24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x35bd28: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x35bd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35bd2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bd30: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35BD30u;
    {
        const bool branch_taken_0x35bd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35bd30) {
            ctx->pc = 0x35BD70u;
            return;
        }
    }
    ctx->pc = 0x35BD38u;
    // 0x35bd38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bd3c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd40: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35bd40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35bd44: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd48: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35bd48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bd4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd50: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35bd50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bd54: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd58: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35bd58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bd5c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd60: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35bd64: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35bd64u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bd68: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35BD68u;
    {
        const bool branch_taken_0x35bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bd68) {
            ctx->pc = 0x35BDC4u;
            return;
        }
    }
    ctx->pc = 0x35BD70u;
}
