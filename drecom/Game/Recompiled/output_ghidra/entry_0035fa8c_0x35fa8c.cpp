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

// Function: entry_0035fa8c
// Address: 0x35fa8c - 0x35fac4
void entry_0035fa8c_0x35fa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035fa8c_0x35fa8c");
#endif

    switch (ctx->pc) {
        case 0x35faa8u: goto label_35faa8;
        default: break;
    }

    ctx->pc = 0x35fa8cu;

    // 0x35fa8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fa90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35fa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35fa94: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x35fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35fa98: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35fa98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35fa9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x35fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x35faa0: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x35FAA0u;
    SET_GPR_U32(ctx, 31, 0x35FAA8u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x35FAA0u, 0x35FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FAA8u;
label_35faa8:
    // 0x35faa8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35faac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fab0: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x35fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x35fab4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x35fab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35fab8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35fab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35fabc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x35fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35fac0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35fac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x35fac4u;
}
