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

// Function: entry_001fc3f4
// Address: 0x1fc3f4 - 0x1fc410
void entry_001fc3f4_0x1fc3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc3f4_0x1fc3f4");
#endif

    switch (ctx->pc) {
        case 0x1fc404u: goto label_1fc404;
        default: break;
    }

    ctx->pc = 0x1fc3f4u;

    // 0x1fc3f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc3f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc3fc: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC3FCu;
    SET_GPR_U32(ctx, 31, 0x1FC404u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC404u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC404u) { return; }
    ctx->pc = 0x1FC404u;
label_1fc404:
    // 0x1fc404: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fc404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fc408: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc40c: 0x0  nop
    ctx->pc = 0x1fc40cu;
    // NOP
    ctx->pc = 0x1fc410u;
}
