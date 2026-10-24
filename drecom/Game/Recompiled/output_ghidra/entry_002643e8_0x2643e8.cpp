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

// Function: entry_002643e8
// Address: 0x2643e8 - 0x264438
void entry_002643e8_0x2643e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002643e8_0x2643e8");
#endif

    ctx->pc = 0x2643e8u;

    // 0x2643e8: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x2643e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2643ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2643ECu;
    {
        const bool branch_taken_0x2643ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2643ec) {
            ctx->pc = 0x2643D0u;
            return;
        }
    }
    ctx->pc = 0x2643F4u;
    // 0x2643f4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2643f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2643f8: 0x8c631a14  lw          $v1, 0x1A14($v1)
    ctx->pc = 0x2643f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6676)));
    // 0x2643fc: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x2643fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x264400: 0x10600165  beqz        $v1, . + 4 + (0x165 << 2)
    ctx->pc = 0x264400u;
    {
        const bool branch_taken_0x264400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264400) {
            ctx->pc = 0x264998u;
            return;
        }
    }
    ctx->pc = 0x264408u;
    // 0x264408: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x264408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26440c: 0x8c631a14  lw          $v1, 0x1A14($v1)
    ctx->pc = 0x26440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6676)));
    // 0x264410: 0x8c7e0048  lw          $fp, 0x48($v1)
    ctx->pc = 0x264410u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x264414: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x264414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x264418: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x264418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x26441c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x26441cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264420: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264424: 0xa023e651  sb          $v1, -0x19AF($at)
    ctx->pc = 0x264424u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E651u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E651u, _value); } while (0);
    // 0x264428: 0x27d20004  addiu       $s2, $fp, 0x4
    ctx->pc = 0x264428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x26442c: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x26442cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x264430: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x264430u;
    {
        const bool branch_taken_0x264430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264430) {
            ctx->pc = 0x264948u;
            return;
        }
    }
    ctx->pc = 0x264438u;
}
