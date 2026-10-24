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

// Function: entry_0036a890
// Address: 0x36a890 - 0x36a8c0
void entry_0036a890_0x36a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a890_0x36a890");
#endif

    switch (ctx->pc) {
        case 0x36a8b0u: goto label_36a8b0;
        default: break;
    }

    ctx->pc = 0x36a890u;

    // 0x36a890: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a894: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a898: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a89c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x36a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a8a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a8a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a8a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A8A8u;
    SET_GPR_U32(ctx, 31, 0x36A8B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A8A8u, 0x36A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8B0u;
label_36a8b0:
    // 0x36a8b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a8b4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a8b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a8bc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36a8c0u;
}
