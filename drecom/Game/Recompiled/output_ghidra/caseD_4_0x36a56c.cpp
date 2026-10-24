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

// Function: caseD_4
// Address: 0x36a56c - 0x36a59c
void caseD_4_0x36a56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x36a56c");
#endif

    switch (ctx->pc) {
        case 0x36a58cu: goto label_36a58c;
        default: break;
    }

    ctx->pc = 0x36a56cu;

    // 0x36a56c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a570: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a574: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a578: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x36a578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36a57c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a580: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a584: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A584u;
    SET_GPR_U32(ctx, 31, 0x36A58Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A584u, 0x36A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A58Cu;
label_36a58c:
    // 0x36a58c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a590: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a598: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36a59cu;
}
