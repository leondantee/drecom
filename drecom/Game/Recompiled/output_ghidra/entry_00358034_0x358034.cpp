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

// Function: entry_00358034
// Address: 0x358034 - 0x3580a4
void entry_00358034_0x358034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358034_0x358034");
#endif

    switch (ctx->pc) {
        case 0x358074u: goto label_358074;
        case 0x358080u: goto label_358080;
        default: break;
    }

    ctx->pc = 0x358034u;

    // 0x358034: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x358034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358038: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x358038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x35803c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x35803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x358040: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x358040u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x358044: 0x0  nop
    ctx->pc = 0x358044u;
    // NOP
    // 0x358048: 0x0  nop
    ctx->pc = 0x358048u;
    // NOP
    // 0x35804c: 0x1810  mfhi        $v1
    ctx->pc = 0x35804cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x358050: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x358050u;
    {
        const bool branch_taken_0x358050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358050) {
            ctx->pc = 0x3580F4u;
            return;
        }
    }
    ctx->pc = 0x358058u;
    // 0x358058: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x358058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35805c: 0x24044806  addiu       $a0, $zero, 0x4806
    ctx->pc = 0x35805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18438));
    // 0x358060: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358064: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x358064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x358068: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x358068u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35806c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35806Cu;
    SET_GPR_U32(ctx, 31, 0x358074u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35806Cu, 0x358074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358074u;
label_358074:
    // 0x358074: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358078: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358078u;
    SET_GPR_U32(ctx, 31, 0x358080u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358078u, 0x358080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358080u;
label_358080:
    // 0x358080: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358080u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358084: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358088: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x35808c: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35808Cu;
    {
        const bool branch_taken_0x35808c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x35808c) {
            ctx->pc = 0x3580A4u;
            return;
        }
    }
    ctx->pc = 0x358094u;
    // 0x358094: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x358094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x358098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35809c: 0x0  nop
    ctx->pc = 0x35809cu;
    // NOP
    // 0x3580a0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x3580a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    ctx->pc = 0x3580a4u;
}
