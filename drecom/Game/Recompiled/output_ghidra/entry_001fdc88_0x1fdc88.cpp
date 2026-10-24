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

// Function: entry_001fdc88
// Address: 0x1fdc88 - 0x1fdca0
void entry_001fdc88_0x1fdc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdc88_0x1fdc88");
#endif

    switch (ctx->pc) {
        case 0x1fdc98u: goto label_1fdc98;
        default: break;
    }

    ctx->pc = 0x1fdc88u;

    // 0x1fdc88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdc8c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fdc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdc90: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FDC90u;
    SET_GPR_U32(ctx, 31, 0x1FDC98u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FDC98u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FDC98u) { return; }
    ctx->pc = 0x1FDC98u;
label_1fdc98:
    // 0x1fdc98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fdc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fdc9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fdc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1fdca0u;
}
