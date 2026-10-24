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

// Function: entry_00215008
// Address: 0x215008 - 0x215050
void entry_00215008_0x215008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215008_0x215008");
#endif

    switch (ctx->pc) {
        case 0x215048u: goto label_215048;
        default: break;
    }

    ctx->pc = 0x215008u;

    // 0x215008: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x215008u;
    {
        const bool branch_taken_0x215008 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x21500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215008u;
        // 0x21500c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215008) {
            ctx->pc = 0x215050u;
            return;
        }
    }
    ctx->pc = 0x215010u;
    // 0x215010: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x215010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215014: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x215014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x215018: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x215018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x21501c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21501cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215020: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x215020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x215024: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x215024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x215028: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x215028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21502c: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x21502cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x215030: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x215030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x215034: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x215034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x215038: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x215038u;
    {
        const bool branch_taken_0x215038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215038u;
        // 0x21503c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215038) {
            ctx->pc = 0x21505Cu;
            return;
        }
    }
    ctx->pc = 0x215040u;
    // 0x215040: 0xc0854a6  jal         func_215298
    ctx->pc = 0x215040u;
    SET_GPR_U32(ctx, 31, 0x215048u);
    ctx->pc = 0x215298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215298u, 0x215040u, 0x215048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215048u;
label_215048:
    // 0x215048: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x215048u;
    {
        const bool branch_taken_0x215048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215048u;
        // 0x21504c: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215048) {
            ctx->pc = 0x215060u;
            return;
        }
    }
    ctx->pc = 0x215050u;
}
