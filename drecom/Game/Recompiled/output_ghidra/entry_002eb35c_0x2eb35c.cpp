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

// Function: entry_002eb35c
// Address: 0x2eb35c - 0x2eb5c8
void entry_002eb35c_0x2eb35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb35c_0x2eb35c");
#endif

    switch (ctx->pc) {
        case 0x2eb39cu: goto label_2eb39c;
        case 0x2eb3a8u: goto label_2eb3a8;
        case 0x2eb408u: goto label_2eb408;
        case 0x2eb42cu: goto label_2eb42c;
        case 0x2eb450u: goto label_2eb450;
        case 0x2eb474u: goto label_2eb474;
        case 0x2eb49cu: goto label_2eb49c;
        case 0x2eb4ccu: goto label_2eb4cc;
        case 0x2eb590u: goto label_2eb590;
        case 0x2eb5b0u: goto label_2eb5b0;
        default: break;
    }

    ctx->pc = 0x2eb35cu;

    // 0x2eb35c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2eb35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb360: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2eb360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2eb364: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2eb364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2eb368: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2eb368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2eb36c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb370: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2eb370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eb374: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eb374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eb378: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2eb378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2eb37c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eb37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eb380: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eb380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eb384: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2eb384u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb388: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x2eb388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x2eb38c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2eb38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eb390: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2eb390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2eb394: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EB394u;
    SET_GPR_U32(ctx, 31, 0x2EB39Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EB394u, 0x2EB39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB39Cu;
label_2eb39c:
    // 0x2eb39c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2eb39cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb3a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EB3A0u;
    SET_GPR_U32(ctx, 31, 0x2EB3A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EB3A0u, 0x2EB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3A8u;
label_2eb3a8:
    // 0x2eb3a8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2eb3a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb3ac: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eb3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eb3b0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eb3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eb3b4: 0x12030084  beq         $s0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2EB3B4u;
    {
        const bool branch_taken_0x2eb3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb3b4) {
            ctx->pc = 0x2EB5C8u;
            return;
        }
    }
    ctx->pc = 0x2EB3BCu;
    // 0x2eb3bc: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x2eb3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x2eb3c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2eb3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eb3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb3c8: 0x0  nop
    ctx->pc = 0x2eb3c8u;
    // NOP
    // 0x2eb3cc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eb3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eb3d0: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x2eb3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x2eb3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb3d8: 0x0  nop
    ctx->pc = 0x2eb3d8u;
    // NOP
    // 0x2eb3dc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eb3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eb3e0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2eb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2eb3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb3e8: 0x0  nop
    ctx->pc = 0x2eb3e8u;
    // NOP
    // 0x2eb3ec: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eb3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eb3f0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2eb3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2eb3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb3f8: 0x0  nop
    ctx->pc = 0x2eb3f8u;
    // NOP
    // 0x2eb3fc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eb3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eb400: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB400u;
    SET_GPR_U32(ctx, 31, 0x2EB408u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB400u, 0x2EB408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB408u;
label_2eb408:
    // 0x2eb408: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb40c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb410: 0x0  nop
    ctx->pc = 0x2eb410u;
    // NOP
    // 0x2eb414: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb418: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eb418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb41c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb41cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb420: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eb420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eb424: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB424u;
    SET_GPR_U32(ctx, 31, 0x2EB42Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB424u, 0x2EB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB42Cu;
label_2eb42c:
    // 0x2eb42c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb430: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb434: 0x0  nop
    ctx->pc = 0x2eb434u;
    // NOP
    // 0x2eb438: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb43c: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eb43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb440: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb444: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eb444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eb448: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB448u;
    SET_GPR_U32(ctx, 31, 0x2EB450u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB448u, 0x2EB450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB450u;
label_2eb450:
    // 0x2eb450: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb454: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb458: 0x0  nop
    ctx->pc = 0x2eb458u;
    // NOP
    // 0x2eb45c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb45cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb460: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2eb460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb464: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb468: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eb468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eb46c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB46Cu;
    SET_GPR_U32(ctx, 31, 0x2EB474u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB46Cu, 0x2EB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB474u;
label_2eb474:
    // 0x2eb474: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2eb474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2eb478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb47c: 0x0  nop
    ctx->pc = 0x2eb47cu;
    // NOP
    // 0x2eb480: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb484: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eb484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb48c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eb48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eb490: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2eb490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb494: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EB494u;
    SET_GPR_U32(ctx, 31, 0x2EB49Cu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EB494u, 0x2EB49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB49Cu;
label_2eb49c:
    // 0x2eb49c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eb4a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb4a4: 0x0  nop
    ctx->pc = 0x2eb4a4u;
    // NOP
    // 0x2eb4a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb4ac: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2eb4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2eb4b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eb4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eb4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb4b8: 0x0  nop
    ctx->pc = 0x2eb4b8u;
    // NOP
    // 0x2eb4bc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2eb4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2eb4c0: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2eb4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb4c4: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EB4C4u;
    SET_GPR_U32(ctx, 31, 0x2EB4CCu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EB4C4u, 0x2EB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4CCu;
label_2eb4cc:
    // 0x2eb4cc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eb4d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb4d4: 0x0  nop
    ctx->pc = 0x2eb4d4u;
    // NOP
    // 0x2eb4d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb4dc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2eb4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2eb4e0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2eb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2eb4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb4e8: 0x0  nop
    ctx->pc = 0x2eb4e8u;
    // NOP
    // 0x2eb4ec: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2eb4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2eb4f0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2eb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2eb4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb4f8: 0x0  nop
    ctx->pc = 0x2eb4f8u;
    // NOP
    // 0x2eb4fc: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2eb4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2eb500: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2eb500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2eb504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb508: 0x0  nop
    ctx->pc = 0x2eb508u;
    // NOP
    // 0x2eb50c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2eb50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2eb510: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2eb510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2eb514: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2eb514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2eb518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb51c: 0x0  nop
    ctx->pc = 0x2eb51cu;
    // NOP
    // 0x2eb520: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eb520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eb524: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2eb524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2eb528: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2eb528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2eb52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb530: 0x0  nop
    ctx->pc = 0x2eb530u;
    // NOP
    // 0x2eb534: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2eb534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2eb538: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x2eb538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x2eb53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb540: 0x0  nop
    ctx->pc = 0x2eb540u;
    // NOP
    // 0x2eb544: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2eb544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2eb548: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2eb548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2eb54c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb550: 0x0  nop
    ctx->pc = 0x2eb550u;
    // NOP
    // 0x2eb554: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eb554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2eb558: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2eb558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2eb55c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2eb55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2eb560: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2eb560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2eb564: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2eb564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2eb568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb56c: 0x0  nop
    ctx->pc = 0x2eb56cu;
    // NOP
    // 0x2eb570: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2eb570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2eb574: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2eb574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2eb578: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2eb578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2eb57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb580: 0x0  nop
    ctx->pc = 0x2eb580u;
    // NOP
    // 0x2eb584: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2eb584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2eb588: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB588u;
    SET_GPR_U32(ctx, 31, 0x2EB590u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB588u, 0x2EB590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB590u;
label_2eb590:
    // 0x2eb590: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2eb590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2eb594: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2eb594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eb598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb59c: 0x0  nop
    ctx->pc = 0x2eb59cu;
    // NOP
    // 0x2eb5a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb5a4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2eb5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2eb5a8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB5A8u;
    SET_GPR_U32(ctx, 31, 0x2EB5B0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB5A8u, 0x2EB5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5B0u;
label_2eb5b0:
    // 0x2eb5b0: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2eb5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2eb5b4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eb5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2eb5b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eb5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb5bc: 0x0  nop
    ctx->pc = 0x2eb5bcu;
    // NOP
    // 0x2eb5c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb5c4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2eb5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2eb5c8u;
}
