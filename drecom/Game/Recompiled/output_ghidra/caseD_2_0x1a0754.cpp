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

// Function: caseD_2
// Address: 0x1a0754 - 0x1a078c
void caseD_2_0x1a0754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1a0754");
#endif

    switch (ctx->pc) {
        case 0x1a076cu: goto label_1a076c;
        default: break;
    }

    ctx->pc = 0x1a0754u;

    // 0x1a0754: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0758: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a075c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0760: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1a0760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0764: 0xc043268  jal         func_10C9A0
    ctx->pc = 0x1A0764u;
    SET_GPR_U32(ctx, 31, 0x1A076Cu);
    ctx->pc = 0x10C9A0u;
    {
        ctx->pc = 0x1A076Cu;
        ps2_stubs::scePadSetMainMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A076Cu) { return; }
    ctx->pc = 0x1A076Cu;
label_1a076c:
    // 0x1a076c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0770: 0x1443009a  bne         $v0, $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x1A0770u;
    {
        const bool branch_taken_0x1a0770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0770) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A0778u;
    // 0x1a0778: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a077c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0780: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a0780u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    // 0x1a0784: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1A0784u;
    {
        const bool branch_taken_0x1a0784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0784) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A078Cu;
}
