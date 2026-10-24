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

// Function: entry_0028cad8
// Address: 0x28cad8 - 0x28cb58
void entry_0028cad8_0x28cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cad8_0x28cad8");
#endif

    switch (ctx->pc) {
        case 0x28cb24u: goto label_28cb24;
        case 0x28cb3cu: goto label_28cb3c;
        default: break;
    }

    ctx->pc = 0x28cad8u;

    // 0x28cad8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cadc: 0x8c2420f0  lw          $a0, 0x20F0($at)
    ctx->pc = 0x28cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28cae0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x28cae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28cae4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cae8: 0xac2520f0  sw          $a1, 0x20F0($at)
    ctx->pc = 0x28cae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6220F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F0u, _value); } while (0);
    // 0x28caec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x28caecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x28caf0: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x28CAF0u;
    {
        const bool branch_taken_0x28caf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28caf0) {
            ctx->pc = 0x28CBACu;
            return;
        }
    }
    ctx->pc = 0x28CAF8u;
    // 0x28caf8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28cafc: 0x8c2462e0  lw          $a0, 0x62E0($at)
    ctx->pc = 0x28cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28cb00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cb04: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x28CB04u;
    {
        const bool branch_taken_0x28cb04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28cb04) {
            ctx->pc = 0x28CBACu;
            return;
        }
    }
    ctx->pc = 0x28CB0Cu;
    // 0x28cb0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28cb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28cb10: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x28cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28cb14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28cb14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cb18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28cb18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cb1c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CB1Cu;
    SET_GPR_U32(ctx, 31, 0x28CB24u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CB1Cu, 0x28CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB24u;
label_28cb24:
    // 0x28cb24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28cb24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28cb28: 0x24040201  addiu       $a0, $zero, 0x201
    ctx->pc = 0x28cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x28cb2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28cb2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cb30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28cb30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cb34: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CB34u;
    SET_GPR_U32(ctx, 31, 0x28CB3Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CB34u, 0x28CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB3Cu;
label_28cb3c:
    // 0x28cb3c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28cb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28cb40: 0x8c2362e0  lw          $v1, 0x62E0($at)
    ctx->pc = 0x28cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28cb44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28cb48: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28cb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28cb4c: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28cb4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28cb50: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28CB50u;
    {
        const bool branch_taken_0x28cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cb50) {
            ctx->pc = 0x28CBACu;
            return;
        }
    }
    ctx->pc = 0x28CB58u;
}
