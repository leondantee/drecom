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

// Function: Em05_R1_br_warp
// Address: 0x2089d0 - 0x208aa8
void Em05_R1_br_warp_0x2089d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_br_warp_0x2089d0");
#endif

    switch (ctx->pc) {
        case 0x208a98u: goto label_208a98;
        default: break;
    }

    ctx->pc = 0x2089d0u;

    // 0x2089d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2089d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2089d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2089d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2089d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2089d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2089dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2089dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2089e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2089e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2089e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2089e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2089e8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2089e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2089ec: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2089ECu;
    {
        const bool branch_taken_0x2089ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2089ec) {
            ctx->pc = 0x208A98u;
            goto label_208a98;
        }
    }
    ctx->pc = 0x2089F4u;
    // 0x2089f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2089f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2089f8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2089f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2089fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2089fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208a00: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x208a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x208a04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208a08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208a0c: 0xe42092f0  swc1        $f0, -0x6D10($at)
    ctx->pc = 0x208a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F0u, _value); } while (0); }
    // 0x208a10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x208a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208a14: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x208a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x208a18: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x208a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208a1c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x208a1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x208a20: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x208a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208a28: 0x0  nop
    ctx->pc = 0x208a28u;
    // NOP
    // 0x208a2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x208a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x208a30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208a34: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x208a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x208a38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208a38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208a3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208a40: 0xe42092f8  swc1        $f0, -0x6D08($at)
    ctx->pc = 0x208a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F8u, _value); } while (0); }
    // 0x208a44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x208a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x208a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208a4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208a50: 0xe42092fc  swc1        $f0, -0x6D04($at)
    ctx->pc = 0x208a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192FCu, _value); } while (0); }
    // 0x208a54: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x208a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x208a58: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x208a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x208a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208a60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208a64: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x208a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x208a68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x208a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208a6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208a70: 0xa4229304  sh          $v0, -0x6CFC($at)
    ctx->pc = 0x208a70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x208a74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208a78: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x208a78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x208a7c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208a80: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x208a80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x208a84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x208a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208a88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208a8c: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x208a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x208a90: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x208A90u;
    SET_GPR_U32(ctx, 31, 0x208A98u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x208A90u, 0x208A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A98u;
label_208a98:
    // 0x208a98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x208a98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208a9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x208a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x208aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x208AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208AA8u;
}
