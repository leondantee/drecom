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

// Function: entry_003588bc
// Address: 0x3588bc - 0x358950
void entry_003588bc_0x3588bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003588bc_0x3588bc");
#endif

    switch (ctx->pc) {
        case 0x358918u: goto label_358918;
        case 0x358924u: goto label_358924;
        default: break;
    }

    ctx->pc = 0x3588bcu;

    // 0x3588bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3588bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3588c0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x3588c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x3588c4: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x3588c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3588c8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3588c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3588cc: 0x0  nop
    ctx->pc = 0x3588ccu;
    // NOP
    // 0x3588d0: 0x0  nop
    ctx->pc = 0x3588d0u;
    // NOP
    // 0x3588d4: 0x1810  mfhi        $v1
    ctx->pc = 0x3588d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3588d8: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3588D8u;
    {
        const bool branch_taken_0x3588d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3588d8) {
            ctx->pc = 0x358974u;
            return;
        }
    }
    ctx->pc = 0x3588E0u;
    // 0x3588e0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x3588e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3588e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3588e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3588e8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3588e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3588ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3588ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3588f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3588f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3588f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3588f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3588f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3588f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3588fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3588fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358900: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x358900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358904: 0x24044806  addiu       $a0, $zero, 0x4806
    ctx->pc = 0x358904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18438));
    // 0x358908: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358908u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35890c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x35890cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x358910: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x358910u;
    SET_GPR_U32(ctx, 31, 0x358918u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x358910u, 0x358918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358918u;
label_358918:
    // 0x358918: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35891c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35891Cu;
    SET_GPR_U32(ctx, 31, 0x358924u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35891Cu, 0x358924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358924u;
label_358924:
    // 0x358924: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x358924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358928: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x358928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x35892c: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x35892cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x358930: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x358930u;
    {
        const bool branch_taken_0x358930 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x358930) {
            ctx->pc = 0x358974u;
            return;
        }
    }
    ctx->pc = 0x358938u;
    // 0x358938: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x358938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35893c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x35893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358940: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358944: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358948: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x358948u;
    {
        const bool branch_taken_0x358948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358948) {
            ctx->pc = 0x358974u;
            return;
        }
    }
    ctx->pc = 0x358950u;
}
