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

// Function: entry_00108ef8
// Address: 0x108ef8 - 0x108f04
void entry_00108ef8_0x108ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108ef8_0x108ef8");
#endif

    switch (ctx->pc) {
        case 0x108f00u: goto label_108f00;
        default: break;
    }

    ctx->pc = 0x108ef8u;

    // 0x108ef8: 0xc04230c  jal         func_108C30
    ctx->pc = 0x108EF8u;
    SET_GPR_U32(ctx, 31, 0x108F00u);
    ctx->pc = 0x108EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EF8u;
    // 0x108efc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C30u, 0x108EF8u, 0x108F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F00u;
label_108f00:
    // 0x108f00: 0x8e843bf4  lw          $a0, 0x3BF4($s4)
    ctx->pc = 0x108f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15348)));
    ctx->pc = 0x108f04u;
}
