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

// Function: entry_002675c0
// Address: 0x2675c0 - 0x2675d0
void entry_002675c0_0x2675c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002675c0_0x2675c0");
#endif

    ctx->pc = 0x2675c0u;

    // 0x2675c0: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2675c0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2675c4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2675c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2675c8: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x2675c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2675cc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x2675ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2675d0u;
}
