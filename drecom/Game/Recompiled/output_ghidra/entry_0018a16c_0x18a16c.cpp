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

// Function: entry_0018a16c
// Address: 0x18a16c - 0x18a198
void entry_0018a16c_0x18a16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a16c_0x18a16c");
#endif

    ctx->pc = 0x18a16cu;

    // 0x18a16c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18a170: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a174: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18a174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18a178: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a17c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a180: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a184: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18a188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a18c: 0xa0400097  sb          $zero, 0x97($v0)
    ctx->pc = 0x18a18cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a190: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a194: 0x0  nop
    ctx->pc = 0x18a194u;
    // NOP
    ctx->pc = 0x18a198u;
}
