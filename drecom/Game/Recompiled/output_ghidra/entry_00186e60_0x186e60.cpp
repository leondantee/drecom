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

// Function: entry_00186e60
// Address: 0x186e60 - 0x186e84
void entry_00186e60_0x186e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186e60_0x186e60");
#endif

    ctx->pc = 0x186e60u;

    // 0x186e60: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186e64: 0x90220348  lbu         $v0, 0x348($at)
    ctx->pc = 0x186e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480348u));
    // 0x186e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186e6c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x186e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x186e70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186E70u;
    {
        const bool branch_taken_0x186e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e70) {
            ctx->pc = 0x186E84u;
            return;
        }
    }
    ctx->pc = 0x186E78u;
    // 0x186e78: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x186e78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x186e7c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x186E7Cu;
    {
        const bool branch_taken_0x186e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e7c) {
            ctx->pc = 0x186EE4u;
            return;
        }
    }
    ctx->pc = 0x186E84u;
}
