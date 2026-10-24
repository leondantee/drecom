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
// Address: 0x1a0704 - 0x1a0740
void caseD_1_0x1a0704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a0704");
#endif

    switch (ctx->pc) {
        case 0x1a071cu: goto label_1a071c;
        default: break;
    }

    ctx->pc = 0x1a0704u;

    // 0x1a0704: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0708: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a070c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a070cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0710: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a0710u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0714: 0xc04321a  jal         func_10C868
    ctx->pc = 0x1A0714u;
    SET_GPR_U32(ctx, 31, 0x1A071Cu);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A071Cu;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A071Cu) { return; }
    ctx->pc = 0x1A071Cu;
label_1a071c:
    // 0x1a071c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1a071cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a0720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0724: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0724u;
    {
        const bool branch_taken_0x1a0724 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0724) {
            ctx->pc = 0x1A0740u;
            return;
        }
    }
    ctx->pc = 0x1A072Cu;
    // 0x1a072c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a072cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0730: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a0730u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2748u));
    // 0x1a0734: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a0734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a0738: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a073c: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a073cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    ctx->pc = 0x1a0740u;
}
