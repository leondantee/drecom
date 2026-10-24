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

// Function: R110_event00
// Address: 0x277a00 - 0x277b98
void R110_event00_0x277a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R110_event00_0x277a00");
#endif

    switch (ctx->pc) {
        case 0x277a8cu: goto label_277a8c;
        case 0x277a98u: goto label_277a98;
        case 0x277aa4u: goto label_277aa4;
        case 0x277ab8u: goto label_277ab8;
        case 0x277afcu: goto label_277afc;
        case 0x277b04u: goto label_277b04;
        case 0x277b80u: goto label_277b80;
        default: break;
    }

    ctx->pc = 0x277a00u;

    // 0x277a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277a04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x277a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x277a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x277a10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x277a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x277a14: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x277a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x277a18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x277a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277a1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277a20: 0xa022d731  sb          $v0, -0x28CF($at)
    ctx->pc = 0x277a20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD731u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD731u, _value); } while (0);
    // 0x277a24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277a28: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x277a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x277a2c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x277a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x277a30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x277a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x277a34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277a38: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x277a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x277a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277a40: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x277a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x277a44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x277a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x277a48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x277a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x277a4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277a50: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x277a50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x277a54: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x277a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x277a58: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x277a58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x277a5c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x277a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x277a60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x277a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x277a64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x277a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x277a68: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x277a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x277a6c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x277a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x277a70: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x277a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x277a74: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x277a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x277a78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x277a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x277a7c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x277a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x277a80: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x277a80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x277a84: 0xc0a1244  jal         func_284910
    ctx->pc = 0x277A84u;
    SET_GPR_U32(ctx, 31, 0x277A8Cu);
    ctx->pc = 0x284910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284910u, 0x277A84u, 0x277A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A8Cu;
label_277a8c:
    // 0x277a8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277a90: 0xc0a1120  jal         func_284480
    ctx->pc = 0x277A90u;
    SET_GPR_U32(ctx, 31, 0x277A98u);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x277A90u, 0x277A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A98u;
label_277a98:
    // 0x277a98: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x277a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x277a9c: 0xc084964  jal         func_212590
    ctx->pc = 0x277A9Cu;
    SET_GPR_U32(ctx, 31, 0x277AA4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x277A9Cu, 0x277AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AA4u;
label_277aa4:
    // 0x277aa4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277aa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277aa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277aac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x277aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277ab0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x277AB0u;
    SET_GPR_U32(ctx, 31, 0x277AB8u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x277AB0u, 0x277AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AB8u;
label_277ab8:
    // 0x277ab8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277abc: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x277abcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x277ac0: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x277ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x277ac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x277ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x277ac8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x277ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x277acc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277ad0: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x277ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x277ad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277ad8: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x277ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x277adc: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x277adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x277ae0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x277ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x277ae4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x277ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x277ae8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277aec: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x277aecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x277af0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277af4: 0xc084964  jal         func_212590
    ctx->pc = 0x277AF4u;
    SET_GPR_U32(ctx, 31, 0x277AFCu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x277AF4u, 0x277AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AFCu;
label_277afc:
    // 0x277afc: 0xc0a128c  jal         func_284A30
    ctx->pc = 0x277AFCu;
    SET_GPR_U32(ctx, 31, 0x277B04u);
    ctx->pc = 0x284A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A30u, 0x277AFCu, 0x277B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B04u;
label_277b04:
    // 0x277b04: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x277b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x277b08: 0x245195a0  addiu       $s1, $v0, -0x6A60
    ctx->pc = 0x277b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x277b0c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x277b0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x277b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277b14: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x277b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x277b18: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x277b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x277b1c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x277b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x277b20: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x277b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x277b24: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x277b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x277b28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x277b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x277b2c: 0x8c22dbc8  lw          $v0, -0x2438($at)
    ctx->pc = 0x277b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x277b30: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x277b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x277b34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x277b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x277b38: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x277b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x277b3c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x277b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x277b40: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x277b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x277b44: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x277b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x277b48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277b4c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x277b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x277b50: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x277b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x277b54: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x277b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x277b58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277b5c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x277b5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x277b60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x277b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x277b64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277b68: 0xa022d7d1  sb          $v0, -0x282F($at)
    ctx->pc = 0x277b68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD7D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD7D1u, _value); } while (0);
    // 0x277b6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x277b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x277b70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277b74: 0xa022d731  sb          $v0, -0x28CF($at)
    ctx->pc = 0x277b74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD731u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD731u, _value); } while (0);
    // 0x277b78: 0xc084934  jal         func_2124D0
    ctx->pc = 0x277B78u;
    SET_GPR_U32(ctx, 31, 0x277B80u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x277B78u, 0x277B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B80u;
label_277b80:
    // 0x277b80: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x277b80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277b8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x277b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x277b90: 0x3e00008  jr          $ra
    ctx->pc = 0x277B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277B98u;
}
