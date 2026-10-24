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

// Function: entry_001044e0
// Address: 0x1044e0 - 0x1044f0
void entry_001044e0_0x1044e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001044e0_0x1044e0");
#endif

    switch (ctx->pc) {
        case 0x1044ecu: goto label_1044ec;
        default: break;
    }

    ctx->pc = 0x1044e0u;

    // 0x1044e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1044e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044e4: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x1044E4u;
    SET_GPR_U32(ctx, 31, 0x1044ECu);
    ctx->pc = 0x1044E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1044E4u;
    // 0x1044e8: 0x2484c608  addiu       $a0, $a0, -0x39F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x1044E4u, 0x1044ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044ECu;
label_1044ec:
    // 0x1044ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1044ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1044f0u;
}
