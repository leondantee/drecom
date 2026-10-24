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

// Function: entry_001a0278
// Address: 0x1a0278 - 0x1a02e8
void entry_001a0278_0x1a0278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0278_0x1a0278");
#endif

    switch (ctx->pc) {
        case 0x1a02a0u: goto label_1a02a0;
        case 0x1a02e4u: goto label_1a02e4;
        default: break;
    }

    ctx->pc = 0x1a0278u;

    // 0x1a0278: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x1a0278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x1a027c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1a027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a0280: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1a0280u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a0284: 0x0  nop
    ctx->pc = 0x1a0284u;
    // NOP
    // 0x1a0288: 0x0  nop
    ctx->pc = 0x1a0288u;
    // NOP
    // 0x1a028c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a028cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a0290: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A0290u;
    {
        const bool branch_taken_0x1a0290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0290) {
            ctx->pc = 0x1A02E8u;
            return;
        }
    }
    ctx->pc = 0x1A0298u;
    // 0x1a0298: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1A0298u;
    SET_GPR_U32(ctx, 31, 0x1A02A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1A0298u, 0x1A02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02A0u;
label_1a02a0:
    // 0x1a02a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a02a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a02a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a02a8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a02a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a02ac: 0x0  nop
    ctx->pc = 0x1a02acu;
    // NOP
    // 0x1a02b0: 0x0  nop
    ctx->pc = 0x1a02b0u;
    // NOP
    // 0x1a02b4: 0x1810  mfhi        $v1
    ctx->pc = 0x1a02b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a02b8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1a02b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1a02bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a02bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a02c0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a02c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a02c4: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x1a02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x1a02c8: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1a02c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a02cc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1a02ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a02d0: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1a02d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a02d4: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1a02d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a02d8: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x1a02d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a02dc: 0xc0ce318  jal         func_338C60
    ctx->pc = 0x1A02DCu;
    SET_GPR_U32(ctx, 31, 0x1A02E4u);
    ctx->pc = 0x338C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C60u, 0x1A02DCu, 0x1A02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02E4u;
label_1a02e4:
    // 0x1a02e4: 0x0  nop
    ctx->pc = 0x1a02e4u;
    // NOP
    ctx->pc = 0x1a02e8u;
}
