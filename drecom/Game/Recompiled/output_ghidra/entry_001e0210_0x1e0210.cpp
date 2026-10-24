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

// Function: entry_001e0210
// Address: 0x1e0210 - 0x1e0250
void entry_001e0210_0x1e0210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0210_0x1e0210");
#endif

    ctx->pc = 0x1e0210u;

    // 0x1e0210: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1e0210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1e0214: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1e0214u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e0218: 0x17c0fff4  bnez        $fp, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E0218u;
    {
        const bool branch_taken_0x1e0218 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0218) {
            ctx->pc = 0x1E01ECu;
            return;
        }
    }
    ctx->pc = 0x1E0220u;
    // 0x1e0220: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e0220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0224: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e0224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0228: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x1e0228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x1e022c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0230: 0xac500078  sw          $s0, 0x78($v0)
    ctx->pc = 0x1e0230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 16));
    // 0x1e0234: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e0234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0238: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1e0238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e023c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0240: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e0240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e0244: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e0244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e0248: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1e0248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x1e024c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1e024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    ctx->pc = 0x1e0250u;
}
