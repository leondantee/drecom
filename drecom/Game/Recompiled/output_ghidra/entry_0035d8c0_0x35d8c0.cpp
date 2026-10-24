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

// Function: entry_0035d8c0
// Address: 0x35d8c0 - 0x35d964
void entry_0035d8c0_0x35d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d8c0_0x35d8c0");
#endif

    ctx->pc = 0x35d8c0u;

    // 0x35d8c0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d8c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35d8c8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x35D8C8u;
    {
        const bool branch_taken_0x35d8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d8c8) {
            ctx->pc = 0x35D970u;
            return;
        }
    }
    ctx->pc = 0x35D8D0u;
    // 0x35d8d0: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d8d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d8d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d8d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d8d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d8dc: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d8dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d8e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d8e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d8e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d8e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35d8ec: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x35D8ECu;
    {
        const bool branch_taken_0x35d8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d8ec) {
            ctx->pc = 0x35D964u;
            return;
        }
    }
    ctx->pc = 0x35D8F4u;
    // 0x35d8f4: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x35d8f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d8f8: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35d8f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35d8fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d900: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d904: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d908: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d90c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d90cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d910: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d914: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d91c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35d91cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d920: 0x0  nop
    ctx->pc = 0x35d920u;
    // NOP
    // 0x35d924: 0x0  nop
    ctx->pc = 0x35d924u;
    // NOP
    // 0x35d928: 0x1012  mflo        $v0
    ctx->pc = 0x35d928u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x35d92c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d930: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d930u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d934: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d93c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d93cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d940: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x35d940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d944: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d948: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x35d948u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d94c: 0x0  nop
    ctx->pc = 0x35d94cu;
    // NOP
    // 0x35d950: 0x0  nop
    ctx->pc = 0x35d950u;
    // NOP
    // 0x35d954: 0x1010  mfhi        $v0
    ctx->pc = 0x35d954u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35d958: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d95c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x35D95Cu;
    {
        const bool branch_taken_0x35d95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d95c) {
            ctx->pc = 0x35DA58u;
            return;
        }
    }
    ctx->pc = 0x35D964u;
}
