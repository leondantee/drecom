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

// Function: entry_00282e78
// Address: 0x282e78 - 0x283078
void entry_00282e78_0x282e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282e78_0x282e78");
#endif

    switch (ctx->pc) {
        case 0x282e80u: goto label_282e80;
        case 0x282eb0u: goto label_282eb0;
        case 0x282eccu: goto label_282ecc;
        case 0x282f1cu: goto label_282f1c;
        case 0x282f28u: goto label_282f28;
        case 0x282f34u: goto label_282f34;
        case 0x282f3cu: goto label_282f3c;
        case 0x282f58u: goto label_282f58;
        case 0x282f84u: goto label_282f84;
        case 0x282fe8u: goto label_282fe8;
        case 0x282ff4u: goto label_282ff4;
        case 0x283000u: goto label_283000;
        case 0x283070u: goto label_283070;
        default: break;
    }

    ctx->pc = 0x282e78u;

label_282e78:
    // 0x282e78: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282E78u;
    SET_GPR_U32(ctx, 31, 0x282E80u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282E78u, 0x282E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E80u;
label_282e80:
    // 0x282e80: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x282e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x282e84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282e88: 0x0  nop
    ctx->pc = 0x282e88u;
    // NOP
    // 0x282e8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282e8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282e90: 0x3c02c52c  lui         $v0, 0xC52C
    ctx->pc = 0x282e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50476 << 16));
    // 0x282e94: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x282e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x282e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282e9c: 0x0  nop
    ctx->pc = 0x282e9cu;
    // NOP
    // 0x282ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282ea4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x282ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x282ea8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x282EA8u;
    SET_GPR_U32(ctx, 31, 0x282EB0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x282EA8u, 0x282EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282EB0u;
label_282eb0:
    // 0x282eb0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282eb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282eb8: 0x0  nop
    ctx->pc = 0x282eb8u;
    // NOP
    // 0x282ebc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x282ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282ec0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x282ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x282ec4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282EC4u;
    SET_GPR_U32(ctx, 31, 0x282ECCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282EC4u, 0x282ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282ECCu;
label_282ecc:
    // 0x282ecc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x282eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x282ed0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282ed4: 0x0  nop
    ctx->pc = 0x282ed4u;
    // NOP
    // 0x282ed8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282edc: 0x3c02c607  lui         $v0, 0xC607
    ctx->pc = 0x282edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50695 << 16));
    // 0x282ee0: 0x34422800  ori         $v0, $v0, 0x2800
    ctx->pc = 0x282ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x282ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282ee8: 0x0  nop
    ctx->pc = 0x282ee8u;
    // NOP
    // 0x282eec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282ef0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x282ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x282ef4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x282ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x282ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282efc: 0x0  nop
    ctx->pc = 0x282efcu;
    // NOP
    // 0x282f00: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x282f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x282f04: 0x2404042c  addiu       $a0, $zero, 0x42C
    ctx->pc = 0x282f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1068));
    // 0x282f08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x282f08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282f0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x282f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282f10: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x282f10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282f14: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282F14u;
    SET_GPR_U32(ctx, 31, 0x282F1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282F14u, 0x282F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F1Cu;
label_282f1c:
    // 0x282f1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282f1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282f20: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x282F20u;
    SET_GPR_U32(ctx, 31, 0x282F28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x282F20u, 0x282F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F28u;
label_282f28:
    // 0x282f28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x282f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282f2c: 0xc084964  jal         func_212590
    ctx->pc = 0x282F2Cu;
    SET_GPR_U32(ctx, 31, 0x282F34u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x282F2Cu, 0x282F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F34u;
label_282f34:
    // 0x282f34: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282F34u;
    SET_GPR_U32(ctx, 31, 0x282F3Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282F34u, 0x282F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F3Cu;
label_282f3c:
    // 0x282f3c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x282f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x282f40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282f44: 0x0  nop
    ctx->pc = 0x282f44u;
    // NOP
    // 0x282f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x282f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282f4c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x282f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x282f50: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282F50u;
    SET_GPR_U32(ctx, 31, 0x282F58u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282F50u, 0x282F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F58u;
label_282f58:
    // 0x282f58: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282f5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282f60: 0x0  nop
    ctx->pc = 0x282f60u;
    // NOP
    // 0x282f64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282f64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282f68: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282f70: 0x0  nop
    ctx->pc = 0x282f70u;
    // NOP
    // 0x282f74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282f78: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x282f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x282f7c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282F7Cu;
    SET_GPR_U32(ctx, 31, 0x282F84u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282F7Cu, 0x282F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F84u;
label_282f84:
    // 0x282f84: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x282f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x282f88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282f8c: 0x0  nop
    ctx->pc = 0x282f8cu;
    // NOP
    // 0x282f90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282f94: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282f9c: 0x0  nop
    ctx->pc = 0x282f9cu;
    // NOP
    // 0x282fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282fa4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x282fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x282fa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x282fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x282fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282fb0: 0x0  nop
    ctx->pc = 0x282fb0u;
    // NOP
    // 0x282fb4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x282fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x282fb8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x282fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x282fbc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x282fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x282fc0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x282fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x282fc4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x282fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x282fc8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x282fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x282fcc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x282fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x282fd0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x282fd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282fd4: 0x2404042d  addiu       $a0, $zero, 0x42D
    ctx->pc = 0x282fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1069));
    // 0x282fd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x282fd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282fdc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x282fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282fe0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282FE0u;
    SET_GPR_U32(ctx, 31, 0x282FE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282FE0u, 0x282FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282FE8u;
label_282fe8:
    // 0x282fe8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282fe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282fec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x282FECu;
    SET_GPR_U32(ctx, 31, 0x282FF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x282FECu, 0x282FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282FF4u;
label_282ff4:
    // 0x282ff4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x282ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282ff8: 0xc084964  jal         func_212590
    ctx->pc = 0x282FF8u;
    SET_GPR_U32(ctx, 31, 0x283000u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x282FF8u, 0x283000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283000u;
label_283000:
    // 0x283000: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283004: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x283004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x283008: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x283008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28300c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28300cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283014: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283018: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x283018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x28301c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28301cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283020: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x283020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x283024: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x283024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x283028: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x283028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28302c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283030: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x283030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x283034: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x283034u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x283038: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x283038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28303c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28303cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283040: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x283040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x283044: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x283044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283048: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x283048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28304c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x28304cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x283050: 0x0  nop
    ctx->pc = 0x283050u;
    // NOP
    // 0x283054: 0x0  nop
    ctx->pc = 0x283054u;
    // NOP
    // 0x283058: 0x1010  mfhi        $v0
    ctx->pc = 0x283058u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28305c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x28305cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283060: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x283060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x283064: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x283064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283068: 0xc0870ec  jal         func_21C3B0
    ctx->pc = 0x283068u;
    SET_GPR_U32(ctx, 31, 0x283070u);
    ctx->pc = 0x21C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3B0u, 0x283068u, 0x283070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283070u;
label_283070:
    // 0x283070: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x283070u;
    {
        const bool branch_taken_0x283070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283070) {
            ctx->pc = 0x282E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282e78;
        }
    }
    ctx->pc = 0x283078u;
}
