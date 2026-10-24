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

// Function: entry_00123c58
// Address: 0x123c58 - 0x123ca0
void entry_00123c58_0x123c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123c58_0x123c58");
#endif

    ctx->pc = 0x123c58u;

    // 0x123c58: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123c5c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x123c60: 0x24424ee0  addiu       $v0, $v0, 0x4EE0
    ctx->pc = 0x123c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
    // 0x123c64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x123c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x123c68: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x123c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123c6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123c70: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x123c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x123c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123c78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x123c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x123c7c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x123c80: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123c84: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x123c84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x123c88: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x123c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x123c8c: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x123c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x123c90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x123c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x123c94: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x123c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x123c98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x123c9c: 0x0  nop
    ctx->pc = 0x123c9cu;
    // NOP
    ctx->pc = 0x123ca0u;
}
