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

// Function: caseD_2
// Address: 0x26cbec - 0x26cc1c
void caseD_2_0x26cbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x26cbec");
#endif

    switch (ctx->pc) {
        case 0x26cc0cu: goto label_26cc0c;
        default: break;
    }

    ctx->pc = 0x26cbecu;

    // 0x26cbec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cbf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cbf4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26cbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26cbf8: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x26cbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x26cbfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26cbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cc00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26cc00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26cc04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26CC04u;
    SET_GPR_U32(ctx, 31, 0x26CC0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26CC04u, 0x26CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC0Cu;
label_26cc0c:
    // 0x26cc0c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26cc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cc10: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x26cc10u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x26cc14: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x26cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x26cc18: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x26cc18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26cc1cu;
}
