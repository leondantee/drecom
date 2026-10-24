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

// Function: entry_001b0000
// Address: 0x1b0000 - 0x1b0028
void entry_001b0000_0x1b0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0000_0x1b0000");
#endif

    ctx->pc = 0x1b0000u;

    // 0x1b0000: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1b0000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1b0004: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b0004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b0008: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b0008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b000c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B000Cu;
    {
        const bool branch_taken_0x1b000c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b000c) {
            ctx->pc = 0x1B0028u;
            return;
        }
    }
    ctx->pc = 0x1B0014u;
    // 0x1b0014: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1b0014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1b0018: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1b0018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1b001c: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x1b001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1b0020: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x1b0020u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
    // 0x1b0024: 0x0  nop
    ctx->pc = 0x1b0024u;
    // NOP
    ctx->pc = 0x1b0028u;
}
