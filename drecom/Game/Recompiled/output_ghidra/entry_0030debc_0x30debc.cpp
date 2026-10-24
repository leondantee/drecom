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

// Function: entry_0030debc
// Address: 0x30debc - 0x30df40
void entry_0030debc_0x30debc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030debc_0x30debc");
#endif

    switch (ctx->pc) {
        case 0x30df1cu: goto label_30df1c;
        default: break;
    }

    ctx->pc = 0x30debcu;

    // 0x30debc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dec0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30dec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30dec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30dec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30dec8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30dec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30decc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DECCu;
    {
        const bool branch_taken_0x30decc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30decc) {
            ctx->pc = 0x30DF40u;
            return;
        }
    }
    ctx->pc = 0x30DED4u;
    // 0x30ded4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ded8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30ded8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30dedc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30DEDCu;
    {
        const bool branch_taken_0x30dedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dedc) {
            ctx->pc = 0x30DF40u;
            return;
        }
    }
    ctx->pc = 0x30DEE4u;
    // 0x30dee4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30dee8: 0x24429970  addiu       $v0, $v0, -0x6690
    ctx->pc = 0x30dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941040));
    // 0x30deec: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30deecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30def0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30def0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399970u));
    // 0x30def4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30def4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30def8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30defc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30df00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30df00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df04: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30df04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30df08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30df08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30df0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30df10: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30df10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30df14: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30DF14u;
    SET_GPR_U32(ctx, 31, 0x30DF1Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30DF14u, 0x30DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DF1Cu;
label_30df1c:
    // 0x30df1c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30df1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30df20: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DF20u;
    {
        const bool branch_taken_0x30df20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30df20) {
            ctx->pc = 0x30DF40u;
            return;
        }
    }
    ctx->pc = 0x30DF28u;
    // 0x30df28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30df2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df30: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30df30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30df34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30df34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30df38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df3c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30df3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30df40u;
}
