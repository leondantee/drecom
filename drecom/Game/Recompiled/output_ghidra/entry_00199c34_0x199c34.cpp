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

// Function: entry_00199c34
// Address: 0x199c34 - 0x199c6c
void entry_00199c34_0x199c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c34_0x199c34");
#endif

    switch (ctx->pc) {
        case 0x199c54u: goto label_199c54;
        default: break;
    }

    ctx->pc = 0x199c34u;

    // 0x199c34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x199c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x199c40: 0x24061e19  addiu       $a2, $zero, 0x1E19
    ctx->pc = 0x199c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7705));
    // 0x199c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199c48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199c4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x199C4Cu;
    SET_GPR_U32(ctx, 31, 0x199C54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x199C4Cu, 0x199C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C54u;
label_199c54:
    // 0x199c54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c58: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x199c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x199c5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199c60: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x199c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x199c64: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x199C64u;
    {
        const bool branch_taken_0x199c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199c64) {
            ctx->pc = 0x199D84u;
            return;
        }
    }
    ctx->pc = 0x199C6Cu;
}
