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

// Function: entry_002195e0
// Address: 0x2195e0 - 0x219604
void entry_002195e0_0x2195e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002195e0_0x2195e0");
#endif

    ctx->pc = 0x2195e0u;

    // 0x2195e0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2195e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2195e4: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2195e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2195e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2195e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2195ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2195ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2195f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2195f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2195f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2195f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2195f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2195f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2195fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2195fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x219604u;
}
