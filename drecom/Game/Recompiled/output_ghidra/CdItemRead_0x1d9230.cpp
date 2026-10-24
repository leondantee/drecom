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

// Function: CdItemRead
// Address: 0x1d9230 - 0x1d92b0
void CdItemRead_0x1d9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdItemRead_0x1d9230");
#endif

    switch (ctx->pc) {
        case 0x1d9294u: goto label_1d9294;
        default: break;
    }

    ctx->pc = 0x1d9230u;

    // 0x1d9230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d9234: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d9234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d9238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d923c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1d923cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1d9240: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1d9240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1d9244: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1d9244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1d9248: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x1d9248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x1d924c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9250: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9254: 0xac22c560  sw          $v0, -0x3AA0($at)
    ctx->pc = 0x1d9254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x1d9258: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d9258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d925c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d925cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9260: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x1d9260u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x1d9264: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9268: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d926c: 0xac22c568  sw          $v0, -0x3A98($at)
    ctx->pc = 0x1d926cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC568u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC568u, _value); } while (0);
    // 0x1d9270: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d9274: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9278: 0xac22c56c  sw          $v0, -0x3A94($at)
    ctx->pc = 0x1d9278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC56Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC56Cu, _value); } while (0);
    // 0x1d927c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1d927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d9280: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9284: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1d9284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d9288: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1d9288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d928c: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D928Cu;
    SET_GPR_U32(ctx, 31, 0x1D9294u);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D928Cu, 0x1D9294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9294u;
label_1d9294:
    // 0x1d9294: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d9294u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9298: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d9298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d929c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d929cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d92a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d92a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d92a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d92a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d92a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D92A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D92A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D92B0u;
}
