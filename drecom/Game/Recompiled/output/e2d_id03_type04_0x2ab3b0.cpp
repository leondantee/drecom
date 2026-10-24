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

// Function: e2d_id03_type04
// Address: 0x2ab3b0 - 0x2ab654
void e2d_id03_type04_0x2ab3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type04_0x2ab3b0");
#endif

    switch (ctx->pc) {
        case 0x2ab454u: goto label_2ab454;
        case 0x2ab484u: goto label_2ab484;
        case 0x2ab4a4u: goto label_2ab4a4;
        case 0x2ab4c4u: goto label_2ab4c4;
        default: break;
    }

    ctx->pc = 0x2ab3b0u;

    // 0x2ab3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab3b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ab3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ab3b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ab3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ab3bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ab3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab3c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab3c8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ab3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ab3cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ab3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab3d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab3d8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ab3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ab3dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ab3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab3e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab3e8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ab3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ab3ec: 0x3c024268  lui         $v0, 0x4268
    ctx->pc = 0x2ab3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17000 << 16));
    // 0x2ab3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab3f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab3f8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ab3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ab3fc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ab3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ab400: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ab400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ab404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab408: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab40c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ab40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ab410: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ab410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ab414: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ab414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ab418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab41c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab420: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ab420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ab424: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ab424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ab428: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ab428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ab42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab430: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab434: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ab434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ab438: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ab438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ab43c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ab43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ab440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab444: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab448: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ab448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ab44c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AB44Cu;
    SET_GPR_U32(ctx, 31, 0x2AB454u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AB44Cu, 0x2AB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB454u;
label_2ab454:
    // 0x2ab454: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2ab454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2ab458: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ab458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab45c: 0x0  nop
    ctx->pc = 0x2ab45cu;
    // NOP
    // 0x2ab460: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ab460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab464: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2ab464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2ab468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab46c: 0x0  nop
    ctx->pc = 0x2ab46cu;
    // NOP
    // 0x2ab470: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ab470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ab474: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab478: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2ab478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2ab47c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AB47Cu;
    SET_GPR_U32(ctx, 31, 0x2AB484u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AB47Cu, 0x2AB484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB484u;
label_2ab484:
    // 0x2ab484: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ab484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ab488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ab488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab48c: 0x0  nop
    ctx->pc = 0x2ab48cu;
    // NOP
    // 0x2ab490: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ab490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab494: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab498: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2ab498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2ab49c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AB49Cu;
    SET_GPR_U32(ctx, 31, 0x2AB4A4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AB49Cu, 0x2AB4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4A4u;
label_2ab4a4:
    // 0x2ab4a4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ab4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ab4a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ab4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab4ac: 0x0  nop
    ctx->pc = 0x2ab4acu;
    // NOP
    // 0x2ab4b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ab4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab4b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab4b8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2ab4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2ab4bc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AB4BCu;
    SET_GPR_U32(ctx, 31, 0x2AB4C4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AB4BCu, 0x2AB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4C4u;
label_2ab4c4:
    // 0x2ab4c4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ab4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ab4c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ab4c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab4cc: 0x0  nop
    ctx->pc = 0x2ab4ccu;
    // NOP
    // 0x2ab4d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ab4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab4d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab4d8: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2ab4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2ab4dc: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2ab4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2ab4e0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ab4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ab4e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab4e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab4ec: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2ab4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2ab4f0: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2ab4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2ab4f4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ab4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ab4f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab4fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab500: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x2ab500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x2ab504: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2ab504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2ab508: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ab508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ab50c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab510: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab514: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2ab514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2ab518: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab51c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab51cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab520: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab524: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab528: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab52c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab530: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ab530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ab534: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab538: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab53c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab540: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab544: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab548: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ab548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ab54c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ab54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ab550: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab554: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab558: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ab558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ab55c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ab55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab560: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ab560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ab564: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ab564u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ab568: 0x0  nop
    ctx->pc = 0x2ab568u;
    // NOP
    // 0x2ab56c: 0x0  nop
    ctx->pc = 0x2ab56cu;
    // NOP
    // 0x2ab570: 0x1810  mfhi        $v1
    ctx->pc = 0x2ab570u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ab574: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ab574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab578: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab57c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ab57cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ab580: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab584: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab588: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab58c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab594: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab598: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ab598u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ab59c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab5a0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab5a4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab5a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab5ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab5b0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ab5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ab5b4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ab5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ab5b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab5bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab5c0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ab5c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ab5c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab5c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ab5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ab5cc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ab5ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab5d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ab5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab5d4: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ab5d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ab5d8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ab5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ab5dc: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ab5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ab5e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab5e4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab5e8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab5e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab5ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab5f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab5f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab5f8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ab5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ab5fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab600: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab604: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab608: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab60c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab610: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ab610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ab614: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ab614u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ab618: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab61c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab620: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ab620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ab624: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab628: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ab628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ab62c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ab62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ab630: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ab630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab634: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ab634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab638: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ab638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ab63c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ab63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ab640: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ab640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ab644: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ab644u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab648: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab64c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB654u;
}
