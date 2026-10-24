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

// Function: caseD_9
// Address: 0x1cbf80 - 0x1cbfb8
void caseD_9_0x1cbf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1cbf80");
#endif

    switch (ctx->pc) {
        case 0x1cbfa0u: goto label_1cbfa0;
        default: break;
    }

    ctx->pc = 0x1cbf80u;

    // 0x1cbf80: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbf84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbf88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cbf8c: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x1cbf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1cbf90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbf90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbf94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbf94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbf98: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBF98u;
    SET_GPR_U32(ctx, 31, 0x1CBFA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBF98u, 0x1CBFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFA0u;
label_1cbfa0:
    // 0x1cbfa0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cbfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cbfa4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1cbfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cbfa8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbfac: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbfacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbfb0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbfb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1cbfb8u;
}
