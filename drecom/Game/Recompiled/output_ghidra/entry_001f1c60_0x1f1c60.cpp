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

// Function: entry_001f1c60
// Address: 0x1f1c60 - 0x1f1ddc
void entry_001f1c60_0x1f1c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1c60_0x1f1c60");
#endif

    switch (ctx->pc) {
        case 0x1f1cc8u: goto label_1f1cc8;
        case 0x1f1d00u: goto label_1f1d00;
        case 0x1f1d20u: goto label_1f1d20;
        case 0x1f1d38u: goto label_1f1d38;
        case 0x1f1d48u: goto label_1f1d48;
        case 0x1f1d88u: goto label_1f1d88;
        case 0x1f1dd8u: goto label_1f1dd8;
        default: break;
    }

    ctx->pc = 0x1f1c60u;

    // 0x1f1c60: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1c64: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f1c64u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1c68: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f1c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1c70: 0x0  nop
    ctx->pc = 0x1f1c70u;
    // NOP
    // 0x1f1c74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1c78: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1c7c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x1f1c80: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c84: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x1f1c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c88: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c8c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1f1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1f1c90: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x1f1c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f1c94: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x1f1c94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f1c98: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x1f1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x1f1c9c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f1c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f1ca0: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x1f1ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f1ca4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f1ca8: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x1f1ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1cac: 0xc4ad00d0  lwc1        $f13, 0xD0($a1)
    ctx->pc = 0x1f1cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f1cb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f1cb4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f1cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f1cb8: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x1f1cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1f1cbc: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x1f1cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1f1cc0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x1F1CC0u;
    SET_GPR_U32(ctx, 31, 0x1F1CC8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x1F1CC0u, 0x1F1CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CC8u;
label_1f1cc8:
    // 0x1f1cc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ccc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f1cccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1cd0: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x1f1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x1f1cd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f1cd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1cd8: 0x0  nop
    ctx->pc = 0x1f1cd8u;
    // NOP
    // 0x1f1cdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f1cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f1ce0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ce4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x1f1ce8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1cec: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1f1cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1cf0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1f1cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1cf4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1cf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1cf8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1CF8u;
    SET_GPR_U32(ctx, 31, 0x1F1D00u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1CF8u, 0x1F1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D00u;
label_1f1d00:
    // 0x1f1d00: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d04: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f1d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1f1d08: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d0c: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x1f1d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1d10: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1f1d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1d14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1d14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1d18: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1D18u;
    SET_GPR_U32(ctx, 31, 0x1F1D20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1D18u, 0x1F1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D20u;
label_1f1d20:
    // 0x1f1d20: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d24: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x1f1d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x1f1d28: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f1d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f1d30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F1D30u;
    SET_GPR_U32(ctx, 31, 0x1F1D38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F1D30u, 0x1F1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D38u;
label_1f1d38:
    // 0x1f1d38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1d38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1d3c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d40: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F1D40u;
    SET_GPR_U32(ctx, 31, 0x1F1D48u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F1D40u, 0x1F1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D48u;
label_1f1d48:
    // 0x1f1d48: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1d48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1d4c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d50: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f1d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f1d54: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F1D54u;
    {
        const bool branch_taken_0x1f1d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d54) {
            ctx->pc = 0x1F1DDCu;
            return;
        }
    }
    ctx->pc = 0x1F1D5Cu;
    // 0x1f1d5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f1d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1d60: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d64: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f1d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f1d68: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d6c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d70: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f1d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f1d74: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x1f1d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x1f1d78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f1d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1d7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f1d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f1d80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F1D80u;
    SET_GPR_U32(ctx, 31, 0x1F1D88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F1D80u, 0x1F1D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D88u;
label_1f1d88:
    // 0x1f1d88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1d88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1d8c: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x1f1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x1f1d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1d94: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1d9c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f1d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f1da0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1f1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1f1da4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1da8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1dac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1db0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f1db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f1db4: 0x3c0346ea  lui         $v1, 0x46EA
    ctx->pc = 0x1f1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18154 << 16));
    // 0x1f1db8: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x1f1db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x1f1dbc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1dc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1dc4: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x1f1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x1f1dc8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f1dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f1dcc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1dccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1dd0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1DD0u;
    SET_GPR_U32(ctx, 31, 0x1F1DD8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1DD0u, 0x1F1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DD8u;
label_1f1dd8:
    // 0x1f1dd8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1dd8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1f1ddcu;
}
