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

// Function: entry_0017ab3c
// Address: 0x17ab3c - 0x17ab5c
void entry_0017ab3c_0x17ab3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab3c_0x17ab3c");
#endif

    switch (ctx->pc) {
        case 0x17ab4cu: goto label_17ab4c;
        default: break;
    }

    ctx->pc = 0x17ab3cu;

    // 0x17ab3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17ab40: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17ab40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17ab44: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17AB44u;
    SET_GPR_U32(ctx, 31, 0x17AB4Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17AB4Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AB4Cu) { return; }
    ctx->pc = 0x17AB4Cu;
label_17ab4c:
    // 0x17ab4c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17ab50: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17ab54: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17AB54u;
    SET_GPR_U32(ctx, 31, 0x17AB5Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17AB5Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AB5Cu) { return; }
    ctx->pc = 0x17AB5Cu;
}
