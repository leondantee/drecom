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

// Function: entry_001d8aac
// Address: 0x1d8aac - 0x1d8ad0
void entry_001d8aac_0x1d8aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8aac_0x1d8aac");
#endif

    switch (ctx->pc) {
        case 0x1d8ac8u: goto label_1d8ac8;
        default: break;
    }

    ctx->pc = 0x1d8aacu;

label_1d8aac:
    // 0x1d8aac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1d8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1d8ab0: 0x24440bc0  addiu       $a0, $v0, 0xBC0
    ctx->pc = 0x1d8ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3008));
    // 0x1d8ab4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d8ab4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8ab8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1d8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1d8abc: 0x24460be8  addiu       $a2, $v0, 0xBE8
    ctx->pc = 0x1d8abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3048));
    // 0x1d8ac0: 0xc085dde  jal         func_217778
    ctx->pc = 0x1D8AC0u;
    SET_GPR_U32(ctx, 31, 0x1D8AC8u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x1D8AC8u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8AC8u) { return; }
    ctx->pc = 0x1D8AC8u;
label_1d8ac8:
    // 0x1d8ac8: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D8AC8u;
    {
        const bool branch_taken_0x1d8ac8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d8ac8) {
            ctx->pc = 0x1D8AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8aac;
        }
    }
    ctx->pc = 0x1D8AD0u;
}
