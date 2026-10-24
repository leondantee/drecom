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

// Function: entry_001ca6cc
// Address: 0x1ca6cc - 0x1ca6ec
void entry_001ca6cc_0x1ca6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca6cc_0x1ca6cc");
#endif

    ctx->pc = 0x1ca6ccu;

    // 0x1ca6cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca6d0: 0x8c261a98  lw          $a2, 0x1A98($at)
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ca6d4: 0x30c70200  andi        $a3, $a2, 0x200
    ctx->pc = 0x1ca6d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x1ca6d8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA6D8u;
    {
        const bool branch_taken_0x1ca6d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca6d8) {
            ctx->pc = 0x1CA6ECu;
            return;
        }
    }
    ctx->pc = 0x1CA6E0u;
    // 0x1ca6e0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1ca6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca6e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6e8: 0xa04813a7  sb          $t0, 0x13A7($v0)
    ctx->pc = 0x1ca6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5031), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x1ca6ecu;
}
