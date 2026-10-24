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

// Function: entry_00217ec8
// Address: 0x217ec8 - 0x218140
void entry_00217ec8_0x217ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217ec8_0x217ec8");
#endif

    switch (ctx->pc) {
        case 0x217f2cu: goto label_217f2c;
        case 0x217f50u: goto label_217f50;
        case 0x217f74u: goto label_217f74;
        case 0x217fa4u: goto label_217fa4;
        case 0x218064u: goto label_218064;
        case 0x2180e4u: goto label_2180e4;
        case 0x218104u: goto label_218104;
        case 0x218124u: goto label_218124;
        default: break;
    }

    ctx->pc = 0x217ec8u;

    // 0x217ec8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x217ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x217ecc: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x217eccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x217ed0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x217ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x217ed4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x217ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x217ed8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x217ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x217edc: 0x12030098  beq         $s0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x217EDCu;
    {
        const bool branch_taken_0x217edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x217edc) {
            ctx->pc = 0x218140u;
            return;
        }
    }
    ctx->pc = 0x217EE4u;
    // 0x217ee4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x217ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x217ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217eec: 0x0  nop
    ctx->pc = 0x217eecu;
    // NOP
    // 0x217ef0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x217ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x217ef4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x217ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x217ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217efc: 0x0  nop
    ctx->pc = 0x217efcu;
    // NOP
    // 0x217f00: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x217f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x217f04: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x217f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x217f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217f0c: 0x0  nop
    ctx->pc = 0x217f0cu;
    // NOP
    // 0x217f10: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x217f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x217f14: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x217f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x217f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217f1c: 0x0  nop
    ctx->pc = 0x217f1cu;
    // NOP
    // 0x217f20: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x217f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x217f24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x217F24u;
    SET_GPR_U32(ctx, 31, 0x217F2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x217F24u, 0x217F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F2Cu;
label_217f2c:
    // 0x217f2c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x217f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x217f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217f34: 0x0  nop
    ctx->pc = 0x217f34u;
    // NOP
    // 0x217f38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217f3c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x217f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217f44: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x217f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x217f48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x217F48u;
    SET_GPR_U32(ctx, 31, 0x217F50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x217F48u, 0x217F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F50u;
label_217f50:
    // 0x217f50: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x217f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x217f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217f58: 0x0  nop
    ctx->pc = 0x217f58u;
    // NOP
    // 0x217f5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217f60: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x217f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217f68: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x217f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x217f6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x217F6Cu;
    SET_GPR_U32(ctx, 31, 0x217F74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x217F6Cu, 0x217F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F74u;
label_217f74:
    // 0x217f74: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x217f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x217f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217f7c: 0x0  nop
    ctx->pc = 0x217f7cu;
    // NOP
    // 0x217f80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217f84: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x217f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217f8c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x217f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x217f90: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x217f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x217f94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x217f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f98: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x217f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x217f9c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x217F9Cu;
    SET_GPR_U32(ctx, 31, 0x217FA4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x217F9Cu, 0x217FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FA4u;
label_217fa4:
    // 0x217fa4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x217fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x217fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217fac: 0x0  nop
    ctx->pc = 0x217facu;
    // NOP
    // 0x217fb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217fb4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x217fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x217fb8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x217fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217fc0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x217fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x217fc4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x217fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x217fc8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x217fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fcc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x217fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x217fd0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x217fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x217fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217fd8: 0x0  nop
    ctx->pc = 0x217fd8u;
    // NOP
    // 0x217fdc: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x217fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x217fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x217fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217fe4: 0x0  nop
    ctx->pc = 0x217fe4u;
    // NOP
    // 0x217fe8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x217fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x217fec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x217fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x217ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217ff4: 0x0  nop
    ctx->pc = 0x217ff4u;
    // NOP
    // 0x217ff8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x217ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x217ffc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x217ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x218000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218004: 0x0  nop
    ctx->pc = 0x218004u;
    // NOP
    // 0x218008: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x218008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21800c: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x21800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x218010: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x218010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x218014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218018: 0x0  nop
    ctx->pc = 0x218018u;
    // NOP
    // 0x21801c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x218020: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x218024: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x218024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x218028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21802c: 0x0  nop
    ctx->pc = 0x21802cu;
    // NOP
    // 0x218030: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x218030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x218034: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x218038: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x218038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x21803c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21803cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218040: 0x0  nop
    ctx->pc = 0x218040u;
    // NOP
    // 0x218044: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x218044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x218048: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x21804c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x21804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x218050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218054: 0x0  nop
    ctx->pc = 0x218054u;
    // NOP
    // 0x218058: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x218058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21805c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21805Cu;
    SET_GPR_U32(ctx, 31, 0x218064u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21805Cu, 0x218064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218064u;
label_218064:
    // 0x218064: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x218064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x218068: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21806c: 0x0  nop
    ctx->pc = 0x21806cu;
    // NOP
    // 0x218070: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218074: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x218074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x218078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21807c: 0x0  nop
    ctx->pc = 0x21807cu;
    // NOP
    // 0x218080: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218084: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x218084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x218088: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21808c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21808cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218090: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218094: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21809c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2180a0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2180a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2180a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2180a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2180a8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2180a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2180ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2180acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2180b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2180b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2180b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2180b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2180b8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2180b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2180bc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2180bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2180c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2180c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2180c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2180c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2180c8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2180c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2180cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2180ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2180d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2180d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2180d4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2180d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2180d8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2180d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2180dc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2180DCu;
    SET_GPR_U32(ctx, 31, 0x2180E4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2180DCu, 0x2180E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180E4u;
label_2180e4:
    // 0x2180e4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2180e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2180e8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2180e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2180ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2180ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2180f0: 0x0  nop
    ctx->pc = 0x2180f0u;
    // NOP
    // 0x2180f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2180f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2180f8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x2180f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x2180fc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2180FCu;
    SET_GPR_U32(ctx, 31, 0x218104u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2180FCu, 0x218104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218104u;
label_218104:
    // 0x218104: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x218104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x218108: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x218108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x21810c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21810cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218110: 0x0  nop
    ctx->pc = 0x218110u;
    // NOP
    // 0x218114: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x218114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218118: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x218118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x21811c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21811Cu;
    SET_GPR_U32(ctx, 31, 0x218124u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21811Cu, 0x218124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218124u;
label_218124:
    // 0x218124: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x218124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x218128: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x218128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21812c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21812cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218130: 0x0  nop
    ctx->pc = 0x218130u;
    // NOP
    // 0x218134: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x218134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218138: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x218138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21813c: 0x0  nop
    ctx->pc = 0x21813cu;
    // NOP
    ctx->pc = 0x218140u;
}
