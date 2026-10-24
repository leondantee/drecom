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

// Function: entry_002ddb18
// Address: 0x2ddb18 - 0x2ddb74
void entry_002ddb18_0x2ddb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ddb18_0x2ddb18");
#endif

    ctx->pc = 0x2ddb18u;

    // 0x2ddb18: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2ddb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb1c: 0x90c309e7  lbu         $v1, 0x9E7($a2)
    ctx->pc = 0x2ddb1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
    // 0x2ddb20: 0x106000a9  beqz        $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2DDB20u;
    {
        const bool branch_taken_0x2ddb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb20) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DDB28u;
    // 0x2ddb28: 0x920700db  lbu         $a3, 0xDB($s0)
    ctx->pc = 0x2ddb28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2ddb2c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2ddb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2ddb30: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x2ddb30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ddb34: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DDB34u;
    {
        const bool branch_taken_0x2ddb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb34) {
            ctx->pc = 0x2DDB74u;
            return;
        }
    }
    ctx->pc = 0x2DDB3Cu;
    // 0x2ddb3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ddb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddb40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2ddb44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ddb48: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ddb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ddb4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2ddb50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ddb54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2ddb58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddb5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2ddb60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddb64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ddb68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2ddb6c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2DDB6Cu;
    {
        const bool branch_taken_0x2ddb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb6c) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DDB74u;
}
