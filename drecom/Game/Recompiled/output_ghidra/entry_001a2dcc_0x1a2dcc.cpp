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

// Function: entry_001a2dcc
// Address: 0x1a2dcc - 0x1a2de8
void entry_001a2dcc_0x1a2dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2dcc_0x1a2dcc");
#endif

    switch (ctx->pc) {
        case 0x1a2dd8u: goto label_1a2dd8;
        case 0x1a2de4u: goto label_1a2de4;
        default: break;
    }

    ctx->pc = 0x1a2dccu;

    // 0x1a2dcc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a2dccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a2dd0: 0xc069070  jal         func_1A41C0
    ctx->pc = 0x1A2DD0u;
    SET_GPR_U32(ctx, 31, 0x1A2DD8u);
    ctx->pc = 0x1A41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41C0u, 0x1A2DD0u, 0x1A2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DD8u;
label_1a2dd8:
    // 0x1a2dd8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a2dd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a2ddc: 0xc0693b4  jal         func_1A4ED0
    ctx->pc = 0x1A2DDCu;
    SET_GPR_U32(ctx, 31, 0x1A2DE4u);
    ctx->pc = 0x1A4ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4ED0u, 0x1A2DDCu, 0x1A2DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DE4u;
label_1a2de4:
    // 0x1a2de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1a2de8u;
}
