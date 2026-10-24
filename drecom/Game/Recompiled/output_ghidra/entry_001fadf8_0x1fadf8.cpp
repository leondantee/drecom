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

// Function: entry_001fadf8
// Address: 0x1fadf8 - 0x1fae10
void entry_001fadf8_0x1fadf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fadf8_0x1fadf8");
#endif

    switch (ctx->pc) {
        case 0x1fae08u: goto label_1fae08;
        default: break;
    }

    ctx->pc = 0x1fadf8u;

    // 0x1fadf8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fadf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fadfc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fadfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fae00: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FAE00u;
    SET_GPR_U32(ctx, 31, 0x1FAE08u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FAE08u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FAE08u) { return; }
    ctx->pc = 0x1FAE08u;
label_1fae08:
    // 0x1fae08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fae08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fae0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fae0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1fae10u;
}
