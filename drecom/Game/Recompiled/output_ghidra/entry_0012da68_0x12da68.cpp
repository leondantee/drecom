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

// Function: entry_0012da68
// Address: 0x12da68 - 0x12da90
void entry_0012da68_0x12da68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012da68_0x12da68");
#endif

    switch (ctx->pc) {
        case 0x12da88u: goto label_12da88;
        default: break;
    }

    ctx->pc = 0x12da68u;

    // 0x12da68: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12da6c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12da70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12da70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12da74: 0x24063c15  addiu       $a2, $zero, 0x3C15
    ctx->pc = 0x12da74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15381));
    // 0x12da78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12da78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12da7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12da7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12da80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12DA80u;
    SET_GPR_U32(ctx, 31, 0x12DA88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DA80u, 0x12DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA88u;
label_12da88:
    // 0x12da88: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x12DA88u;
    {
        const bool branch_taken_0x12da88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da88) {
            ctx->pc = 0x12DB74u;
            return;
        }
    }
    ctx->pc = 0x12DA90u;
}
