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

// Function: entry_0016140c
// Address: 0x16140c - 0x161438
void entry_0016140c_0x16140c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016140c_0x16140c");
#endif

    ctx->pc = 0x16140cu;

    // 0x16140c: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x16140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x161410: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161410u;
    {
        const bool branch_taken_0x161410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161410) {
            ctx->pc = 0x161438u;
            return;
        }
    }
    ctx->pc = 0x161418u;
    // 0x161418: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x16141c: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x16141cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x161420: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x161424: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x161424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x161428: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x161428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x16142c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161430: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x161434: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x161434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x161438u;
}
