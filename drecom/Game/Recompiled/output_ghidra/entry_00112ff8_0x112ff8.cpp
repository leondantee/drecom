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

// Function: entry_00112ff8
// Address: 0x112ff8 - 0x113044
void entry_00112ff8_0x112ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112ff8_0x112ff8");
#endif

    switch (ctx->pc) {
        case 0x113020u: goto label_113020;
        case 0x11302cu: goto label_11302c;
        default: break;
    }

    ctx->pc = 0x112ff8u;

label_112ff8:
    // 0x112ff8: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x112ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x112ffc: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x112ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x113000: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x113000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x113004: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x113004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x113008: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x113008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11300c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x11300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x113010: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x113010u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113014: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113018: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113018u;
    SET_GPR_U32(ctx, 31, 0x113020u);
    ctx->pc = 0x11301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113018u;
    // 0x11301c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113018u, 0x113020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113020u;
label_113020:
    // 0x113020: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x113020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113024: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113024u;
    SET_GPR_U32(ctx, 31, 0x11302Cu);
    ctx->pc = 0x113028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113024u;
    // 0x113028: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113024u, 0x11302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11302Cu;
label_11302c:
    // 0x11302c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11302cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113030: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x113030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x113034: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x113034u;
    {
        const bool branch_taken_0x113034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113034u;
        // 0x113038: 0x8fa60254  lw          $a2, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113034) {
            ctx->pc = 0x112FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112ff8;
        }
    }
    ctx->pc = 0x11303Cu;
    // 0x11303c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11303Cu;
    {
        const bool branch_taken_0x11303c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11303Cu;
        // 0x113040: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11303c) {
            ctx->pc = 0x113054u;
            return;
        }
    }
    ctx->pc = 0x113044u;
}
