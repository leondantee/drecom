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

// Function: entry_00113404
// Address: 0x113404 - 0x113430
void entry_00113404_0x113404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113404_0x113404");
#endif

    switch (ctx->pc) {
        case 0x113424u: goto label_113424;
        default: break;
    }

    ctx->pc = 0x113404u;

    // 0x113404: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x113404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x113408: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x113408u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x11340c: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x11340cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x113410: 0x10c00069  beqz        $a2, . + 4 + (0x69 << 2)
    ctx->pc = 0x113410u;
    {
        const bool branch_taken_0x113410 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x113414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113410u;
        // 0x113414: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113410) {
            ctx->pc = 0x1135B8u;
            return;
        }
    }
    ctx->pc = 0x113418u;
    // 0x113418: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x113418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11341c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11341Cu;
    SET_GPR_U32(ctx, 31, 0x113424u);
    ctx->pc = 0x113420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11341Cu;
    // 0x113420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11341Cu, 0x113424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113424u;
label_113424:
    // 0x113424: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x113424u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x113428: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x113428u;
    {
        const bool branch_taken_0x113428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113428u;
        // 0x11342c: 0xfd020008  sd          $v0, 0x8($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113428) {
            ctx->pc = 0x1135B4u;
            return;
        }
    }
    ctx->pc = 0x113430u;
}
