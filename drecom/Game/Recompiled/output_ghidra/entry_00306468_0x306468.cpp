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

// Function: entry_00306468
// Address: 0x306468 - 0x30648c
void entry_00306468_0x306468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306468_0x306468");
#endif

    ctx->pc = 0x306468u;

    // 0x306468: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x306468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30646c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30646cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x306470: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x306470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x306474: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x306474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x306478: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x306478u;
    {
        const bool branch_taken_0x306478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306478) {
            ctx->pc = 0x306520u;
            return;
        }
    }
    ctx->pc = 0x306480u;
    // 0x306480: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x306480u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306484: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x306484u;
    {
        const bool branch_taken_0x306484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306484) {
            ctx->pc = 0x306510u;
            return;
        }
    }
    ctx->pc = 0x30648Cu;
}
