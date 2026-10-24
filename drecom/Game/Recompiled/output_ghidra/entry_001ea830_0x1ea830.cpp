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

// Function: entry_001ea830
// Address: 0x1ea830 - 0x1ea884
void entry_001ea830_0x1ea830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea830_0x1ea830");
#endif

    switch (ctx->pc) {
        case 0x1ea838u: goto label_1ea838;
        default: break;
    }

    ctx->pc = 0x1ea830u;

    // 0x1ea830: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EA830u;
    SET_GPR_U32(ctx, 31, 0x1EA838u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EA830u, 0x1EA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA838u;
label_1ea838:
    // 0x1ea838: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ea838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ea83c: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x1ea83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1ea840: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1ea840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ea844: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ea844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ea848: 0x24649c20  addiu       $a0, $v1, -0x63E0
    ctx->pc = 0x1ea848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x1ea84c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1ea84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea850: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x1ea850u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ea854: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea858: 0xa44710a6  sh          $a3, 0x10A6($v0)
    ctx->pc = 0x1ea858u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ea85c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea860: 0x90280e05  lbu         $t0, 0xE05($at)
    ctx->pc = 0x1ea860u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1ea864: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1ea864u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1ea868: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ea868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea86c: 0x15090005  bne         $t0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA86Cu;
    {
        const bool branch_taken_0x1ea86c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x1ea86c) {
            ctx->pc = 0x1EA884u;
            return;
        }
    }
    ctx->pc = 0x1EA874u;
    // 0x1ea874: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea878: 0x844a10a6  lh          $t2, 0x10A6($v0)
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x1ea87c: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x1ea87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1ea880: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1ea880u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ea884u;
}
