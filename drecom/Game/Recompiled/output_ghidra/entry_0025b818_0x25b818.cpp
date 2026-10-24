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

// Function: entry_0025b818
// Address: 0x25b818 - 0x25b89c
void entry_0025b818_0x25b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b818_0x25b818");
#endif

    switch (ctx->pc) {
        case 0x25b894u: goto label_25b894;
        default: break;
    }

    ctx->pc = 0x25b818u;

    // 0x25b818: 0x32a300c0  andi        $v1, $s5, 0xC0
    ctx->pc = 0x25b818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)192);
    // 0x25b81c: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x25B81Cu;
    {
        const bool branch_taken_0x25b81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b81c) {
            ctx->pc = 0x25B9B4u;
            return;
        }
    }
    ctx->pc = 0x25B824u;
    // 0x25b824: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25b824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25b828: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25b828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25b82c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x25b82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x25b830: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x25B830u;
    {
        const bool branch_taken_0x25b830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b830) {
            ctx->pc = 0x25B8F8u;
            return;
        }
    }
    ctx->pc = 0x25B838u;
    // 0x25b838: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25b838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25b83c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25b840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b844: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x25b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x25b848: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25B848u;
    {
        const bool branch_taken_0x25b848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b848) {
            ctx->pc = 0x25B89Cu;
            return;
        }
    }
    ctx->pc = 0x25B850u;
    // 0x25b850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b854: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25b854u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b858: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25b858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25b85c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b860: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x25b860u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b864: 0x8ea20370  lw          $v0, 0x370($s5)
    ctx->pc = 0x25b864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 880)));
    // 0x25b868: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x25b868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x25b86c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25b870: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x25b870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25b874: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x25b874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25b878: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b87c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b880: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25b880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25b884: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x25b884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x25b888: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25b888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x25b88c: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25B88Cu;
    SET_GPR_U32(ctx, 31, 0x25B894u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25B88Cu, 0x25B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B894u;
label_25b894:
    // 0x25b894: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25B894u;
    {
        const bool branch_taken_0x25b894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b894) {
            ctx->pc = 0x25B8B8u;
            return;
        }
    }
    ctx->pc = 0x25B89Cu;
}
