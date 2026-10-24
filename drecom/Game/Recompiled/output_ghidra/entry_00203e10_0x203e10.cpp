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

// Function: entry_00203e10
// Address: 0x203e10 - 0x203e24
void entry_00203e10_0x203e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203e10_0x203e10");
#endif

    ctx->pc = 0x203e10u;

    // 0x203e10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x203e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203e14: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x203e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x203e18: 0x34450007  ori         $a1, $v0, 0x7
    ctx->pc = 0x203e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x203e1c: 0xc05a400  jal         func_169000
    ctx->pc = 0x203E1Cu;
    SET_GPR_U32(ctx, 31, 0x203E24u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x203E1Cu, 0x203E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E24u;
}
