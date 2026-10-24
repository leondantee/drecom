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

// Function: entry_003733bc
// Address: 0x3733bc - 0x373420
void entry_003733bc_0x3733bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003733bc_0x3733bc");
#endif

    switch (ctx->pc) {
        case 0x373418u: goto label_373418;
        default: break;
    }

    ctx->pc = 0x3733bcu;

    // 0x3733bc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3733bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3733c0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3733c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3733c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3733c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3733c8: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x3733c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x3733cc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3733CCu;
    {
        const bool branch_taken_0x3733cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3733cc) {
            ctx->pc = 0x373420u;
            return;
        }
    }
    ctx->pc = 0x3733D4u;
    // 0x3733d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3733d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3733d8: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x3733d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x3733dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3733dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3733e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x3733e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3733e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3733e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3733e8: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x3733e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x3733ec: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3733ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x3733f0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x3733f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3733f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3733f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3733f8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3733f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3733fc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x3733fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373404: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x373404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x373408: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x373408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x37340c: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x37340cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x373410: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x373410u;
    SET_GPR_U32(ctx, 31, 0x373418u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x373410u, 0x373418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373418u;
label_373418:
    // 0x373418: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x373418u;
    {
        const bool branch_taken_0x373418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373418) {
            ctx->pc = 0x373438u;
            return;
        }
    }
    ctx->pc = 0x373420u;
}
