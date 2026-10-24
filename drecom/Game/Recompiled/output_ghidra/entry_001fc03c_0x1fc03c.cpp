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

// Function: entry_001fc03c
// Address: 0x1fc03c - 0x1fc058
void entry_001fc03c_0x1fc03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc03c_0x1fc03c");
#endif

    switch (ctx->pc) {
        case 0x1fc04cu: goto label_1fc04c;
        default: break;
    }

    ctx->pc = 0x1fc03cu;

    // 0x1fc03c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fc03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fc040: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fc040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fc044: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC044u;
    SET_GPR_U32(ctx, 31, 0x1FC04Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC04Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC04Cu) { return; }
    ctx->pc = 0x1FC04Cu;
label_1fc04c:
    // 0x1fc04c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fc04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fc050: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc054: 0x0  nop
    ctx->pc = 0x1fc054u;
    // NOP
    ctx->pc = 0x1fc058u;
}
