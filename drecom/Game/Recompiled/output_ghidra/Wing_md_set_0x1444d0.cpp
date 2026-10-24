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

// Function: Wing_md_set
// Address: 0x1444d0 - 0x144554
void Wing_md_set_0x1444d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wing_md_set_0x1444d0");
#endif

    switch (ctx->pc) {
        case 0x1444fcu: goto label_1444fc;
        case 0x14450cu: goto label_14450c;
        case 0x14451cu: goto label_14451c;
        case 0x144530u: goto label_144530;
        case 0x144540u: goto label_144540;
        default: break;
    }

    ctx->pc = 0x1444d0u;

    // 0x1444d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1444d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1444d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1444d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1444d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1444d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1444dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1444dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1444e0: 0x2450c960  addiu       $s0, $v0, -0x36A0
    ctx->pc = 0x1444e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x1444e4: 0x8e021244  lw          $v0, 0x1244($s0)
    ctx->pc = 0x1444e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDBA4u));
    // 0x1444e8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1444e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EC9A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EC9A0u, _value); } while (0);
    // 0x1444ec: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1444ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EC9A0u));
    // 0x1444f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1444f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1444f4: 0xc0951c0  jal         func_254700
    ctx->pc = 0x1444F4u;
    SET_GPR_U32(ctx, 31, 0x1444FCu);
    ctx->pc = 0x254700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254700u, 0x1444F4u, 0x1444FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444FCu;
label_1444fc:
    // 0x1444fc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1444fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x144500: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x144500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x144504: 0xc096558  jal         func_259560
    ctx->pc = 0x144504u;
    SET_GPR_U32(ctx, 31, 0x14450Cu);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x144504u, 0x14450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14450Cu;
label_14450c:
    // 0x14450c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14450cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x144510: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x144510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x144514: 0xc05be64  jal         func_16F990
    ctx->pc = 0x144514u;
    SET_GPR_U32(ctx, 31, 0x14451Cu);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x144514u, 0x14451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14451Cu;
label_14451c:
    // 0x14451c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x14451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x144520: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x144520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x144524: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x144524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x144528: 0xc095384  jal         func_254E10
    ctx->pc = 0x144528u;
    SET_GPR_U32(ctx, 31, 0x144530u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x144528u, 0x144530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144530u;
label_144530:
    // 0x144530: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x144530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x144534: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x144534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x144538: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x144538u;
    SET_GPR_U32(ctx, 31, 0x144540u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x144538u, 0x144540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144540u;
label_144540:
    // 0x144540: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x144540u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144548: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x144548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14454c: 0x3e00008  jr          $ra
    ctx->pc = 0x14454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14454Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144554u;
}
