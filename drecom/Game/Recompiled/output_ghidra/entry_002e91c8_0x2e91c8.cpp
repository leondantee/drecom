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

// Function: entry_002e91c8
// Address: 0x2e91c8 - 0x2e93a8
void entry_002e91c8_0x2e91c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e91c8_0x2e91c8");
#endif

    switch (ctx->pc) {
        case 0x2e9244u: goto label_2e9244;
        case 0x2e9274u: goto label_2e9274;
        case 0x2e9370u: goto label_2e9370;
        case 0x2e9390u: goto label_2e9390;
        default: break;
    }

    ctx->pc = 0x2e91c8u;

    // 0x2e91c8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e91cc: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x2e91ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e91d0: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2e91d0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e91d4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e91d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e91d8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e91d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e91dc: 0x12030072  beq         $s0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2E91DCu;
    {
        const bool branch_taken_0x2e91dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e91dc) {
            ctx->pc = 0x2E93A8u;
            return;
        }
    }
    ctx->pc = 0x2E91E4u;
    // 0x2e91e4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2e91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2e91e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e91e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e91ec: 0x0  nop
    ctx->pc = 0x2e91ecu;
    // NOP
    // 0x2e91f0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e91f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e91f4: 0x3c024224  lui         $v0, 0x4224
    ctx->pc = 0x2e91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16932 << 16));
    // 0x2e91f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e91f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e91fc: 0x0  nop
    ctx->pc = 0x2e91fcu;
    // NOP
    // 0x2e9200: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9204: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e9204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e920c: 0x0  nop
    ctx->pc = 0x2e920cu;
    // NOP
    // 0x2e9210: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9214: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2e9214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2e9218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e921c: 0x0  nop
    ctx->pc = 0x2e921cu;
    // NOP
    // 0x2e9220: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9224: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e9224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e9228: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e9228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e922c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e922cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9230: 0x0  nop
    ctx->pc = 0x2e9230u;
    // NOP
    // 0x2e9234: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e9234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e9238: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e9238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e923c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E923Cu;
    SET_GPR_U32(ctx, 31, 0x2E9244u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E923Cu, 0x2E9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9244u;
label_2e9244:
    // 0x2e9244: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e9244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e9248: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e924c: 0x0  nop
    ctx->pc = 0x2e924cu;
    // NOP
    // 0x2e9250: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9254: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e9254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e9258: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e925c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e925cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9260: 0x0  nop
    ctx->pc = 0x2e9260u;
    // NOP
    // 0x2e9264: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e9264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e9268: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e9268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e926c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E926Cu;
    SET_GPR_U32(ctx, 31, 0x2E9274u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E926Cu, 0x2E9274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9274u;
label_2e9274:
    // 0x2e9274: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e9274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e9278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e927c: 0x0  nop
    ctx->pc = 0x2e927cu;
    // NOP
    // 0x2e9280: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9284: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e9284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e9288: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e928c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e928cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9290: 0x0  nop
    ctx->pc = 0x2e9290u;
    // NOP
    // 0x2e9294: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e9294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e9298: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e929c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e929cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92a0: 0x0  nop
    ctx->pc = 0x2e92a0u;
    // NOP
    // 0x2e92a4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e92a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e92a8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e92ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92b0: 0x0  nop
    ctx->pc = 0x2e92b0u;
    // NOP
    // 0x2e92b4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e92b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e92b8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e92bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e92bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e92c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92c4: 0x0  nop
    ctx->pc = 0x2e92c4u;
    // NOP
    // 0x2e92c8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e92c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e92cc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e92d0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e92d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e92d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92d8: 0x0  nop
    ctx->pc = 0x2e92d8u;
    // NOP
    // 0x2e92dc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e92dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e92e0: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2e92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2e92e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92e8: 0x0  nop
    ctx->pc = 0x2e92e8u;
    // NOP
    // 0x2e92ec: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e92ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e92f0: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2e92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2e92f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92f8: 0x0  nop
    ctx->pc = 0x2e92f8u;
    // NOP
    // 0x2e92fc: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e92fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e9300: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2e9300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2e9304: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2e9304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2e9308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e930c: 0x0  nop
    ctx->pc = 0x2e930cu;
    // NOP
    // 0x2e9310: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e9310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e9314: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9318: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e9318u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e931c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2e931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e9320: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e9320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e932c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2e932cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e9330: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9334: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e9334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e9338: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2e9338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e933c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e933cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9344: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2e9344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2e9348: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2e9348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e934c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e9350: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9354: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2e9354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2e9358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e935c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2e935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2e9360: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9364: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e9364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9368: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9368u;
    SET_GPR_U32(ctx, 31, 0x2E9370u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9368u, 0x2E9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9370u;
label_2e9370:
    // 0x2e9370: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e9370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e9374: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e9374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e9378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e937c: 0x0  nop
    ctx->pc = 0x2e937cu;
    // NOP
    // 0x2e9380: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9384: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e9384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e9388: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9388u;
    SET_GPR_U32(ctx, 31, 0x2E9390u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9388u, 0x2E9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9390u;
label_2e9390:
    // 0x2e9390: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e9390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e9394: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e9394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e9398: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e9398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e939c: 0x0  nop
    ctx->pc = 0x2e939cu;
    // NOP
    // 0x2e93a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e93a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e93a4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e93a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2e93a8u;
}
