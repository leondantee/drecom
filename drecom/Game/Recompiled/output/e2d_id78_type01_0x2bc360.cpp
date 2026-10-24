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

// Function: e2d_id78_type01
// Address: 0x2bc360 - 0x2bc4e4
void e2d_id78_type01_0x2bc360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id78_type01_0x2bc360");
#endif

    switch (ctx->pc) {
        case 0x2bc3a4u: goto label_2bc3a4;
        case 0x2bc494u: goto label_2bc494;
        case 0x2bc4a4u: goto label_2bc4a4;
        default: break;
    }

    ctx->pc = 0x2bc360u;

    // 0x2bc360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc364: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bc364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bc368: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bc368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bc36c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2bc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2bc370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc374: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc378: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bc378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bc37c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bc380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc384: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc388: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bc388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bc38c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bc390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc394: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc398: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bc398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bc39c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BC39Cu;
    SET_GPR_U32(ctx, 31, 0x2BC3A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BC39Cu, 0x2BC3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3A4u;
label_2bc3a4:
    // 0x2bc3a4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2bc3a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bc3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc3ac: 0x0  nop
    ctx->pc = 0x2bc3acu;
    // NOP
    // 0x2bc3b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc3b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc3b4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2bc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2bc3b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc3bc: 0x0  nop
    ctx->pc = 0x2bc3bcu;
    // NOP
    // 0x2bc3c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc3c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc3c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc3c8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bc3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bc3cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc3d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc3d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc3d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc3e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc3e4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bc3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bc3e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc3ec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc3f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc3f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc3f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc3fc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bc3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bc400: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bc400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bc404: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bc404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bc408: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc40c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bc40cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc414: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bc414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bc418: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2bc418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2bc41c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bc41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc420: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc424: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bc424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc428: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc42c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc42cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc430: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc434: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc43c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc440: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bc440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bc444: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc448: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc448u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc44c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc450: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc458: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bc458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bc45c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bc460: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bc460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bc464: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc468: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bc468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc46c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc470: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bc470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bc474: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bc474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc478: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc47c: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2bc47cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc480: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bc480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc488: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bc488u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc48c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BC48Cu;
    SET_GPR_U32(ctx, 31, 0x2BC494u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BC48Cu, 0x2BC494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC494u;
label_2bc494:
    // 0x2bc494: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc498: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bc498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bc49c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BC49Cu;
    SET_GPR_U32(ctx, 31, 0x2BC4A4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BC49Cu, 0x2BC4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4A4u;
label_2bc4a4:
    // 0x2bc4a4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2bc4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2bc4a8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bc4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bc4ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc4b0: 0x0  nop
    ctx->pc = 0x2bc4b0u;
    // NOP
    // 0x2bc4b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bc4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc4b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc4bc: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2bc4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2bc4c0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2bc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2bc4c4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bc4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bc4c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc4c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc4cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc4d0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bc4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bc4d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bc4d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc4d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bc4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC4E4u;
}
