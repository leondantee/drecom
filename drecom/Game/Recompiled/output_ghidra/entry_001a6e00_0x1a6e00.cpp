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

// Function: entry_001a6e00
// Address: 0x1a6e00 - 0x1a6e2c
void entry_001a6e00_0x1a6e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6e00_0x1a6e00");
#endif

    ctx->pc = 0x1a6e00u;

    // 0x1a6e00: 0x922302f8  lbu         $v1, 0x2F8($s1)
    ctx->pc = 0x1a6e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x1a6e04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a6e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a6e08: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1a6e08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1a6e0c: 0x1020fd27  beqz        $at, . + 4 + (-0x2D9 << 2)
    ctx->pc = 0x1A6E0Cu;
    {
        const bool branch_taken_0x1a6e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e0c) {
            ctx->pc = 0x1A62ACu;
            return;
        }
    }
    ctx->pc = 0x1A6E14u;
    // 0x1a6e14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6e18: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1a6e18u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a6e1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6e20: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x1a6e20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1a6e24: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x1A6E24u;
    {
        const bool branch_taken_0x1a6e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e24) {
            ctx->pc = 0x1A73A8u;
            return;
        }
    }
    ctx->pc = 0x1A6E2Cu;
}
