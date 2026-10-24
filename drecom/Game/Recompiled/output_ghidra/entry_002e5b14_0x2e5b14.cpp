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

// Function: entry_002e5b14
// Address: 0x2e5b14 - 0x2e5b44
void entry_002e5b14_0x2e5b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5b14_0x2e5b14");
#endif

    switch (ctx->pc) {
        case 0x2e5b34u: goto label_2e5b34;
        default: break;
    }

    ctx->pc = 0x2e5b14u;

    // 0x2e5b14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e5b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e5b20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e5b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5b24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e5b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5b28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e5b2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E5B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E5B2Cu, 0x2E5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B34u;
label_2e5b34:
    // 0x2e5b34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b38: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e5b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e5b40: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e5b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e5b44u;
}
