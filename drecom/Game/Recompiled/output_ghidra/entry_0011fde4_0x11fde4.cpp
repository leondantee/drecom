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

// Function: entry_0011fde4
// Address: 0x11fde4 - 0x11fdf0
void entry_0011fde4_0x11fde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fde4_0x11fde4");
#endif

    switch (ctx->pc) {
        case 0x11fdecu: goto label_11fdec;
        default: break;
    }

    ctx->pc = 0x11fde4u;

    // 0x11fde4: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11FDE4u;
    SET_GPR_U32(ctx, 31, 0x11FDECu);
    ctx->pc = 0x11FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FDE4u;
    // 0x11fde8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11FDE4u, 0x11FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDECu;
label_11fdec:
    // 0x11fdec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11fdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x11fdf0u;
}
