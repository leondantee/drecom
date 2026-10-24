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

// Function: entry_0030dc9c
// Address: 0x30dc9c - 0x30dd20
void entry_0030dc9c_0x30dc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030dc9c_0x30dc9c");
#endif

    switch (ctx->pc) {
        case 0x30dcfcu: goto label_30dcfc;
        default: break;
    }

    ctx->pc = 0x30dc9cu;

    // 0x30dc9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dca0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30dca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30dca4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30dca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30dca8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30dca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30dcac: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DCACu;
    {
        const bool branch_taken_0x30dcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dcac) {
            ctx->pc = 0x30DD20u;
            return;
        }
    }
    ctx->pc = 0x30DCB4u;
    // 0x30dcb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dcb8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30dcb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30dcbc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30DCBCu;
    {
        const bool branch_taken_0x30dcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dcbc) {
            ctx->pc = 0x30DD20u;
            return;
        }
    }
    ctx->pc = 0x30DCC4u;
    // 0x30dcc4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30dcc8: 0x24429960  addiu       $v0, $v0, -0x66A0
    ctx->pc = 0x30dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941024));
    // 0x30dccc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30dcd0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30dcd0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399960u));
    // 0x30dcd4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30dcd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dcdc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30dce0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dce4: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30dce8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30dce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30dcec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30dcf0: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30dcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30dcf4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30DCF4u;
    SET_GPR_U32(ctx, 31, 0x30DCFCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30DCF4u, 0x30DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DCFCu;
label_30dcfc:
    // 0x30dcfc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30dcfcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30dd00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DD00u;
    {
        const bool branch_taken_0x30dd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dd00) {
            ctx->pc = 0x30DD20u;
            return;
        }
    }
    ctx->pc = 0x30DD08u;
    // 0x30dd08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dd0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd10: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30dd10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30dd14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dd18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd1c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30dd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30dd20u;
}
