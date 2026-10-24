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

// Function: entry_0012d580
// Address: 0x12d580 - 0x12d5b0
void entry_0012d580_0x12d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d580_0x12d580");
#endif

    switch (ctx->pc) {
        case 0x12d5a0u: goto label_12d5a0;
        default: break;
    }

    ctx->pc = 0x12d580u;

    // 0x12d580: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d584: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d588: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12d588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12d58c: 0x24060a0c  addiu       $a2, $zero, 0xA0C
    ctx->pc = 0x12d58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2572));
    // 0x12d590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d594: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12d594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12d598: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12D598u;
    SET_GPR_U32(ctx, 31, 0x12D5A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12D598u, 0x12D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5A0u;
label_12d5a0:
    // 0x12d5a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d5a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12d5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12d5a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d5ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12d5acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12d5b0u;
}
