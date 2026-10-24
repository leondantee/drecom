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

// Function: entry_00335a6c
// Address: 0x335a6c - 0x335ae4
void entry_00335a6c_0x335a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335a6c_0x335a6c");
#endif

    switch (ctx->pc) {
        case 0x335ab8u: goto label_335ab8;
        default: break;
    }

    ctx->pc = 0x335a6cu;

    // 0x335a6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x335a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x335a70: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x335a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x335a74: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x335a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x335a78: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x335a78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x335a7c: 0x0  nop
    ctx->pc = 0x335a7cu;
    // NOP
    // 0x335a80: 0x0  nop
    ctx->pc = 0x335a80u;
    // NOP
    // 0x335a84: 0x1010  mfhi        $v0
    ctx->pc = 0x335a84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x335a88: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x335A88u;
    {
        const bool branch_taken_0x335a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335a88) {
            ctx->pc = 0x335AE4u;
            return;
        }
    }
    ctx->pc = 0x335A90u;
    // 0x335a90: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a94: 0x8c223358  lw          $v0, 0x3358($at)
    ctx->pc = 0x335a94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x893358u));
    // 0x335a98: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x335a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x335a9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x335aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x335aa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x335aa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335aa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x335aa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335aac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x335aacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335ab0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x335AB0u;
    SET_GPR_U32(ctx, 31, 0x335AB8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x335AB0u, 0x335AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335AB8u;
label_335ab8:
    // 0x335ab8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335abc: 0x8c233358  lw          $v1, 0x3358($at)
    ctx->pc = 0x335abcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x893358u));
    // 0x335ac0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x335ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335ac4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ac8: 0xac223358  sw          $v0, 0x3358($at)
    ctx->pc = 0x335ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893358u, _value); } while (0);
    // 0x335acc: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x335accu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x335ad0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x335AD0u;
    {
        const bool branch_taken_0x335ad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x335ad0) {
            ctx->pc = 0x335AE4u;
            return;
        }
    }
    ctx->pc = 0x335AD8u;
    // 0x335ad8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x335ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335adc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ae0: 0xac223358  sw          $v0, 0x3358($at)
    ctx->pc = 0x335ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893358u, _value); } while (0);
    ctx->pc = 0x335ae4u;
}
