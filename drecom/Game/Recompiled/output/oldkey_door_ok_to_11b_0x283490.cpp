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

// Function: oldkey_door_ok_to_11b
// Address: 0x283490 - 0x2835c0
void oldkey_door_ok_to_11b_0x283490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("oldkey_door_ok_to_11b_0x283490");
#endif

    switch (ctx->pc) {
        case 0x283550u: goto label_283550;
        case 0x28355cu: goto label_28355c;
        case 0x283574u: goto label_283574;
        case 0x283580u: goto label_283580;
        case 0x2835b0u: goto label_2835b0;
        default: break;
    }

    ctx->pc = 0x283490u;

    // 0x283490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283494: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x283494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x283498: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28349c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x28349cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2834a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2834a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2834a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2834a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2834a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2834a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2834ac: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2834acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2834b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2834b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2834b4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x2834b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2834b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2834b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2834bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2834bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2834c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2834c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2834c4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2834c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2834c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2834c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2834cc: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x2834ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2834d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2834d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2834d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2834d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2834d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2834d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2834dc: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2834dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2834e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2834e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2834e4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x2834e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2834e8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2834e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2834ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2834ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2834f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2834f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2834f4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2834f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2834f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2834f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2834fc: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x2834fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x283500: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x283500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x283504: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283508: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x283508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x28350c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28350cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283510: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x283510u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x283514: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x283514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x283518: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x283518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28351c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28351cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283520: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x283520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x283524: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283528: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x283528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x28352c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x28352cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x283530: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x283530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x283534: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283538: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x283538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x28353c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28353cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283540: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x283540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x283544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283548: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x283548u;
    SET_GPR_U32(ctx, 31, 0x283550u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x283548u, 0x283550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283550u;
label_283550:
    // 0x283550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x283550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283554: 0xc084964  jal         func_212590
    ctx->pc = 0x283554u;
    SET_GPR_U32(ctx, 31, 0x28355Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x283554u, 0x28355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28355Cu;
label_28355c:
    // 0x28355c: 0x2404040e  addiu       $a0, $zero, 0x40E
    ctx->pc = 0x28355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x283560: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x283560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x283564: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x283564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283568: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x283568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28356c: 0xc067c24  jal         func_19F090
    ctx->pc = 0x28356Cu;
    SET_GPR_U32(ctx, 31, 0x283574u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x28356Cu, 0x283574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283574u;
label_283574:
    // 0x283574: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x283574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x283578: 0xc084964  jal         func_212590
    ctx->pc = 0x283578u;
    SET_GPR_U32(ctx, 31, 0x283580u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x283578u, 0x283580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283580u;
label_283580:
    // 0x283580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283584: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x283584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x283588: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x283588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x28358c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x283590: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x283590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x283594: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283598: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x283598u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x28359c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28359cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2835a0: 0xa020d4b1  sb          $zero, -0x2B4F($at)
    ctx->pc = 0x2835a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x2835a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2835a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2835a8: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x2835A8u;
    SET_GPR_U32(ctx, 31, 0x2835B0u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x2835A8u, 0x2835B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2835B0u;
label_2835b0:
    // 0x2835b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2835b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2835b4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2835b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2835b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2835B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2835B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2835C0u;
}
