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

// Function: entry_0028ca50
// Address: 0x28ca50 - 0x28cabc
void entry_0028ca50_0x28ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ca50_0x28ca50");
#endif

    switch (ctx->pc) {
        case 0x28ca8cu: goto label_28ca8c;
        case 0x28caa8u: goto label_28caa8;
        default: break;
    }

    ctx->pc = 0x28ca50u;

    // 0x28ca50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ca54: 0x8c2420f0  lw          $a0, 0x20F0($at)
    ctx->pc = 0x28ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28ca58: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x28ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28ca5c: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28CA5Cu;
    {
        const bool branch_taken_0x28ca5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28ca5c) {
            ctx->pc = 0x28CABCu;
            return;
        }
    }
    ctx->pc = 0x28CA64u;
    // 0x28ca64: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28ca64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28ca68: 0x8c2462e0  lw          $a0, 0x62E0($at)
    ctx->pc = 0x28ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28ca6c: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28CA6Cu;
    {
        const bool branch_taken_0x28ca6c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x28ca6c) {
            ctx->pc = 0x28CABCu;
            return;
        }
    }
    ctx->pc = 0x28CA74u;
    // 0x28ca74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ca74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ca78: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x28ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28ca7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28ca7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca80: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28ca80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca84: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CA84u;
    SET_GPR_U32(ctx, 31, 0x28CA8Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CA84u, 0x28CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA8Cu;
label_28ca8c:
    // 0x28ca8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ca8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ca90: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x28ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x28ca94: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x28ca94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28ca98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28ca98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28ca9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28caa0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CAA0u;
    SET_GPR_U32(ctx, 31, 0x28CAA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CAA0u, 0x28CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAA8u;
label_28caa8:
    // 0x28caa8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28caa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28caac: 0x8c2462e0  lw          $a0, 0x62E0($at)
    ctx->pc = 0x28caacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28cab0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x28cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28cab4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28cab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28cab8: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28cab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    ctx->pc = 0x28cabcu;
}
