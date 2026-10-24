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

// Function: entry_0036a7a4
// Address: 0x36a7a4 - 0x36a7d4
void entry_0036a7a4_0x36a7a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a7a4_0x36a7a4");
#endif

    switch (ctx->pc) {
        case 0x36a7c4u: goto label_36a7c4;
        default: break;
    }

    ctx->pc = 0x36a7a4u;

    // 0x36a7a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a7a8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a7ac: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a7b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x36a7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a7b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a7b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a7bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A7BCu;
    SET_GPR_U32(ctx, 31, 0x36A7C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A7BCu, 0x36A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7C4u;
label_36a7c4:
    // 0x36a7c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a7c8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a7cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a7d0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36a7d4u;
}
