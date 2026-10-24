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

// Function: entry_00365670
// Address: 0x365670 - 0x3656a0
void entry_00365670_0x365670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365670_0x365670");
#endif

    switch (ctx->pc) {
        case 0x365690u: goto label_365690;
        default: break;
    }

    ctx->pc = 0x365670u;

    // 0x365670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365674: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365678: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36567c: 0x24061e08  addiu       $a2, $zero, 0x1E08
    ctx->pc = 0x36567cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7688));
    // 0x365680: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x365680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365684: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365688: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365688u;
    SET_GPR_U32(ctx, 31, 0x365690u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365688u, 0x365690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365690u;
label_365690:
    // 0x365690: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365694: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36569c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36569cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3656a0u;
}
