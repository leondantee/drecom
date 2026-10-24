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

// Function: entry_0030037c
// Address: 0x30037c - 0x30057c
void entry_0030037c_0x30037c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030037c_0x30037c");
#endif

    switch (ctx->pc) {
        case 0x3003e8u: goto label_3003e8;
        case 0x300414u: goto label_300414;
        case 0x300440u: goto label_300440;
        case 0x300470u: goto label_300470;
        case 0x30056cu: goto label_30056c;
        case 0x300578u: goto label_300578;
        default: break;
    }

    ctx->pc = 0x30037cu;

    // 0x30037c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x300380: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x300380u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x300384: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x300384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x300388: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x300388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30038c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x300390: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x300390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x300394: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x300394u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x300398: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x300398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30039c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x30039cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3003a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3003a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3003a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3003a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3003a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3003a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3003ac: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3003acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3003b0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3003b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3003b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3003b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3003b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3003b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3003bc: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x3003bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3003c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3003c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3003c4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3003c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3003c8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3003c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3003cc: 0x0  nop
    ctx->pc = 0x3003ccu;
    // NOP
    // 0x3003d0: 0x0  nop
    ctx->pc = 0x3003d0u;
    // NOP
    // 0x3003d4: 0x1810  mfhi        $v1
    ctx->pc = 0x3003d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3003d8: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3003D8u;
    {
        const bool branch_taken_0x3003d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3003d8) {
            ctx->pc = 0x30057Cu;
            return;
        }
    }
    ctx->pc = 0x3003E0u;
    // 0x3003e0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3003E0u;
    SET_GPR_U32(ctx, 31, 0x3003E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3003E0u, 0x3003E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003E8u;
label_3003e8:
    // 0x3003e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3003e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3003ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3003ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3003f0: 0x0  nop
    ctx->pc = 0x3003f0u;
    // NOP
    // 0x3003f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3003f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3003f8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3003f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3003fc: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x3003fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x300400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300404: 0x0  nop
    ctx->pc = 0x300404u;
    // NOP
    // 0x300408: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x300408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x30040c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x30040Cu;
    SET_GPR_U32(ctx, 31, 0x300414u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x30040Cu, 0x300414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300414u;
label_300414:
    // 0x300414: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x300414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x300418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30041c: 0x0  nop
    ctx->pc = 0x30041cu;
    // NOP
    // 0x300420: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300424: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x300424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x300428: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30042c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30042cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300430: 0x0  nop
    ctx->pc = 0x300430u;
    // NOP
    // 0x300434: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x300434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x300438: 0xc06765c  jal         func_19D970
    ctx->pc = 0x300438u;
    SET_GPR_U32(ctx, 31, 0x300440u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x300438u, 0x300440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300440u;
label_300440:
    // 0x300440: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x300440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x300444: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x300444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x300448: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30044c: 0x0  nop
    ctx->pc = 0x30044cu;
    // NOP
    // 0x300450: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300454: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x300454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x300458: 0x3c02c5fa  lui         $v0, 0xC5FA
    ctx->pc = 0x300458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50682 << 16));
    // 0x30045c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30045cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300460: 0x0  nop
    ctx->pc = 0x300460u;
    // NOP
    // 0x300464: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x300464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x300468: 0xc06765c  jal         func_19D970
    ctx->pc = 0x300468u;
    SET_GPR_U32(ctx, 31, 0x300470u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x300468u, 0x300470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300470u;
label_300470:
    // 0x300470: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x300470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x300474: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x300474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x300478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30047c: 0x0  nop
    ctx->pc = 0x30047cu;
    // NOP
    // 0x300480: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300484: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x300484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x300488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30048c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30048cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300490: 0x0  nop
    ctx->pc = 0x300490u;
    // NOP
    // 0x300494: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x300494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x300498: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x300498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30049c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30049cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3004a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3004a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3004a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3004a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3004a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3004ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3004acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3004b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3004b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3004b4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3004b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004b8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3004b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3004bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3004bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3004c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3004c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3004c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3004c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3004c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3004cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3004ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3004d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3004d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3004d4: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x3004d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3004d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3004d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3004dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3004dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3004e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3004e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3004e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3004e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3004e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3004ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3004ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3004f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3004f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3004f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3004f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3004f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3004fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3004fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300500: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300504: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300508: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30050c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300510: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300514: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x300514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x300518: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30051c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x30051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300520: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300524: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300528: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30052c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30052cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300530: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300534: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300538: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x300538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30053c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300540: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x300540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300544: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300548: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30054c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300550: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300554: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30055c: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x30055cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x300560: 0x24043300  addiu       $a0, $zero, 0x3300
    ctx->pc = 0x300560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13056));
    // 0x300564: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x300564u;
    SET_GPR_U32(ctx, 31, 0x30056Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x300564u, 0x30056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30056Cu;
label_30056c:
    // 0x30056c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30056cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300570: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x300570u;
    SET_GPR_U32(ctx, 31, 0x300578u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x300570u, 0x300578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300578u;
label_300578:
    // 0x300578: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x300578u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x30057cu;
}
