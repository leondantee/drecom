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

// Function: entry_002e8900
// Address: 0x2e8900 - 0x2e8b50
void entry_002e8900_0x2e8900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8900_0x2e8900");
#endif

    switch (ctx->pc) {
        case 0x2e8970u: goto label_2e8970;
        case 0x2e8994u: goto label_2e8994;
        case 0x2e89b8u: goto label_2e89b8;
        case 0x2e89dcu: goto label_2e89dc;
        case 0x2e8a18u: goto label_2e8a18;
        case 0x2e8a48u: goto label_2e8a48;
        case 0x2e8abcu: goto label_2e8abc;
        case 0x2e8ac8u: goto label_2e8ac8;
        case 0x2e8b14u: goto label_2e8b14;
        case 0x2e8b34u: goto label_2e8b34;
        default: break;
    }

    ctx->pc = 0x2e8900u;

    // 0x2e8900: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e8900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e8904: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2e8904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e8908: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2e8908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x2e890c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2e890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e8910: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e8910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e8914: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e8914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8918: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e8918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e891c: 0x1203008c  beq         $s0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x2E891Cu;
    {
        const bool branch_taken_0x2e891c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e891c) {
            ctx->pc = 0x2E8B50u;
            return;
        }
    }
    ctx->pc = 0x2E8924u;
    // 0x2e8924: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e8924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e8928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e892c: 0x0  nop
    ctx->pc = 0x2e892cu;
    // NOP
    // 0x2e8930: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e8934: 0x3c0241e9  lui         $v0, 0x41E9
    ctx->pc = 0x2e8934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16873 << 16));
    // 0x2e8938: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e8938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e893c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e893cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8940: 0x0  nop
    ctx->pc = 0x2e8940u;
    // NOP
    // 0x2e8944: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e8948: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2e8948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2e894c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e894cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8950: 0x0  nop
    ctx->pc = 0x2e8950u;
    // NOP
    // 0x2e8954: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e8958: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e8958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e895c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e895cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8960: 0x0  nop
    ctx->pc = 0x2e8960u;
    // NOP
    // 0x2e8964: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e8968: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8968u;
    SET_GPR_U32(ctx, 31, 0x2E8970u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8968u, 0x2E8970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8970u;
label_2e8970:
    // 0x2e8970: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8978: 0x0  nop
    ctx->pc = 0x2e8978u;
    // NOP
    // 0x2e897c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e897cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8980: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8988: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e898c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E898Cu;
    SET_GPR_U32(ctx, 31, 0x2E8994u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E898Cu, 0x2E8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8994u;
label_2e8994:
    // 0x2e8994: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8998: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e899c: 0x0  nop
    ctx->pc = 0x2e899cu;
    // NOP
    // 0x2e89a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e89a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e89a4: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e89a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e89a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e89a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e89ac: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e89acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e89b0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E89B0u;
    SET_GPR_U32(ctx, 31, 0x2E89B8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E89B0u, 0x2E89B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89B8u;
label_2e89b8:
    // 0x2e89b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e89bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e89bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e89c0: 0x0  nop
    ctx->pc = 0x2e89c0u;
    // NOP
    // 0x2e89c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e89c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e89c8: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e89c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e89cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e89ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e89d0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e89d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e89d4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E89D4u;
    SET_GPR_U32(ctx, 31, 0x2E89DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E89D4u, 0x2E89DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89DCu;
label_2e89dc:
    // 0x2e89dc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e89e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e89e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e89e4: 0x0  nop
    ctx->pc = 0x2e89e4u;
    // NOP
    // 0x2e89e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e89e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e89ec: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e89ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e89f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e89f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e89f4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e89f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e89f8: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e89fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e89fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e8a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a04: 0x0  nop
    ctx->pc = 0x2e8a04u;
    // NOP
    // 0x2e8a08: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e8a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e8a0c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8a10: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E8A10u;
    SET_GPR_U32(ctx, 31, 0x2E8A18u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E8A10u, 0x2E8A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A18u;
label_2e8a18:
    // 0x2e8a18: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8a1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8a20: 0x0  nop
    ctx->pc = 0x2e8a20u;
    // NOP
    // 0x2e8a24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8a28: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e8a2c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2e8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2e8a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a34: 0x0  nop
    ctx->pc = 0x2e8a34u;
    // NOP
    // 0x2e8a38: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e8a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e8a3c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8a40: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E8A40u;
    SET_GPR_U32(ctx, 31, 0x2E8A48u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E8A40u, 0x2E8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A48u;
label_2e8a48:
    // 0x2e8a48: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e8a4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8a50: 0x0  nop
    ctx->pc = 0x2e8a50u;
    // NOP
    // 0x2e8a54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8a58: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e8a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e8a5c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a64: 0x0  nop
    ctx->pc = 0x2e8a64u;
    // NOP
    // 0x2e8a68: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e8a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e8a6c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2e8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2e8a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a74: 0x0  nop
    ctx->pc = 0x2e8a74u;
    // NOP
    // 0x2e8a78: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e8a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e8a7c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2e8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a84: 0x0  nop
    ctx->pc = 0x2e8a84u;
    // NOP
    // 0x2e8a88: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e8a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e8a8c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2e8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2e8a90: 0x3444c28f  ori         $a0, $v0, 0xC28F
    ctx->pc = 0x2e8a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8a94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e8a94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a98: 0x0  nop
    ctx->pc = 0x2e8a98u;
    // NOP
    // 0x2e8a9c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e8a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e8aa0: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2e8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2e8aa4: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x2e8aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8aac: 0x0  nop
    ctx->pc = 0x2e8aacu;
    // NOP
    // 0x2e8ab0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e8ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e8ab4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8AB4u;
    SET_GPR_U32(ctx, 31, 0x2E8ABCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8AB4u, 0x2E8ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8ABCu;
label_2e8abc:
    // 0x2e8abc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e8abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e8ac0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2E8AC0u;
    SET_GPR_U32(ctx, 31, 0x2E8AC8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2E8AC0u, 0x2E8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8AC8u;
label_2e8ac8:
    // 0x2e8ac8: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2e8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2e8acc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e8accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e8ad0: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e8ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e8ad4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2e8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2e8ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8adc: 0x0  nop
    ctx->pc = 0x2e8adcu;
    // NOP
    // 0x2e8ae0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e8ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e8ae4: 0x3c074081  lui         $a3, 0x4081
    ctx->pc = 0x2e8ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16513 << 16));
    // 0x2e8ae8: 0x34e2c6a8  ori         $v0, $a3, 0xC6A8
    ctx->pc = 0x2e8ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)50856);
    // 0x2e8aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8af0: 0x0  nop
    ctx->pc = 0x2e8af0u;
    // NOP
    // 0x2e8af4: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e8af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e8af8: 0x3c063f77  lui         $a2, 0x3F77
    ctx->pc = 0x2e8af8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16247 << 16));
    // 0x2e8afc: 0x34c40a3d  ori         $a0, $a2, 0xA3D
    ctx->pc = 0x2e8afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2621);
    // 0x2e8b00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e8b00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8b04: 0x0  nop
    ctx->pc = 0x2e8b04u;
    // NOP
    // 0x2e8b08: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e8b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e8b0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8B0Cu, 0x2E8B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B14u;
label_2e8b14:
    // 0x2e8b14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e8b18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e8b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e8b1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8b20: 0x0  nop
    ctx->pc = 0x2e8b20u;
    // NOP
    // 0x2e8b24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8b28: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e8b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e8b2c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B34u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8B2Cu, 0x2E8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B34u;
label_2e8b34:
    // 0x2e8b34: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2e8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2e8b38: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2e8b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2e8b3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e8b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8b40: 0x0  nop
    ctx->pc = 0x2e8b40u;
    // NOP
    // 0x2e8b44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8b48: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e8b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2e8b4c: 0x0  nop
    ctx->pc = 0x2e8b4cu;
    // NOP
    ctx->pc = 0x2e8b50u;
}
