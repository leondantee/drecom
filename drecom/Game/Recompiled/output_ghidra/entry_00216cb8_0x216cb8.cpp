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

// Function: entry_00216cb8
// Address: 0x216cb8 - 0x216cf8
void entry_00216cb8_0x216cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216cb8_0x216cb8");
#endif

    switch (ctx->pc) {
        case 0x216ce0u: goto label_216ce0;
        case 0x216cf0u: goto label_216cf0;
        default: break;
    }

    ctx->pc = 0x216cb8u;

    // 0x216cb8: 0x24e4ca50  addiu       $a0, $a3, -0x35B0
    ctx->pc = 0x216cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953552));
    // 0x216cbc: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x216cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x216cc0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x216cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cc4: 0x26c7bc40  addiu       $a3, $s6, -0x43C0
    ctx->pc = 0x216cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949952));
    // 0x216cc8: 0x256b6328  addiu       $t3, $t3, 0x6328
    ctx->pc = 0x216cc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25384));
    // 0x216ccc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x216cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216cd0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x216cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x216cd4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x216cd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cd8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x216CD8u;
    SET_GPR_U32(ctx, 31, 0x216CE0u);
    ctx->pc = 0x216CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CD8u;
    // 0x216cdc: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x216CE0u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216CE0u) { return; }
    ctx->pc = 0x216CE0u;
label_216ce0:
    // 0x216ce0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216CE0u;
    {
        const bool branch_taken_0x216ce0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x216ce0) {
            ctx->pc = 0x216CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216CE0u;
            // 0x216ce4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216CF8u;
            return;
        }
    }
    ctx->pc = 0x216CE8u;
    // 0x216ce8: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216CE8u;
    SET_GPR_U32(ctx, 31, 0x216CF0u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216CE8u, 0x216CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CF0u;
label_216cf0:
    // 0x216cf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x216CF0u;
    {
        const bool branch_taken_0x216cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CF0u;
        // 0x216cf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cf0) {
            ctx->pc = 0x216D18u;
            return;
        }
    }
    ctx->pc = 0x216CF8u;
}
