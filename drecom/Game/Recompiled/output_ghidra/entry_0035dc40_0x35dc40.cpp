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

// Function: entry_0035dc40
// Address: 0x35dc40 - 0x35dcd0
void entry_0035dc40_0x35dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035dc40_0x35dc40");
#endif

    switch (ctx->pc) {
        case 0x35dc6cu: goto label_35dc6c;
        default: break;
    }

    ctx->pc = 0x35dc40u;

label_35dc40:
    // 0x35dc40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc44: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35dc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35dc48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u));
    // 0x35dc4c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x35dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x35dc50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35dc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35dc54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DC54u;
    {
        const bool branch_taken_0x35dc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dc54) {
            ctx->pc = 0x35DC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dc40;
        }
    }
    ctx->pc = 0x35DC5Cu;
    // 0x35dc5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x35dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x35dc60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dc64: 0xc0d7784  jal         func_35DE10
    ctx->pc = 0x35DC64u;
    SET_GPR_U32(ctx, 31, 0x35DC6Cu);
    ctx->pc = 0x35DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DE10u, 0x35DC64u, 0x35DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC6Cu;
label_35dc6c:
    // 0x35dc6c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x35dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x35dc70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35dc74: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x35dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x35dc78: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x35dc78u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dc7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc80: 0x3443d080  ori         $v1, $v0, 0xD080
    ctx->pc = 0x35dc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x35dc84: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x35dc84u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 19));
    // 0x35dc88: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x35dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x35dc8c: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x35dc8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35dc90: 0x0  nop
    ctx->pc = 0x35dc90u;
    // NOP
    // 0x35dc94: 0x0  nop
    ctx->pc = 0x35dc94u;
    // NOP
    // 0x35dc98: 0x1812  mflo        $v1
    ctx->pc = 0x35dc98u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x35dc9c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x35dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x35dca0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x35dca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35dca4: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x35dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x35dca8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x35dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35dcac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35dcb0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x35dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x35dcb4: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x35dcb4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35dcb8: 0x0  nop
    ctx->pc = 0x35dcb8u;
    // NOP
    // 0x35dcbc: 0x0  nop
    ctx->pc = 0x35dcbcu;
    // NOP
    // 0x35dcc0: 0x1810  mfhi        $v1
    ctx->pc = 0x35dcc0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x35dcc4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35dcc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x35dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35dccc: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x35dcccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x35dcd0u;
}
