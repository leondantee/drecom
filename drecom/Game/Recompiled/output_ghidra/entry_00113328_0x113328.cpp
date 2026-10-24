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

// Function: entry_00113328
// Address: 0x113328 - 0x113354
void entry_00113328_0x113328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113328_0x113328");
#endif

    switch (ctx->pc) {
        case 0x113348u: goto label_113348;
        default: break;
    }

    ctx->pc = 0x113328u;

    // 0x113328: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x113328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11332c: 0xfcb60000  sd          $s6, 0x0($a1)
    ctx->pc = 0x11332cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 22));
    // 0x113330: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x113330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x113334: 0x10c000a0  beqz        $a2, . + 4 + (0xA0 << 2)
    ctx->pc = 0x113334u;
    {
        const bool branch_taken_0x113334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x113338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113334u;
        // 0x113338: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113334) {
            ctx->pc = 0x1135B8u;
            return;
        }
    }
    ctx->pc = 0x11333Cu;
    // 0x11333c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11333cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113340: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113340u;
    SET_GPR_U32(ctx, 31, 0x113348u);
    ctx->pc = 0x113344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113340u;
    // 0x113344: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113340u, 0x113348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113348u;
label_113348:
    // 0x113348: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x113348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11334c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x11334Cu;
    {
        const bool branch_taken_0x11334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11334Cu;
        // 0x113350: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11334c) {
            ctx->pc = 0x1135B4u;
            return;
        }
    }
    ctx->pc = 0x113354u;
}
