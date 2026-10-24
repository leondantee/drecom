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

// Function: entry_00274a28
// Address: 0x274a28 - 0x274a50
void entry_00274a28_0x274a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274a28_0x274a28");
#endif

    ctx->pc = 0x274a28u;

    // 0x274a28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x274a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274a2c: 0x224001a  div         $zero, $s1, $a0
    ctx->pc = 0x274a2cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x274a30: 0x0  nop
    ctx->pc = 0x274a30u;
    // NOP
    // 0x274a34: 0x0  nop
    ctx->pc = 0x274a34u;
    // NOP
    // 0x274a38: 0x1810  mfhi        $v1
    ctx->pc = 0x274a38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x274a3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274A3Cu;
    {
        const bool branch_taken_0x274a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a3c) {
            ctx->pc = 0x274A50u;
            return;
        }
    }
    ctx->pc = 0x274A44u;
    // 0x274a44: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x274a44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x274a48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274A48u;
    {
        const bool branch_taken_0x274a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a48) {
            ctx->pc = 0x274A58u;
            return;
        }
    }
    ctx->pc = 0x274A50u;
}
