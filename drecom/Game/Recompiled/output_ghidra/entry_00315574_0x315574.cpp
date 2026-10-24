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

// Function: entry_00315574
// Address: 0x315574 - 0x3157c0
void entry_00315574_0x315574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315574_0x315574");
#endif

    switch (ctx->pc) {
        case 0x3155a8u: goto label_3155a8;
        case 0x3155b4u: goto label_3155b4;
        case 0x315614u: goto label_315614;
        case 0x315638u: goto label_315638;
        case 0x31565cu: goto label_31565c;
        case 0x315680u: goto label_315680;
        case 0x3156f8u: goto label_3156f8;
        case 0x315728u: goto label_315728;
        default: break;
    }

    ctx->pc = 0x315574u;

    // 0x315574: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x315574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x315578: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x315578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31557c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31557cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315580: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x315580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x315584: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x315584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x315588: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x315588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31558c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31558cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x315590: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x315590u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x315594: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x315594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x315598: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x315598u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31559c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31559cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3155a0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3155A0u;
    SET_GPR_U32(ctx, 31, 0x3155A8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3155A0u, 0x3155A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155A8u;
label_3155a8:
    // 0x3155a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3155a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3155ac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3155ACu;
    SET_GPR_U32(ctx, 31, 0x3155B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3155ACu, 0x3155B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155B4u;
label_3155b4:
    // 0x3155b4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3155b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3155b8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3155b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3155bc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3155bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3155c0: 0x1203007f  beq         $s0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x3155C0u;
    {
        const bool branch_taken_0x3155c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3155c0) {
            ctx->pc = 0x3157C0u;
            return;
        }
    }
    ctx->pc = 0x3155C8u;
    // 0x3155c8: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x3155c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x3155cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3155ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3155d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3155d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3155d4: 0x0  nop
    ctx->pc = 0x3155d4u;
    // NOP
    // 0x3155d8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3155d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3155dc: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x3155dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x3155e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3155e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3155e4: 0x0  nop
    ctx->pc = 0x3155e4u;
    // NOP
    // 0x3155e8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3155e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3155ec: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x3155ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x3155f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3155f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3155f4: 0x0  nop
    ctx->pc = 0x3155f4u;
    // NOP
    // 0x3155f8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3155f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3155fc: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x3155fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x315600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315604: 0x0  nop
    ctx->pc = 0x315604u;
    // NOP
    // 0x315608: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x315608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x31560c: 0xc067648  jal         func_19D920
    ctx->pc = 0x31560Cu;
    SET_GPR_U32(ctx, 31, 0x315614u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31560Cu, 0x315614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315614u;
label_315614:
    // 0x315614: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x315614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x315618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31561c: 0x0  nop
    ctx->pc = 0x31561cu;
    // NOP
    // 0x315620: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315624: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x315624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315628: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31562c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x31562cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x315630: 0xc067648  jal         func_19D920
    ctx->pc = 0x315630u;
    SET_GPR_U32(ctx, 31, 0x315638u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315630u, 0x315638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315638u;
label_315638:
    // 0x315638: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x315638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31563c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31563cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315640: 0x0  nop
    ctx->pc = 0x315640u;
    // NOP
    // 0x315644: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315648: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x315648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31564c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31564cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x315650: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x315650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x315654: 0xc067648  jal         func_19D920
    ctx->pc = 0x315654u;
    SET_GPR_U32(ctx, 31, 0x31565Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315654u, 0x31565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31565Cu;
label_31565c:
    // 0x31565c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x31565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x315660: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315664: 0x0  nop
    ctx->pc = 0x315664u;
    // NOP
    // 0x315668: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31566c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x31566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315670: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x315674: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x315674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x315678: 0xc067648  jal         func_19D920
    ctx->pc = 0x315678u;
    SET_GPR_U32(ctx, 31, 0x315680u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315678u, 0x315680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315680u;
label_315680:
    // 0x315680: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x315680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x315684: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315688: 0x0  nop
    ctx->pc = 0x315688u;
    // NOP
    // 0x31568c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31568cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315690: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x315690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315694: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x315698: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x315698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x31569c: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x31569cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x3156a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3156a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3156a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3156a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3156a8: 0x0  nop
    ctx->pc = 0x3156a8u;
    // NOP
    // 0x3156ac: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x3156acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x3156b0: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x3156b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x3156b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3156b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3156b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3156b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3156bc: 0x0  nop
    ctx->pc = 0x3156bcu;
    // NOP
    // 0x3156c0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x3156c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x3156c4: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x3156c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x3156c8: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x3156c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x3156cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3156ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3156d0: 0x0  nop
    ctx->pc = 0x3156d0u;
    // NOP
    // 0x3156d4: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x3156d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x3156d8: 0x3c023f7c  lui         $v0, 0x3F7C
    ctx->pc = 0x3156d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16252 << 16));
    // 0x3156dc: 0x344228f6  ori         $v0, $v0, 0x28F6
    ctx->pc = 0x3156dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10486);
    // 0x3156e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3156e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3156e4: 0x0  nop
    ctx->pc = 0x3156e4u;
    // NOP
    // 0x3156e8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x3156e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x3156ec: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x3156ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3156f0: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x3156F0u;
    SET_GPR_U32(ctx, 31, 0x3156F8u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x3156F0u, 0x3156F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156F8u;
label_3156f8:
    // 0x3156f8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3156fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3156fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315700: 0x0  nop
    ctx->pc = 0x315700u;
    // NOP
    // 0x315704: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315708: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x315708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x31570c: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x31570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x315710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315714: 0x0  nop
    ctx->pc = 0x315714u;
    // NOP
    // 0x315718: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x315718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x31571c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x31571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x315720: 0xc0454c4  jal         func_115310
    ctx->pc = 0x315720u;
    SET_GPR_U32(ctx, 31, 0x315728u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x315720u, 0x315728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315728u;
label_315728:
    // 0x315728: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x315728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x31572c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31572cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315730: 0x0  nop
    ctx->pc = 0x315730u;
    // NOP
    // 0x315734: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315738: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x315738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x31573c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31573cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x315740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315744: 0x0  nop
    ctx->pc = 0x315744u;
    // NOP
    // 0x315748: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x315748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x31574c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x31574cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x315750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315754: 0x0  nop
    ctx->pc = 0x315754u;
    // NOP
    // 0x315758: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x315758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x31575c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31575cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x315760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315764: 0x0  nop
    ctx->pc = 0x315764u;
    // NOP
    // 0x315768: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x315768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x31576c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x31576cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x315770: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x315770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x315774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315778: 0x0  nop
    ctx->pc = 0x315778u;
    // NOP
    // 0x31577c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x31577cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x315780: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x315780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x315784: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x315784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x315788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31578c: 0x0  nop
    ctx->pc = 0x31578cu;
    // NOP
    // 0x315790: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x315790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x315794: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x315794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
    // 0x315798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31579c: 0x0  nop
    ctx->pc = 0x31579cu;
    // NOP
    // 0x3157a0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x3157a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x3157a4: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x3157a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x3157a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3157a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3157ac: 0x0  nop
    ctx->pc = 0x3157acu;
    // NOP
    // 0x3157b0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3157b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3157b4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3157b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3157b8: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x3157b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x3157bc: 0x0  nop
    ctx->pc = 0x3157bcu;
    // NOP
    ctx->pc = 0x3157c0u;
}
