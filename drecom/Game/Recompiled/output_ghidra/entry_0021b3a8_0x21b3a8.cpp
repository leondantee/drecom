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

// Function: entry_0021b3a8
// Address: 0x21b3a8 - 0x21b5b0
void entry_0021b3a8_0x21b3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b3a8_0x21b3a8");
#endif

    switch (ctx->pc) {
        case 0x21b404u: goto label_21b404;
        case 0x21b428u: goto label_21b428;
        case 0x21b44cu: goto label_21b44c;
        case 0x21b470u: goto label_21b470;
        case 0x21b4e8u: goto label_21b4e8;
        case 0x21b518u: goto label_21b518;
        default: break;
    }

    ctx->pc = 0x21b3a8u;

    // 0x21b3a8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21b3ac: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21b3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21b3b0: 0x1203007f  beq         $s0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x21B3B0u;
    {
        const bool branch_taken_0x21b3b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21b3b0) {
            ctx->pc = 0x21B5B0u;
            return;
        }
    }
    ctx->pc = 0x21B3B8u;
    // 0x21b3b8: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x21b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x21b3bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b3c4: 0x0  nop
    ctx->pc = 0x21b3c4u;
    // NOP
    // 0x21b3c8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b3cc: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x21b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x21b3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b3d4: 0x0  nop
    ctx->pc = 0x21b3d4u;
    // NOP
    // 0x21b3d8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b3dc: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x21b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x21b3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b3e4: 0x0  nop
    ctx->pc = 0x21b3e4u;
    // NOP
    // 0x21b3e8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b3ec: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x21b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x21b3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b3f4: 0x0  nop
    ctx->pc = 0x21b3f4u;
    // NOP
    // 0x21b3f8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b3fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B3FCu;
    SET_GPR_U32(ctx, 31, 0x21B404u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B3FCu, 0x21B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B404u;
label_21b404:
    // 0x21b404: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b40c: 0x0  nop
    ctx->pc = 0x21b40cu;
    // NOP
    // 0x21b410: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b414: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b418: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b41c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b420: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B420u;
    SET_GPR_U32(ctx, 31, 0x21B428u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B420u, 0x21B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B428u;
label_21b428:
    // 0x21b428: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b42c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b430: 0x0  nop
    ctx->pc = 0x21b430u;
    // NOP
    // 0x21b434: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b438: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b43c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b43cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b440: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b444: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B444u;
    SET_GPR_U32(ctx, 31, 0x21B44Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B444u, 0x21B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B44Cu;
label_21b44c:
    // 0x21b44c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b454: 0x0  nop
    ctx->pc = 0x21b454u;
    // NOP
    // 0x21b458: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b45c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b460: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b464: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b468: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B468u;
    SET_GPR_U32(ctx, 31, 0x21B470u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B468u, 0x21B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B470u;
label_21b470:
    // 0x21b470: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b478: 0x0  nop
    ctx->pc = 0x21b478u;
    // NOP
    // 0x21b47c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b47cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b480: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b488: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b48c: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x21b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x21b490: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x21b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x21b494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b498: 0x0  nop
    ctx->pc = 0x21b498u;
    // NOP
    // 0x21b49c: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x21b49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x21b4a0: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x21b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x21b4a4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x21b4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x21b4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b4ac: 0x0  nop
    ctx->pc = 0x21b4acu;
    // NOP
    // 0x21b4b0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x21b4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x21b4b4: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x21b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x21b4b8: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x21b4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x21b4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b4c0: 0x0  nop
    ctx->pc = 0x21b4c0u;
    // NOP
    // 0x21b4c4: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x21b4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x21b4c8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x21b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x21b4cc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x21b4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x21b4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b4d4: 0x0  nop
    ctx->pc = 0x21b4d4u;
    // NOP
    // 0x21b4d8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21b4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21b4dc: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b4e0: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21B4E0u;
    SET_GPR_U32(ctx, 31, 0x21B4E8u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21B4E0u, 0x21B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4E8u;
label_21b4e8:
    // 0x21b4e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x21b4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b4f0: 0x0  nop
    ctx->pc = 0x21b4f0u;
    // NOP
    // 0x21b4f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b4f8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21b4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21b4fc: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x21b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x21b500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b504: 0x0  nop
    ctx->pc = 0x21b504u;
    // NOP
    // 0x21b508: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21b508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21b50c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b510: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21B510u;
    SET_GPR_U32(ctx, 31, 0x21B518u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21B510u, 0x21B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B518u;
label_21b518:
    // 0x21b518: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x21b518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x21b51c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21b51cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b520: 0x0  nop
    ctx->pc = 0x21b520u;
    // NOP
    // 0x21b524: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b528: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21b528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21b52c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21b530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b534: 0x0  nop
    ctx->pc = 0x21b534u;
    // NOP
    // 0x21b538: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21b538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21b53c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x21b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x21b540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b544: 0x0  nop
    ctx->pc = 0x21b544u;
    // NOP
    // 0x21b548: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21b548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21b54c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21b550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b554: 0x0  nop
    ctx->pc = 0x21b554u;
    // NOP
    // 0x21b558: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21b558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21b55c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21b560: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21b560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21b564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b568: 0x0  nop
    ctx->pc = 0x21b568u;
    // NOP
    // 0x21b56c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x21b56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21b570: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21b570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21b574: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21b578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b57c: 0x0  nop
    ctx->pc = 0x21b57cu;
    // NOP
    // 0x21b580: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x21b580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21b584: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x21b584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
    // 0x21b588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b58c: 0x0  nop
    ctx->pc = 0x21b58cu;
    // NOP
    // 0x21b590: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21b590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21b594: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x21b594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x21b598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b59c: 0x0  nop
    ctx->pc = 0x21b59cu;
    // NOP
    // 0x21b5a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21b5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21b5a4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x21b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21b5a8: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x21b5ac: 0x0  nop
    ctx->pc = 0x21b5acu;
    // NOP
    ctx->pc = 0x21b5b0u;
}
