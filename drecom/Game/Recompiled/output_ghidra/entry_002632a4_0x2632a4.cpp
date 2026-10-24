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

// Function: entry_002632a4
// Address: 0x2632a4 - 0x2632c0
void entry_002632a4_0x2632a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002632a4_0x2632a4");
#endif

    ctx->pc = 0x2632a4u;

    // 0x2632a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2632a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2632a8: 0x3148ffff  andi        $t0, $t2, 0xFFFF
    ctx->pc = 0x2632a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2632ac: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2632acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2632b0: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x2632b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2632b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2632B4u;
    {
        const bool branch_taken_0x2632b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2632b4) {
            ctx->pc = 0x2632C0u;
            return;
        }
    }
    ctx->pc = 0x2632BCu;
    // 0x2632bc: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x2632bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2632c0u;
}
