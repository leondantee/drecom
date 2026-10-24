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

// Function: entry_0025a84c
// Address: 0x25a84c - 0x25a8dc
void entry_0025a84c_0x25a84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a84c_0x25a84c");
#endif

    ctx->pc = 0x25a84cu;

    // 0x25a84c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a850: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x25a850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a854: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a858: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25a85c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a860: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a864: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x25a864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a868: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25a868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25a86c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a874: 0xac4404b0  sw          $a0, 0x4B0($v0)
    ctx->pc = 0x25a874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1200), GPR_U32(ctx, 4));
    // 0x25a878: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a87c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a884: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a888: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a88c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a890: 0xa44007ec  sh          $zero, 0x7EC($v0)
    ctx->pc = 0x25a890u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2028), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a894: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x25a894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a898: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a89c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a8a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a8a4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a8a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a8b0: 0xa44407ea  sh          $a0, 0x7EA($v0)
    ctx->pc = 0x25a8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2026), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a8b4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x25a8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25a8b8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a8bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a8c4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a8c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a8d0: 0xa44407e8  sh          $a0, 0x7E8($v0)
    ctx->pc = 0x25a8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2024), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a8d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25A8D4u;
    {
        const bool branch_taken_0x25a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a8d4) {
            ctx->pc = 0x25A968u;
            return;
        }
    }
    ctx->pc = 0x25A8DCu;
}
