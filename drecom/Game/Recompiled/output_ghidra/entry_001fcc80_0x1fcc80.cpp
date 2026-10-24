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

// Function: entry_001fcc80
// Address: 0x1fcc80 - 0x1fcc98
void entry_001fcc80_0x1fcc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcc80_0x1fcc80");
#endif

    switch (ctx->pc) {
        case 0x1fcc90u: goto label_1fcc90;
        default: break;
    }

    ctx->pc = 0x1fcc80u;

    // 0x1fcc80: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcc84: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcc88: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FCC88u;
    SET_GPR_U32(ctx, 31, 0x1FCC90u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FCC90u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FCC90u) { return; }
    ctx->pc = 0x1FCC90u;
label_1fcc90:
    // 0x1fcc90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fcc94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fcc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1fcc98u;
}
