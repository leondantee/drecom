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

// Function: entry_001506c8
// Address: 0x1506c8 - 0x150714
void entry_001506c8_0x1506c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001506c8_0x1506c8");
#endif

    ctx->pc = 0x1506c8u;

    // 0x1506c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1506cc: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1506ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1506d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1506d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1506d4: 0x453024  and         $a2, $v0, $a1
    ctx->pc = 0x1506d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1506d8: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1506D8u;
    {
        const bool branch_taken_0x1506d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506d8) {
            ctx->pc = 0x150714u;
            return;
        }
    }
    ctx->pc = 0x1506E0u;
    // 0x1506e0: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x1506e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1506e4: 0x84e215ee  lh          $v0, 0x15EE($a3)
    ctx->pc = 0x1506e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 5614)));
    // 0x1506e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1506e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1506ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1506ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1506f0: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1506f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1506f4: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1506F4u;
    {
        const bool branch_taken_0x1506f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506f4) {
            ctx->pc = 0x150734u;
            return;
        }
    }
    ctx->pc = 0x1506FCu;
    // 0x1506fc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1506fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150700: 0x846215ee  lh          $v0, 0x15EE($v1)
    ctx->pc = 0x150700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5614)));
    // 0x150704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150708: 0xa46215ee  sh          $v0, 0x15EE($v1)
    ctx->pc = 0x150708u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5614), (uint16_t)GPR_U32(ctx, 2));
    // 0x15070c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15070Cu;
    {
        const bool branch_taken_0x15070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15070c) {
            ctx->pc = 0x150734u;
            return;
        }
    }
    ctx->pc = 0x150714u;
}
