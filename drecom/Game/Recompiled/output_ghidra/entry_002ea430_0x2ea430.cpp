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

// Function: entry_002ea430
// Address: 0x2ea430 - 0x2ea678
void entry_002ea430_0x2ea430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea430_0x2ea430");
#endif

    switch (ctx->pc) {
        case 0x2ea4a0u: goto label_2ea4a0;
        case 0x2ea4c4u: goto label_2ea4c4;
        case 0x2ea4e8u: goto label_2ea4e8;
        case 0x2ea50cu: goto label_2ea50c;
        case 0x2ea548u: goto label_2ea548;
        case 0x2ea578u: goto label_2ea578;
        case 0x2ea5ecu: goto label_2ea5ec;
        case 0x2ea5f8u: goto label_2ea5f8;
        case 0x2ea640u: goto label_2ea640;
        case 0x2ea660u: goto label_2ea660;
        default: break;
    }

    ctx->pc = 0x2ea430u;

    // 0x2ea430: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ea430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ea434: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ea434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ea438: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x2ea438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x2ea43c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2ea43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2ea440: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ea440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea444: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea448: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea44c: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2EA44Cu;
    {
        const bool branch_taken_0x2ea44c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea44c) {
            ctx->pc = 0x2EA678u;
            return;
        }
    }
    ctx->pc = 0x2EA454u;
    // 0x2ea454: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ea454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea45c: 0x0  nop
    ctx->pc = 0x2ea45cu;
    // NOP
    // 0x2ea460: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea464: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ea464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ea468: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ea468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ea46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea470: 0x0  nop
    ctx->pc = 0x2ea470u;
    // NOP
    // 0x2ea474: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea478: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ea478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ea47c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea480: 0x0  nop
    ctx->pc = 0x2ea480u;
    // NOP
    // 0x2ea484: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea488: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ea488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ea48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea490: 0x0  nop
    ctx->pc = 0x2ea490u;
    // NOP
    // 0x2ea494: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea498: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA498u;
    SET_GPR_U32(ctx, 31, 0x2EA4A0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA498u, 0x2EA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4A0u;
label_2ea4a0:
    // 0x2ea4a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea4a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea4a8: 0x0  nop
    ctx->pc = 0x2ea4a8u;
    // NOP
    // 0x2ea4ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea4acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea4b0: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea4b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea4b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea4bc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA4BCu;
    SET_GPR_U32(ctx, 31, 0x2EA4C4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA4BCu, 0x2EA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4C4u;
label_2ea4c4:
    // 0x2ea4c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea4c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea4cc: 0x0  nop
    ctx->pc = 0x2ea4ccu;
    // NOP
    // 0x2ea4d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea4d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea4d4: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea4d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea4dc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea4e0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA4E0u;
    SET_GPR_U32(ctx, 31, 0x2EA4E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA4E0u, 0x2EA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4E8u;
label_2ea4e8:
    // 0x2ea4e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea4f0: 0x0  nop
    ctx->pc = 0x2ea4f0u;
    // NOP
    // 0x2ea4f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea4f8: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea4fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea500: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea504: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA504u;
    SET_GPR_U32(ctx, 31, 0x2EA50Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA504u, 0x2EA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA50Cu;
label_2ea50c:
    // 0x2ea50c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ea50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea514: 0x0  nop
    ctx->pc = 0x2ea514u;
    // NOP
    // 0x2ea518: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea51c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea520: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea524: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea528: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ea528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ea52c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ea52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ea530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea534: 0x0  nop
    ctx->pc = 0x2ea534u;
    // NOP
    // 0x2ea538: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ea538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ea53c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ea53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea540: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EA540u;
    SET_GPR_U32(ctx, 31, 0x2EA548u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EA540u, 0x2EA548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA548u;
label_2ea548:
    // 0x2ea548: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ea548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea54c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea550: 0x0  nop
    ctx->pc = 0x2ea550u;
    // NOP
    // 0x2ea554: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea558: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ea558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ea55c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2ea55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2ea560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea564: 0x0  nop
    ctx->pc = 0x2ea564u;
    // NOP
    // 0x2ea568: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ea568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ea56c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ea56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea570: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EA570u;
    SET_GPR_U32(ctx, 31, 0x2EA578u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EA570u, 0x2EA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA578u;
label_2ea578:
    // 0x2ea578: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2ea578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2ea57c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ea57cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea580: 0x0  nop
    ctx->pc = 0x2ea580u;
    // NOP
    // 0x2ea584: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea588: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ea588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ea58c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2ea58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea594: 0x0  nop
    ctx->pc = 0x2ea594u;
    // NOP
    // 0x2ea598: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ea598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ea59c: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x2ea59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x2ea5a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ea5a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea5a4: 0x0  nop
    ctx->pc = 0x2ea5a4u;
    // NOP
    // 0x2ea5a8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ea5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ea5ac: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ea5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea5b4: 0x0  nop
    ctx->pc = 0x2ea5b4u;
    // NOP
    // 0x2ea5b8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ea5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ea5bc: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ea5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ea5c0: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x2ea5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ea5c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea5c8: 0x0  nop
    ctx->pc = 0x2ea5c8u;
    // NOP
    // 0x2ea5cc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ea5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ea5d0: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ea5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ea5d4: 0x346251ec  ori         $v0, $v1, 0x51EC
    ctx->pc = 0x2ea5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ea5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea5dc: 0x0  nop
    ctx->pc = 0x2ea5dcu;
    // NOP
    // 0x2ea5e0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ea5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ea5e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA5E4u;
    SET_GPR_U32(ctx, 31, 0x2EA5ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA5E4u, 0x2EA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5ECu;
label_2ea5ec:
    // 0x2ea5ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ea5ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ea5f0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2EA5F0u;
    SET_GPR_U32(ctx, 31, 0x2EA5F8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2EA5F0u, 0x2EA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5F8u;
label_2ea5f8:
    // 0x2ea5f8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2ea5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2ea5fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ea5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea600: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2ea600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ea604: 0x3c07425c  lui         $a3, 0x425C
    ctx->pc = 0x2ea604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16988 << 16));
    // 0x2ea608: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ea608u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea60c: 0x0  nop
    ctx->pc = 0x2ea60cu;
    // NOP
    // 0x2ea610: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ea610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ea614: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x2ea614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x2ea618: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ea618u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea61c: 0x0  nop
    ctx->pc = 0x2ea61cu;
    // NOP
    // 0x2ea620: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ea620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ea624: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ea624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ea628: 0x34466666  ori         $a2, $v0, 0x6666
    ctx->pc = 0x2ea628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ea62c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ea62cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea630: 0x0  nop
    ctx->pc = 0x2ea630u;
    // NOP
    // 0x2ea634: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ea634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ea638: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA638u;
    SET_GPR_U32(ctx, 31, 0x2EA640u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA638u, 0x2EA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA640u;
label_2ea640:
    // 0x2ea640: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ea640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ea644: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2ea644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ea648: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ea648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea64c: 0x0  nop
    ctx->pc = 0x2ea64cu;
    // NOP
    // 0x2ea650: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea654: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ea654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ea658: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA658u;
    SET_GPR_U32(ctx, 31, 0x2EA660u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA658u, 0x2EA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA660u;
label_2ea660:
    // 0x2ea660: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ea660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ea664: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x2ea664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ea668: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ea668u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea66c: 0x0  nop
    ctx->pc = 0x2ea66cu;
    // NOP
    // 0x2ea670: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea674: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ea674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2ea678u;
}
