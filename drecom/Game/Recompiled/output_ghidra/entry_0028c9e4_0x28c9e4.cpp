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

// Function: entry_0028c9e4
// Address: 0x28c9e4 - 0x28ca50
void entry_0028c9e4_0x28c9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c9e4_0x28c9e4");
#endif

    switch (ctx->pc) {
        case 0x28ca20u: goto label_28ca20;
        case 0x28ca3cu: goto label_28ca3c;
        default: break;
    }

    ctx->pc = 0x28c9e4u;

    // 0x28c9e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c9e8: 0x8c2420f0  lw          $a0, 0x20F0($at)
    ctx->pc = 0x28c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28c9ec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x28c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28c9f0: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28C9F0u;
    {
        const bool branch_taken_0x28c9f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28c9f0) {
            ctx->pc = 0x28CA50u;
            return;
        }
    }
    ctx->pc = 0x28C9F8u;
    // 0x28c9f8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28c9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28c9fc: 0x8c2362e0  lw          $v1, 0x62E0($at)
    ctx->pc = 0x28c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28ca00: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28CA00u;
    {
        const bool branch_taken_0x28ca00 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x28ca00) {
            ctx->pc = 0x28CA50u;
            return;
        }
    }
    ctx->pc = 0x28CA08u;
    // 0x28ca08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ca08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ca0c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x28ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28ca10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28ca10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca14: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28ca14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca18: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CA18u;
    SET_GPR_U32(ctx, 31, 0x28CA20u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CA18u, 0x28CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA20u;
label_28ca20:
    // 0x28ca20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ca20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ca24: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x28ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x28ca28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28ca28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ca2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28ca2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28ca30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca34: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CA34u;
    SET_GPR_U32(ctx, 31, 0x28CA3Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CA34u, 0x28CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA3Cu;
label_28ca3c:
    // 0x28ca3c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28ca3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28ca40: 0x8c2362e0  lw          $v1, 0x62E0($at)
    ctx->pc = 0x28ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28ca44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ca48: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28ca48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28ca4c: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28ca4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    ctx->pc = 0x28ca50u;
}
