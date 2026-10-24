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

// Function: entry_001d0148
// Address: 0x1d0148 - 0x1d018c
void entry_001d0148_0x1d0148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0148_0x1d0148");
#endif

    ctx->pc = 0x1d0148u;

    // 0x1d0148: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d0148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d014c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1d014cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1d0150: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1d0150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1d0154: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d0154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d0158: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1d0158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1d015c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0160: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1d0160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1d0164: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0164u;
    {
        const bool branch_taken_0x1d0164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0164) {
            ctx->pc = 0x1D018Cu;
            return;
        }
    }
    ctx->pc = 0x1D016Cu;
    // 0x1d016c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d016cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d0170: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1d0170u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1d0174: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d0174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d0178: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d0178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d017c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d017cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d0180: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1d0180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1d0184: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0188: 0xa0601921  sb          $zero, 0x1921($v1)
    ctx->pc = 0x1d0188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6433), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1d018cu;
}
