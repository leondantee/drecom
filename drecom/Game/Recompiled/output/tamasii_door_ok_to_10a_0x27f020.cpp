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

// Function: tamasii_door_ok_to_10a
// Address: 0x27f020 - 0x27f184
void tamasii_door_ok_to_10a_0x27f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tamasii_door_ok_to_10a_0x27f020");
#endif

    switch (ctx->pc) {
        case 0x27f110u: goto label_27f110;
        case 0x27f11cu: goto label_27f11c;
        case 0x27f168u: goto label_27f168;
        case 0x27f170u: goto label_27f170;
        default: break;
    }

    ctx->pc = 0x27f020u;

    // 0x27f020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f024: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27f028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f02c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f030: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27f030u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27f034: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27f034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27f038: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27f038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27f03c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f040: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27f040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27f044: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f048: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27f048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27f04c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x27f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x27f050: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27f050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27f054: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f058: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27f058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27f05c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f060: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27f060u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27f064: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27f068: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27f06c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f070: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27f070u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27f074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f078: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27f078u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27f07c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x27f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x27f080: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27f080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27f084: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f088: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27f088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27f08c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f090: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x27f090u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27f094: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27f094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27f098: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f09c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27f09cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27f0a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f0a4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27f0a8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x27f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x27f0ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27f0b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f0b4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27f0b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27f0b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f0bc: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27f0c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x27f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x27f0c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27f0c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f0cc: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x27f0ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x27f0d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f0d4: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x27f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27f0d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27f0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27f0dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f0e0: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27f0e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27f0e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f0e8: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x27f0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27f0ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27f0f0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27f0f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27f0f8: 0x2404040e  addiu       $a0, $zero, 0x40E
    ctx->pc = 0x27f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x27f0fc: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x27f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x27f100: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27f100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27f104: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27f104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27f108: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27F108u;
    SET_GPR_U32(ctx, 31, 0x27F110u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27F108u, 0x27F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F110u;
label_27f110:
    // 0x27f110: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x27f110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x27f114: 0xc084964  jal         func_212590
    ctx->pc = 0x27F114u;
    SET_GPR_U32(ctx, 31, 0x27F11Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F114u, 0x27F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F11Cu;
label_27f11c:
    // 0x27f11c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f120: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27f120u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27f124: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27f128: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x27f128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x27f12c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27f12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27f130: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f134: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27f134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27f138: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f13c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27f140: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x27f140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x27f144: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27f144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27f148: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27f148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27f14c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f150: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27f150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27f154: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f158: 0xa020d5f1  sb          $zero, -0x2A0F($at)
    ctx->pc = 0x27f158u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x27f15c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27f160: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x27F160u;
    SET_GPR_U32(ctx, 31, 0x27F168u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x27F160u, 0x27F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F168u;
label_27f168:
    // 0x27f168: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27F168u;
    SET_GPR_U32(ctx, 31, 0x27F170u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27F168u, 0x27F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F170u;
label_27f170:
    // 0x27f170: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27f170u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f178: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27f178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f17c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F184u;
}
