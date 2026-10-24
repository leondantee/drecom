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

// Function: oldkey_door_ok_to_10e
// Address: 0x27eea0 - 0x27efd0
void oldkey_door_ok_to_10e_0x27eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("oldkey_door_ok_to_10e_0x27eea0");
#endif

    switch (ctx->pc) {
        case 0x27ef60u: goto label_27ef60;
        case 0x27ef6cu: goto label_27ef6c;
        case 0x27ef84u: goto label_27ef84;
        case 0x27ef90u: goto label_27ef90;
        case 0x27efc0u: goto label_27efc0;
        default: break;
    }

    ctx->pc = 0x27eea0u;

    // 0x27eea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27eea4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x27eea8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27eea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27eeac: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27eeb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27eeb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27eeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27eeb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27eeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27eebc: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27eebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27eec0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27eec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27eec4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27eec8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x27eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x27eecc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27eed0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27eed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27eed4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27eed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27eed8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27eed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27eedc: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27eee0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27eee4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27eee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27eee8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27eee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27eeec: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27eeecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27eef0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27eef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27eef4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27eef8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x27eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x27eefc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27ef00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ef00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ef04: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27ef04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27ef08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ef08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ef0c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x27ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27ef10: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27ef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27ef14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ef14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ef18: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27ef18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27ef1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ef1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ef20: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27ef24: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x27ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x27ef28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27ef2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ef2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ef30: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27ef30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27ef34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ef34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ef38: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27ef3c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x27ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x27ef40: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27ef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27ef44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ef44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ef48: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x27ef48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x27ef4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ef50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ef54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27ef54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ef58: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x27EF58u;
    SET_GPR_U32(ctx, 31, 0x27EF60u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x27EF58u, 0x27EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF60u;
label_27ef60:
    // 0x27ef60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ef64: 0xc084964  jal         func_212590
    ctx->pc = 0x27EF64u;
    SET_GPR_U32(ctx, 31, 0x27EF6Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27EF64u, 0x27EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF6Cu;
label_27ef6c:
    // 0x27ef6c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x27ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x27ef70: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x27ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x27ef74: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27ef74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ef78: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27ef78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ef7c: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27EF7Cu;
    SET_GPR_U32(ctx, 31, 0x27EF84u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27EF7Cu, 0x27EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF84u;
label_27ef84:
    // 0x27ef84: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x27ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x27ef88: 0xc084964  jal         func_212590
    ctx->pc = 0x27EF88u;
    SET_GPR_U32(ctx, 31, 0x27EF90u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27EF88u, 0x27EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF90u;
label_27ef90:
    // 0x27ef90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ef90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ef94: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27ef98: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x27ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x27ef9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27ef9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27efa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27efa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27efa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27efa8: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27efa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27efac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27efacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27efb0: 0xa020d691  sb          $zero, -0x296F($at)
    ctx->pc = 0x27efb0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
    // 0x27efb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27efb8: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x27EFB8u;
    SET_GPR_U32(ctx, 31, 0x27EFC0u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x27EFB8u, 0x27EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFC0u;
label_27efc0:
    // 0x27efc0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27efc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27efc4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27efc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27efc8: 0x3e00008  jr          $ra
    ctx->pc = 0x27EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EFD0u;
}
