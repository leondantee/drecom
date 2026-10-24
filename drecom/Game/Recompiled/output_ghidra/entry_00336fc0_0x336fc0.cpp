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

// Function: entry_00336fc0
// Address: 0x336fc0 - 0x337040
void entry_00336fc0_0x336fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336fc0_0x336fc0");
#endif

    switch (ctx->pc) {
        case 0x33701cu: goto label_33701c;
        default: break;
    }

    ctx->pc = 0x336fc0u;

    // 0x336fc0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336fc4: 0x8c234e20  lw          $v1, 0x4E20($at)
    ctx->pc = 0x336fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E20u));
    // 0x336fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336fcc: 0x14620187  bne         $v1, $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x336FCCu;
    {
        const bool branch_taken_0x336fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x336fcc) {
            ctx->pc = 0x3375ECu;
            return;
        }
    }
    ctx->pc = 0x336FD4u;
    // 0x336fd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x336fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x336fd8: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x336fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x336fdc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x336fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x336fe0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x336fe0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x336fe4: 0x0  nop
    ctx->pc = 0x336fe4u;
    // NOP
    // 0x336fe8: 0x0  nop
    ctx->pc = 0x336fe8u;
    // NOP
    // 0x336fec: 0x1010  mfhi        $v0
    ctx->pc = 0x336fecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x336ff0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x336FF0u;
    {
        const bool branch_taken_0x336ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336ff0) {
            ctx->pc = 0x337040u;
            return;
        }
    }
    ctx->pc = 0x336FF8u;
    // 0x336ff8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336ffc: 0x8c224e30  lw          $v0, 0x4E30($at)
    ctx->pc = 0x336ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E30u));
    // 0x337000: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x337000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x337004: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x337004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x337008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33700c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33700cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x337010: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x337010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x337014: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x337014u;
    SET_GPR_U32(ctx, 31, 0x33701Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x337014u, 0x33701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33701Cu;
label_33701c:
    // 0x33701c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33701cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337020: 0x8c224e30  lw          $v0, 0x4E30($at)
    ctx->pc = 0x337020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E30u));
    // 0x337024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x337024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x337028: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33702c: 0xac224e30  sw          $v0, 0x4E30($at)
    ctx->pc = 0x33702cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E30u, _value); } while (0);
    // 0x337030: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337030u;
    {
        const bool branch_taken_0x337030 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x337030) {
            ctx->pc = 0x337040u;
            return;
        }
    }
    ctx->pc = 0x337038u;
    // 0x337038: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33703c: 0xac204e30  sw          $zero, 0x4E30($at)
    ctx->pc = 0x33703cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x894E30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E30u, _value); } while (0);
    ctx->pc = 0x337040u;
}
