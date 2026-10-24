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

// Function: entry_00160ea8
// Address: 0x160ea8 - 0x160ed4
void entry_00160ea8_0x160ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ea8_0x160ea8");
#endif

    ctx->pc = 0x160ea8u;

    // 0x160ea8: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x160ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x160eac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160EACu;
    {
        const bool branch_taken_0x160eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160eac) {
            ctx->pc = 0x160ED4u;
            return;
        }
    }
    ctx->pc = 0x160EB4u;
    // 0x160eb4: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x160eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x160eb8: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x160eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x160ebc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160ec0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x160ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160ec4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x160ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x160ec8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x160ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x160ecc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160ed0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x160ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x160ed4u;
}
