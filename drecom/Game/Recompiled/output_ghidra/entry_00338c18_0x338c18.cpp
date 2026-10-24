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

// Function: entry_00338c18
// Address: 0x338c18 - 0x338c40
void entry_00338c18_0x338c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338c18_0x338c18");
#endif

    switch (ctx->pc) {
        case 0x338c3cu: goto label_338c3c;
        default: break;
    }

    ctx->pc = 0x338c18u;

    // 0x338c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338c1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338c20: 0xac225448  sw          $v0, 0x5448($at)
    ctx->pc = 0x338c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895448u, _value); } while (0);
    // 0x338c24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338c28: 0x24442310  addiu       $a0, $v0, 0x2310
    ctx->pc = 0x338c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8976));
    // 0x338c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338c30: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x338c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x338c34: 0xc046760  jal         func_119D80
    ctx->pc = 0x338C34u;
    SET_GPR_U32(ctx, 31, 0x338C3Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338C3Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338C3Cu) { return; }
    ctx->pc = 0x338C3Cu;
label_338c3c:
    // 0x338c3c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x338c3cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x338c40u;
}
