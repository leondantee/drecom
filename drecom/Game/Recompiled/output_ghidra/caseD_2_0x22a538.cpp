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
// Address: 0x22a538 - 0x22a564
void caseD_2_0x22a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x22a538");
#endif

    switch (ctx->pc) {
        case 0x22a558u: goto label_22a558;
        default: break;
    }

    ctx->pc = 0x22a538u;

    // 0x22a538: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a53c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a540: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22a540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22a544: 0x24067824  addiu       $a2, $zero, 0x7824
    ctx->pc = 0x22a544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30756));
    // 0x22a548: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a54c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22a550: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22A550u;
    SET_GPR_U32(ctx, 31, 0x22A558u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A550u, 0x22A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A558u;
label_22a558:
    // 0x22a558: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a55c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a560: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22a560u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22a564u;
}
