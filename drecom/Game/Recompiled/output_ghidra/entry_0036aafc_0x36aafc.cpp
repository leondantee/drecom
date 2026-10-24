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

// Function: entry_0036aafc
// Address: 0x36aafc - 0x36ab2c
void entry_0036aafc_0x36aafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036aafc_0x36aafc");
#endif

    switch (ctx->pc) {
        case 0x36ab1cu: goto label_36ab1c;
        default: break;
    }

    ctx->pc = 0x36aafcu;

    // 0x36aafc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36ab00: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36ab04: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36ab08: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x36ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36ab0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ab0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ab10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ab10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ab14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36AB14u;
    SET_GPR_U32(ctx, 31, 0x36AB1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36AB14u, 0x36AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB1Cu;
label_36ab1c:
    // 0x36ab1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab20: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36ab20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36ab24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36ab28: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36ab28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36ab2cu;
}
