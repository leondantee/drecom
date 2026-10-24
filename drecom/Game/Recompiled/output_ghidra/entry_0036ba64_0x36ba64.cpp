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

// Function: entry_0036ba64
// Address: 0x36ba64 - 0x36ba94
void entry_0036ba64_0x36ba64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ba64_0x36ba64");
#endif

    switch (ctx->pc) {
        case 0x36ba84u: goto label_36ba84;
        default: break;
    }

    ctx->pc = 0x36ba64u;

    // 0x36ba64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba6c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36ba70: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x36ba70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x36ba74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ba74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ba78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ba78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ba7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36BA7Cu;
    SET_GPR_U32(ctx, 31, 0x36BA84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36BA7Cu, 0x36BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA84u;
label_36ba84:
    // 0x36ba84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba88: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36ba88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36ba8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36ba90: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36ba90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36ba94u;
}
