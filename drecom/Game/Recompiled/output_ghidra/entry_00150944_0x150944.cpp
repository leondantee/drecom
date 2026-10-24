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

// Function: entry_00150944
// Address: 0x150944 - 0x150a88
void entry_00150944_0x150944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150944_0x150944");
#endif

    switch (ctx->pc) {
        case 0x15096cu: goto label_15096c;
        case 0x15098cu: goto label_15098c;
        case 0x1509acu: goto label_1509ac;
        case 0x1509c0u: goto label_1509c0;
        case 0x1509fcu: goto label_1509fc;
        case 0x150a1cu: goto label_150a1c;
        case 0x150a3cu: goto label_150a3c;
        case 0x150a50u: goto label_150a50;
        default: break;
    }

    ctx->pc = 0x150944u;

    // 0x150944: 0x152140  sll         $a0, $s5, 5
    ctx->pc = 0x150944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x150948: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15094c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x15094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x150950: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x150950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150954: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x150954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x150958: 0x24471880  addiu       $a3, $v0, 0x1880
    ctx->pc = 0x150958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6272));
    // 0x15095c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x15095cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x150960: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x150960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150964: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x150964u;
    SET_GPR_U32(ctx, 31, 0x15096Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15096Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15096Cu) { return; }
    ctx->pc = 0x15096Cu;
label_15096c:
    // 0x15096c: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x15096cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x150970: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150978: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15097c: 0x24451880  addiu       $a1, $v0, 0x1880
    ctx->pc = 0x15097cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6272));
    // 0x150980: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x150980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150984: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x150984u;
    SET_GPR_U32(ctx, 31, 0x15098Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15098Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15098Cu) { return; }
    ctx->pc = 0x15098Cu;
label_15098c:
    // 0x15098c: 0x1419c0  sll         $v1, $s4, 7
    ctx->pc = 0x15098cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x150990: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150998: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15099c: 0x24451600  addiu       $a1, $v0, 0x1600
    ctx->pc = 0x15099cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1509a0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1509a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1509a4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1509A4u;
    SET_GPR_U32(ctx, 31, 0x1509ACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1509A4u, 0x1509ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509ACu;
label_1509ac:
    // 0x1509ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1509acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1509b0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1509b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1509b4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1509b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1509b8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1509B8u;
    SET_GPR_U32(ctx, 31, 0x1509C0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1509B8u, 0x1509C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509C0u;
label_1509c0:
    // 0x1509c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1509c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1509c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1509c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1509c8: 0x0  nop
    ctx->pc = 0x1509c8u;
    // NOP
    // 0x1509cc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1509ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1509d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1509d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1509d4: 0x153140  sll         $a2, $s5, 5
    ctx->pc = 0x1509d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x1509d8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1509d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1509dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1509dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1509e0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1509e4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1509e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1509e8: 0x24431890  addiu       $v1, $v0, 0x1890
    ctx->pc = 0x1509e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6288));
    // 0x1509ec: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1509ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1509f0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x1509f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1509f4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1509F4u;
    SET_GPR_U32(ctx, 31, 0x1509FCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1509FCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1509FCu) { return; }
    ctx->pc = 0x1509FCu;
label_1509fc:
    // 0x1509fc: 0x143140  sll         $a2, $s4, 5
    ctx->pc = 0x1509fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x150a00: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x150a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150a04: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x150a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x150a08: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x150a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150a0c: 0x24451890  addiu       $a1, $v0, 0x1890
    ctx->pc = 0x150a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6288));
    // 0x150a10: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x150a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150a14: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x150A14u;
    SET_GPR_U32(ctx, 31, 0x150A1Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x150A1Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150A1Cu) { return; }
    ctx->pc = 0x150A1Cu;
label_150a1c:
    // 0x150a1c: 0x1419c0  sll         $v1, $s4, 7
    ctx->pc = 0x150a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x150a20: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150a28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150a28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150a2c: 0x24451610  addiu       $a1, $v0, 0x1610
    ctx->pc = 0x150a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x150a30: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x150a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150a34: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x150A34u;
    SET_GPR_U32(ctx, 31, 0x150A3Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x150A34u, 0x150A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A3Cu;
label_150a3c:
    // 0x150a3c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150a40: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x150a40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150a44: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x150a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150a48: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x150A48u;
    SET_GPR_U32(ctx, 31, 0x150A50u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x150A48u, 0x150A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A50u;
label_150a50:
    // 0x150a50: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x150a54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150a54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150a58: 0x0  nop
    ctx->pc = 0x150a58u;
    // NOP
    // 0x150a5c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x150a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x150a60: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x150a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x150a64: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x150a64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x150a68: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x150a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150a6c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x150a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150a74: 0x0  nop
    ctx->pc = 0x150a74u;
    // NOP
    // 0x150a78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150a7c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x150a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x150a80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x150a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x150a84: 0x0  nop
    ctx->pc = 0x150a84u;
    // NOP
    ctx->pc = 0x150a88u;
}
