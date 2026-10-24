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

// Function: e2d_id13_type01
// Address: 0x2b0e20 - 0x2b106c
void e2d_id13_type01_0x2b0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id13_type01_0x2b0e20");
#endif

    switch (ctx->pc) {
        case 0x2b0e74u: goto label_2b0e74;
        case 0x2b0ef8u: goto label_2b0ef8;
        case 0x2b0f04u: goto label_2b0f04;
        case 0x2b0f28u: goto label_2b0f28;
        case 0x2b0f4cu: goto label_2b0f4c;
        case 0x2b0f58u: goto label_2b0f58;
        case 0x2b0ff4u: goto label_2b0ff4;
        case 0x2b1004u: goto label_2b1004;
        default: break;
    }

    ctx->pc = 0x2b0e20u;

    // 0x2b0e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0e24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b0e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b0e28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b0e2c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2b0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2b0e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0e34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0e38: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b0e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b0e3c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2b0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2b0e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0e44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0e48: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b0e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b0e4c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2b0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2b0e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0e54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0e58: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b0e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b0e5c: 0x3c024294  lui         $v0, 0x4294
    ctx->pc = 0x2b0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17044 << 16));
    // 0x2b0e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0e64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0e68: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b0e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b0e6c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2B0E6Cu;
    SET_GPR_U32(ctx, 31, 0x2B0E74u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2B0E6Cu, 0x2B0E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E74u;
label_2b0e74:
    // 0x2b0e74: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2b0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2b0e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b0e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0e7c: 0x0  nop
    ctx->pc = 0x2b0e7cu;
    // NOP
    // 0x2b0e80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0e84: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b0e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0e8c: 0x0  nop
    ctx->pc = 0x2b0e8cu;
    // NOP
    // 0x2b0e90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b0e94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0e98: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b0e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b0e9c: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x2b0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x2b0ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0ea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0ea8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2b0ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2b0eac: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b0eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0eb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0eb8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b0eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b0ebc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2b0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2b0ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0ec4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0ec8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b0ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b0ecc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b0ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0ed4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0ed8: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b0ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b0edc: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x2b0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x2b0ee0: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x2b0ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x2b0ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0ee8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0eec: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b0eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b0ef0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0EF0u;
    SET_GPR_U32(ctx, 31, 0x2B0EF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0EF0u, 0x2B0EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0EF8u;
label_2b0ef8:
    // 0x2b0ef8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b0ef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b0efc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2B0EFCu;
    SET_GPR_U32(ctx, 31, 0x2B0F04u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2B0EFCu, 0x2B0F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F04u;
label_2b0f04:
    // 0x2b0f04: 0x3c033fb4  lui         $v1, 0x3FB4
    ctx->pc = 0x2b0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16308 << 16));
    // 0x2b0f08: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x2b0f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
    // 0x2b0f0c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2b0f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b0f10: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x2b0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x2b0f14: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x2b0f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x2b0f18: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2b0f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b0f1c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2b0f1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2b0f20: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x2B0F20u;
    SET_GPR_U32(ctx, 31, 0x2B0F28u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2B0F20u, 0x2B0F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F28u;
label_2b0f28:
    // 0x2b0f28: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x2b0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x2b0f2c: 0x3463cccc  ori         $v1, $v1, 0xCCCC
    ctx->pc = 0x2b0f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
    // 0x2b0f30: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2b0f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b0f34: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x2b0f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2b0f38: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b0f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2b0f3c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2b0f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b0f40: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2b0f40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2b0f44: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x2B0F44u;
    SET_GPR_U32(ctx, 31, 0x2B0F4Cu);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x2B0F44u, 0x2B0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F4Cu;
label_2b0f4c:
    // 0x2b0f4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2b0f4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2b0f50: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x2B0F50u;
    SET_GPR_U32(ctx, 31, 0x2B0F58u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x2B0F50u, 0x2B0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F58u;
label_2b0f58:
    // 0x2b0f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0f5c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b0f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b0f60: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x2b0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x2b0f64: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x2b0f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x2b0f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0f6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0f70: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b0f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b0f74: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x2b0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
    // 0x2b0f78: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b0f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b0f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0f80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0f84: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b0f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b0f88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0f8c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b0f90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b0f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b0f94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0f98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0fa0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b0fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b0fa4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0fa8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b0fac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b0facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b0fb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0fb8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b0fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b0fbc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b0fc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b0fc4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0fc8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b0fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b0fcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0fd0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2b0fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2b0fd4: 0x24430032  addiu       $v1, $v0, 0x32
    ctx->pc = 0x2b0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2b0fd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0fdc: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b0fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0fe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0fe8: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b0fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b0fec: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0FECu;
    SET_GPR_U32(ctx, 31, 0x2B0FF4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0FECu, 0x2B0FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FF4u;
label_2b0ff4:
    // 0x2b0ff4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0ff8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b0ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b0ffc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0FFCu;
    SET_GPR_U32(ctx, 31, 0x2B1004u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0FFCu, 0x2B1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1004u;
label_2b1004:
    // 0x2b1004: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b1004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b1008: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b1008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b100c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b100cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1010: 0x0  nop
    ctx->pc = 0x2b1010u;
    // NOP
    // 0x2b1014: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b1014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1018: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b101c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b1020: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b1020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1024: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1028: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b1028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b102c: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b102cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b1030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1038: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b1038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b103c: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2b103cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2b1040: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2b1040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2b1044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1048: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b104c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b104cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b1050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1058: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b1058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b105c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b105cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1060: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b1064: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B106Cu;
}
