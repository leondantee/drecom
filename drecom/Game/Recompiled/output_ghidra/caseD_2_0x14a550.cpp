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
// Address: 0x14a550 - 0x14a580
void caseD_2_0x14a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14a550");
#endif

    switch (ctx->pc) {
        case 0x14a570u: goto label_14a570;
        default: break;
    }

    ctx->pc = 0x14a550u;

    // 0x14a550: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a554: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a558: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14a55c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14a55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a560: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14a560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a564: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a568: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14A568u;
    SET_GPR_U32(ctx, 31, 0x14A570u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A568u, 0x14A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A570u;
label_14a570:
    // 0x14a570: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a574: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14a578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a57c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a57cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14a580u;
}
