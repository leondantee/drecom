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

// Function: entry_001da578
// Address: 0x1da578 - 0x1da5c8
void entry_001da578_0x1da578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da578_0x1da578");
#endif

    ctx->pc = 0x1da578u;

    // 0x1da578: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1da578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da57c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da580: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x1da580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x1da584: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1da584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da588: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x1da588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1da58c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1da58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1da590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da594: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1da594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1da598: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1da59c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da5a0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5a4: 0x3057000f  andi        $s7, $v0, 0xF
    ctx->pc = 0x1da5a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1da5a8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA5A8u;
    {
        const bool branch_taken_0x1da5a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da5a8) {
            ctx->pc = 0x1DA5C8u;
            return;
        }
    }
    ctx->pc = 0x1DA5B0u;
    // 0x1da5b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1da5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1da5b4: 0x571823  subu        $v1, $v0, $s7
    ctx->pc = 0x1da5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1da5b8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da5c0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da5c4: 0x0  nop
    ctx->pc = 0x1da5c4u;
    // NOP
    ctx->pc = 0x1da5c8u;
}
