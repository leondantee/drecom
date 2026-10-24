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

// Function: entry_002f1ed8
// Address: 0x2f1ed8 - 0x2f2118
void entry_002f1ed8_0x2f1ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1ed8_0x2f1ed8");
#endif

    switch (ctx->pc) {
        case 0x2f1f44u: goto label_2f1f44;
        case 0x2f1f68u: goto label_2f1f68;
        case 0x2f1f8cu: goto label_2f1f8c;
        case 0x2f1fb0u: goto label_2f1fb0;
        case 0x2f1fecu: goto label_2f1fec;
        case 0x2f201cu: goto label_2f201c;
        case 0x2f20e0u: goto label_2f20e0;
        case 0x2f2100u: goto label_2f2100;
        default: break;
    }

    ctx->pc = 0x2f1ed8u;

    // 0x2f1ed8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f1ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f1edc: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x2f1edcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f1ee0: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2f1ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1ee4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f1ee8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f1ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1eec: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2F1EECu;
    {
        const bool branch_taken_0x2f1eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1eec) {
            ctx->pc = 0x2F2118u;
            return;
        }
    }
    ctx->pc = 0x2F1EF4u;
    // 0x2f1ef4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f1ef8: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x2f1ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f1efc: 0x3c024184  lui         $v0, 0x4184
    ctx->pc = 0x2f1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16772 << 16));
    // 0x2f1f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1f04: 0x0  nop
    ctx->pc = 0x2f1f04u;
    // NOP
    // 0x2f1f08: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1f0c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2f1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2f1f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1f14: 0x0  nop
    ctx->pc = 0x2f1f14u;
    // NOP
    // 0x2f1f18: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f1f1c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2f1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2f1f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1f24: 0x0  nop
    ctx->pc = 0x2f1f24u;
    // NOP
    // 0x2f1f28: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f1f2c: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x2f1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x2f1f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1f34: 0x0  nop
    ctx->pc = 0x2f1f34u;
    // NOP
    // 0x2f1f38: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1f3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F1F44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1F3Cu, 0x2F1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F44u;
label_2f1f44:
    // 0x2f1f44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1f48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1f4c: 0x0  nop
    ctx->pc = 0x2f1f4cu;
    // NOP
    // 0x2f1f50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1f54: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1f58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1f5c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1f60: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1F60u;
    SET_GPR_U32(ctx, 31, 0x2F1F68u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1F60u, 0x2F1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F68u;
label_2f1f68:
    // 0x2f1f68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1f6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1f70: 0x0  nop
    ctx->pc = 0x2f1f70u;
    // NOP
    // 0x2f1f74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1f78: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1f80: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f1f84: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1F84u;
    SET_GPR_U32(ctx, 31, 0x2F1F8Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1F84u, 0x2F1F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F8Cu;
label_2f1f8c:
    // 0x2f1f8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1f94: 0x0  nop
    ctx->pc = 0x2f1f94u;
    // NOP
    // 0x2f1f98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1f9c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1fa4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f1fa8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1FA8u;
    SET_GPR_U32(ctx, 31, 0x2F1FB0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1FA8u, 0x2F1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FB0u;
label_2f1fb0:
    // 0x2f1fb0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2f1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2f1fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1fb8: 0x0  nop
    ctx->pc = 0x2f1fb8u;
    // NOP
    // 0x2f1fbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1fc0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1fc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1fc8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1fcc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2f1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2f1fd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f1fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f1fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1fd8: 0x0  nop
    ctx->pc = 0x2f1fd8u;
    // NOP
    // 0x2f1fdc: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f1fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f1fe0: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f1fe4: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2F1FE4u;
    SET_GPR_U32(ctx, 31, 0x2F1FECu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2F1FE4u, 0x2F1FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FECu;
label_2f1fec:
    // 0x2f1fec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f1ff0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1ff4: 0x0  nop
    ctx->pc = 0x2f1ff4u;
    // NOP
    // 0x2f1ff8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1ffc: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f1ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f2000: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2f2000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2f2004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2008: 0x0  nop
    ctx->pc = 0x2f2008u;
    // NOP
    // 0x2f200c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f2010: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f2010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f2014: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2F2014u;
    SET_GPR_U32(ctx, 31, 0x2F201Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2F2014u, 0x2F201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F201Cu;
label_2f201c:
    // 0x2f201c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f2020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2024: 0x0  nop
    ctx->pc = 0x2f2024u;
    // NOP
    // 0x2f2028: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f202c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f202cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f2030: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2f2030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2f2034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2038: 0x0  nop
    ctx->pc = 0x2f2038u;
    // NOP
    // 0x2f203c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2f203cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2f2040: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f2040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f2044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2048: 0x0  nop
    ctx->pc = 0x2f2048u;
    // NOP
    // 0x2f204c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2f204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2f2050: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2f2050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2f2054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2058: 0x0  nop
    ctx->pc = 0x2f2058u;
    // NOP
    // 0x2f205c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2f205cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2f2060: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2f2060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2f2064: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f2064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f2068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f206c: 0x0  nop
    ctx->pc = 0x2f206cu;
    // NOP
    // 0x2f2070: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f2070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f2074: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2f2074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2f2078: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2f2078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2f207c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f207cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2080: 0x0  nop
    ctx->pc = 0x2f2080u;
    // NOP
    // 0x2f2084: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2f2084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f2088: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2f2088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2f208c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f2090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2094: 0x0  nop
    ctx->pc = 0x2f2094u;
    // NOP
    // 0x2f2098: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f2098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f209c: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2f209cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f20a0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f20a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f20a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f20a8: 0x0  nop
    ctx->pc = 0x2f20a8u;
    // NOP
    // 0x2f20ac: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f20acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f20b0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f20b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f20b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f20b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f20b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f20bc: 0x0  nop
    ctx->pc = 0x2f20bcu;
    // NOP
    // 0x2f20c0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f20c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2f20c4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2f20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2f20c8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f20c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f20cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f20ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f20d0: 0x0  nop
    ctx->pc = 0x2f20d0u;
    // NOP
    // 0x2f20d4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2f20d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2f20d8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F20D8u;
    SET_GPR_U32(ctx, 31, 0x2F20E0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F20D8u, 0x2F20E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F20E0u;
label_2f20e0:
    // 0x2f20e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f20e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f20e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f20e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f20e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f20ec: 0x0  nop
    ctx->pc = 0x2f20ecu;
    // NOP
    // 0x2f20f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f20f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f20f4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2f20f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2f20f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F20F8u;
    SET_GPR_U32(ctx, 31, 0x2F2100u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F20F8u, 0x2F2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2100u;
label_2f2100:
    // 0x2f2100: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f2100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f2104: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f2104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f2108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f2108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f210c: 0x0  nop
    ctx->pc = 0x2f210cu;
    // NOP
    // 0x2f2110: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f2114: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2f2114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2f2118u;
}
