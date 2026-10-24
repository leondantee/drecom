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

// Function: entry_0011bb98
// Address: 0x11bb98 - 0x11bbd8
void entry_0011bb98_0x11bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bb98_0x11bb98");
#endif

    switch (ctx->pc) {
        case 0x11bba4u: goto label_11bba4;
        case 0x11bbc0u: goto label_11bbc0;
        default: break;
    }

    ctx->pc = 0x11bb98u;

label_11bb98:
    // 0x11bb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb9c: 0xc04786c  jal         func_11E1B0
    ctx->pc = 0x11BB9Cu;
    SET_GPR_U32(ctx, 31, 0x11BBA4u);
    ctx->pc = 0x11BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB9Cu;
    // 0x11bba0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x11BB9Cu, 0x11BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBA4u;
label_11bba4:
    // 0x11bba4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11bba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11bba8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x11bba8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x11bbac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11bbb4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11bbb8: 0xc0476f8  jal         func_11DBE0
    ctx->pc = 0x11BBB8u;
    SET_GPR_U32(ctx, 31, 0x11BBC0u);
    ctx->pc = 0x11BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBB8u;
    // 0x11bbbc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DBE0u, 0x11BBB8u, 0x11BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBC0u;
label_11bbc0:
    // 0x11bbc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbc4: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x11bbc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11bbc8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11BBC8u;
    {
        const bool branch_taken_0x11bbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBC8u;
        // 0x11bbcc: 0x66020030  daddiu      $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbc8) {
            ctx->pc = 0x11BB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bb98;
        }
    }
    ctx->pc = 0x11BBD0u;
    // 0x11bbd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BBD0u;
    {
        const bool branch_taken_0x11bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBD0u;
        // 0x11bbd4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbd0) {
            ctx->pc = 0x11BBE8u;
            return;
        }
    }
    ctx->pc = 0x11BBD8u;
}
