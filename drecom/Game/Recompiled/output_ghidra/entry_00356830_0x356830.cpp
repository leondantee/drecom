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

// Function: entry_00356830
// Address: 0x356830 - 0x356a08
void entry_00356830_0x356830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356830_0x356830");
#endif

    switch (ctx->pc) {
        case 0x35687cu: goto label_35687c;
        case 0x3568a0u: goto label_3568a0;
        case 0x3568c4u: goto label_3568c4;
        case 0x3568e8u: goto label_3568e8;
        case 0x356924u: goto label_356924;
        case 0x356954u: goto label_356954;
        case 0x3569d8u: goto label_3569d8;
        default: break;
    }

    ctx->pc = 0x356830u;

    // 0x356830: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x356830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x356834: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x356834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x356838: 0x12030073  beq         $s0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x356838u;
    {
        const bool branch_taken_0x356838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x356838) {
            ctx->pc = 0x356A08u;
            return;
        }
    }
    ctx->pc = 0x356840u;
    // 0x356840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356844: 0x0  nop
    ctx->pc = 0x356844u;
    // NOP
    // 0x356848: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x356848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x35684c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35684cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356850: 0x0  nop
    ctx->pc = 0x356850u;
    // NOP
    // 0x356854: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x356854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x356858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35685c: 0x0  nop
    ctx->pc = 0x35685cu;
    // NOP
    // 0x356860: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x356860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x356864: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x356864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x356868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35686c: 0x0  nop
    ctx->pc = 0x35686cu;
    // NOP
    // 0x356870: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x356870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x356874: 0xc067654  jal         func_19D950
    ctx->pc = 0x356874u;
    SET_GPR_U32(ctx, 31, 0x35687Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356874u, 0x35687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35687Cu;
label_35687c:
    // 0x35687c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x356880: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356884: 0x0  nop
    ctx->pc = 0x356884u;
    // NOP
    // 0x356888: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35688c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x35688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356890: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356894: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x356894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x356898: 0xc067654  jal         func_19D950
    ctx->pc = 0x356898u;
    SET_GPR_U32(ctx, 31, 0x3568A0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356898u, 0x3568A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568A0u;
label_3568a0:
    // 0x3568a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3568a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3568a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3568a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3568a8: 0x0  nop
    ctx->pc = 0x3568a8u;
    // NOP
    // 0x3568ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3568acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3568b0: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x3568b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3568b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3568b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3568b8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3568b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3568bc: 0xc067654  jal         func_19D950
    ctx->pc = 0x3568BCu;
    SET_GPR_U32(ctx, 31, 0x3568C4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x3568BCu, 0x3568C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568C4u;
label_3568c4:
    // 0x3568c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3568c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3568c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3568cc: 0x0  nop
    ctx->pc = 0x3568ccu;
    // NOP
    // 0x3568d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3568d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3568d4: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x3568d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3568d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3568d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3568dc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3568dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3568e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x3568E0u;
    SET_GPR_U32(ctx, 31, 0x3568E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x3568E0u, 0x3568E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568E8u;
label_3568e8:
    // 0x3568e8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x3568e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x3568ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3568ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3568f0: 0x0  nop
    ctx->pc = 0x3568f0u;
    // NOP
    // 0x3568f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3568f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3568f8: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x3568f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3568fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3568fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356900: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x356900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x356904: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x356904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x356908: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x356908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x35690c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35690cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356910: 0x0  nop
    ctx->pc = 0x356910u;
    // NOP
    // 0x356914: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x356914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x356918: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x356918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35691c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x35691Cu;
    SET_GPR_U32(ctx, 31, 0x356924u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x35691Cu, 0x356924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356924u;
label_356924:
    // 0x356924: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x356924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x356928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35692c: 0x0  nop
    ctx->pc = 0x35692cu;
    // NOP
    // 0x356930: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x356930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356934: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x356934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x356938: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x356938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x35693c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35693cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356940: 0x0  nop
    ctx->pc = 0x356940u;
    // NOP
    // 0x356944: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x356944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x356948: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x356948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35694c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x35694Cu;
    SET_GPR_U32(ctx, 31, 0x356954u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x35694Cu, 0x356954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356954u;
label_356954:
    // 0x356954: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x356954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x356958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35695c: 0x0  nop
    ctx->pc = 0x35695cu;
    // NOP
    // 0x356960: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x356960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356964: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x356964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x356968: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x356968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x35696c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35696cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356970: 0x0  nop
    ctx->pc = 0x356970u;
    // NOP
    // 0x356974: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x356974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x356978: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x356978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x35697c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35697cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356980: 0x0  nop
    ctx->pc = 0x356980u;
    // NOP
    // 0x356984: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x356984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x356988: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x356988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x35698c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35698cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356990: 0x0  nop
    ctx->pc = 0x356990u;
    // NOP
    // 0x356994: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x356994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x356998: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x356998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x35699c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x35699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3569a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3569a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3569a4: 0x0  nop
    ctx->pc = 0x3569a4u;
    // NOP
    // 0x3569a8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x3569a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x3569ac: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x3569acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x3569b0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3569b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3569b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3569b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3569b8: 0x0  nop
    ctx->pc = 0x3569b8u;
    // NOP
    // 0x3569bc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x3569bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x3569c0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3569c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x3569c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3569c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3569c8: 0x0  nop
    ctx->pc = 0x3569c8u;
    // NOP
    // 0x3569cc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3569ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3569d0: 0xc067648  jal         func_19D920
    ctx->pc = 0x3569D0u;
    SET_GPR_U32(ctx, 31, 0x3569D8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3569D0u, 0x3569D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3569D8u;
label_3569d8:
    // 0x3569d8: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x3569d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x3569dc: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x3569dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x3569e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3569e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3569e4: 0x0  nop
    ctx->pc = 0x3569e4u;
    // NOP
    // 0x3569e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3569e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3569ec: 0x3c033c4c  lui         $v1, 0x3C4C
    ctx->pc = 0x3569ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15436 << 16));
    // 0x3569f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3569f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3569f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3569f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3569f8: 0x0  nop
    ctx->pc = 0x3569f8u;
    // NOP
    // 0x3569fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3569fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356a00: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x356a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x356a04: 0x0  nop
    ctx->pc = 0x356a04u;
    // NOP
    ctx->pc = 0x356a08u;
}
