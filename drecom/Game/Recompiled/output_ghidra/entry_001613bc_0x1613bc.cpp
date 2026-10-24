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

// Function: entry_001613bc
// Address: 0x1613bc - 0x1613e8
void entry_001613bc_0x1613bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001613bc_0x1613bc");
#endif

    ctx->pc = 0x1613bcu;

    // 0x1613bc: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x1613bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x1613c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1613C0u;
    {
        const bool branch_taken_0x1613c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613c0) {
            ctx->pc = 0x1613E8u;
            return;
        }
    }
    ctx->pc = 0x1613C8u;
    // 0x1613c8: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x1613cc: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x1613ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x1613d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1613d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1613d4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1613d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1613d8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1613dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1613dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1613e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1613e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1613e4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1613e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1613e8u;
}
