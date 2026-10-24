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

// Function: entry_00183fe0
// Address: 0x183fe0 - 0x184020
void entry_00183fe0_0x183fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183fe0_0x183fe0");
#endif

    ctx->pc = 0x183fe0u;

    // 0x183fe0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183fe4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183fe4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183fe8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183fec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x183fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x183ff0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183ff4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183ff8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183ff8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183ffc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x184000: 0x24420230  addiu       $v0, $v0, 0x230
    ctx->pc = 0x184000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x184004: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x184004u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480230u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480230u, _value); } while (0);
    // 0x184008: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18400c: 0x8c220270  lw          $v0, 0x270($at)
    ctx->pc = 0x18400cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x480270u));
    // 0x184010: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184014: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184018: 0xac220270  sw          $v0, 0x270($at)
    ctx->pc = 0x184018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x480270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480270u, _value); } while (0);
    // 0x18401c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x184020u;
}
