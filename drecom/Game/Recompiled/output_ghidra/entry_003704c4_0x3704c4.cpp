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

// Function: entry_003704c4
// Address: 0x3704c4 - 0x3706ac
void entry_003704c4_0x3704c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003704c4_0x3704c4");
#endif

    switch (ctx->pc) {
        case 0x3705acu: goto label_3705ac;
        case 0x370628u: goto label_370628;
        case 0x3706a4u: goto label_3706a4;
        default: break;
    }

    ctx->pc = 0x3704c4u;

    // 0x3704c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3704c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704c8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3704c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3704cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3704ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3704d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3704d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3704d4: 0x28630064  slti        $v1, $v1, 0x64
    ctx->pc = 0x3704d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3704d8: 0x146000ab  bnez        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x3704D8u;
    {
        const bool branch_taken_0x3704d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3704d8) {
            ctx->pc = 0x370788u;
            return;
        }
    }
    ctx->pc = 0x3704E0u;
    // 0x3704e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3704e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3704e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3704e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3704e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3704ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3704ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3704f0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3704f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3704f4: 0x146000a4  bnez        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3704F4u;
    {
        const bool branch_taken_0x3704f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3704f4) {
            ctx->pc = 0x370788u;
            return;
        }
    }
    ctx->pc = 0x3704FCu;
    // 0x3704fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3704fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370500: 0x0  nop
    ctx->pc = 0x370500u;
    // NOP
    // 0x370504: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x370504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x370508: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37050c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x37050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370510: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x370510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x370514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370518: 0x0  nop
    ctx->pc = 0x370518u;
    // NOP
    // 0x37051c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x37051cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x370520: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x370524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370528: 0x0  nop
    ctx->pc = 0x370528u;
    // NOP
    // 0x37052c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x37052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x370530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370534: 0x0  nop
    ctx->pc = 0x370534u;
    // NOP
    // 0x370538: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x370538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x37053c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x37053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x370540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370544: 0x0  nop
    ctx->pc = 0x370544u;
    // NOP
    // 0x370548: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x370548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x37054c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37054cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370550: 0x0  nop
    ctx->pc = 0x370550u;
    // NOP
    // 0x370554: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x370554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x370558: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37055c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37055cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370560: 0x0  nop
    ctx->pc = 0x370560u;
    // NOP
    // 0x370564: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x370564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x370568: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37056c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37056cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370570: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370574: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370578: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x37057c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370584: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370588: 0x34440103  ori         $a0, $v0, 0x103
    ctx->pc = 0x370588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)259);
    // 0x37058c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370590: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370594: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x370594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370598: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x370598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37059c: 0x24470100  addiu       $a3, $v0, 0x100
    ctx->pc = 0x37059cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x3705a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3705a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3705a4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3705A4u;
    SET_GPR_U32(ctx, 31, 0x3705ACu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3705A4u, 0x3705ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3705ACu;
label_3705ac:
    // 0x3705ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3705acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3705b0: 0x0  nop
    ctx->pc = 0x3705b0u;
    // NOP
    // 0x3705b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3705b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3705b8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x3705b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x3705bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3705bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3705c0: 0x0  nop
    ctx->pc = 0x3705c0u;
    // NOP
    // 0x3705c4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3705c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3705c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3705c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3705cc: 0x0  nop
    ctx->pc = 0x3705ccu;
    // NOP
    // 0x3705d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3705d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3705d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3705d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3705d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3705d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3705dc: 0x0  nop
    ctx->pc = 0x3705dcu;
    // NOP
    // 0x3705e0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3705e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3705e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3705e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3705e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3705e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3705ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3705ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3705f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3705f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3705f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3705f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3705f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3705f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3705fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3705fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370600: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370604: 0x34440103  ori         $a0, $v0, 0x103
    ctx->pc = 0x370604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)259);
    // 0x370608: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37060c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x37060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370610: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x370610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370614: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x370614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x370618: 0x24470100  addiu       $a3, $v0, 0x100
    ctx->pc = 0x370618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x37061c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x37061cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370620: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370620u;
    SET_GPR_U32(ctx, 31, 0x370628u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370620u, 0x370628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370628u;
label_370628:
    // 0x370628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37062c: 0x0  nop
    ctx->pc = 0x37062cu;
    // NOP
    // 0x370630: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x370630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x370634: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x370634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x370638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37063c: 0x0  nop
    ctx->pc = 0x37063cu;
    // NOP
    // 0x370640: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x370640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x370644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370648: 0x0  nop
    ctx->pc = 0x370648u;
    // NOP
    // 0x37064c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x37064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x370650: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x370654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370658: 0x0  nop
    ctx->pc = 0x370658u;
    // NOP
    // 0x37065c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x37065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x370660: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370664: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370668: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x37066c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x37066cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370670: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370674: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370678: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37067c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370680: 0x34440103  ori         $a0, $v0, 0x103
    ctx->pc = 0x370680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)259);
    // 0x370684: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370688: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37068c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x37068cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370690: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x370690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x370694: 0x24470100  addiu       $a3, $v0, 0x100
    ctx->pc = 0x370694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x370698: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370698u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37069c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x37069Cu;
    SET_GPR_U32(ctx, 31, 0x3706A4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x37069Cu, 0x3706A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706A4u;
label_3706a4:
    // 0x3706a4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3706A4u;
    {
        const bool branch_taken_0x3706a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3706a4) {
            ctx->pc = 0x370788u;
            return;
        }
    }
    ctx->pc = 0x3706ACu;
}
