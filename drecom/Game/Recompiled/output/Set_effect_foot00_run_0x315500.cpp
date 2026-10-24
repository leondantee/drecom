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

// Function: Set_effect_foot00_run
// Address: 0x315500 - 0x315bb8
void Set_effect_foot00_run_0x315500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_foot00_run_0x315500");
#endif

    switch (ctx->pc) {
        case 0x315574u: goto label_315574;
        case 0x3155a8u: goto label_3155a8;
        case 0x3155b4u: goto label_3155b4;
        case 0x315614u: goto label_315614;
        case 0x315638u: goto label_315638;
        case 0x31565cu: goto label_31565c;
        case 0x315680u: goto label_315680;
        case 0x3156f8u: goto label_3156f8;
        case 0x315728u: goto label_315728;
        case 0x31580cu: goto label_31580c;
        case 0x315840u: goto label_315840;
        case 0x3158d8u: goto label_3158d8;
        case 0x315988u: goto label_315988;
        case 0x3159acu: goto label_3159ac;
        case 0x3159d0u: goto label_3159d0;
        case 0x3159f4u: goto label_3159f4;
        case 0x315a30u: goto label_315a30;
        case 0x315a60u: goto label_315a60;
        case 0x315b24u: goto label_315b24;
        case 0x315b44u: goto label_315b44;
        default: break;
    }

    ctx->pc = 0x315500u;

    // 0x315500: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x315500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x315504: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x315504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x315508: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x315508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31550c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x315510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x315510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x315514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x315518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x315518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31551c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x31551cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x315520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315524: 0x0  nop
    ctx->pc = 0x315524u;
    // NOP
    // 0x315528: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x315528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31552c: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x31552cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x315530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315534: 0x0  nop
    ctx->pc = 0x315534u;
    // NOP
    // 0x315538: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x315538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31553c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x31553cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x315540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315544: 0x0  nop
    ctx->pc = 0x315544u;
    // NOP
    // 0x315548: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x315548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31554c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31554cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x315550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315554: 0x0  nop
    ctx->pc = 0x315554u;
    // NOP
    // 0x315558: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x315558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31555c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31555cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315560: 0x0  nop
    ctx->pc = 0x315560u;
    // NOP
    // 0x315564: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x315564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x315568: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x315568u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31556c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x31556Cu;
    {
        const bool branch_taken_0x31556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31556c) {
            ctx->pc = 0x3157E8u;
            goto label_3157e8;
        }
    }
    ctx->pc = 0x315574u;
label_315574:
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
            goto label_3157c0;
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
label_3157c0:
    // 0x3157c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3157c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3157c4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3157c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3157c8: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x3157c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x3157cc: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x3157ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x3157d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3157d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3157d4: 0x0  nop
    ctx->pc = 0x3157d4u;
    // NOP
    // 0x3157d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3157d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3157dc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3157dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3157e0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3157e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3157e4: 0x0  nop
    ctx->pc = 0x3157e4u;
    // NOP
label_3157e8:
    // 0x3157e8: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x3157e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3157ec: 0x1460ff61  bnez        $v1, . + 4 + (-0x9F << 2)
    ctx->pc = 0x3157ECu;
    {
        const bool branch_taken_0x3157ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3157ec) {
            ctx->pc = 0x315574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315574;
        }
    }
    ctx->pc = 0x3157F4u;
    // 0x3157f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3157f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3157f8: 0x0  nop
    ctx->pc = 0x3157f8u;
    // NOP
    // 0x3157fc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3157fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x315800: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x315800u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x315804: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x315804u;
    {
        const bool branch_taken_0x315804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315804) {
            ctx->pc = 0x315B88u;
            goto label_315b88;
        }
    }
    ctx->pc = 0x31580Cu;
label_31580c:
    // 0x31580c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x315810: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x315810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x315814: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x315814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315818: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x315818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31581c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x315820: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x315820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x315824: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x315824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x315828: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x315828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31582c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x31582cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x315830: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x315830u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x315834: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x315834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x315838: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x315838u;
    SET_GPR_U32(ctx, 31, 0x315840u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x315838u, 0x315840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315840u;
label_315840:
    // 0x315840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315844: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x315844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x315848: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31584c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31584cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315850: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x315850u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x315854: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x315854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315858: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31585c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31585cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315860: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x315860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x315864: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315868: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315868u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31586c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x31586cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x315870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315878: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31587c: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x31587cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x315880: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315884: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315888: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x315888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x31588c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31588cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315890: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315894: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x315894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x315898: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31589c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31589cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158a0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3158a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3158a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3158a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158ac: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3158acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3158b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3158b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158b8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3158b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3158bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3158c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158c4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3158c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3158c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158cc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3158ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3158D0u;
    SET_GPR_U32(ctx, 31, 0x3158D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3158D0u, 0x3158D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158D8u;
label_3158d8:
    // 0x3158d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158dc: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3158dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3158e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158e4: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3158e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3158e8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3158e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3158ec: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3158ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3158f0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3158F0u;
    {
        const bool branch_taken_0x3158f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3158f0) {
            ctx->pc = 0x315904u;
            goto label_315904;
        }
    }
    ctx->pc = 0x3158F8u;
    // 0x3158f8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x3158f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3158fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3158FCu;
    {
        const bool branch_taken_0x3158fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3158fc) {
            ctx->pc = 0x315920u;
            goto label_315920;
        }
    }
    ctx->pc = 0x315904u;
label_315904:
    // 0x315904: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315908: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x315908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x31590c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315910: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x315910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x315914: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x315914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x315918: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x315918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31591c: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x31591cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_315920:
    // 0x315920: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x315920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x315924: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x315924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x315928: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x315928u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x31592c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31592cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x315930: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x315930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x315934: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x315934u;
    {
        const bool branch_taken_0x315934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x315934) {
            ctx->pc = 0x315B60u;
            goto label_315b60;
        }
    }
    ctx->pc = 0x31593Cu;
    // 0x31593c: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x31593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x315940: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315948: 0x0  nop
    ctx->pc = 0x315948u;
    // NOP
    // 0x31594c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x31594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x315950: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x315950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x315954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315958: 0x0  nop
    ctx->pc = 0x315958u;
    // NOP
    // 0x31595c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x31595cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x315960: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x315960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x315964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315968: 0x0  nop
    ctx->pc = 0x315968u;
    // NOP
    // 0x31596c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x31596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x315970: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x315970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x315974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315978: 0x0  nop
    ctx->pc = 0x315978u;
    // NOP
    // 0x31597c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x31597cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x315980: 0xc067648  jal         func_19D920
    ctx->pc = 0x315980u;
    SET_GPR_U32(ctx, 31, 0x315988u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315980u, 0x315988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315988u;
label_315988:
    // 0x315988: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x315988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31598c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31598cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315990: 0x0  nop
    ctx->pc = 0x315990u;
    // NOP
    // 0x315994: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315998: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x315998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31599c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31599cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3159a0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3159a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3159a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x3159A4u;
    SET_GPR_U32(ctx, 31, 0x3159ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3159A4u, 0x3159ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159ACu;
label_3159ac:
    // 0x3159ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3159acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3159b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3159b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3159b4: 0x0  nop
    ctx->pc = 0x3159b4u;
    // NOP
    // 0x3159b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3159b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3159bc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x3159bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3159c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3159c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3159c4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3159c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3159c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x3159C8u;
    SET_GPR_U32(ctx, 31, 0x3159D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3159C8u, 0x3159D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159D0u;
label_3159d0:
    // 0x3159d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3159d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3159d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3159d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3159d8: 0x0  nop
    ctx->pc = 0x3159d8u;
    // NOP
    // 0x3159dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3159dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3159e0: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x3159e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3159e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3159e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3159e8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3159e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3159ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x3159ECu;
    SET_GPR_U32(ctx, 31, 0x3159F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3159ECu, 0x3159F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159F4u;
label_3159f4:
    // 0x3159f4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x3159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x3159f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3159f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3159fc: 0x0  nop
    ctx->pc = 0x3159fcu;
    // NOP
    // 0x315a00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315a04: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x315a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315a08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x315a0c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x315a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x315a10: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x315a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x315a14: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x315a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x315a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a1c: 0x0  nop
    ctx->pc = 0x315a1cu;
    // NOP
    // 0x315a20: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x315a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x315a24: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x315a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x315a28: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x315A28u;
    SET_GPR_U32(ctx, 31, 0x315A30u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x315A28u, 0x315A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A30u;
label_315a30:
    // 0x315a30: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x315a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x315a34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315a38: 0x0  nop
    ctx->pc = 0x315a38u;
    // NOP
    // 0x315a3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315a40: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x315a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x315a44: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x315a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x315a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a4c: 0x0  nop
    ctx->pc = 0x315a4cu;
    // NOP
    // 0x315a50: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x315a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x315a54: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x315a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x315a58: 0xc0454c4  jal         func_115310
    ctx->pc = 0x315A58u;
    SET_GPR_U32(ctx, 31, 0x315A60u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x315A58u, 0x315A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A60u;
label_315a60:
    // 0x315a60: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x315a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x315a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315a68: 0x0  nop
    ctx->pc = 0x315a68u;
    // NOP
    // 0x315a6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315a70: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x315a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x315a74: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x315a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x315a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a7c: 0x0  nop
    ctx->pc = 0x315a7cu;
    // NOP
    // 0x315a80: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x315a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x315a84: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x315a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x315a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a8c: 0x0  nop
    ctx->pc = 0x315a8cu;
    // NOP
    // 0x315a90: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x315a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x315a94: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x315a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x315a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a9c: 0x0  nop
    ctx->pc = 0x315a9cu;
    // NOP
    // 0x315aa0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x315aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x315aa4: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x315aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x315aa8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x315aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x315aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315ab0: 0x0  nop
    ctx->pc = 0x315ab0u;
    // NOP
    // 0x315ab4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x315ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x315ab8: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x315ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x315abc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x315abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x315ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315ac4: 0x0  nop
    ctx->pc = 0x315ac4u;
    // NOP
    // 0x315ac8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x315ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x315acc: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x315accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x315ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315ad4: 0x0  nop
    ctx->pc = 0x315ad4u;
    // NOP
    // 0x315ad8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x315ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x315adc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x315adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x315ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315ae4: 0x0  nop
    ctx->pc = 0x315ae4u;
    // NOP
    // 0x315ae8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x315ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x315aec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x315aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x315af0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x315af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x315af4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x315af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315af8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315b00: 0x0  nop
    ctx->pc = 0x315b00u;
    // NOP
    // 0x315b04: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x315b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x315b08: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x315b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x315b0c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x315b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x315b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315b14: 0x0  nop
    ctx->pc = 0x315b14u;
    // NOP
    // 0x315b18: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x315b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x315b1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x315B1Cu;
    SET_GPR_U32(ctx, 31, 0x315B24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315B1Cu, 0x315B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B24u;
label_315b24:
    // 0x315b24: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x315b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315b28: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315b2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315b30: 0x0  nop
    ctx->pc = 0x315b30u;
    // NOP
    // 0x315b34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315b38: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x315b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x315b3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x315B3Cu;
    SET_GPR_U32(ctx, 31, 0x315B44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315B3Cu, 0x315B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B44u;
label_315b44:
    // 0x315b44: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x315b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x315b48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x315b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x315b4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x315b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315b50: 0x0  nop
    ctx->pc = 0x315b50u;
    // NOP
    // 0x315b54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315b58: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x315b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x315b5c: 0x0  nop
    ctx->pc = 0x315b5cu;
    // NOP
label_315b60:
    // 0x315b60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x315b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x315b64: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x315b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315b68: 0x3c033f65  lui         $v1, 0x3F65
    ctx->pc = 0x315b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16229 << 16));
    // 0x315b6c: 0x3463c73e  ori         $v1, $v1, 0xC73E
    ctx->pc = 0x315b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51006);
    // 0x315b70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315b74: 0x0  nop
    ctx->pc = 0x315b74u;
    // NOP
    // 0x315b78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x315b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x315b7c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x315b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x315b80: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x315b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x315b84: 0x0  nop
    ctx->pc = 0x315b84u;
    // NOP
label_315b88:
    // 0x315b88: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x315b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x315b8c: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x315B8Cu;
    {
        const bool branch_taken_0x315b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x315b8c) {
            ctx->pc = 0x31580Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31580c;
        }
    }
    ctx->pc = 0x315B94u;
    // 0x315b94: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x315b94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x315b98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x315b98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x315b9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x315b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315ba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315bac: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x315bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x315bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x315BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315BB8u;
}
