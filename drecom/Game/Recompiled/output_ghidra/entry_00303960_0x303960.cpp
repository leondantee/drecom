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

// Function: entry_00303960
// Address: 0x303960 - 0x303998
void entry_00303960_0x303960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303960_0x303960");
#endif

    switch (ctx->pc) {
        case 0x303980u: goto label_303980;
        default: break;
    }

    ctx->pc = 0x303960u;

    // 0x303960: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x303960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303964: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x303964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303968: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x303968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30396c: 0x24061e3e  addiu       $a2, $zero, 0x1E3E
    ctx->pc = 0x30396cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7742));
    // 0x303970: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303974: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x303978: 0xc0965d0  jal         func_259740
    ctx->pc = 0x303978u;
    SET_GPR_U32(ctx, 31, 0x303980u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x303978u, 0x303980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303980u;
label_303980:
    // 0x303980: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x303980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303984: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x303984u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x303988: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30398c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30398cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303994: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x303994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x303998u;
}
