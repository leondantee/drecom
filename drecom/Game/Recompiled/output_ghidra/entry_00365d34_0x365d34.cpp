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

// Function: entry_00365d34
// Address: 0x365d34 - 0x365d64
void entry_00365d34_0x365d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365d34_0x365d34");
#endif

    switch (ctx->pc) {
        case 0x365d54u: goto label_365d54;
        default: break;
    }

    ctx->pc = 0x365d34u;

    // 0x365d34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x365d40: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x365d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x365d44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x365d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365d48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365d4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365D4Cu;
    SET_GPR_U32(ctx, 31, 0x365D54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365D4Cu, 0x365D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D54u;
label_365d54:
    // 0x365d54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d58: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365d5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x365d60: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x365d60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x365d64u;
}
