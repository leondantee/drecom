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

// Function: entry_0012efd0
// Address: 0x12efd0 - 0x12f010
void entry_0012efd0_0x12efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012efd0_0x12efd0");
#endif

    switch (ctx->pc) {
        case 0x12f000u: goto label_12f000;
        default: break;
    }

    ctx->pc = 0x12efd0u;

    // 0x12efd0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12efd4: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x12efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12efd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12efd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12efdc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12efe0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12efe4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12efe8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12efec: 0x24063c26  addiu       $a2, $zero, 0x3C26
    ctx->pc = 0x12efecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15398));
    // 0x12eff0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12eff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eff4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12eff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12eff8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12EFF8u;
    SET_GPR_U32(ctx, 31, 0x12F000u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12EFF8u, 0x12F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F000u;
label_12f000:
    // 0x12f000: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f004: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12f004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f008: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f00c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12f00cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12f010u;
}
