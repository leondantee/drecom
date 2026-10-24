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

// Function: entry_00259060
// Address: 0x259060 - 0x259078
void entry_00259060_0x259060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259060_0x259060");
#endif

    switch (ctx->pc) {
        case 0x259074u: goto label_259074;
        default: break;
    }

    ctx->pc = 0x259060u;

    // 0x259060: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x259060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x259064: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x259064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259068: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x259068u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25906c: 0xc096428  jal         func_2590A0
    ctx->pc = 0x25906Cu;
    SET_GPR_U32(ctx, 31, 0x259074u);
    ctx->pc = 0x2590A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590A0u, 0x25906Cu, 0x259074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259074u;
label_259074:
    // 0x259074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x259074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x259078u;
}
