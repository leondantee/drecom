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

// Function: entry_0015bd60
// Address: 0x15bd60 - 0x15bda8
void entry_0015bd60_0x15bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bd60_0x15bd60");
#endif

    ctx->pc = 0x15bd60u;

    // 0x15bd60: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bd64: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bd68: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x15bd68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15bd6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15bd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15bd70: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x15BD70u;
    {
        const bool branch_taken_0x15bd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bd70) {
            ctx->pc = 0x15BEC8u;
            return;
        }
    }
    ctx->pc = 0x15BD78u;
    // 0x15bd78: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bd7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bd80: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x15bd80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15bd84: 0x8e6213e8  lw          $v0, 0x13E8($s3)
    ctx->pc = 0x15bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5096)));
    // 0x15bd88: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BD88u;
    {
        const bool branch_taken_0x15bd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x15bd88) {
            ctx->pc = 0x15BDA8u;
            return;
        }
    }
    ctx->pc = 0x15BD90u;
    // 0x15bd90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bd94: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bd98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bd9c: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x15bd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x15bda0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x15BDA0u;
    {
        const bool branch_taken_0x15bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bda0) {
            ctx->pc = 0x15BEC8u;
            return;
        }
    }
    ctx->pc = 0x15BDA8u;
}
