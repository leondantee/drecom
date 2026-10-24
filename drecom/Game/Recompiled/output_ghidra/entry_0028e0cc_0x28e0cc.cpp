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

// Function: entry_0028e0cc
// Address: 0x28e0cc - 0x28e0e8
void entry_0028e0cc_0x28e0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e0cc_0x28e0cc");
#endif

    ctx->pc = 0x28e0ccu;

    // 0x28e0cc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x28e0d0: 0x24642808  addiu       $a0, $v1, 0x2808
    ctx->pc = 0x28e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10248));
    // 0x28e0d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28e0d8: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x28e0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x28e0dc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28e0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28e0e0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28E0E0u;
    SET_GPR_U32(ctx, 31, 0x28E0E8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28E0E8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28E0E8u) { return; }
    ctx->pc = 0x28E0E8u;
}
