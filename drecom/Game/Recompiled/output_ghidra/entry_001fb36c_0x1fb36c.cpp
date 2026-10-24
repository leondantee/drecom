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

// Function: entry_001fb36c
// Address: 0x1fb36c - 0x1fb388
void entry_001fb36c_0x1fb36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb36c_0x1fb36c");
#endif

    switch (ctx->pc) {
        case 0x1fb37cu: goto label_1fb37c;
        default: break;
    }

    ctx->pc = 0x1fb36cu;

    // 0x1fb36c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb370: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fb370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb374: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FB374u;
    SET_GPR_U32(ctx, 31, 0x1FB37Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FB37Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB37Cu) { return; }
    ctx->pc = 0x1FB37Cu;
label_1fb37c:
    // 0x1fb37c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fb37cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fb380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb384: 0x0  nop
    ctx->pc = 0x1fb384u;
    // NOP
    ctx->pc = 0x1fb388u;
}
