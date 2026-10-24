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

// Function: entry_002e9518
// Address: 0x2e9518 - 0x2e9740
void entry_002e9518_0x2e9518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e9518_0x2e9518");
#endif

    switch (ctx->pc) {
        case 0x2e9580u: goto label_2e9580;
        case 0x2e95a4u: goto label_2e95a4;
        case 0x2e95c8u: goto label_2e95c8;
        case 0x2e95ecu: goto label_2e95ec;
        case 0x2e9628u: goto label_2e9628;
        case 0x2e9658u: goto label_2e9658;
        case 0x2e9704u: goto label_2e9704;
        case 0x2e9724u: goto label_2e9724;
        default: break;
    }

    ctx->pc = 0x2e9518u;

    // 0x2e9518: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e9518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e951c: 0x247ea610  addiu       $fp, $v1, -0x59F0
    ctx->pc = 0x2e951cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e9520: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x2e9520u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9524: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e9528: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e9528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e952c: 0x12030084  beq         $s0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2E952Cu;
    {
        const bool branch_taken_0x2e952c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e952c) {
            ctx->pc = 0x2E9740u;
            return;
        }
    }
    ctx->pc = 0x2E9534u;
    // 0x2e9534: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2e9534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2e9538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e953c: 0x0  nop
    ctx->pc = 0x2e953cu;
    // NOP
    // 0x2e9540: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e9544: 0x3c0241f9  lui         $v0, 0x41F9
    ctx->pc = 0x2e9544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16889 << 16));
    // 0x2e9548: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e9548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e954c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e954cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9550: 0x0  nop
    ctx->pc = 0x2e9550u;
    // NOP
    // 0x2e9554: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9558: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x2e9558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x2e955c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e955cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9560: 0x0  nop
    ctx->pc = 0x2e9560u;
    // NOP
    // 0x2e9564: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9568: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2e9568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2e956c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e956cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9570: 0x0  nop
    ctx->pc = 0x2e9570u;
    // NOP
    // 0x2e9574: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9578: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9578u;
    SET_GPR_U32(ctx, 31, 0x2E9580u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9578u, 0x2E9580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9580u;
label_2e9580:
    // 0x2e9580: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9588: 0x0  nop
    ctx->pc = 0x2e9588u;
    // NOP
    // 0x2e958c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e958cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9590: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9594: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9598: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e959c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E959Cu;
    SET_GPR_U32(ctx, 31, 0x2E95A4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E959Cu, 0x2E95A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95A4u;
label_2e95a4:
    // 0x2e95a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e95a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e95a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e95ac: 0x0  nop
    ctx->pc = 0x2e95acu;
    // NOP
    // 0x2e95b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e95b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e95b4: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e95b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e95b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e95b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e95bc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e95bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e95c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E95C0u;
    SET_GPR_U32(ctx, 31, 0x2E95C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E95C0u, 0x2E95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95C8u;
label_2e95c8:
    // 0x2e95c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e95cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e95ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e95d0: 0x0  nop
    ctx->pc = 0x2e95d0u;
    // NOP
    // 0x2e95d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e95d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e95d8: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e95d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e95dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e95dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e95e0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e95e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e95e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E95E4u;
    SET_GPR_U32(ctx, 31, 0x2E95ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E95E4u, 0x2E95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95ECu;
label_2e95ec:
    // 0x2e95ec: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e95f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e95f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e95f4: 0x0  nop
    ctx->pc = 0x2e95f4u;
    // NOP
    // 0x2e95f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e95f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e95fc: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e95fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9600: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9604: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9608: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e9608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e960c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e9610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9614: 0x0  nop
    ctx->pc = 0x2e9614u;
    // NOP
    // 0x2e9618: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e9618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e961c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9620: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E9620u;
    SET_GPR_U32(ctx, 31, 0x2E9628u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E9620u, 0x2E9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9628u;
label_2e9628:
    // 0x2e9628: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2e9628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2e962c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e962cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9630: 0x0  nop
    ctx->pc = 0x2e9630u;
    // NOP
    // 0x2e9634: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9638: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e9638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e963c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e9640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9644: 0x0  nop
    ctx->pc = 0x2e9644u;
    // NOP
    // 0x2e9648: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e9648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e964c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9650: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E9650u;
    SET_GPR_U32(ctx, 31, 0x2E9658u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E9650u, 0x2E9658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9658u;
label_2e9658:
    // 0x2e9658: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2e9658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2e965c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e965cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9660: 0x0  nop
    ctx->pc = 0x2e9660u;
    // NOP
    // 0x2e9664: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9668: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e9668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e966c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e9670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9674: 0x0  nop
    ctx->pc = 0x2e9674u;
    // NOP
    // 0x2e9678: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e9678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e967c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e967cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9684: 0x0  nop
    ctx->pc = 0x2e9684u;
    // NOP
    // 0x2e9688: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e9688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e968c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e968cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e9690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9694: 0x0  nop
    ctx->pc = 0x2e9694u;
    // NOP
    // 0x2e9698: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e9698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e969c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e969cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e96a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e96a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e96a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96a8: 0x0  nop
    ctx->pc = 0x2e96a8u;
    // NOP
    // 0x2e96ac: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e96acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e96b0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e96b4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e96b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e96b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96bc: 0x0  nop
    ctx->pc = 0x2e96bcu;
    // NOP
    // 0x2e96c0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e96c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e96c4: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2e96c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e96c8: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2e96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2e96cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96d0: 0x0  nop
    ctx->pc = 0x2e96d0u;
    // NOP
    // 0x2e96d4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e96d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e96d8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2e96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2e96dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96e0: 0x0  nop
    ctx->pc = 0x2e96e0u;
    // NOP
    // 0x2e96e4: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e96e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e96e8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2e96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2e96ec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2e96ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2e96f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96f4: 0x0  nop
    ctx->pc = 0x2e96f4u;
    // NOP
    // 0x2e96f8: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e96f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e96fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E96FCu;
    SET_GPR_U32(ctx, 31, 0x2E9704u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E96FCu, 0x2E9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9704u;
label_2e9704:
    // 0x2e9704: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e9704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e9708: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e9708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e970c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e970cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9710: 0x0  nop
    ctx->pc = 0x2e9710u;
    // NOP
    // 0x2e9714: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9718: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e9718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e971c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E971Cu;
    SET_GPR_U32(ctx, 31, 0x2E9724u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E971Cu, 0x2E9724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9724u;
label_2e9724:
    // 0x2e9724: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e9724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e9728: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e9728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e972c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e972cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9730: 0x0  nop
    ctx->pc = 0x2e9730u;
    // NOP
    // 0x2e9734: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9738: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e9738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2e973c: 0x0  nop
    ctx->pc = 0x2e973cu;
    // NOP
    ctx->pc = 0x2e9740u;
}
