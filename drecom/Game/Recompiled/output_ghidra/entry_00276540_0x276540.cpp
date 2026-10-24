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

// Function: entry_00276540
// Address: 0x276540 - 0x276568
void entry_00276540_0x276540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276540_0x276540");
#endif

    ctx->pc = 0x276540u;

    // 0x276540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x276540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276544: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x276544u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x276548: 0x0  nop
    ctx->pc = 0x276548u;
    // NOP
    // 0x27654c: 0x0  nop
    ctx->pc = 0x27654cu;
    // NOP
    // 0x276550: 0x1810  mfhi        $v1
    ctx->pc = 0x276550u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x276554: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x276554u;
    {
        const bool branch_taken_0x276554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x276554) {
            ctx->pc = 0x276568u;
            return;
        }
    }
    ctx->pc = 0x27655Cu;
    // 0x27655c: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x27655cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x276560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x276560u;
    {
        const bool branch_taken_0x276560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276560) {
            ctx->pc = 0x276570u;
            return;
        }
    }
    ctx->pc = 0x276568u;
}
