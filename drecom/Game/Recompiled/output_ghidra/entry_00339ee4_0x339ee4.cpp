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

// Function: entry_00339ee4
// Address: 0x339ee4 - 0x339f00
void entry_00339ee4_0x339ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339ee4_0x339ee4");
#endif

    switch (ctx->pc) {
        case 0x339ef4u: goto label_339ef4;
        default: break;
    }

    ctx->pc = 0x339ee4u;

    // 0x339ee4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339ee8: 0x24442730  addiu       $a0, $v0, 0x2730
    ctx->pc = 0x339ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x339eec: 0xc046760  jal         func_119D80
    ctx->pc = 0x339EECu;
    SET_GPR_U32(ctx, 31, 0x339EF4u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339EF4u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339EF4u) { return; }
    ctx->pc = 0x339EF4u;
label_339ef4:
    // 0x339ef4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x339ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x339ef8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x339EF8u;
    {
        const bool branch_taken_0x339ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339ef8) {
            ctx->pc = 0x339FBCu;
            return;
        }
    }
    ctx->pc = 0x339F00u;
}
