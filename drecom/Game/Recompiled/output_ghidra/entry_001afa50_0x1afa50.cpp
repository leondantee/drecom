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

// Function: entry_001afa50
// Address: 0x1afa50 - 0x1afa78
void entry_001afa50_0x1afa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afa50_0x1afa50");
#endif

    ctx->pc = 0x1afa50u;

    // 0x1afa50: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1afa50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1afa54: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afa58: 0x17c30007  bne         $fp, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFA58u;
    {
        const bool branch_taken_0x1afa58 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afa58) {
            ctx->pc = 0x1AFA78u;
            return;
        }
    }
    ctx->pc = 0x1AFA60u;
    // 0x1afa60: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1afa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1afa64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afa68: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1afa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afa6c: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x1afa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1afa70: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x1afa70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
    // 0x1afa74: 0x0  nop
    ctx->pc = 0x1afa74u;
    // NOP
    ctx->pc = 0x1afa78u;
}
