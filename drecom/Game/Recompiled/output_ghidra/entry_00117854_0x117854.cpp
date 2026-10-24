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

// Function: entry_00117854
// Address: 0x117854 - 0x11786c
void entry_00117854_0x117854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117854_0x117854");
#endif

    switch (ctx->pc) {
        case 0x11785cu: goto label_11785c;
        default: break;
    }

    ctx->pc = 0x117854u;

    // 0x117854: 0xc0472e4  jal         func_11CB90
    ctx->pc = 0x117854u;
    SET_GPR_U32(ctx, 31, 0x11785Cu);
    ctx->pc = 0x117858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117854u;
    // 0x117858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CB90u, 0x117854u, 0x11785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11785Cu;
label_11785c:
    // 0x11785c: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x11785Cu;
    {
        const bool branch_taken_0x11785c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11785Cu;
        // 0x117860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11785c) {
            ctx->pc = 0x117BACu;
            return;
        }
    }
    ctx->pc = 0x117864u;
    // 0x117864: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x117864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117868: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x117868u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->pc = 0x11786cu;
}
