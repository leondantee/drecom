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

// Function: caseD_6
// Address: 0x1a0890 - 0x1a08c8
void caseD_6_0x1a0890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1a0890");
#endif

    switch (ctx->pc) {
        case 0x1a08a8u: goto label_1a08a8;
        default: break;
    }

    ctx->pc = 0x1a0890u;

    // 0x1a0890: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0898: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a089c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a089cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a08a0: 0xc04321a  jal         func_10C868
    ctx->pc = 0x1A08A0u;
    SET_GPR_U32(ctx, 31, 0x1A08A8u);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A08A8u;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A08A8u) { return; }
    ctx->pc = 0x1A08A8u;
label_1a08a8:
    // 0x1a08a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a08ac: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A08ACu;
    {
        const bool branch_taken_0x1a08ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a08ac) {
            ctx->pc = 0x1A08C8u;
            return;
        }
    }
    ctx->pc = 0x1A08B4u;
    // 0x1a08b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a08b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a08b8: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2748u));
    // 0x1a08bc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a08bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1a08c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a08c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a08c4: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a08c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    ctx->pc = 0x1a08c8u;
}
