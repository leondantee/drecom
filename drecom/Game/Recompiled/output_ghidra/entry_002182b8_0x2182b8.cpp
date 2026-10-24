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

// Function: entry_002182b8
// Address: 0x2182b8 - 0x2184f0
void entry_002182b8_0x2182b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002182b8_0x2182b8");
#endif

    switch (ctx->pc) {
        case 0x21831cu: goto label_21831c;
        case 0x218340u: goto label_218340;
        case 0x218364u: goto label_218364;
        case 0x218394u: goto label_218394;
        case 0x218454u: goto label_218454;
        case 0x2184d4u: goto label_2184d4;
        default: break;
    }

    ctx->pc = 0x2182b8u;

    // 0x2182b8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2182b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2182bc: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2182c0: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2182c0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2182c4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2182c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2182c8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2182c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2182cc: 0x12030088  beq         $s0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x2182CCu;
    {
        const bool branch_taken_0x2182cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2182cc) {
            ctx->pc = 0x2184F0u;
            return;
        }
    }
    ctx->pc = 0x2182D4u;
    // 0x2182d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2182d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2182d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2182d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2182dc: 0x0  nop
    ctx->pc = 0x2182dcu;
    // NOP
    // 0x2182e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2182e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2182e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2182e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2182e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2182e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2182ec: 0x0  nop
    ctx->pc = 0x2182ecu;
    // NOP
    // 0x2182f0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2182f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2182f4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2182f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2182f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2182f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2182fc: 0x0  nop
    ctx->pc = 0x2182fcu;
    // NOP
    // 0x218300: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x218300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x218304: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x218304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x218308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21830c: 0x0  nop
    ctx->pc = 0x21830cu;
    // NOP
    // 0x218310: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x218310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x218314: 0xc06765c  jal         func_19D970
    ctx->pc = 0x218314u;
    SET_GPR_U32(ctx, 31, 0x21831Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x218314u, 0x21831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21831Cu;
label_21831c:
    // 0x21831c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x21831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x218320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218324: 0x0  nop
    ctx->pc = 0x218324u;
    // NOP
    // 0x218328: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21832c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218330: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218334: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x218334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x218338: 0xc06765c  jal         func_19D970
    ctx->pc = 0x218338u;
    SET_GPR_U32(ctx, 31, 0x218340u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x218338u, 0x218340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218340u;
label_218340:
    // 0x218340: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x218340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x218344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218348: 0x0  nop
    ctx->pc = 0x218348u;
    // NOP
    // 0x21834c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21834cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218350: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x218350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218354: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218358: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x218358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21835c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21835Cu;
    SET_GPR_U32(ctx, 31, 0x218364u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21835Cu, 0x218364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218364u;
label_218364:
    // 0x218364: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x218364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x218368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21836c: 0x0  nop
    ctx->pc = 0x21836cu;
    // NOP
    // 0x218370: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218374: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x218374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21837c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21837cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x218380: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x218380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x218384: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x218384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218388: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x218388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21838c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21838Cu;
    SET_GPR_U32(ctx, 31, 0x218394u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21838Cu, 0x218394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218394u;
label_218394:
    // 0x218394: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x218394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x218398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21839c: 0x0  nop
    ctx->pc = 0x21839cu;
    // NOP
    // 0x2183a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2183a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2183a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2183a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2183a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2183a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2183ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2183acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2183b0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2183b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2183b4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2183b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2183b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2183b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2183bc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2183bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2183c0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2183c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2183c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2183c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183c8: 0x0  nop
    ctx->pc = 0x2183c8u;
    // NOP
    // 0x2183cc: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2183ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2183d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2183d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183d4: 0x0  nop
    ctx->pc = 0x2183d4u;
    // NOP
    // 0x2183d8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2183d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2183dc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2183dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2183e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2183e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183e4: 0x0  nop
    ctx->pc = 0x2183e4u;
    // NOP
    // 0x2183e8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2183e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2183ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2183ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2183f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2183f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183f4: 0x0  nop
    ctx->pc = 0x2183f4u;
    // NOP
    // 0x2183f8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2183f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2183fc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2183fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x218400: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x218400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x218404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218408: 0x0  nop
    ctx->pc = 0x218408u;
    // NOP
    // 0x21840c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21840cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x218410: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x218414: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x218414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x218418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21841c: 0x0  nop
    ctx->pc = 0x21841cu;
    // NOP
    // 0x218420: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x218420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x218424: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x218428: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x218428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x21842c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21842cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218430: 0x0  nop
    ctx->pc = 0x218430u;
    // NOP
    // 0x218434: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x218434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x218438: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x21843c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x21843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x218440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218444: 0x0  nop
    ctx->pc = 0x218444u;
    // NOP
    // 0x218448: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x218448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21844c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21844Cu;
    SET_GPR_U32(ctx, 31, 0x218454u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21844Cu, 0x218454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218454u;
label_218454:
    // 0x218454: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x218454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x218458: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21845c: 0x0  nop
    ctx->pc = 0x21845cu;
    // NOP
    // 0x218460: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218464: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x218464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x218468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21846c: 0x0  nop
    ctx->pc = 0x21846cu;
    // NOP
    // 0x218470: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218474: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x218474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x218478: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21847c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21847cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218480: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218484: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21848c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21848cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218490: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x218490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x218494: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218498: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218498u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21849c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21849cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2184a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2184a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2184a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2184a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2184a8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2184a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2184ac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2184acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2184b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2184b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2184b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2184b8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2184b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2184bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2184bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2184c0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2184c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2184c4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2184c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2184c8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2184c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2184cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2184CCu;
    SET_GPR_U32(ctx, 31, 0x2184D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2184CCu, 0x2184D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184D4u;
label_2184d4:
    // 0x2184d4: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2184d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2184d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2184d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2184dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2184dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2184e0: 0x0  nop
    ctx->pc = 0x2184e0u;
    // NOP
    // 0x2184e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2184e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2184e8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2184e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2184ec: 0x0  nop
    ctx->pc = 0x2184ecu;
    // NOP
    ctx->pc = 0x2184f0u;
}
