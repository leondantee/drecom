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

// Function: sdr_initQue
// Address: 0x3389a0 - 0x338a08
void sdr_initQue_0x3389a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sdr_initQue_0x3389a0");
#endif

    switch (ctx->pc) {
        case 0x3389ccu: goto label_3389cc;
        default: break;
    }

    ctx->pc = 0x3389a0u;

    // 0x3389a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3389a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3389a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3389a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3389a8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3389a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3389ac: 0xac205440  sw          $zero, 0x5440($at)
    ctx->pc = 0x3389acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x3389b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3389b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3389b4: 0xac205430  sw          $zero, 0x5430($at)
    ctx->pc = 0x3389b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x895430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895430u, _value); } while (0);
    // 0x3389b8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3389b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3389bc: 0xac205438  sw          $zero, 0x5438($at)
    ctx->pc = 0x3389bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3389c0: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x3389c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3389c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3389C4u;
    {
        const bool branch_taken_0x3389c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3389c4) {
            ctx->pc = 0x3389F0u;
            goto label_3389f0;
        }
    }
    ctx->pc = 0x3389CCu;
label_3389cc:
    // 0x3389cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3389ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3389d0: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x3389d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3389d4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x3389d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3389d8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3389d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3389dc: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x3389dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x3389e0: 0x24635330  addiu       $v1, $v1, 0x5330
    ctx->pc = 0x3389e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21296));
    // 0x3389e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3389e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3389e8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3389e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x3389ec: 0x0  nop
    ctx->pc = 0x3389ecu;
    // NOP
label_3389f0:
    // 0x3389f0: 0x601fff6  bgez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3389F0u;
    {
        const bool branch_taken_0x3389f0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3389f0) {
            ctx->pc = 0x3389CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3389cc;
        }
    }
    ctx->pc = 0x3389F8u;
    // 0x3389f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3389f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3389fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3389fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x338a00: 0x3e00008  jr          $ra
    ctx->pc = 0x338A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338A08u;
}
