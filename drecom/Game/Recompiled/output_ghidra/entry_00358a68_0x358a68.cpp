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

// Function: entry_00358a68
// Address: 0x358a68 - 0x358ad8
void entry_00358a68_0x358a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358a68_0x358a68");
#endif

    switch (ctx->pc) {
        case 0x358aa8u: goto label_358aa8;
        case 0x358ab4u: goto label_358ab4;
        default: break;
    }

    ctx->pc = 0x358a68u;

    // 0x358a68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x358a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358a6c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x358a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x358a70: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x358a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x358a74: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x358a74u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x358a78: 0x0  nop
    ctx->pc = 0x358a78u;
    // NOP
    // 0x358a7c: 0x0  nop
    ctx->pc = 0x358a7cu;
    // NOP
    // 0x358a80: 0x1810  mfhi        $v1
    ctx->pc = 0x358a80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x358a84: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x358A84u;
    {
        const bool branch_taken_0x358a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358a84) {
            ctx->pc = 0x358B28u;
            return;
        }
    }
    ctx->pc = 0x358A8Cu;
    // 0x358a8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x358a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358a90: 0x24044806  addiu       $a0, $zero, 0x4806
    ctx->pc = 0x358a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18438));
    // 0x358a94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358a94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358a98: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x358a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x358a9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x358a9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358aa0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x358AA0u;
    SET_GPR_U32(ctx, 31, 0x358AA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x358AA0u, 0x358AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AA8u;
label_358aa8:
    // 0x358aa8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358aa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358aac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358AACu;
    SET_GPR_U32(ctx, 31, 0x358AB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358AACu, 0x358AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AB4u;
label_358ab4:
    // 0x358ab4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358ab4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358ab8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358abc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358ac0: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x358AC0u;
    {
        const bool branch_taken_0x358ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358ac0) {
            ctx->pc = 0x358AD8u;
            return;
        }
    }
    ctx->pc = 0x358AC8u;
    // 0x358ac8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x358ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x358acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358ad0: 0x0  nop
    ctx->pc = 0x358ad0u;
    // NOP
    // 0x358ad4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x358ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    ctx->pc = 0x358ad8u;
}
