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

// Function: entry_001fece8
// Address: 0x1fece8 - 0x1fed00
void entry_001fece8_0x1fece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fece8_0x1fece8");
#endif

    switch (ctx->pc) {
        case 0x1fecf8u: goto label_1fecf8;
        default: break;
    }

    ctx->pc = 0x1fece8u;

    // 0x1fece8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fecec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1fececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fecf0: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FECF0u;
    SET_GPR_U32(ctx, 31, 0x1FECF8u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FECF8u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FECF8u) { return; }
    ctx->pc = 0x1FECF8u;
label_1fecf8:
    // 0x1fecf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fecf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fecfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fecfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1fed00u;
}
