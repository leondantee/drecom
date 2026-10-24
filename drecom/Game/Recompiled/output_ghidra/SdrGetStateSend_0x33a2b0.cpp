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

// Function: SdrGetStateSend
// Address: 0x33a2b0 - 0x33a368
void SdrGetStateSend_0x33a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrGetStateSend_0x33a2b0");
#endif

    switch (ctx->pc) {
        case 0x33a2d0u: goto label_33a2d0;
        case 0x33a320u: goto label_33a320;
        case 0x33a338u: goto label_33a338;
        case 0x33a348u: goto label_33a348;
        default: break;
    }

    ctx->pc = 0x33a2b0u;

    // 0x33a2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a2b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33a2b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x33a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x33a2bc: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x33a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x33a2c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a2c4: 0x8c249a18  lw          $a0, -0x65E8($at)
    ctx->pc = 0x33a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A18u));
    // 0x33a2c8: 0xc084a98  jal         func_212A60
    ctx->pc = 0x33A2C8u;
    SET_GPR_U32(ctx, 31, 0x33A2D0u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x33A2D0u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A2D0u) { return; }
    ctx->pc = 0x33A2D0u;
label_33a2d0:
    // 0x33a2d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33a2d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a2d8: 0xac2252c0  sw          $v0, 0x52C0($at)
    ctx->pc = 0x33a2d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8952C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8952C0u, _value); } while (0);
    // 0x33a2dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a2e0: 0x8c229a18  lw          $v0, -0x65E8($at)
    ctx->pc = 0x33a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A9A18u));
    // 0x33a2e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33a2e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x33a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a2ec: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a2f0: 0x244752c0  addiu       $a3, $v0, 0x52C0
    ctx->pc = 0x33a2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
    // 0x33a2f4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a2f8: 0x244952c0  addiu       $t1, $v0, 0x52C0
    ctx->pc = 0x33a2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
    // 0x33a2fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33a300: 0x244ba280  addiu       $t3, $v0, -0x5D80
    ctx->pc = 0x33a300u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
    // 0x33a304: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a308: 0x24445300  addiu       $a0, $v0, 0x5300
    ctx->pc = 0x33a308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x33a30c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33a30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a310: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33a310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33a314: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x33a314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33a318: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x33A318u;
    SET_GPR_U32(ctx, 31, 0x33A320u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x33A320u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A320u) { return; }
    ctx->pc = 0x33A320u;
label_33a320:
    // 0x33a320: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33A320u;
    {
        const bool branch_taken_0x33a320 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x33a320) {
            ctx->pc = 0x33A354u;
            goto label_33a354;
        }
    }
    ctx->pc = 0x33A328u;
    // 0x33a328: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33a32c: 0x24442820  addiu       $a0, $v0, 0x2820
    ctx->pc = 0x33a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10272));
    // 0x33a330: 0xc046760  jal         func_119D80
    ctx->pc = 0x33A330u;
    SET_GPR_U32(ctx, 31, 0x33A338u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33A338u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A338u) { return; }
    ctx->pc = 0x33A338u;
label_33a338:
    // 0x33a338: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a33c: 0x8c249a18  lw          $a0, -0x65E8($at)
    ctx->pc = 0x33a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A18u));
    // 0x33a340: 0xc084a90  jal         func_212A40
    ctx->pc = 0x33A340u;
    SET_GPR_U32(ctx, 31, 0x33A348u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x33A348u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A348u) { return; }
    ctx->pc = 0x33A348u;
label_33a348:
    // 0x33a348: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x33a348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33a34c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33A34Cu;
    {
        const bool branch_taken_0x33a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a34c) {
            ctx->pc = 0x33A358u;
            goto label_33a358;
        }
    }
    ctx->pc = 0x33A354u;
label_33a354:
    // 0x33a354: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33a354u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33a358:
    // 0x33a358: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33a358u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a35c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33a35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33a360: 0x3e00008  jr          $ra
    ctx->pc = 0x33A360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A368u;
}
