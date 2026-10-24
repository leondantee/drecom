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

// Function: entry_00360d28
// Address: 0x360d28 - 0x360d4c
void entry_00360d28_0x360d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360d28_0x360d28");
#endif

    ctx->pc = 0x360d28u;

    // 0x360d28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d2c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x360d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x360d30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x360d34: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x360d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x360d38: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x360D38u;
    {
        const bool branch_taken_0x360d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360d38) {
            ctx->pc = 0x360DF0u;
            return;
        }
    }
    ctx->pc = 0x360D40u;
    // 0x360d40: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x360d40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360d44: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x360D44u;
    {
        const bool branch_taken_0x360d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360d44) {
            ctx->pc = 0x360DE0u;
            return;
        }
    }
    ctx->pc = 0x360D4Cu;
}
