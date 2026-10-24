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

// Function: entry_0035ba80
// Address: 0x35ba80 - 0x35baa4
void entry_0035ba80_0x35ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ba80_0x35ba80");
#endif

    ctx->pc = 0x35ba80u;

    // 0x35ba80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba84: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35ba84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35ba88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35ba88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35ba8c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x35ba8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x35ba90: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x35BA90u;
    {
        const bool branch_taken_0x35ba90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba90) {
            ctx->pc = 0x35BB38u;
            return;
        }
    }
    ctx->pc = 0x35BA98u;
    // 0x35ba98: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35ba98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ba9c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35BA9Cu;
    {
        const bool branch_taken_0x35ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba9c) {
            ctx->pc = 0x35BB28u;
            return;
        }
    }
    ctx->pc = 0x35BAA4u;
}
