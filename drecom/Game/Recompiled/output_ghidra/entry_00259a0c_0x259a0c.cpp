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

// Function: entry_00259a0c
// Address: 0x259a0c - 0x259a9c
void entry_00259a0c_0x259a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259a0c_0x259a0c");
#endif

    ctx->pc = 0x259a0cu;

    // 0x259a0c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a10: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x259a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x259a14: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x259a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x259a18: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x259a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x259a1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x259a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259a20: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x259a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259a24: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x259a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259a28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x259a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259a2c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a34: 0xac4404b0  sw          $a0, 0x4B0($v0)
    ctx->pc = 0x259a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1200), GPR_U32(ctx, 4));
    // 0x259a38: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259a3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259a40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a44: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259a48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a50: 0xa44007ec  sh          $zero, 0x7EC($v0)
    ctx->pc = 0x259a50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2028), (uint16_t)GPR_U32(ctx, 0));
    // 0x259a54: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x259a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x259a58: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259a5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a64: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259a68: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a70: 0xa44407ea  sh          $a0, 0x7EA($v0)
    ctx->pc = 0x259a70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2026), (uint16_t)GPR_U32(ctx, 4));
    // 0x259a74: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x259a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x259a78: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259a7c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a84: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259a88: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a90: 0xa44407e8  sh          $a0, 0x7E8($v0)
    ctx->pc = 0x259a90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2024), (uint16_t)GPR_U32(ctx, 4));
    // 0x259a94: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x259A94u;
    {
        const bool branch_taken_0x259a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259a94) {
            ctx->pc = 0x259B28u;
            return;
        }
    }
    ctx->pc = 0x259A9Cu;
}
