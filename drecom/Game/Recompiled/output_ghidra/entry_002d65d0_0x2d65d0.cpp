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

// Function: entry_002d65d0
// Address: 0x2d65d0 - 0x2d662c
void entry_002d65d0_0x2d65d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d65d0_0x2d65d0");
#endif

    switch (ctx->pc) {
        case 0x2d6618u: goto label_2d6618;
        default: break;
    }

    ctx->pc = 0x2d65d0u;

    // 0x2d65d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65d4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d65d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d65d8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D65D8u;
    {
        const bool branch_taken_0x2d65d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d65d8) {
            ctx->pc = 0x2D662Cu;
            return;
        }
    }
    ctx->pc = 0x2D65E0u;
    // 0x2d65e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d65e4: 0x24428950  addiu       $v0, $v0, -0x76B0
    ctx->pc = 0x2d65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936912));
    // 0x2d65e8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d65ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d65ecu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398950u));
    // 0x2d65f0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d65f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d65f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65f8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d65fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6600: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x2d6600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d6604: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6608: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d660c: 0x24478cd0  addiu       $a3, $v0, -0x7330
    ctx->pc = 0x2d660cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
    // 0x2d6610: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6610u;
    SET_GPR_U32(ctx, 31, 0x2D6618u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6610u, 0x2D6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6618u;
label_2d6618:
    // 0x2d6618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6618u;
    {
        const bool branch_taken_0x2d6618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6618) {
            ctx->pc = 0x2D662Cu;
            return;
        }
    }
    ctx->pc = 0x2D6620u;
    // 0x2d6620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6624: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6628: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d6628u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2d662cu;
}
