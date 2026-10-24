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

// Function: caseD_4
// Address: 0x1a07f4 - 0x1a0828
void caseD_4_0x1a07f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1a07f4");
#endif

    switch (ctx->pc) {
        case 0x1a080cu: goto label_1a080c;
        default: break;
    }

    ctx->pc = 0x1a07f4u;

    // 0x1a07f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a07f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a07f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a07f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a07fc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a0800: 0x2446274c  addiu       $a2, $v0, 0x274C
    ctx->pc = 0x1a0800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10060));
    // 0x1a0804: 0xc0432ae  jal         func_10CAB8
    ctx->pc = 0x1A0804u;
    SET_GPR_U32(ctx, 31, 0x1A080Cu);
    ctx->pc = 0x10CAB8u;
    {
        ctx->pc = 0x1A080Cu;
        ps2_stubs::scePadSetActAlign(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A080Cu) { return; }
    ctx->pc = 0x1A080Cu;
label_1a080c:
    // 0x1a080c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1A080Cu;
    {
        const bool branch_taken_0x1a080c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a080c) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A0814u;
    // 0x1a0814: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a0814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a0818: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a081c: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a081cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    // 0x1a0820: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1A0820u;
    {
        const bool branch_taken_0x1a0820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0820) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A0828u;
}
