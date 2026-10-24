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

// Function: entry_0010c450
// Address: 0x10c450 - 0x10c464
void entry_0010c450_0x10c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c450_0x10c450");
#endif

    switch (ctx->pc) {
        case 0x10c458u: goto label_10c458;
        default: break;
    }

    ctx->pc = 0x10c450u;

    // 0x10c450: 0xc0430d6  jal         func_10C358
    ctx->pc = 0x10C450u;
    SET_GPR_U32(ctx, 31, 0x10C458u);
    ctx->pc = 0x10C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C450u;
    // 0x10c454: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C358u, 0x10C450u, 0x10C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C458u;
label_10c458:
    // 0x10c458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c460: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x10c460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x10c464u;
}
