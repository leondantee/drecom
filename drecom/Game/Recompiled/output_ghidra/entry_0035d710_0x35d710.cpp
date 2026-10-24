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

// Function: entry_0035d710
// Address: 0x35d710 - 0x35d7b4
void entry_0035d710_0x35d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d710_0x35d710");
#endif

    ctx->pc = 0x35d710u;

    // 0x35d710: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d714: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x35d714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35d718: 0x10c00069  beqz        $a2, . + 4 + (0x69 << 2)
    ctx->pc = 0x35D718u;
    {
        const bool branch_taken_0x35d718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d718) {
            ctx->pc = 0x35D8C0u;
            return;
        }
    }
    ctx->pc = 0x35D720u;
    // 0x35d720: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35d724: 0x30530004  andi        $s3, $v0, 0x4
    ctx->pc = 0x35d724u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35d728: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x35D728u;
    {
        const bool branch_taken_0x35d728 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d728) {
            ctx->pc = 0x35D7C0u;
            return;
        }
    }
    ctx->pc = 0x35D730u;
    // 0x35d730: 0x86120004  lh          $s2, 0x4($s0)
    ctx->pc = 0x35d730u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d734: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x35d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x35d738: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d73c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x35D73Cu;
    {
        const bool branch_taken_0x35d73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d73c) {
            ctx->pc = 0x35D7B4u;
            return;
        }
    }
    ctx->pc = 0x35D744u;
    // 0x35d744: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x35d744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d748: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x35d748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35d74c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d750: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d754: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d758: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35d758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d75c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35d75cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35d760: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x35d760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d764: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d768: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d768u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d76c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x35d76cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d770: 0x0  nop
    ctx->pc = 0x35d770u;
    // NOP
    // 0x35d774: 0x0  nop
    ctx->pc = 0x35d774u;
    // NOP
    // 0x35d778: 0x1812  mflo        $v1
    ctx->pc = 0x35d778u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x35d77c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x35d77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35d780: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35d780u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35d784: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35d784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d788: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35d788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35d78c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x35d78cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d790: 0x86040028  lh          $a0, 0x28($s0)
    ctx->pc = 0x35d790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35d794: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x35d794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35d798: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x35d798u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d79c: 0x0  nop
    ctx->pc = 0x35d79cu;
    // NOP
    // 0x35d7a0: 0x0  nop
    ctx->pc = 0x35d7a0u;
    // NOP
    // 0x35d7a4: 0x1010  mfhi        $v0
    ctx->pc = 0x35d7a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35d7a8: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35d7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d7ac: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x35D7ACu;
    {
        const bool branch_taken_0x35d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d7ac) {
            ctx->pc = 0x35DA58u;
            return;
        }
    }
    ctx->pc = 0x35D7B4u;
}
