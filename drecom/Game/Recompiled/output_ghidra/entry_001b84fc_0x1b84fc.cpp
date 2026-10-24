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

// Function: entry_001b84fc
// Address: 0x1b84fc - 0x1b8528
void entry_001b84fc_0x1b84fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b84fc_0x1b84fc");
#endif

    switch (ctx->pc) {
        case 0x1b851cu: goto label_1b851c;
        default: break;
    }

    ctx->pc = 0x1b84fcu;

    // 0x1b84fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8500: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8504: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b8504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b8508: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1b8508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x1b850c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b850cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8510: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b8514: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B8514u;
    SET_GPR_U32(ctx, 31, 0x1B851Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B8514u, 0x1B851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B851Cu;
label_1b851c:
    // 0x1b851c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b851cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8520: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8524: 0xae201b60  sw          $zero, 0x1B60($s1)
    ctx->pc = 0x1b8524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x1b8528u;
}
