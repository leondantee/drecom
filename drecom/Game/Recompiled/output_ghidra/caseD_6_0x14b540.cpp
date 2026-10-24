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

// Function: caseD_6
// Address: 0x14b540 - 0x14b570
void caseD_6_0x14b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x14b540");
#endif

    switch (ctx->pc) {
        case 0x14b560u: goto label_14b560;
        default: break;
    }

    ctx->pc = 0x14b540u;

    // 0x14b540: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b544: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b548: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14b54c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x14b54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14b550: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b554: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14b558: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14B558u;
    SET_GPR_U32(ctx, 31, 0x14B560u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B558u, 0x14B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B560u;
label_14b560:
    // 0x14b560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b564: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14b568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b56c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b56cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14b570u;
}
