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

// Function: entry_002a931c
// Address: 0x2a931c - 0x2a9348
void entry_002a931c_0x2a931c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a931c_0x2a931c");
#endif

    switch (ctx->pc) {
        case 0x2a9324u: goto label_2a9324;
        default: break;
    }

    ctx->pc = 0x2a931cu;

    // 0x2a931c: 0xc0576b8  jal         func_15DAE0
    ctx->pc = 0x2A931Cu;
    SET_GPR_U32(ctx, 31, 0x2A9324u);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x2A931Cu, 0x2A9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9324u;
label_2a9324:
    // 0x2a9324: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2a9324u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a9328: 0x3a430001  xori        $v1, $s2, 0x1
    ctx->pc = 0x2a9328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x2a932c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a932cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a9330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9334: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9334u;
    {
        const bool branch_taken_0x2a9334 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a9334) {
            ctx->pc = 0x2A9348u;
            return;
        }
    }
    ctx->pc = 0x2A933Cu;
    // 0x2a933c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9340: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9344: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a9344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2a9348u;
}
