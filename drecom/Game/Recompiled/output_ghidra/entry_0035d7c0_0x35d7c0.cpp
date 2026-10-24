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

// Function: entry_0035d7c0
// Address: 0x35d7c0 - 0x35d89c
void entry_0035d7c0_0x35d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d7c0_0x35d7c0");
#endif

    ctx->pc = 0x35d7c0u;

    // 0x35d7c0: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x35d7c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d7c4: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35d7c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35d7c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d7cc: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d7d0: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d7d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d7d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d7d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d7dc: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d7dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d7e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d7e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d7e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d7e8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35d7e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d7ec: 0x0  nop
    ctx->pc = 0x35d7ecu;
    // NOP
    // 0x35d7f0: 0x0  nop
    ctx->pc = 0x35d7f0u;
    // NOP
    // 0x35d7f4: 0x1012  mflo        $v0
    ctx->pc = 0x35d7f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x35d7f8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d7fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d7fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d800: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d804: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35d804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d808: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d808u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d80c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d80cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d810: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d814: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d814u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d818: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x35D818u;
    {
        const bool branch_taken_0x35d818 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35d818) {
            ctx->pc = 0x35D89Cu;
            return;
        }
    }
    ctx->pc = 0x35D820u;
    // 0x35d820: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x35d820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d824: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d828: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d82c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d82cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d830: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d834: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x35d834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x35d838: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35D838u;
    {
        const bool branch_taken_0x35d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d838) {
            ctx->pc = 0x35D89Cu;
            return;
        }
    }
    ctx->pc = 0x35D840u;
    // 0x35d840: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d844: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d848: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d848u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d84c: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d84cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d850: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d854: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d854u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d858: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35d858u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d85c: 0x0  nop
    ctx->pc = 0x35d85cu;
    // NOP
    // 0x35d860: 0x0  nop
    ctx->pc = 0x35d860u;
    // NOP
    // 0x35d864: 0x1812  mflo        $v1
    ctx->pc = 0x35d864u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x35d868: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d868u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d86c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d870: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d870u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d874: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35d874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d878: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d87c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d87cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d880: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d884: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35d884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d888: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d888u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d88c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x35d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d890: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x35d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x35d894: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35d894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35d898: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x35d898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x35d89cu;
}
