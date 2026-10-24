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

// Function: entry_0035d89c
// Address: 0x35d89c - 0x35d8c0
void entry_0035d89c_0x35d89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d89c_0x35d89c");
#endif

    ctx->pc = 0x35d89cu;

    // 0x35d89c: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x35d89cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d8a0: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d8a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d8a4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x35d8a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d8a8: 0x0  nop
    ctx->pc = 0x35d8a8u;
    // NOP
    // 0x35d8ac: 0x0  nop
    ctx->pc = 0x35d8acu;
    // NOP
    // 0x35d8b0: 0x1010  mfhi        $v0
    ctx->pc = 0x35d8b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35d8b4: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d8b8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x35D8B8u;
    {
        const bool branch_taken_0x35d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d8b8) {
            ctx->pc = 0x35DA58u;
            return;
        }
    }
    ctx->pc = 0x35D8C0u;
}
