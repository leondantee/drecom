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

// Function: entry_002db7f8
// Address: 0x2db7f8 - 0x2db880
void entry_002db7f8_0x2db7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db7f8_0x2db7f8");
#endif

    switch (ctx->pc) {
        case 0x2db838u: goto label_2db838;
        default: break;
    }

    ctx->pc = 0x2db7f8u;

    // 0x2db7f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2db7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2db800: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DB800u;
    {
        const bool branch_taken_0x2db800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db800) {
            ctx->pc = 0x2DB8D0u;
            return;
        }
    }
    ctx->pc = 0x2DB808u;
    // 0x2db808: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2db808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db80c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2db80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2db810: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2db810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2db814: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DB814u;
    {
        const bool branch_taken_0x2db814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db814) {
            ctx->pc = 0x2DB8D0u;
            return;
        }
    }
    ctx->pc = 0x2DB81Cu;
    // 0x2db81c: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2db81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db824: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2db824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2db828: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB828u;
    {
        const bool branch_taken_0x2db828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db828) {
            ctx->pc = 0x2DB880u;
            return;
        }
    }
    ctx->pc = 0x2DB830u;
    // 0x2db830: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB830u;
    SET_GPR_U32(ctx, 31, 0x2DB838u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB830u, 0x2DB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB838u;
label_2db838:
    // 0x2db838: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db83c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2db83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2db840: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB840u;
    {
        const bool branch_taken_0x2db840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db840) {
            ctx->pc = 0x2DB8D0u;
            return;
        }
    }
    ctx->pc = 0x2DB848u;
    // 0x2db848: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db84c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db850: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db854: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db858: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db85c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db85cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db864: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db868: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db86c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db86cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db870: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db874: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db878: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB878u;
    {
        const bool branch_taken_0x2db878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db878) {
            ctx->pc = 0x2DB8D0u;
            return;
        }
    }
    ctx->pc = 0x2DB880u;
}
