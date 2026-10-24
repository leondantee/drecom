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

// Function: CdFileRead
// Address: 0x1d9380 - 0x1d940c
void CdFileRead_0x1d9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdFileRead_0x1d9380");
#endif

    switch (ctx->pc) {
        case 0x1d93ecu: goto label_1d93ec;
        default: break;
    }

    ctx->pc = 0x1d9380u;

    // 0x1d9380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9384: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1d9384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d9388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d938c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9390: 0xa7a40038  sh          $a0, 0x38($sp)
    ctx->pc = 0x1d9390u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d9394: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1d9394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1d9398: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x1d9398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x1d939c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d939cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d93a0: 0x2451c580  addiu       $s1, $v0, -0x3A80
    ctx->pc = 0x1d93a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952320));
    // 0x1d93a4: 0x97a20038  lhu         $v0, 0x38($sp)
    ctx->pc = 0x1d93a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d93a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d93a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d93ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d93acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d93b0: 0xac22c560  sw          $v0, -0x3AA0($at)
    ctx->pc = 0x1d93b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x1d93b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d93b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d93b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d93bc: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x1d93bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x1d93c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d93c4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d93c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d93c8: 0xac22c568  sw          $v0, -0x3A98($at)
    ctx->pc = 0x1d93c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC568u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC568u, _value); } while (0);
    // 0x1d93cc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d93ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d93d0: 0xac20c56c  sw          $zero, -0x3A94($at)
    ctx->pc = 0x1d93d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FC56Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC56Cu, _value); } while (0);
    // 0x1d93d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d93d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d93d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d93dc: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1d93dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d93e0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1d93e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d93e4: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D93E4u;
    SET_GPR_U32(ctx, 31, 0x1D93ECu);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D93E4u, 0x1D93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93ECu;
label_1d93ec:
    // 0x1d93ec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d93ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d93f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d93f4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1d93f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d93f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d93f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d93fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d93fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9400: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d9400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d9404: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D940Cu;
}
