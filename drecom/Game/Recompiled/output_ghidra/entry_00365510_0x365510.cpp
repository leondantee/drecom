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

// Function: entry_00365510
// Address: 0x365510 - 0x365540
void entry_00365510_0x365510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365510_0x365510");
#endif

    switch (ctx->pc) {
        case 0x365530u: goto label_365530;
        default: break;
    }

    ctx->pc = 0x365510u;

    // 0x365510: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365514: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365518: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36551c: 0x24061e07  addiu       $a2, $zero, 0x1E07
    ctx->pc = 0x36551cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7687));
    // 0x365520: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x365520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365524: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365528: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365528u;
    SET_GPR_U32(ctx, 31, 0x365530u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365528u, 0x365530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365530u;
label_365530:
    // 0x365530: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365534: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36553c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36553cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x365540u;
}
