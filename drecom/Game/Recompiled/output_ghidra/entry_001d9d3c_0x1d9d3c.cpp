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

// Function: entry_001d9d3c
// Address: 0x1d9d3c - 0x1d9d5c
void entry_001d9d3c_0x1d9d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9d3c_0x1d9d3c");
#endif

    ctx->pc = 0x1d9d3cu;

    // 0x1d9d3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9d40: 0x8c221a94  lw          $v0, 0x1A94($at)
    ctx->pc = 0x1d9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x1d9d44: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1d9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1d9d48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9d4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9d50: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d9d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9d54: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1d9d54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d9d58: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1d9d58u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1d9d5cu;
}
