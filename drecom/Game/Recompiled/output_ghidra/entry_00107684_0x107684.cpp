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

// Function: entry_00107684
// Address: 0x107684 - 0x1076ac
void entry_00107684_0x107684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107684_0x107684");
#endif

    switch (ctx->pc) {
        case 0x10768cu: goto label_10768c;
        case 0x107694u: goto label_107694;
        default: break;
    }

    ctx->pc = 0x107684u;

    // 0x107684: 0xc041e64  jal         func_107990
    ctx->pc = 0x107684u;
    SET_GPR_U32(ctx, 31, 0x10768Cu);
    ctx->pc = 0x107990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107990u, 0x107684u, 0x10768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10768Cu;
label_10768c:
    // 0x10768c: 0xc041dac  jal         func_1076B0
    ctx->pc = 0x10768Cu;
    SET_GPR_U32(ctx, 31, 0x107694u);
    ctx->pc = 0x1076B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076B0u, 0x10768Cu, 0x107694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107694u;
label_107694:
    // 0x107694: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x107694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107698: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10769c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10769cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1076a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1076a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1076a4: 0x8041e72  j           func_1079C8
    ctx->pc = 0x1076A4u;
    ctx->pc = 0x1076A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076A4u;
    // 0x1076a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1079C8u;
    _updateTempTackData_0x1079c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1076ACu;
}
