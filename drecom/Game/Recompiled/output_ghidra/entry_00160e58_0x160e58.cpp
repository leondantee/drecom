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

// Function: entry_00160e58
// Address: 0x160e58 - 0x160e84
void entry_00160e58_0x160e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160e58_0x160e58");
#endif

    ctx->pc = 0x160e58u;

    // 0x160e58: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x160e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x160e5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160E5Cu;
    {
        const bool branch_taken_0x160e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e5c) {
            ctx->pc = 0x160E84u;
            return;
        }
    }
    ctx->pc = 0x160E64u;
    // 0x160e64: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x160e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x160e68: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x160e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x160e6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160e70: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x160e70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160e74: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x160e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x160e78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x160e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x160e7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160e80: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x160e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x160e84u;
}
