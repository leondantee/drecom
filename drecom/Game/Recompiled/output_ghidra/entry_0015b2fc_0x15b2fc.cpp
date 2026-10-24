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

// Function: entry_0015b2fc
// Address: 0x15b2fc - 0x15b318
void entry_0015b2fc_0x15b2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b2fc_0x15b2fc");
#endif

    ctx->pc = 0x15b2fcu;

    // 0x15b2fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b300: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b304: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b308: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b30c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15b310: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x15B310u;
    SET_GPR_U32(ctx, 31, 0x15B318u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x15B310u, 0x15B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B318u;
}
