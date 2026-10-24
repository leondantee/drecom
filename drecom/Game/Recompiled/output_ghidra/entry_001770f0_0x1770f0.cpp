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

// Function: entry_001770f0
// Address: 0x1770f0 - 0x177100
void entry_001770f0_0x1770f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001770f0_0x1770f0");
#endif

    ctx->pc = 0x1770f0u;

    // 0x1770f0: 0x72a09628  paddub      $s2, $s5, $zero
    ctx->pc = 0x1770f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1770f4: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x1770f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x1770f8: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x1770f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1770fc: 0x0  nop
    ctx->pc = 0x1770fcu;
    // NOP
    ctx->pc = 0x177100u;
}
