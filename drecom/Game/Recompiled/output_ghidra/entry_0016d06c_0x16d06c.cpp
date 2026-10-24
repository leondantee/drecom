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

// Function: entry_0016d06c
// Address: 0x16d06c - 0x16d0b8
void entry_0016d06c_0x16d06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d06c_0x16d06c");
#endif

    ctx->pc = 0x16d06cu;

    // 0x16d06c: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x16d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x16d070: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16d070u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16d074: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d078: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16d078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16d07c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d080: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d084: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x16d084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16d088: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d08c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d090: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x16d090u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d094: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x16d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16d098: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16d09c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d09cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d0a0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D0A0u;
    {
        const bool branch_taken_0x16d0a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0a0) {
            ctx->pc = 0x16D0B8u;
            return;
        }
    }
    ctx->pc = 0x16D0A8u;
    // 0x16d0a8: 0x8fb400a4  lw          $s4, 0xA4($sp)
    ctx->pc = 0x16d0a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16d0ac: 0x8fb700b4  lw          $s7, 0xB4($sp)
    ctx->pc = 0x16d0acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16d0b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D0B0u;
    {
        const bool branch_taken_0x16d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0b0) {
            ctx->pc = 0x16D0C4u;
            return;
        }
    }
    ctx->pc = 0x16D0B8u;
}
