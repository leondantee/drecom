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

// Function: entry_00114704
// Address: 0x114704 - 0x114728
void entry_00114704_0x114704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114704_0x114704");
#endif

    switch (ctx->pc) {
        case 0x114714u: goto label_114714;
        case 0x114720u: goto label_114720;
        default: break;
    }

    ctx->pc = 0x114704u;

    // 0x114704: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x114704u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11470c: 0xc044d7a  jal         func_1135E8
    ctx->pc = 0x11470Cu;
    SET_GPR_U32(ctx, 31, 0x114714u);
    ctx->pc = 0x114710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11470Cu;
    // 0x114710: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1135E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135E8u, 0x11470Cu, 0x114714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114714u;
label_114714:
    // 0x114714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114718: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x114718u;
    SET_GPR_U32(ctx, 31, 0x114720u);
    ctx->pc = 0x11471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114718u;
    // 0x11471c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x114718u, 0x114720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114720u;
label_114720:
    // 0x114720: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x114720u;
    {
        const bool branch_taken_0x114720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114720u;
        // 0x114724: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114720) {
            ctx->pc = 0x114750u;
            return;
        }
    }
    ctx->pc = 0x114728u;
}
