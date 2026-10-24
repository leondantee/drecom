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

// Function: entry_002ec4f0
// Address: 0x2ec4f0 - 0x2ec718
void entry_002ec4f0_0x2ec4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec4f0_0x2ec4f0");
#endif

    switch (ctx->pc) {
        case 0x2ec55cu: goto label_2ec55c;
        case 0x2ec580u: goto label_2ec580;
        case 0x2ec5a4u: goto label_2ec5a4;
        case 0x2ec5c8u: goto label_2ec5c8;
        case 0x2ec604u: goto label_2ec604;
        case 0x2ec634u: goto label_2ec634;
        case 0x2ec6e0u: goto label_2ec6e0;
        case 0x2ec700u: goto label_2ec700;
        default: break;
    }

    ctx->pc = 0x2ec4f0u;

    // 0x2ec4f0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ec4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4f4: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ec4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ec4f8: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2ec4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2ec4fc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2ec4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ec500: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ec500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec504: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec508: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec50c: 0x12030082  beq         $s0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2EC50Cu;
    {
        const bool branch_taken_0x2ec50c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ec50c) {
            ctx->pc = 0x2EC718u;
            return;
        }
    }
    ctx->pc = 0x2EC514u;
    // 0x2ec514: 0x3c024184  lui         $v0, 0x4184
    ctx->pc = 0x2ec514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16772 << 16));
    // 0x2ec518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec51c: 0x0  nop
    ctx->pc = 0x2ec51cu;
    // NOP
    // 0x2ec520: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ec524: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2ec524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2ec528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec52c: 0x0  nop
    ctx->pc = 0x2ec52cu;
    // NOP
    // 0x2ec530: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ec534: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ec534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ec538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec53c: 0x0  nop
    ctx->pc = 0x2ec53cu;
    // NOP
    // 0x2ec540: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ec544: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ec544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ec548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec54c: 0x0  nop
    ctx->pc = 0x2ec54cu;
    // NOP
    // 0x2ec550: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ec554: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC554u;
    SET_GPR_U32(ctx, 31, 0x2EC55Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC554u, 0x2EC55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC55Cu;
label_2ec55c:
    // 0x2ec55c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec564: 0x0  nop
    ctx->pc = 0x2ec564u;
    // NOP
    // 0x2ec568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec56c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec574: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ec578: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC578u;
    SET_GPR_U32(ctx, 31, 0x2EC580u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC578u, 0x2EC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC580u;
label_2ec580:
    // 0x2ec580: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec588: 0x0  nop
    ctx->pc = 0x2ec588u;
    // NOP
    // 0x2ec58c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec58cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec590: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec594: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec598: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ec59c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC59Cu;
    SET_GPR_U32(ctx, 31, 0x2EC5A4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC59Cu, 0x2EC5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5A4u;
label_2ec5a4:
    // 0x2ec5a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec5ac: 0x0  nop
    ctx->pc = 0x2ec5acu;
    // NOP
    // 0x2ec5b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec5b4: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec5b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec5bc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ec5c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC5C0u;
    SET_GPR_U32(ctx, 31, 0x2EC5C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC5C0u, 0x2EC5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5C8u;
label_2ec5c8:
    // 0x2ec5c8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ec5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ec5cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec5d0: 0x0  nop
    ctx->pc = 0x2ec5d0u;
    // NOP
    // 0x2ec5d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec5d8: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec5dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec5e0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ec5e4: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ec5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ec5e8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ec5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ec5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec5f0: 0x0  nop
    ctx->pc = 0x2ec5f0u;
    // NOP
    // 0x2ec5f4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ec5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ec5f8: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec5fc: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EC5FCu;
    SET_GPR_U32(ctx, 31, 0x2EC604u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EC5FCu, 0x2EC604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC604u;
label_2ec604:
    // 0x2ec604: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2ec604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2ec608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec60c: 0x0  nop
    ctx->pc = 0x2ec60cu;
    // NOP
    // 0x2ec610: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec614: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ec614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ec618: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ec618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ec61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec620: 0x0  nop
    ctx->pc = 0x2ec620u;
    // NOP
    // 0x2ec624: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ec624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ec628: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec62c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EC62Cu;
    SET_GPR_U32(ctx, 31, 0x2EC634u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EC62Cu, 0x2EC634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC634u;
label_2ec634:
    // 0x2ec634: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2ec634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2ec638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec63c: 0x0  nop
    ctx->pc = 0x2ec63cu;
    // NOP
    // 0x2ec640: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec644: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ec644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ec648: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec650: 0x0  nop
    ctx->pc = 0x2ec650u;
    // NOP
    // 0x2ec654: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ec654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ec658: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec660: 0x0  nop
    ctx->pc = 0x2ec660u;
    // NOP
    // 0x2ec664: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ec664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ec668: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec66c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec670: 0x0  nop
    ctx->pc = 0x2ec670u;
    // NOP
    // 0x2ec674: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ec674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ec678: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec67c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ec67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec684: 0x0  nop
    ctx->pc = 0x2ec684u;
    // NOP
    // 0x2ec688: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ec688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ec68c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec690: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ec690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec698: 0x0  nop
    ctx->pc = 0x2ec698u;
    // NOP
    // 0x2ec69c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ec69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ec6a0: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2ec6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec6a4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ec6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ec6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec6ac: 0x0  nop
    ctx->pc = 0x2ec6acu;
    // NOP
    // 0x2ec6b0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ec6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ec6b4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2ec6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2ec6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec6bc: 0x0  nop
    ctx->pc = 0x2ec6bcu;
    // NOP
    // 0x2ec6c0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ec6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ec6c4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ec6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ec6c8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ec6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ec6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec6d0: 0x0  nop
    ctx->pc = 0x2ec6d0u;
    // NOP
    // 0x2ec6d4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ec6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ec6d8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC6D8u;
    SET_GPR_U32(ctx, 31, 0x2EC6E0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC6D8u, 0x2EC6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC6E0u;
label_2ec6e0:
    // 0x2ec6e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ec6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ec6e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ec6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ec6e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec6ec: 0x0  nop
    ctx->pc = 0x2ec6ecu;
    // NOP
    // 0x2ec6f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec6f4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ec6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ec6f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC6F8u;
    SET_GPR_U32(ctx, 31, 0x2EC700u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC6F8u, 0x2EC700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC700u;
label_2ec700:
    // 0x2ec700: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ec700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ec704: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ec704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ec708: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ec708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec70c: 0x0  nop
    ctx->pc = 0x2ec70cu;
    // NOP
    // 0x2ec710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec714: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ec714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2ec718u;
}
