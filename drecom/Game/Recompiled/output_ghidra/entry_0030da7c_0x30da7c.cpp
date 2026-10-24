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

// Function: entry_0030da7c
// Address: 0x30da7c - 0x30db00
void entry_0030da7c_0x30da7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030da7c_0x30da7c");
#endif

    switch (ctx->pc) {
        case 0x30dadcu: goto label_30dadc;
        default: break;
    }

    ctx->pc = 0x30da7cu;

    // 0x30da7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da80: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30da80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30da84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30da84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30da88: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30da88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30da8c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DA8Cu;
    {
        const bool branch_taken_0x30da8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30da8c) {
            ctx->pc = 0x30DB00u;
            return;
        }
    }
    ctx->pc = 0x30DA94u;
    // 0x30da94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da98: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30da98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30da9c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30DA9Cu;
    {
        const bool branch_taken_0x30da9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30da9c) {
            ctx->pc = 0x30DB00u;
            return;
        }
    }
    ctx->pc = 0x30DAA4u;
    // 0x30daa4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30daa8: 0x24429950  addiu       $v0, $v0, -0x66B0
    ctx->pc = 0x30daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941008));
    // 0x30daac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30daacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30dab0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30dab0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399950u));
    // 0x30dab4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30dab8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dabc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30dac0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dac4: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30dac8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30dac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30dacc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30dad0: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30dad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30dad4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30DAD4u;
    SET_GPR_U32(ctx, 31, 0x30DADCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30DAD4u, 0x30DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DADCu;
label_30dadc:
    // 0x30dadc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30dadcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30dae0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DAE0u;
    {
        const bool branch_taken_0x30dae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dae0) {
            ctx->pc = 0x30DB00u;
            return;
        }
    }
    ctx->pc = 0x30DAE8u;
    // 0x30dae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30daec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30daf0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30daf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30daf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30daf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dafc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30dafcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30db00u;
}
