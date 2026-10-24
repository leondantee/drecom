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

// Function: entry_00161500
// Address: 0x161500 - 0x16152c
void entry_00161500_0x161500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161500_0x161500");
#endif

    ctx->pc = 0x161500u;

    // 0x161500: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x161500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x161504: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161504u;
    {
        const bool branch_taken_0x161504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161504) {
            ctx->pc = 0x16152Cu;
            return;
        }
    }
    ctx->pc = 0x16150Cu;
    // 0x16150c: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x16150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x161510: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x161510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x161514: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x161518: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x161518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x16151c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x16151cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x161520: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x161520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161524: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x161528: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x161528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x16152cu;
}
