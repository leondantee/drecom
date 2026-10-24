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

// Function: entry_00140dd8
// Address: 0x140dd8 - 0x140e0c
void entry_00140dd8_0x140dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140dd8_0x140dd8");
#endif

    ctx->pc = 0x140dd8u;

    // 0x140dd8: 0x72601e28  paddub      $v1, $s3, $zero
    ctx->pc = 0x140dd8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x140ddc: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x140ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140de0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x140DE0u;
    {
        const bool branch_taken_0x140de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140de0) {
            ctx->pc = 0x140DA0u;
            return;
        }
    }
    ctx->pc = 0x140DE8u;
    // 0x140de8: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x140DE8u;
    {
        const bool branch_taken_0x140de8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x140de8) {
            ctx->pc = 0x140E0Cu;
            return;
        }
    }
    ctx->pc = 0x140DF0u;
    // 0x140df0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140df4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x140df4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140df8: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x140df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x140dfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x140dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x140e00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140e04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140e08: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x140e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x140e0cu;
}
