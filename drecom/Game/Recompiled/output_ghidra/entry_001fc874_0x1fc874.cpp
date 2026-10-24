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

// Function: entry_001fc874
// Address: 0x1fc874 - 0x1fc890
void entry_001fc874_0x1fc874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc874_0x1fc874");
#endif

    switch (ctx->pc) {
        case 0x1fc884u: goto label_1fc884;
        default: break;
    }

    ctx->pc = 0x1fc874u;

    // 0x1fc874: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc878: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc87c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC87Cu;
    SET_GPR_U32(ctx, 31, 0x1FC884u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC884u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC884u) { return; }
    ctx->pc = 0x1FC884u;
label_1fc884:
    // 0x1fc884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fc884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fc888: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc88c: 0x0  nop
    ctx->pc = 0x1fc88cu;
    // NOP
    ctx->pc = 0x1fc890u;
}
