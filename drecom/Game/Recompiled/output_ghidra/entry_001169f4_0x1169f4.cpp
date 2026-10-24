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

// Function: entry_001169f4
// Address: 0x1169f4 - 0x116a10
void entry_001169f4_0x1169f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001169f4_0x1169f4");
#endif

    switch (ctx->pc) {
        case 0x116a0cu: goto label_116a0c;
        default: break;
    }

    ctx->pc = 0x1169f4u;

    // 0x1169f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1169f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1169f8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1169F8u;
    {
        const bool branch_taken_0x1169f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1169FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169F8u;
        // 0x1169fc: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169f8) {
            ctx->pc = 0x116A10u;
            return;
        }
    }
    ctx->pc = 0x116A00u;
    // 0x116a00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x116a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a04: 0xc046542  jal         func_119508
    ctx->pc = 0x116A04u;
    SET_GPR_U32(ctx, 31, 0x116A0Cu);
    ctx->pc = 0x116A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A04u;
    // 0x116a08: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116A04u, 0x116A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A0Cu;
label_116a0c:
    // 0x116a0c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x116a10u;
}
