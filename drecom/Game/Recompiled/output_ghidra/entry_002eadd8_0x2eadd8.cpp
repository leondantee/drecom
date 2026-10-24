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

// Function: entry_002eadd8
// Address: 0x2eadd8 - 0x2eb008
void entry_002eadd8_0x2eadd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eadd8_0x2eadd8");
#endif

    switch (ctx->pc) {
        case 0x2eae40u: goto label_2eae40;
        case 0x2eae64u: goto label_2eae64;
        case 0x2eae88u: goto label_2eae88;
        case 0x2eaeacu: goto label_2eaeac;
        case 0x2eaed4u: goto label_2eaed4;
        case 0x2eaf00u: goto label_2eaf00;
        case 0x2eaf9cu: goto label_2eaf9c;
        case 0x2eafd0u: goto label_2eafd0;
        case 0x2eaff0u: goto label_2eaff0;
        default: break;
    }

    ctx->pc = 0x2eadd8u;

    // 0x2eadd8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2eadd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2eaddc: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x2eaddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2eade0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2eade0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eade4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eade4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eade8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eade8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eadec: 0x12030086  beq         $s0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2EADECu;
    {
        const bool branch_taken_0x2eadec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eadec) {
            ctx->pc = 0x2EB008u;
            return;
        }
    }
    ctx->pc = 0x2EADF4u;
    // 0x2eadf4: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2eadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2eadf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eadf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eadfc: 0x0  nop
    ctx->pc = 0x2eadfcu;
    // NOP
    // 0x2eae00: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eae00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eae04: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2eae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2eae08: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2eae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2eae0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eae0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae10: 0x0  nop
    ctx->pc = 0x2eae10u;
    // NOP
    // 0x2eae14: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eae18: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2eae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2eae1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eae1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae20: 0x0  nop
    ctx->pc = 0x2eae20u;
    // NOP
    // 0x2eae24: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eae24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eae28: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2eae28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2eae2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eae2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae30: 0x0  nop
    ctx->pc = 0x2eae30u;
    // NOP
    // 0x2eae34: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eae38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAE38u;
    SET_GPR_U32(ctx, 31, 0x2EAE40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAE38u, 0x2EAE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE40u;
label_2eae40:
    // 0x2eae40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eae44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eae44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eae48: 0x0  nop
    ctx->pc = 0x2eae48u;
    // NOP
    // 0x2eae4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eae4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eae50: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eae54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eae54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eae58: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eae58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eae5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAE5Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAE5Cu, 0x2EAE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE64u;
label_2eae64:
    // 0x2eae64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eae64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eae68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eae68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eae6c: 0x0  nop
    ctx->pc = 0x2eae6cu;
    // NOP
    // 0x2eae70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eae70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eae74: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eae78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eae78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eae7c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eae80: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAE80u;
    SET_GPR_U32(ctx, 31, 0x2EAE88u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAE80u, 0x2EAE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE88u;
label_2eae88:
    // 0x2eae88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eae88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eae8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eae8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eae90: 0x0  nop
    ctx->pc = 0x2eae90u;
    // NOP
    // 0x2eae94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eae94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eae98: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2eae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eae9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eae9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaea0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eaea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eaea4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAEA4u;
    SET_GPR_U32(ctx, 31, 0x2EAEACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAEA4u, 0x2EAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEACu;
label_2eaeac:
    // 0x2eaeac: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2eaeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2eaeb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eaeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaeb4: 0x0  nop
    ctx->pc = 0x2eaeb4u;
    // NOP
    // 0x2eaeb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eaeb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaebc: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eaebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaec0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eaec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaec4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eaec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eaec8: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x2eaec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eaecc: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EAECCu;
    SET_GPR_U32(ctx, 31, 0x2EAED4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EAECCu, 0x2EAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAED4u;
label_2eaed4:
    // 0x2eaed4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2eaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2eaed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eaed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaedc: 0x0  nop
    ctx->pc = 0x2eaedcu;
    // NOP
    // 0x2eaee0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaee4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2eaee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2eaee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eaee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaeec: 0x0  nop
    ctx->pc = 0x2eaeecu;
    // NOP
    // 0x2eaef0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2eaef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2eaef4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x2eaef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eaef8: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EAEF8u;
    SET_GPR_U32(ctx, 31, 0x2EAF00u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EAEF8u, 0x2EAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF00u;
label_2eaf00:
    // 0x2eaf00: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2eaf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2eaf04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eaf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaf08: 0x0  nop
    ctx->pc = 0x2eaf08u;
    // NOP
    // 0x2eaf0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaf0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaf10: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2eaf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2eaf14: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2eaf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2eaf18: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2eaf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2eaf1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf20: 0x0  nop
    ctx->pc = 0x2eaf20u;
    // NOP
    // 0x2eaf24: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eaf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eaf28: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2eaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2eaf2c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eaf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eaf30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf34: 0x0  nop
    ctx->pc = 0x2eaf34u;
    // NOP
    // 0x2eaf38: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2eaf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2eaf3c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2eaf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2eaf40: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2eaf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2eaf44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf48: 0x0  nop
    ctx->pc = 0x2eaf48u;
    // NOP
    // 0x2eaf4c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2eaf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2eaf50: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x2eaf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x2eaf54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2eaf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eaf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf5c: 0x0  nop
    ctx->pc = 0x2eaf5cu;
    // NOP
    // 0x2eaf60: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2eaf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2eaf64: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2eaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2eaf68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf6c: 0x0  nop
    ctx->pc = 0x2eaf6cu;
    // NOP
    // 0x2eaf70: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2eaf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2eaf74: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2eaf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2eaf78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf7c: 0x0  nop
    ctx->pc = 0x2eaf7cu;
    // NOP
    // 0x2eaf80: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2eaf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2eaf84: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2eaf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2eaf88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf8c: 0x0  nop
    ctx->pc = 0x2eaf8cu;
    // NOP
    // 0x2eaf90: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2eaf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2eaf94: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAF94u;
    SET_GPR_U32(ctx, 31, 0x2EAF9Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAF94u, 0x2EAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF9Cu;
label_2eaf9c:
    // 0x2eaf9c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eaf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eafa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eafa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eafa4: 0x0  nop
    ctx->pc = 0x2eafa4u;
    // NOP
    // 0x2eafa8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eafa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eafac: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2eafacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2eafb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eafb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eafb4: 0x0  nop
    ctx->pc = 0x2eafb4u;
    // NOP
    // 0x2eafb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eafb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eafbc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eafbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2eafc0: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2eafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2eafc4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2eafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2eafc8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAFC8u;
    SET_GPR_U32(ctx, 31, 0x2EAFD0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAFC8u, 0x2EAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFD0u;
label_2eafd0:
    // 0x2eafd0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2eafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2eafd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2eafd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eafd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eafd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eafdc: 0x0  nop
    ctx->pc = 0x2eafdcu;
    // NOP
    // 0x2eafe0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eafe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eafe4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2eafe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2eafe8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAFE8u;
    SET_GPR_U32(ctx, 31, 0x2EAFF0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAFE8u, 0x2EAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFF0u;
label_2eaff0:
    // 0x2eaff0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2eaff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2eaff4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eaff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2eaff8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eaff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaffc: 0x0  nop
    ctx->pc = 0x2eaffcu;
    // NOP
    // 0x2eb000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb004: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2eb004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2eb008u;
}
