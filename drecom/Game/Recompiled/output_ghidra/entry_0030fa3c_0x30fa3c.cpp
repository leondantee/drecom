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

// Function: entry_0030fa3c
// Address: 0x30fa3c - 0x30fa74
void entry_0030fa3c_0x30fa3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fa3c_0x30fa3c");
#endif

    switch (ctx->pc) {
        case 0x30fa5cu: goto label_30fa5c;
        default: break;
    }

    ctx->pc = 0x30fa3cu;

    // 0x30fa3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa44: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30fa44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30fa48: 0x24062834  addiu       $a2, $zero, 0x2834
    ctx->pc = 0x30fa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10292));
    // 0x30fa4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30fa4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fa50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30fa50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30fa54: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30FA54u;
    SET_GPR_U32(ctx, 31, 0x30FA5Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30FA54u, 0x30FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA5Cu;
label_30fa5c:
    // 0x30fa5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa60: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30fa60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30fa64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa68: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30fa68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30fa6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fa70: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30fa70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30fa74u;
}
