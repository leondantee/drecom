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

// Function: e2d_id64_type01
// Address: 0x2ba280 - 0x2ba400
void e2d_id64_type01_0x2ba280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id64_type01_0x2ba280");
#endif

    switch (ctx->pc) {
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba3b0u: goto label_2ba3b0;
        case 0x2ba3c0u: goto label_2ba3c0;
        default: break;
    }

    ctx->pc = 0x2ba280u;

    // 0x2ba280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba284: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ba284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ba288: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ba288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ba28c: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2ba28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2ba290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba298: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ba298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ba29c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ba29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ba2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba2a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba2a8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ba2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ba2ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ba2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba2b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba2b8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ba2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ba2bc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BA2BCu;
    SET_GPR_U32(ctx, 31, 0x2BA2C4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BA2BCu, 0x2BA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2C4u;
label_2ba2c4:
    // 0x2ba2c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ba2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ba2c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ba2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba2cc: 0x0  nop
    ctx->pc = 0x2ba2ccu;
    // NOP
    // 0x2ba2d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ba2d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba2d4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ba2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ba2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba2dc: 0x0  nop
    ctx->pc = 0x2ba2dcu;
    // NOP
    // 0x2ba2e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba2e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba2e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba2e8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2ba2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2ba2ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba2f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ba2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba2f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ba2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ba2f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ba2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba2fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ba300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba304: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ba304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ba308: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba30c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ba30cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba310: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ba310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ba314: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ba314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba31c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ba31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ba320: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ba320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ba324: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ba324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ba328: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba32c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ba32cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ba330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ba330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ba334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ba338: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ba338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba33c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba340: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ba340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba344: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba348: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ba348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba34c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ba34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ba350: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ba350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ba358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba35c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ba35cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ba360: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba364: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ba364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba368: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ba368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ba36c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ba36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba374: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ba374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ba378: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ba378u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ba37c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ba37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ba380: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba384: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ba384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ba388: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ba388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba38c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ba38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ba390: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ba390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba394: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba398: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2ba398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba39c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ba39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba3a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba3a4: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2ba3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba3a8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BA3A8u;
    SET_GPR_U32(ctx, 31, 0x2BA3B0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BA3A8u, 0x2BA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3B0u;
label_2ba3b0:
    // 0x2ba3b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba3b4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2ba3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2ba3b8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BA3B8u;
    SET_GPR_U32(ctx, 31, 0x2BA3C0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BA3B8u, 0x2BA3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3C0u;
label_2ba3c0:
    // 0x2ba3c0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2ba3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2ba3c4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ba3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ba3c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ba3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba3cc: 0x0  nop
    ctx->pc = 0x2ba3ccu;
    // NOP
    // 0x2ba3d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ba3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba3d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba3d8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2ba3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2ba3dc: 0x3c03bb44  lui         $v1, 0xBB44
    ctx->pc = 0x2ba3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47940 << 16));
    // 0x2ba3e0: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2ba3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2ba3e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba3e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba3e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba3ec: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ba3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ba3f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ba3f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba3f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ba3f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA400u;
}
