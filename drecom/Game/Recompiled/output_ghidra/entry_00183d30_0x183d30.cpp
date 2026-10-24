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

// Function: entry_00183d30
// Address: 0x183d30 - 0x183d5c
void entry_00183d30_0x183d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183d30_0x183d30");
#endif

    ctx->pc = 0x183d30u;

    // 0x183d30: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183d34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183d34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183d38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183d3c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x183d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x183d40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183d40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183d44: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183d48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183d48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183d4c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183d50: 0x24420230  addiu       $v0, $v0, 0x230
    ctx->pc = 0x183d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x183d54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183d54u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480230u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480230u, _value); } while (0);
    // 0x183d58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x183d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x183d5cu;
}
