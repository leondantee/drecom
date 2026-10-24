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

// Function: entry_0019d178
// Address: 0x19d178 - 0x19d190
void entry_0019d178_0x19d178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d178_0x19d178");
#endif

    ctx->pc = 0x19d178u;

    // 0x19d178: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x19d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x19d17c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x19d17cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d180: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d184: 0x8c24fbb8  lw          $a0, -0x448($at)
    ctx->pc = 0x19d184u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFBB8u));
    // 0x19d188: 0xc084a98  jal         func_212A60
    ctx->pc = 0x19D188u;
    SET_GPR_U32(ctx, 31, 0x19D190u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x19D190u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D190u) { return; }
    ctx->pc = 0x19D190u;
}
