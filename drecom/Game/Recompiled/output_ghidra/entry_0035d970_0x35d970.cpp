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

// Function: entry_0035d970
// Address: 0x35d970 - 0x35da3c
void entry_0035d970_0x35d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d970_0x35d970");
#endif

    ctx->pc = 0x35d970u;

    // 0x35d970: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x35d970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d974: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35d974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35d978: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d97c: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d97cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d980: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d984: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d988: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d988u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d98c: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d98cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d990: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d994: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d998: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35d998u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d99c: 0x0  nop
    ctx->pc = 0x35d99cu;
    // NOP
    // 0x35d9a0: 0x0  nop
    ctx->pc = 0x35d9a0u;
    // NOP
    // 0x35d9a4: 0x1012  mflo        $v0
    ctx->pc = 0x35d9a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x35d9a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d9ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d9acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d9b0: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d9b8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d9bc: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d9bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d9c0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d9c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d9c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d9c8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d9c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d9cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d9d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d9d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d9d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x35d9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35d9d8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35D9D8u;
    {
        const bool branch_taken_0x35d9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d9d8) {
            ctx->pc = 0x35DA3Cu;
            return;
        }
    }
    ctx->pc = 0x35D9E0u;
    // 0x35d9e0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x35d9e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d9e4: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d9e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d9e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d9ec: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d9f0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d9f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x35d9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x35d9f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35D9F8u;
    {
        const bool branch_taken_0x35d9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d9f8) {
            ctx->pc = 0x35DA3Cu;
            return;
        }
    }
    ctx->pc = 0x35DA00u;
    // 0x35da00: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35da00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35da04: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35da08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35da0c: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35da0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35da10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35da10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35da14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35da18: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x35da18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35da1c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35da1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35da20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35da24: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35da24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35da28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35da2c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35da2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35da30: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35da34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x35da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x35da38: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x35da38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x35da3cu;
}
