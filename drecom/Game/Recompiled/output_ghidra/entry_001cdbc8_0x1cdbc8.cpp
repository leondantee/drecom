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

// Function: entry_001cdbc8
// Address: 0x1cdbc8 - 0x1cdbf8
void entry_001cdbc8_0x1cdbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdbc8_0x1cdbc8");
#endif

    ctx->pc = 0x1cdbc8u;

    // 0x1cdbc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdbcc: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1cdbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cdbd0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDBD0u;
    {
        const bool branch_taken_0x1cdbd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdbd0) {
            ctx->pc = 0x1CDBF8u;
            return;
        }
    }
    ctx->pc = 0x1CDBD8u;
    // 0x1cdbd8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cdbdc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cdbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cdbe0: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1cdbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1cdbe4: 0x653025  or          $a2, $v1, $a1
    ctx->pc = 0x1cdbe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1cdbe8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cdbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cdbec: 0xac261a98  sw          $a2, 0x1A98($at)
    ctx->pc = 0x1cdbecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cdbf0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cdbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdbf4: 0xa0e01921  sb          $zero, 0x1921($a3)
    ctx->pc = 0x1cdbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6433), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1cdbf8u;
}
