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

// Function: entry_0019c050
// Address: 0x19c050 - 0x19c088
void entry_0019c050_0x19c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c050_0x19c050");
#endif

    switch (ctx->pc) {
        case 0x19c070u: goto label_19c070;
        default: break;
    }

    ctx->pc = 0x19c050u;

    // 0x19c050: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c054: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c058: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19c058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19c05c: 0x2406641d  addiu       $a2, $zero, 0x641D
    ctx->pc = 0x19c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25629));
    // 0x19c060: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19c060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c064: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19c064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19c068: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19C068u;
    SET_GPR_U32(ctx, 31, 0x19C070u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19C068u, 0x19C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C070u;
label_19c070:
    // 0x19c070: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c074: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19c074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19c078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c07c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19c07cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c080: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19C080u;
    {
        const bool branch_taken_0x19c080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c080) {
            ctx->pc = 0x19C094u;
            return;
        }
    }
    ctx->pc = 0x19C088u;
}
