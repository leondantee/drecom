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

// Function: entry_0030057c
// Address: 0x30057c - 0x3007b8
void entry_0030057c_0x30057c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030057c_0x30057c");
#endif

    switch (ctx->pc) {
        case 0x3005a8u: goto label_3005a8;
        case 0x3005c4u: goto label_3005c4;
        case 0x3005f8u: goto label_3005f8;
        case 0x300624u: goto label_300624;
        case 0x300640u: goto label_300640;
        case 0x300670u: goto label_300670;
        case 0x300768u: goto label_300768;
        case 0x300774u: goto label_300774;
        case 0x3007acu: goto label_3007ac;
        default: break;
    }

    ctx->pc = 0x30057cu;

    // 0x30057c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300580: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x300580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x300584: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x300584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x300588: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x300588u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30058c: 0x0  nop
    ctx->pc = 0x30058cu;
    // NOP
    // 0x300590: 0x0  nop
    ctx->pc = 0x300590u;
    // NOP
    // 0x300594: 0x1810  mfhi        $v1
    ctx->pc = 0x300594u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x300598: 0x14600087  bnez        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x300598u;
    {
        const bool branch_taken_0x300598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300598) {
            ctx->pc = 0x3007B8u;
            return;
        }
    }
    ctx->pc = 0x3005A0u;
    // 0x3005a0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3005A0u;
    SET_GPR_U32(ctx, 31, 0x3005A8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3005A0u, 0x3005A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005A8u;
label_3005a8:
    // 0x3005a8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3005a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3005ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3005acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3005b0: 0x0  nop
    ctx->pc = 0x3005b0u;
    // NOP
    // 0x3005b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3005b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3005b8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3005b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3005bc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x3005BCu;
    SET_GPR_U32(ctx, 31, 0x3005C4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x3005BCu, 0x3005C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005C4u;
label_3005c4:
    // 0x3005c4: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x3005c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x3005c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3005c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3005cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3005ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3005d0: 0x0  nop
    ctx->pc = 0x3005d0u;
    // NOP
    // 0x3005d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3005d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3005d8: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x3005d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x3005dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3005dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3005e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3005e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3005e4: 0x0  nop
    ctx->pc = 0x3005e4u;
    // NOP
    // 0x3005e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3005e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3005ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3005ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3005f0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3005F0u;
    SET_GPR_U32(ctx, 31, 0x3005F8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3005F0u, 0x3005F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005F8u;
label_3005f8:
    // 0x3005f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3005f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3005fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3005fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300600: 0x0  nop
    ctx->pc = 0x300600u;
    // NOP
    // 0x300604: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300608: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x300608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x30060c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300614: 0x0  nop
    ctx->pc = 0x300614u;
    // NOP
    // 0x300618: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x300618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x30061c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x30061Cu;
    SET_GPR_U32(ctx, 31, 0x300624u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x30061Cu, 0x300624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300624u;
label_300624:
    // 0x300624: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x300624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x300628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30062c: 0x0  nop
    ctx->pc = 0x30062cu;
    // NOP
    // 0x300630: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300634: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x300634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x300638: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x300638u;
    SET_GPR_U32(ctx, 31, 0x300640u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x300638u, 0x300640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300640u;
label_300640:
    // 0x300640: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x300640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x300644: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x300644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x300648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30064c: 0x0  nop
    ctx->pc = 0x30064cu;
    // NOP
    // 0x300650: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x300650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300654: 0x3c02c5fa  lui         $v0, 0xC5FA
    ctx->pc = 0x300654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50682 << 16));
    // 0x300658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30065c: 0x0  nop
    ctx->pc = 0x30065cu;
    // NOP
    // 0x300660: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x300660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x300664: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x300664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x300668: 0xc06765c  jal         func_19D970
    ctx->pc = 0x300668u;
    SET_GPR_U32(ctx, 31, 0x300670u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x300668u, 0x300670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300670u;
label_300670:
    // 0x300670: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x300670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x300674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300678: 0x0  nop
    ctx->pc = 0x300678u;
    // NOP
    // 0x30067c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30067cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300680: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x300680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x300684: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30068c: 0x0  nop
    ctx->pc = 0x30068cu;
    // NOP
    // 0x300690: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x300690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x300694: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x300694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x300698: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30069c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30069cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3006a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3006a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3006a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3006a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3006a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3006a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3006ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3006acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3006b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3006b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006b4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3006b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3006b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3006b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3006bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3006c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3006c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3006c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3006c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3006c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3006c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3006cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3006ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3006d0: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x3006d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3006d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3006d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3006d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3006d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3006dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3006e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3006e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3006e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3006e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3006e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3006e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3006ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3006ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3006f0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3006f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3006f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3006f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3006f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3006fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300700: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300704: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300708: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30070c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30070cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300710: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x300710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x300714: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300718: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x300718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x30071c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30071cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300720: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300724: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300728: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30072c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300730: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300734: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x300734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300738: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30073c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x30073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300740: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300744: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300748: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30074c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300750: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300754: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300758: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x300758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30075c: 0x24043201  addiu       $a0, $zero, 0x3201
    ctx->pc = 0x30075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12801));
    // 0x300760: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x300760u;
    SET_GPR_U32(ctx, 31, 0x300768u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x300760u, 0x300768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300768u;
label_300768:
    // 0x300768: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x300768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30076c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x30076Cu;
    SET_GPR_U32(ctx, 31, 0x300774u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x30076Cu, 0x300774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300774u;
label_300774:
    // 0x300774: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x300774u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300778: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30077c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x30077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300780: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300788: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30078c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30078cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300794: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x300794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300798: 0x34049303  ori         $a0, $zero, 0x9303
    ctx->pc = 0x300798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37635);
    // 0x30079c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30079cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3007a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3007a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3007a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3007A4u;
    SET_GPR_U32(ctx, 31, 0x3007ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3007A4u, 0x3007ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007ACu;
label_3007ac:
    // 0x3007ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3007acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3007b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3007B0u;
    SET_GPR_U32(ctx, 31, 0x3007B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3007B0u, 0x3007B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007B8u;
}
