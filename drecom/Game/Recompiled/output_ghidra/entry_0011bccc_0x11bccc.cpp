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

// Function: entry_0011bccc
// Address: 0x11bccc - 0x11bd18
void entry_0011bccc_0x11bccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bccc_0x11bccc");
#endif

    switch (ctx->pc) {
        case 0x11bd0cu: goto label_11bd0c;
        default: break;
    }

    ctx->pc = 0x11bcccu;

    // 0x11bccc: 0x24c4db20  addiu       $a0, $a2, -0x24E0
    ctx->pc = 0x11bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
    // 0x11bcd0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11bcd4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11bcd8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bcd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bce0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bce4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11bce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bcec: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bcf0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bcf0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bcf4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BCF4u;
    {
        const bool branch_taken_0x11bcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCF4u;
        // 0x11bcf8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcf4) {
            ctx->pc = 0x11BD18u;
            return;
        }
    }
    ctx->pc = 0x11BCFCu;
    // 0x11bcfc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bd00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x11bd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11bd04: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BD04u;
    SET_GPR_U32(ctx, 31, 0x11BD0Cu);
    ctx->pc = 0x11BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD04u;
    // 0x11bd08: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BD04u, 0x11BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD0Cu;
label_11bd0c:
    // 0x11bd0c: 0x144002d2  bnez        $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x11BD0Cu;
    {
        const bool branch_taken_0x11bd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD0Cu;
        // 0x11bd10: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd0c) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11BD14u;
    // 0x11bd14: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x11bd14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x11bd18u;
}
