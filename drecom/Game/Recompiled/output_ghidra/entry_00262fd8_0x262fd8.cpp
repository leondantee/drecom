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

// Function: entry_00262fd8
// Address: 0x262fd8 - 0x262ff8
void entry_00262fd8_0x262fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262fd8_0x262fd8");
#endif

    ctx->pc = 0x262fd8u;

    // 0x262fd8: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262fdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262fe0: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x262fe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262fe4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x262fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x262fe8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x262fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x262fec: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x262fecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x262ff0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x262ff0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x262ff4: 0x0  nop
    ctx->pc = 0x262ff4u;
    // NOP
    ctx->pc = 0x262ff8u;
}
