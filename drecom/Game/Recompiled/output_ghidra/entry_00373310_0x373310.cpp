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

// Function: entry_00373310
// Address: 0x373310 - 0x373374
void entry_00373310_0x373310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373310_0x373310");
#endif

    switch (ctx->pc) {
        case 0x37336cu: goto label_37336c;
        default: break;
    }

    ctx->pc = 0x373310u;

    // 0x373310: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x373310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373314: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37331c: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x37331cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x373320: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x373320u;
    {
        const bool branch_taken_0x373320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373320) {
            ctx->pc = 0x373374u;
            return;
        }
    }
    ctx->pc = 0x373328u;
    // 0x373328: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x373328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37332c: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x37332cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x373330: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x373330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373334: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37333c: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x37333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x373340: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x373340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x373344: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x373344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x373348: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x37334c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x37334cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373350: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373358: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x373358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x37335c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x37335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x373360: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x373360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x373364: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x373364u;
    SET_GPR_U32(ctx, 31, 0x37336Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x373364u, 0x37336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37336Cu;
label_37336c:
    // 0x37336c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37336Cu;
    {
        const bool branch_taken_0x37336c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37336c) {
            ctx->pc = 0x373390u;
            return;
        }
    }
    ctx->pc = 0x373374u;
}
