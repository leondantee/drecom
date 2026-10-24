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

// Function: entry_0033a168
// Address: 0x33a168 - 0x33a188
void entry_0033a168_0x33a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a168_0x33a168");
#endif

    ctx->pc = 0x33a168u;

    // 0x33a168: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x33a168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33a16c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a170: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33a174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a178: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a17c: 0x441ffdd  bgez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x33A17Cu;
    {
        const bool branch_taken_0x33a17c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x33a17c) {
            ctx->pc = 0x33A0F4u;
            return;
        }
    }
    ctx->pc = 0x33A184u;
    // 0x33a184: 0x0  nop
    ctx->pc = 0x33a184u;
    // NOP
    ctx->pc = 0x33a188u;
}
