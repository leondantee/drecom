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

// Function: entry_001113fc
// Address: 0x1113fc - 0x111428
void entry_001113fc_0x1113fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113fc_0x1113fc");
#endif

    switch (ctx->pc) {
        case 0x111414u: goto label_111414;
        default: break;
    }

    ctx->pc = 0x1113fcu;

    // 0x1113fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1113fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111400: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111404: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111404u;
    {
        const bool branch_taken_0x111404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111404u;
        // 0x111408: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111404) {
            ctx->pc = 0x111428u;
            return;
        }
    }
    ctx->pc = 0x11140Cu;
    // 0x11140c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11140Cu;
    SET_GPR_U32(ctx, 31, 0x111414u);
    ctx->pc = 0x111410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11140Cu;
    // 0x111410: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11140Cu, 0x111414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111414u;
label_111414:
    // 0x111414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111418: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x111418u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x11141c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11141cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111420: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x111420u;
    {
        const bool branch_taken_0x111420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111420u;
        // 0x111424: 0xfe830008  sd          $v1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111420) {
            ctx->pc = 0x111524u;
            return;
        }
    }
    ctx->pc = 0x111428u;
}
