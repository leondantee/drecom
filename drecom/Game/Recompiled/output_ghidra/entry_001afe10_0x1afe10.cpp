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

// Function: entry_001afe10
// Address: 0x1afe10 - 0x1afe48
void entry_001afe10_0x1afe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afe10_0x1afe10");
#endif

    ctx->pc = 0x1afe10u;

    // 0x1afe10: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1afe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1afe14: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1AFE14u;
    {
        const bool branch_taken_0x1afe14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe14) {
            ctx->pc = 0x1AFF8Cu;
            return;
        }
    }
    ctx->pc = 0x1AFE1Cu;
    // 0x1afe1c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1afe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1afe20: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x1afe20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x1afe24: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x1afe24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1afe28: 0x8ef30a68  lw          $s3, 0xA68($s7)
    ctx->pc = 0x1afe28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1afe2c: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x1afe2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1afe30: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1afe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1afe34: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1afe34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1afe38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afe38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afe3c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFE3Cu;
    {
        const bool branch_taken_0x1afe3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afe3c) {
            ctx->pc = 0x1AFE48u;
            return;
        }
    }
    ctx->pc = 0x1AFE44u;
    // 0x1afe44: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x1afe44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x1afe48u;
}
