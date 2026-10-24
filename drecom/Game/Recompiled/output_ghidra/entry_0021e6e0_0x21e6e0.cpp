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

// Function: entry_0021e6e0
// Address: 0x21e6e0 - 0x21e6f8
void entry_0021e6e0_0x21e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e6e0_0x21e6e0");
#endif

    ctx->pc = 0x21e6e0u;

    // 0x21e6e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21e6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21e6e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e6e8: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x21e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21e6ec: 0x24050320  addiu       $a1, $zero, 0x320
    ctx->pc = 0x21e6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x21e6f0: 0xc0c4864  jal         func_312190
    ctx->pc = 0x21E6F0u;
    SET_GPR_U32(ctx, 31, 0x21E6F8u);
    ctx->pc = 0x312190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312190u, 0x21E6F0u, 0x21E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6F8u;
}
