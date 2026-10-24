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

// Function: entry_00262ff8
// Address: 0x262ff8 - 0x263014
void entry_00262ff8_0x262ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262ff8_0x262ff8");
#endif

    ctx->pc = 0x262ff8u;

    // 0x262ff8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x262ff8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x262ffc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x262ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x263000: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x263000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x263004: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x263004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263008: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26300c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x26300Cu;
    {
        const bool branch_taken_0x26300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26300c) {
            ctx->pc = 0x2632C8u;
            return;
        }
    }
    ctx->pc = 0x263014u;
}
