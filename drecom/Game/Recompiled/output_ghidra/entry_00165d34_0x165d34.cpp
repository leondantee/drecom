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

// Function: entry_00165d34
// Address: 0x165d34 - 0x165d5c
void entry_00165d34_0x165d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165d34_0x165d34");
#endif

    switch (ctx->pc) {
        case 0x165d40u: goto label_165d40;
        case 0x165d54u: goto label_165d54;
        default: break;
    }

    ctx->pc = 0x165d34u;

label_165d34:
    // 0x165d34: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165d34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165d38: 0xc043abc  jal         func_10EAF0
    ctx->pc = 0x165D38u;
    SET_GPR_U32(ctx, 31, 0x165D40u);
    ctx->pc = 0x10EAF0u;
    {
        ctx->pc = 0x165D40u;
        ps2_stubs::sceCdInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D40u) { return; }
    ctx->pc = 0x165D40u;
label_165d40:
    // 0x165d40: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x165D40u;
    {
        const bool branch_taken_0x165d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d40) {
            ctx->pc = 0x165D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165d34;
        }
    }
    ctx->pc = 0x165D48u;
    // 0x165d48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x165d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165d4c: 0xc043d0c  jal         func_10F430
    ctx->pc = 0x165D4Cu;
    SET_GPR_U32(ctx, 31, 0x165D54u);
    ctx->pc = 0x10F430u;
    {
        ctx->pc = 0x165D54u;
        ps2_stubs::sceCdMmode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D54u) { return; }
    ctx->pc = 0x165D54u;
label_165d54:
    // 0x165d54: 0xc085938  jal         func_2164E0
    ctx->pc = 0x165D54u;
    SET_GPR_U32(ctx, 31, 0x165D5Cu);
    ctx->pc = 0x2164E0u;
    {
        ctx->pc = 0x165D5Cu;
        ps2_stubs::sceFsReset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D5Cu) { return; }
    ctx->pc = 0x165D5Cu;
}
