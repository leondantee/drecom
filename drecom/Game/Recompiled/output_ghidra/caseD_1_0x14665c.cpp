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

// Function: caseD_1
// Address: 0x14665c - 0x14669c
void caseD_1_0x14665c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14665c");
#endif

    ctx->pc = 0x14665cu;

    // 0x14665c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146660: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x146660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x146664: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x146664u;
    {
        const bool branch_taken_0x146664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146664) {
            ctx->pc = 0x14669Cu;
            return;
        }
    }
    ctx->pc = 0x14666Cu;
    // 0x14666c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146670: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x146670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x146674: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x146674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x146678: 0xa4661278  sh          $a2, 0x1278($v1)
    ctx->pc = 0x146678u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 6));
    // 0x14667c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x14667cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146680: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146688: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x146688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x14668c: 0x25050120  addiu       $a1, $t0, 0x120
    ctx->pc = 0x14668cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x146690: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x146690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x146694: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x146694u;
    SET_GPR_U32(ctx, 31, 0x14669Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x146694u, 0x14669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14669Cu;
}
