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

// Function: entry_00111114
// Address: 0x111114 - 0x111144
void entry_00111114_0x111114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111114_0x111114");
#endif

    switch (ctx->pc) {
        case 0x11111cu: goto label_11111c;
        case 0x11112cu: goto label_11112c;
        case 0x111138u: goto label_111138;
        default: break;
    }

    ctx->pc = 0x111114u;

    // 0x111114: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111114u;
    SET_GPR_U32(ctx, 31, 0x11111Cu);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111114u, 0x11111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11111Cu;
label_11111c:
    // 0x11111c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111120: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111124: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111124u;
    SET_GPR_U32(ctx, 31, 0x11112Cu);
    ctx->pc = 0x111128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111124u;
    // 0x111128: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111124u, 0x11112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111130: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111130u;
    SET_GPR_U32(ctx, 31, 0x111138u);
    ctx->pc = 0x111134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111130u;
    // 0x111134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111130u, 0x111138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111138u;
label_111138:
    // 0x111138: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x111138u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x11113c: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x11113Cu;
    {
        const bool branch_taken_0x11113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11113Cu;
        // 0x111140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11113c) {
            ctx->pc = 0x111524u;
            return;
        }
    }
    ctx->pc = 0x111144u;
}
