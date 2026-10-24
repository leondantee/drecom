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

// Function: entry_002d7778
// Address: 0x2d7778 - 0x2d77d4
void entry_002d7778_0x2d7778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7778_0x2d7778");
#endif

    switch (ctx->pc) {
        case 0x2d77c0u: goto label_2d77c0;
        default: break;
    }

    ctx->pc = 0x2d7778u;

    // 0x2d7778: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d777c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d777cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d7780: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D7780u;
    {
        const bool branch_taken_0x2d7780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7780) {
            ctx->pc = 0x2D77D4u;
            return;
        }
    }
    ctx->pc = 0x2D7788u;
    // 0x2d7788: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d7788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d778c: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x2d778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x2d7790: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d7790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d7794: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d7794u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398980u));
    // 0x2d7798: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d7798u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d779c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d77a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77a8: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x2d77a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d77ac: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d77acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d77b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d77b4: 0x24478cd0  addiu       $a3, $v0, -0x7330
    ctx->pc = 0x2d77b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
    // 0x2d77b8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D77B8u;
    SET_GPR_U32(ctx, 31, 0x2D77C0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D77B8u, 0x2D77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77C0u;
label_2d77c0:
    // 0x2d77c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D77C0u;
    {
        const bool branch_taken_0x2d77c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d77c0) {
            ctx->pc = 0x2D77D4u;
            return;
        }
    }
    ctx->pc = 0x2D77C8u;
    // 0x2d77c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d77cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77d0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d77d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2d77d4u;
}
