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

// Function: entry_00373120
// Address: 0x373120 - 0x3731a4
void entry_00373120_0x373120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373120_0x373120");
#endif

    switch (ctx->pc) {
        case 0x37319cu: goto label_37319c;
        default: break;
    }

    ctx->pc = 0x373120u;

    // 0x373120: 0x328300c0  andi        $v1, $s4, 0xC0
    ctx->pc = 0x373120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)192);
    // 0x373124: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x373124u;
    {
        const bool branch_taken_0x373124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373124) {
            ctx->pc = 0x3732B8u;
            return;
        }
    }
    ctx->pc = 0x37312Cu;
    // 0x37312c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x37312cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373130: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x373130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x373134: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x373134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x373138: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x373138u;
    {
        const bool branch_taken_0x373138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373138) {
            ctx->pc = 0x373200u;
            return;
        }
    }
    ctx->pc = 0x373140u;
    // 0x373140: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x373140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373144: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37314c: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x37314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x373150: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x373150u;
    {
        const bool branch_taken_0x373150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373150) {
            ctx->pc = 0x3731A4u;
            return;
        }
    }
    ctx->pc = 0x373158u;
    // 0x373158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x373158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37315c: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x37315cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x373160: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x373160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373164: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37316c: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x37316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x373170: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x373170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x373174: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x373174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x373178: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x37317c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x37317cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373180: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373188: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x373188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x37318c: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x37318cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x373190: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x373190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x373194: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x373194u;
    SET_GPR_U32(ctx, 31, 0x37319Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x373194u, 0x37319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37319Cu;
label_37319c:
    // 0x37319c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37319Cu;
    {
        const bool branch_taken_0x37319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37319c) {
            ctx->pc = 0x3731C0u;
            return;
        }
    }
    ctx->pc = 0x3731A4u;
}
