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

// Function: entry_00155e68
// Address: 0x155e68 - 0x155ea0
void entry_00155e68_0x155e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155e68_0x155e68");
#endif

    ctx->pc = 0x155e68u;

    // 0x155e68: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x155e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x155e6c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155e70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155e70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155e74: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x155e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x155e78: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x155e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x155e7c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155e80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155e80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155e84: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x155e84u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x155e88: 0x0  nop
    ctx->pc = 0x155e88u;
    // NOP
    // 0x155e8c: 0x0  nop
    ctx->pc = 0x155e8cu;
    // NOP
    // 0x155e90: 0x2012  mflo        $a0
    ctx->pc = 0x155e90u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x155e94: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x155e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x155e98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e9c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x155e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x155ea0u;
}
