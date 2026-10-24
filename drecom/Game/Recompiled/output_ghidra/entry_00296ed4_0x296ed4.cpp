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

// Function: entry_00296ed4
// Address: 0x296ed4 - 0x296f10
void entry_00296ed4_0x296ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296ed4_0x296ed4");
#endif

    ctx->pc = 0x296ed4u;

    // 0x296ed4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296ed8: 0x8c24c9f0  lw          $a0, -0x3610($at)
    ctx->pc = 0x296ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x80C9F0u));
    // 0x296edc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296ee0: 0x8c23c9e0  lw          $v1, -0x3620($at)
    ctx->pc = 0x296ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80C9E0u));
    // 0x296ee4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x296ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x296ee8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x296ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x296eec: 0x71001a  div         $zero, $v1, $s1
    ctx->pc = 0x296eecu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x296ef0: 0x0  nop
    ctx->pc = 0x296ef0u;
    // NOP
    // 0x296ef4: 0x0  nop
    ctx->pc = 0x296ef4u;
    // NOP
    // 0x296ef8: 0x1810  mfhi        $v1
    ctx->pc = 0x296ef8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x296efc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296f00: 0xac23c9f0  sw          $v1, -0x3610($at)
    ctx->pc = 0x296f00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9F0u, _value); } while (0);
    // 0x296f04: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x296f04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x296f08: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x296F08u;
    {
        const bool branch_taken_0x296f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f08) {
            ctx->pc = 0x297040u;
            return;
        }
    }
    ctx->pc = 0x296F10u;
}
