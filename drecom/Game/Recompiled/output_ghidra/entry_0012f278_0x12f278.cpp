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

// Function: entry_0012f278
// Address: 0x12f278 - 0x12f2b8
void entry_0012f278_0x12f278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f278_0x12f278");
#endif

    switch (ctx->pc) {
        case 0x12f2a8u: goto label_12f2a8;
        default: break;
    }

    ctx->pc = 0x12f278u;

    // 0x12f278: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12f27c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x12f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12f280: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12f280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f284: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12f284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12f288: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f28c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f290: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12f290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12f294: 0x24063c12  addiu       $a2, $zero, 0x3C12
    ctx->pc = 0x12f294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15378));
    // 0x12f298: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12f298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f29c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12f29cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12f2a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12F2A0u;
    SET_GPR_U32(ctx, 31, 0x12F2A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12F2A0u, 0x12F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2A8u;
label_12f2a8:
    // 0x12f2a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2ac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12f2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f2b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f2b4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12f2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12f2b8u;
}
