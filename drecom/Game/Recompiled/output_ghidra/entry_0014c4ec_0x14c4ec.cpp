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

// Function: entry_0014c4ec
// Address: 0x14c4ec - 0x14c51c
void entry_0014c4ec_0x14c4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c4ec_0x14c4ec");
#endif

    switch (ctx->pc) {
        case 0x14c50cu: goto label_14c50c;
        default: break;
    }

    ctx->pc = 0x14c4ecu;

    // 0x14c4ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c4f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c4f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14c4f8: 0x24060aa3  addiu       $a2, $zero, 0xAA3
    ctx->pc = 0x14c4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2723));
    // 0x14c4fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c500: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c504: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14C504u;
    SET_GPR_U32(ctx, 31, 0x14C50Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C504u, 0x14C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C50Cu;
label_14c50c:
    // 0x14c50c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c510: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c518: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14c51cu;
}
