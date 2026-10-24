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

// Function: CdFsdRead
// Address: 0x1d9410 - 0x1d94bc
void CdFsdRead_0x1d9410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdFsdRead_0x1d9410");
#endif

    switch (ctx->pc) {
        case 0x1d9468u: goto label_1d9468;
        case 0x1d9478u: goto label_1d9478;
        case 0x1d949cu: goto label_1d949c;
        default: break;
    }

    ctx->pc = 0x1d9410u;

    // 0x1d9410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9414: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1d9414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d9418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d941c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9420: 0xa7a40038  sh          $a0, 0x38($sp)
    ctx->pc = 0x1d9420u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d9424: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1d9424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1d9428: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x1d9428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x1d942c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9430: 0x2451c580  addiu       $s1, $v0, -0x3A80
    ctx->pc = 0x1d9430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952320));
    // 0x1d9434: 0x97a20038  lhu         $v0, 0x38($sp)
    ctx->pc = 0x1d9434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9438: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d9438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d943c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d943cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9440: 0xac22c560  sw          $v0, -0x3AA0($at)
    ctx->pc = 0x1d9440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x1d9444: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9448: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d944c: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x1d944cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x1d9450: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d9450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9454: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d9454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1d9458: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d945c: 0xac22c568  sw          $v0, -0x3A98($at)
    ctx->pc = 0x1d945cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC568u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC568u, _value); } while (0);
    // 0x1d9460: 0xc067d30  jal         func_19F4C0
    ctx->pc = 0x1D9460u;
    SET_GPR_U32(ctx, 31, 0x1D9468u);
    ctx->pc = 0x19F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F4C0u, 0x1D9460u, 0x1D9468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9468u;
label_1d9468:
    // 0x1d9468: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d946c: 0xac22c56c  sw          $v0, -0x3A94($at)
    ctx->pc = 0x1d946cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC56Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC56Cu, _value); } while (0);
    // 0x1d9470: 0xc067d9c  jal         func_19F670
    ctx->pc = 0x1D9470u;
    SET_GPR_U32(ctx, 31, 0x1D9478u);
    ctx->pc = 0x19F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F670u, 0x1D9470u, 0x1D9478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9478u;
label_1d9478:
    // 0x1d9478: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d9478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d947c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d947cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9480: 0xac22c570  sw          $v0, -0x3A90($at)
    ctx->pc = 0x1d9480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC570u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC570u, _value); } while (0);
    // 0x1d9484: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d9484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9488: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d948c: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1d948cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d9490: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1d9490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9494: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D9494u;
    SET_GPR_U32(ctx, 31, 0x1D949Cu);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D9494u, 0x1D949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D949Cu;
label_1d949c:
    // 0x1d949c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d949cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d94a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d94a4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1d94a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d94a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d94a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d94ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d94acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d94b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d94b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94BCu;
}
