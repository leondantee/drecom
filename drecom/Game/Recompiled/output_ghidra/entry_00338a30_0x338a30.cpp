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

// Function: entry_00338a30
// Address: 0x338a30 - 0x338a58
void entry_00338a30_0x338a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338a30_0x338a30");
#endif

    switch (ctx->pc) {
        case 0x338a44u: goto label_338a44;
        default: break;
    }

    ctx->pc = 0x338a30u;

    // 0x338a30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x338a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338a34: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x338a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x338a38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x338a38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338a3c: 0xc085676  jal         func_2159D8
    ctx->pc = 0x338A3Cu;
    SET_GPR_U32(ctx, 31, 0x338A44u);
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x338A44u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338A44u) { return; }
    ctx->pc = 0x338A44u;
label_338a44:
    // 0x338a44: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338A44u;
    {
        const bool branch_taken_0x338a44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338a44) {
            ctx->pc = 0x338A58u;
            return;
        }
    }
    ctx->pc = 0x338A4Cu;
    // 0x338a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338a50: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x338A50u;
    {
        const bool branch_taken_0x338a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a50) {
            ctx->pc = 0x338AACu;
            return;
        }
    }
    ctx->pc = 0x338A58u;
}
