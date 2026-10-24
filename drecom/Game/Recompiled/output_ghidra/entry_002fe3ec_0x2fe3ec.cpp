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

// Function: entry_002fe3ec
// Address: 0x2fe3ec - 0x2fe748
void entry_002fe3ec_0x2fe3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fe3ec_0x2fe3ec");
#endif

    switch (ctx->pc) {
        case 0x2fe3f4u: goto label_2fe3f4;
        case 0x2fe428u: goto label_2fe428;
        case 0x2fe470u: goto label_2fe470;
        case 0x2fe47cu: goto label_2fe47c;
        case 0x2fe4d8u: goto label_2fe4d8;
        case 0x2fe504u: goto label_2fe504;
        case 0x2fe520u: goto label_2fe520;
        case 0x2fe54cu: goto label_2fe54c;
        case 0x2fe630u: goto label_2fe630;
        case 0x2fe63cu: goto label_2fe63c;
        case 0x2fe6b4u: goto label_2fe6b4;
        default: break;
    }

    ctx->pc = 0x2fe3ecu;

    // 0x2fe3ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE3ECu;
    SET_GPR_U32(ctx, 31, 0x2FE3F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE3ECu, 0x2FE3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE3F4u;
label_2fe3f4:
    // 0x2fe3f4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2fe3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2fe3f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe3fc: 0x0  nop
    ctx->pc = 0x2fe3fcu;
    // NOP
    // 0x2fe400: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe404: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe408: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2fe408u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe40c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe40cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe410: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fe414: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe418: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2fe418u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe41c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fe420: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE420u;
    SET_GPR_U32(ctx, 31, 0x2FE428u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE420u, 0x2FE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE428u;
label_2fe428:
    // 0x2fe428: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2fe428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2fe42c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe430: 0x0  nop
    ctx->pc = 0x2fe430u;
    // NOP
    // 0x2fe434: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe438: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe43c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2fe43cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe440: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe444: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fe444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fe448: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe450: 0x0  nop
    ctx->pc = 0x2fe450u;
    // NOP
    // 0x2fe454: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2fe454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fe458: 0x24043300  addiu       $a0, $zero, 0x3300
    ctx->pc = 0x2fe458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13056));
    // 0x2fe45c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe45cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe460: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fe460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe464: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fe464u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe468: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FE468u;
    SET_GPR_U32(ctx, 31, 0x2FE470u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FE468u, 0x2FE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE470u;
label_2fe470:
    // 0x2fe470: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fe470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe474: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FE474u;
    SET_GPR_U32(ctx, 31, 0x2FE47Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FE474u, 0x2FE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE47Cu;
label_2fe47c:
    // 0x2fe47c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fe47cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe480: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fe480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe484: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fe484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fe488: 0x120300af  beq         $s0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x2FE488u;
    {
        const bool branch_taken_0x2fe488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fe488) {
            ctx->pc = 0x2FE748u;
            return;
        }
    }
    ctx->pc = 0x2FE490u;
    // 0x2fe490: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe498: 0x0  nop
    ctx->pc = 0x2fe498u;
    // NOP
    // 0x2fe49c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2fe49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2fe4a0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe4a8: 0x0  nop
    ctx->pc = 0x2fe4a8u;
    // NOP
    // 0x2fe4ac: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2fe4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2fe4b0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe4b8: 0x0  nop
    ctx->pc = 0x2fe4b8u;
    // NOP
    // 0x2fe4bc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2fe4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2fe4c0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe4c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe4c8: 0x0  nop
    ctx->pc = 0x2fe4c8u;
    // NOP
    // 0x2fe4cc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fe4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fe4d0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2FE4D0u;
    SET_GPR_U32(ctx, 31, 0x2FE4D8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2FE4D0u, 0x2FE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4D8u;
label_2fe4d8:
    // 0x2fe4d8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe4dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe4e0: 0x0  nop
    ctx->pc = 0x2fe4e0u;
    // NOP
    // 0x2fe4e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe4e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe4e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2fe4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2fe4ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe4f0: 0x0  nop
    ctx->pc = 0x2fe4f0u;
    // NOP
    // 0x2fe4f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe4f8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2fe4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2fe4fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE4FCu;
    SET_GPR_U32(ctx, 31, 0x2FE504u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE4FCu, 0x2FE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE504u;
label_2fe504:
    // 0x2fe504: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe50c: 0x0  nop
    ctx->pc = 0x2fe50cu;
    // NOP
    // 0x2fe510: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe514: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2fe514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2fe518: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FE518u;
    SET_GPR_U32(ctx, 31, 0x2FE520u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FE518u, 0x2FE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE520u;
label_2fe520:
    // 0x2fe520: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2fe520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2fe524: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe528: 0x0  nop
    ctx->pc = 0x2fe528u;
    // NOP
    // 0x2fe52c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe530: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe538: 0x0  nop
    ctx->pc = 0x2fe538u;
    // NOP
    // 0x2fe53c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe540: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2fe540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2fe544: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE544u;
    SET_GPR_U32(ctx, 31, 0x2FE54Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE544u, 0x2FE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE54Cu;
label_2fe54c:
    // 0x2fe54c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe550: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe554: 0x0  nop
    ctx->pc = 0x2fe554u;
    // NOP
    // 0x2fe558: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe55c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2fe55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2fe560: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2fe560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe564: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2fe564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2fe568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe56c: 0x0  nop
    ctx->pc = 0x2fe56cu;
    // NOP
    // 0x2fe570: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2fe570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2fe574: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2fe574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2fe578: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2fe578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2fe57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe580: 0x0  nop
    ctx->pc = 0x2fe580u;
    // NOP
    // 0x2fe584: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2fe584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2fe588: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2fe588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe58c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2fe58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2fe590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe594: 0x0  nop
    ctx->pc = 0x2fe594u;
    // NOP
    // 0x2fe598: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2fe598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2fe59c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x2fe59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x2fe5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe5a4: 0x0  nop
    ctx->pc = 0x2fe5a4u;
    // NOP
    // 0x2fe5a8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2fe5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2fe5ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2fe5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2fe5b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2fe5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2fe5b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2fe5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fe5b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2fe5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fe5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe5c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fe5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fe5c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2fe5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2fe5c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2fe5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2fe5cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2fe5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2fe5d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2fe5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fe5d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2fe5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fe5d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe5dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2fe5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2fe5e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2fe5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2fe5e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fe5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fe5e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2fe5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2fe5ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2fe5ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2fe5f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2fe5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fe5f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fe5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fe5f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2fe5f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2fe5fc: 0x0  nop
    ctx->pc = 0x2fe5fcu;
    // NOP
    // 0x2fe600: 0x0  nop
    ctx->pc = 0x2fe600u;
    // NOP
    // 0x2fe604: 0x1010  mfhi        $v0
    ctx->pc = 0x2fe604u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2fe608: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fe608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fe60c: 0xa202013a  sb          $v0, 0x13A($s0)
    ctx->pc = 0x2fe60cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fe610: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2fe610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2fe614: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2fe614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2fe618: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2fe618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fe61c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe61cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe620: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fe620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe624: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fe624u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe628: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FE628u;
    SET_GPR_U32(ctx, 31, 0x2FE630u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FE628u, 0x2FE630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE630u;
label_2fe630:
    // 0x2fe630: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fe630u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe634: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FE634u;
    SET_GPR_U32(ctx, 31, 0x2FE63Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FE634u, 0x2FE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE63Cu;
label_2fe63c:
    // 0x2fe63c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2fe63cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe640: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe644: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2fe644u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe648: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2fe648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe64c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe650: 0x0  nop
    ctx->pc = 0x2fe650u;
    // NOP
    // 0x2fe654: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2fe654u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2fe658: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fe65c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fe65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe660: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fe660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fe664: 0x12230038  beq         $s1, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2FE664u;
    {
        const bool branch_taken_0x2fe664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fe664) {
            ctx->pc = 0x2FE748u;
            return;
        }
    }
    ctx->pc = 0x2FE66Cu;
    // 0x2fe66c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe674: 0x0  nop
    ctx->pc = 0x2fe674u;
    // NOP
    // 0x2fe678: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x2fe678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2fe67c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe684: 0x0  nop
    ctx->pc = 0x2fe684u;
    // NOP
    // 0x2fe688: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2fe688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x2fe68c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe694: 0x0  nop
    ctx->pc = 0x2fe694u;
    // NOP
    // 0x2fe698: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x2fe698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x2fe69c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe6a4: 0x0  nop
    ctx->pc = 0x2fe6a4u;
    // NOP
    // 0x2fe6a8: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x2fe6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x2fe6ac: 0xc067654  jal         func_19D950
    ctx->pc = 0x2FE6ACu;
    SET_GPR_U32(ctx, 31, 0x2FE6B4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2FE6ACu, 0x2FE6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE6B4u;
label_2fe6b4:
    // 0x2fe6b4: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x2fe6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
    // 0x2fe6b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fe6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe6bc: 0x0  nop
    ctx->pc = 0x2fe6bcu;
    // NOP
    // 0x2fe6c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe6c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe6c4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2fe6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe6c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe6c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe6cc: 0x0  nop
    ctx->pc = 0x2fe6ccu;
    // NOP
    // 0x2fe6d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe6d4: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2fe6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x2fe6d8: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2fe6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe6dc: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2fe6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2fe6e0: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x2fe6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe6e4: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x2fe6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x2fe6e8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2fe6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe6ec: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x2fe6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x2fe6f0: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2fe6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe6f4: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2fe6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2fe6f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe6f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe6fc: 0x0  nop
    ctx->pc = 0x2fe6fcu;
    // NOP
    // 0x2fe700: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2fe700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2fe704: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2fe704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2fe708: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2fe708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2fe70c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe70cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe710: 0x0  nop
    ctx->pc = 0x2fe710u;
    // NOP
    // 0x2fe714: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x2fe714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2fe718: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2fe718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe71c: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2fe71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2fe720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe724: 0x0  nop
    ctx->pc = 0x2fe724u;
    // NOP
    // 0x2fe728: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2fe728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2fe72c: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x2fe72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x2fe730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe734: 0x0  nop
    ctx->pc = 0x2fe734u;
    // NOP
    // 0x2fe738: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x2fe738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2fe73c: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2fe73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2fe740: 0xae230100  sw          $v1, 0x100($s1)
    ctx->pc = 0x2fe740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
    // 0x2fe744: 0x0  nop
    ctx->pc = 0x2fe744u;
    // NOP
    ctx->pc = 0x2fe748u;
}
