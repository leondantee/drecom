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

// Function: entry_0029f974
// Address: 0x29f974 - 0x29f994
void entry_0029f974_0x29f974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f974_0x29f974");
#endif

    ctx->pc = 0x29f974u;

    // 0x29f974: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f978: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f97c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f980: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x29f980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x29f984: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f988: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f98c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F98Cu;
    SET_GPR_U32(ctx, 31, 0x29F994u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F98Cu, 0x29F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F994u;
}
