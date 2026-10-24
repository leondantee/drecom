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

// Function: entry_0011c918
// Address: 0x11c918 - 0x11c940
void entry_0011c918_0x11c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c918_0x11c918");
#endif

    switch (ctx->pc) {
        case 0x11c934u: goto label_11c934;
        default: break;
    }

    ctx->pc = 0x11c918u;

    // 0x11c918: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11c918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c91c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11c91cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11c920: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C920u;
    {
        const bool branch_taken_0x11c920 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c920) {
            ctx->pc = 0x11C924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C920u;
            // 0x11c924: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C940u;
            return;
        }
    }
    ctx->pc = 0x11C928u;
    // 0x11c928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11c928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c92c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11C92Cu;
    SET_GPR_U32(ctx, 31, 0x11C934u);
    ctx->pc = 0x11C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C92Cu;
    // 0x11c930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11C92Cu, 0x11C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C934u;
label_11c934:
    // 0x11c934: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x11c934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x11c938: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c93c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x11c93cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x11c940u;
}
