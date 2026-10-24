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

// Function: entry_001aff8c
// Address: 0x1aff8c - 0x1affb0
void entry_001aff8c_0x1aff8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aff8c_0x1aff8c");
#endif

    ctx->pc = 0x1aff8cu;

    // 0x1aff8c: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1aff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1aff90: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1aff90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1aff94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1aff94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1aff98: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFF98u;
    {
        const bool branch_taken_0x1aff98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aff98) {
            ctx->pc = 0x1AFFB0u;
            return;
        }
    }
    ctx->pc = 0x1AFFA0u;
    // 0x1affa0: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1affa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1affa4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1affa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1affa8: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x1affa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1affac: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x1affacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1affb0u;
}
