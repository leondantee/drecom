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

// Function: entry_00216ef8
// Address: 0x216ef8 - 0x216f3c
void entry_00216ef8_0x216ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216ef8_0x216ef8");
#endif

    switch (ctx->pc) {
        case 0x216f24u: goto label_216f24;
        case 0x216f34u: goto label_216f34;
        default: break;
    }

    ctx->pc = 0x216ef8u;

    // 0x216ef8: 0x2530c880  addiu       $s0, $t1, -0x3780
    ctx->pc = 0x216ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953088));
    // 0x216efc: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x216efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x216f00: 0x2484ca50  addiu       $a0, $a0, -0x35B0
    ctx->pc = 0x216f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953552));
    // 0x216f04: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x216f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f08: 0x26c7bc40  addiu       $a3, $s6, -0x43C0
    ctx->pc = 0x216f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949952));
    // 0x216f0c: 0x256b6328  addiu       $t3, $t3, 0x6328
    ctx->pc = 0x216f0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25384));
    // 0x216f10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x216f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x216f14: 0x24080408  addiu       $t0, $zero, 0x408
    ctx->pc = 0x216f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x216f18: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x216f18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f1c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x216F1Cu;
    SET_GPR_U32(ctx, 31, 0x216F24u);
    ctx->pc = 0x216F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F1Cu;
    // 0x216f20: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x216F24u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216F24u) { return; }
    ctx->pc = 0x216F24u;
label_216f24:
    // 0x216f24: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216F24u;
    {
        const bool branch_taken_0x216f24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x216f24) {
            ctx->pc = 0x216F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F24u;
            // 0x216f28: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F3Cu;
            return;
        }
    }
    ctx->pc = 0x216F2Cu;
    // 0x216f2c: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216F2Cu;
    SET_GPR_U32(ctx, 31, 0x216F34u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216F2Cu, 0x216F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F34u;
label_216f34:
    // 0x216f34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x216F34u;
    {
        const bool branch_taken_0x216f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F34u;
        // 0x216f38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f34) {
            ctx->pc = 0x216F60u;
            return;
        }
    }
    ctx->pc = 0x216F3Cu;
}
