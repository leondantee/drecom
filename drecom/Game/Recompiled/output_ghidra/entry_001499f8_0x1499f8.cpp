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

// Function: entry_001499f8
// Address: 0x1499f8 - 0x149a20
void entry_001499f8_0x1499f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001499f8_0x1499f8");
#endif

    switch (ctx->pc) {
        case 0x149a18u: goto label_149a18;
        default: break;
    }

    ctx->pc = 0x1499f8u;

    // 0x1499f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1499f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1499fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a00: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x149a04: 0x24060a2e  addiu       $a2, $zero, 0xA2E
    ctx->pc = 0x149a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2606));
    // 0x149a08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x149a10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x149A10u;
    SET_GPR_U32(ctx, 31, 0x149A18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149A10u, 0x149A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A18u;
label_149a18:
    // 0x149a18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a1c: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x149a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x149a20u;
}
