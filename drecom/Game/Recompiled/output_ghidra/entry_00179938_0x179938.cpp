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

// Function: entry_00179938
// Address: 0x179938 - 0x179968
void entry_00179938_0x179938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179938_0x179938");
#endif

    ctx->pc = 0x179938u;

    // 0x179938: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x179938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x17993c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x17993cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x179940: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x179940u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x179944: 0x0  nop
    ctx->pc = 0x179944u;
    // NOP
    // 0x179948: 0x0  nop
    ctx->pc = 0x179948u;
    // NOP
    // 0x17994c: 0x1812  mflo        $v1
    ctx->pc = 0x17994cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x179950: 0x243a018  mult        $s4, $s2, $v1
    ctx->pc = 0x179950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x179954: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x179954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x179958: 0x2438818  mult        $s1, $s2, $v1
    ctx->pc = 0x179958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x17995c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x17995cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179960: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x179960u;
    {
        const bool branch_taken_0x179960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179960) {
            ctx->pc = 0x179B38u;
            return;
        }
    }
    ctx->pc = 0x179968u;
}
