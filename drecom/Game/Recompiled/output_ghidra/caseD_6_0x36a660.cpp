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

// Function: caseD_6
// Address: 0x36a660 - 0x36a690
void caseD_6_0x36a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x36a660");
#endif

    switch (ctx->pc) {
        case 0x36a680u: goto label_36a680;
        default: break;
    }

    ctx->pc = 0x36a660u;

    // 0x36a660: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a664: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a668: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a66c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a674: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a678: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A678u;
    SET_GPR_U32(ctx, 31, 0x36A680u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A678u, 0x36A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A680u;
label_36a680:
    // 0x36a680: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a684: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a68c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36a690u;
}
