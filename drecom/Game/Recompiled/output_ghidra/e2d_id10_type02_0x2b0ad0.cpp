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

// Function: e2d_id10_type02
// Address: 0x2b0ad0 - 0x2b0c68
void e2d_id10_type02_0x2b0ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id10_type02_0x2b0ad0");
#endif

    switch (ctx->pc) {
        case 0x2b0af4u: goto label_2b0af4;
        case 0x2b0c18u: goto label_2b0c18;
        case 0x2b0c28u: goto label_2b0c28;
        default: break;
    }

    ctx->pc = 0x2b0ad0u;

    // 0x2b0ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0ad4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b0ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b0ad8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b0adc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b0ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0ae4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0ae8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b0ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b0aec: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2B0AECu;
    SET_GPR_U32(ctx, 31, 0x2B0AF4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2B0AECu, 0x2B0AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AF4u;
label_2b0af4:
    // 0x2b0af4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2b0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2b0af8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b0af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0afc: 0x0  nop
    ctx->pc = 0x2b0afcu;
    // NOP
    // 0x2b0b00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0b00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0b04: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2b0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2b0b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0b0c: 0x0  nop
    ctx->pc = 0x2b0b0cu;
    // NOP
    // 0x2b0b10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b0b14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0b18: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b0b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b0b1c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2b0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2b0b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0b24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0b28: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2b0b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2b0b2c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b0b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0b34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0b38: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b0b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b0b3c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2b0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2b0b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0b44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0b48: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b0b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b0b4c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b0b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0b54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0b58: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b0b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b0b5c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2b0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2b0b60: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2b0b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2b0b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0b68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0b6c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b0b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b0b70: 0x3c023f5e  lui         $v0, 0x3F5E
    ctx->pc = 0x2b0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16222 << 16));
    // 0x2b0b74: 0x3442b852  ori         $v0, $v0, 0xB852
    ctx->pc = 0x2b0b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47186);
    // 0x2b0b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0b7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0b80: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b0b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b0b84: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2b0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2b0b88: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2b0b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2b0b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0b90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0b94: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b0b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b0b98: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x2b0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
    // 0x2b0b9c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b0b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b0ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0ba4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0ba8: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b0ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b0bac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0bb0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b0bb4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b0bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b0bb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0bc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0bc4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b0bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b0bc8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0bcc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b0bd0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b0bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b0bd4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0bdc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b0bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b0be0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b0be4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b0be8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0bec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b0becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b0bf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0bf4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2b0bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2b0bf8: 0x24430032  addiu       $v1, $v0, 0x32
    ctx->pc = 0x2b0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2b0bfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0c00: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b0c04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0c08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0c0c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b0c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b0c10: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0C10u;
    SET_GPR_U32(ctx, 31, 0x2B0C18u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0C10u, 0x2B0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C18u;
label_2b0c18:
    // 0x2b0c18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0c1c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b0c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b0c20: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0C20u;
    SET_GPR_U32(ctx, 31, 0x2B0C28u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0C20u, 0x2B0C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C28u;
label_2b0c28:
    // 0x2b0c28: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b0c2c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b0c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b0c30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b0c30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0c34: 0x0  nop
    ctx->pc = 0x2b0c34u;
    // NOP
    // 0x2b0c38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b0c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0c3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0c40: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b0c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b0c44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0c48: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b0c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0c4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0c50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0c54: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b0c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b0c58: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b0c58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0c5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b0c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b0c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0C68u;
}
