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

// Function: entry_0033bc58
// Address: 0x33bc58 - 0x33bc8c
void entry_0033bc58_0x33bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033bc58_0x33bc58");
#endif

    ctx->pc = 0x33bc58u;

    // 0x33bc58: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x33bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33bc5c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33bc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33bc64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33bc68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33bc6c: 0x24429a40  addiu       $v0, $v0, -0x65C0
    ctx->pc = 0x33bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
    // 0x33bc70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33bc74: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x33bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x33bc78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33bc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33bc80: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x33bc80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33bc84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33bc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33bc88: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x33bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x33bc8cu;
}
