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

// Function: entry_0033d0a0
// Address: 0x33d0a0 - 0x33d0c0
void entry_0033d0a0_0x33d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d0a0_0x33d0a0");
#endif

    ctx->pc = 0x33d0a0u;

    // 0x33d0a0: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x33d0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33d0a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d0a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33d0ac: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x33D0ACu;
    {
        const bool branch_taken_0x33d0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33d0ac) {
            ctx->pc = 0x33D154u;
            return;
        }
    }
    ctx->pc = 0x33D0B4u;
    // 0x33d0b4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33d0b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d0b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33D0B8u;
    {
        const bool branch_taken_0x33d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d0b8) {
            ctx->pc = 0x33D138u;
            return;
        }
    }
    ctx->pc = 0x33D0C0u;
}
