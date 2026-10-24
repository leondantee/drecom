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

// Function: Huuin_door_out
// Address: 0x31f2f0 - 0x31f3b4
void Huuin_door_out_0x31f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Huuin_door_out_0x31f2f0");
#endif

    switch (ctx->pc) {
        case 0x31f30cu: goto label_31f30c;
        case 0x31f320u: goto label_31f320;
        case 0x31f398u: goto label_31f398;
        case 0x31f3a4u: goto label_31f3a4;
        default: break;
    }

    ctx->pc = 0x31f2f0u;

    // 0x31f2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f2f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x31f2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x31f2f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x31f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x31f2fc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x31f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x31f300: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x31f300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f304: 0xc0d7ed8  jal         func_35FB60
    ctx->pc = 0x31F304u;
    SET_GPR_U32(ctx, 31, 0x31F30Cu);
    ctx->pc = 0x35FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FB60u, 0x31F304u, 0x31F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F30Cu;
label_31f30c:
    // 0x31f30c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f310: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x31f310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31f314: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f318: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x31F318u;
    SET_GPR_U32(ctx, 31, 0x31F320u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x31F318u, 0x31F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F320u;
label_31f320:
    // 0x31f320: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f324: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x31f324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f328: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x31f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x31f32c: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x31f32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x31f330: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f334: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f338: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f33c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f340: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x31f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x31f344: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f348: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f34c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f350: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f354: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f358: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f35c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x31f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x31f360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f364: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f36c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f36cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f374: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f374u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f378: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x31f378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x31f37c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f380: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f384: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f388: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f388u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f38c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f390: 0xc084964  jal         func_212590
    ctx->pc = 0x31F390u;
    SET_GPR_U32(ctx, 31, 0x31F398u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x31F390u, 0x31F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F398u;
label_31f398:
    // 0x31f398: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x31f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31f39c: 0xc084964  jal         func_212590
    ctx->pc = 0x31F39Cu;
    SET_GPR_U32(ctx, 31, 0x31F3A4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x31F39Cu, 0x31F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3A4u;
label_31f3a4:
    // 0x31f3a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31f3a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f3a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31f3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31f3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31F3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F3B4u;
}
