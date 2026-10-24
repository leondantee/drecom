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

// Function: entry_00269dfc
// Address: 0x269dfc - 0x269fac
void entry_00269dfc_0x269dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00269dfc_0x269dfc");
#endif

    switch (ctx->pc) {
        case 0x269e48u: goto label_269e48;
        case 0x269e98u: goto label_269e98;
        default: break;
    }

    ctx->pc = 0x269dfcu;

    // 0x269dfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e00: 0x3c023f8e  lui         $v0, 0x3F8E
    ctx->pc = 0x269e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16270 << 16));
    // 0x269e04: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x269e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x269e08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269e0c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x269e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269e10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269e14: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x269e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x269e18: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x269e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x269e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x269e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e28: 0xc4ac0028  lwc1        $f12, 0x28($a1)
    ctx->pc = 0x269e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269e2c: 0xc48d002c  lwc1        $f13, 0x2C($a0)
    ctx->pc = 0x269e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x269e30: 0xc46e002c  lwc1        $f14, 0x2C($v1)
    ctx->pc = 0x269e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x269e34: 0xc44f002c  lwc1        $f15, 0x2C($v0)
    ctx->pc = 0x269e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x269e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x269e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269e3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x269e3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269e40: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x269E40u;
    SET_GPR_U32(ctx, 31, 0x269E48u);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x269E40u, 0x269E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E48u;
label_269e48:
    // 0x269e48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269e4c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x269e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x269e50: 0xc4610194  lwc1        $f1, 0x194($v1)
    ctx->pc = 0x269e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269e54: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x269e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x269e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269e5c: 0x0  nop
    ctx->pc = 0x269e5cu;
    // NOP
    // 0x269e60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x269e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269e64: 0xe4600194  swc1        $f0, 0x194($v1)
    ctx->pc = 0x269e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 404), bits); }
    // 0x269e68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269e6c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x269e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x269e70: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x269e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269e74: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x269e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x269e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269e7c: 0x0  nop
    ctx->pc = 0x269e7cu;
    // NOP
    // 0x269e80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x269e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269e84: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x269e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x269e88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269e8c: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x269e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x269e90: 0xc056518  jal         func_159460
    ctx->pc = 0x269E90u;
    SET_GPR_U32(ctx, 31, 0x269E98u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x269E90u, 0x269E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E98u;
label_269e98:
    // 0x269e98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e9c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x269e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x269ea0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x269ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x269ea4: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x269ea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x269ea8: 0x1420007e  bnez        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x269EA8u;
    {
        const bool branch_taken_0x269ea8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x269ea8) {
            ctx->pc = 0x26A0A4u;
            return;
        }
    }
    ctx->pc = 0x269EB0u;
    // 0x269eb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x269eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x269eb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269eb8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x269eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x269ebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269ec0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x269ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x269ec4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269ec8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x269ec8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ecc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x269eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x269ed0: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x269ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x269ed4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x269ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269ed8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269edc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x269edcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ee0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x269ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269ee4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x269ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x269ee8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269eec: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x269eecu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ef0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x269ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x269ef4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x269ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x269ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269efc: 0x0  nop
    ctx->pc = 0x269efcu;
    // NOP
    // 0x269f00: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x269f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x269f04: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x269f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x269f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269f0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269f10: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x269f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x269f14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269f18: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x269f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269f1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269f20: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x269f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x269f24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269f28: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x269f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269f2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269f30: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x269f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x269f34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269f38: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x269f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269f3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269f40: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x269f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x269f44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x269f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x269f48: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x269f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x269f4c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x269f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x269f50: 0xa20010a8  sb          $zero, 0x10A8($s0)
    ctx->pc = 0x269f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x269f54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269f58: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x269f58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x269f5c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x269f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x269f60: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x269f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x269f64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269f68: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x269f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x269f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269f70: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x269f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x269f74: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x269f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x269f78: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x269f78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x269f7c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x269f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x269f80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x269f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x269f84: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x269f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x269f88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269f8c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x269f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x269f90: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x269f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x269f94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x269f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x269f98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x269f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x269f9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269fa0: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x269fa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x269fa4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x269FA4u;
    {
        const bool branch_taken_0x269fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fa4) {
            ctx->pc = 0x26A0A4u;
            return;
        }
    }
    ctx->pc = 0x269FACu;
}
