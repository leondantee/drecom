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

// Function: entry_0016f8b8
// Address: 0x16f8b8 - 0x16f900
void entry_0016f8b8_0x16f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f8b8_0x16f8b8");
#endif

    ctx->pc = 0x16f8b8u;

    // 0x16f8b8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x16f8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x16f8bc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x16f8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16f8c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f8c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x16f8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16f8c8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x16F8C8u;
    {
        const bool branch_taken_0x16f8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f8c8) {
            ctx->pc = 0x16F898u;
            return;
        }
    }
    ctx->pc = 0x16F8D0u;
    // 0x16f8d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16f8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16f8d4: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x16f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x16f8d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16f8dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16f8e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F8E0u;
    {
        const bool branch_taken_0x16f8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f8e0) {
            ctx->pc = 0x16F900u;
            return;
        }
    }
    ctx->pc = 0x16F8E8u;
    // 0x16f8e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16f8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16f8ec: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x16f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x16f8f0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x16f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x16f8f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16f8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16f8f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F8F8u;
    {
        const bool branch_taken_0x16f8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f8f8) {
            ctx->pc = 0x16F914u;
            return;
        }
    }
    ctx->pc = 0x16F900u;
}
