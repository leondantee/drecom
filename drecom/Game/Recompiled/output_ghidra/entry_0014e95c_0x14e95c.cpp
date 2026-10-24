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

// Function: entry_0014e95c
// Address: 0x14e95c - 0x14e988
void entry_0014e95c_0x14e95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e95c_0x14e95c");
#endif

    ctx->pc = 0x14e95cu;

    // 0x14e95c: 0x860313c0  lh          $v1, 0x13C0($s0)
    ctx->pc = 0x14e95cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14e960: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14e960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x14e964: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14e964u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14e968: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E968u;
    {
        const bool branch_taken_0x14e968 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14e968) {
            ctx->pc = 0x14E988u;
            return;
        }
    }
    ctx->pc = 0x14E970u;
    // 0x14e970: 0xa60013c0  sh          $zero, 0x13C0($s0)
    ctx->pc = 0x14e970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5056), (uint16_t)GPR_U32(ctx, 0));
    // 0x14e974: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14e974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e978: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x14e978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x14e97c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14e980: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14e980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e984: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14e984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x14e988u;
}
