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

// Function: entry_00131d1c
// Address: 0x131d1c - 0x131d4c
void entry_00131d1c_0x131d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131d1c_0x131d1c");
#endif

    switch (ctx->pc) {
        case 0x131d3cu: goto label_131d3c;
        default: break;
    }

    ctx->pc = 0x131d1cu;

    // 0x131d1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d20: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131d28: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x131d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x131d2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131d34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131D34u;
    SET_GPR_U32(ctx, 31, 0x131D3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131D34u, 0x131D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D3Cu;
label_131d3c:
    // 0x131d3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d40: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x131d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131d44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131d48: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131d48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x131d4cu;
}
