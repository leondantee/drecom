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

// Function: caseD_1
// Address: 0x2805f0 - 0x280794
void caseD_1_0x2805f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2805f0");
#endif

    switch (ctx->pc) {
        case 0x280660u: goto label_280660;
        case 0x280684u: goto label_280684;
        case 0x2806acu: goto label_2806ac;
        case 0x2806e0u: goto label_2806e0;
        case 0x2806ecu: goto label_2806ec;
        case 0x280708u: goto label_280708;
        case 0x28072cu: goto label_28072c;
        case 0x280754u: goto label_280754;
        case 0x280788u: goto label_280788;
        default: break;
    }

    ctx->pc = 0x2805f0u;

    // 0x2805f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2805f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2805f4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2805f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2805f8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2805f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2805fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2805fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280604: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280608: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x28060c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280610: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280614: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280618: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28061c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280620: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280624: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280624u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280628: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28062c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280630: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280634: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280638: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x280638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x28063c: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x28063Cu;
    {
        const bool branch_taken_0x28063c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28063c) {
            ctx->pc = 0x280794u;
            return;
        }
    }
    ctx->pc = 0x280644u;
    // 0x280644: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280648: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x280648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x28064c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28064cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392080u));
    // 0x280650: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280654: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280654u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280658: 0xc067648  jal         func_19D920
    ctx->pc = 0x280658u;
    SET_GPR_U32(ctx, 31, 0x280660u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280658u, 0x280660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280660u;
label_280660:
    // 0x280660: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280668: 0x0  nop
    ctx->pc = 0x280668u;
    // NOP
    // 0x28066c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28066cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280670: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280678: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28067c: 0xc067648  jal         func_19D920
    ctx->pc = 0x28067Cu;
    SET_GPR_U32(ctx, 31, 0x280684u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x28067Cu, 0x280684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280684u;
label_280684:
    // 0x280684: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x280684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280688: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x28068c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280690: 0x0  nop
    ctx->pc = 0x280690u;
    // NOP
    // 0x280694: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280698: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28069c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28069cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2806a0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2806a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2806a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2806A4u;
    SET_GPR_U32(ctx, 31, 0x2806ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2806A4u, 0x2806ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806ACu;
label_2806ac:
    // 0x2806ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2806acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2806b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2806b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2806b4: 0x0  nop
    ctx->pc = 0x2806b4u;
    // NOP
    // 0x2806b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2806b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2806bc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2806bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2806c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2806c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2806c4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2806c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2806c8: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x2806c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x2806cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2806ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2806d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2806d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2806d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2806d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2806d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2806D8u;
    SET_GPR_U32(ctx, 31, 0x2806E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2806D8u, 0x2806E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806E0u;
label_2806e0:
    // 0x2806e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2806e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2806e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2806E4u;
    SET_GPR_U32(ctx, 31, 0x2806ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2806E4u, 0x2806ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806ECu;
label_2806ec:
    // 0x2806ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2806ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2806f0: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x2806f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x2806f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2806f4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392080u));
    // 0x2806f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2806f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2806fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2806fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280700: 0xc067648  jal         func_19D920
    ctx->pc = 0x280700u;
    SET_GPR_U32(ctx, 31, 0x280708u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280700u, 0x280708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280708u;
label_280708:
    // 0x280708: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x28070c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28070cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280710: 0x0  nop
    ctx->pc = 0x280710u;
    // NOP
    // 0x280714: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280718: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28071c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28071cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280720: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280724: 0xc067648  jal         func_19D920
    ctx->pc = 0x280724u;
    SET_GPR_U32(ctx, 31, 0x28072Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280724u, 0x28072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28072Cu;
label_28072c:
    // 0x28072c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x28072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280730: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280738: 0x0  nop
    ctx->pc = 0x280738u;
    // NOP
    // 0x28073c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28073cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280740: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280744: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280748: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28074c: 0xc067648  jal         func_19D920
    ctx->pc = 0x28074Cu;
    SET_GPR_U32(ctx, 31, 0x280754u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x28074Cu, 0x280754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280754u;
label_280754:
    // 0x280754: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28075c: 0x0  nop
    ctx->pc = 0x28075cu;
    // NOP
    // 0x280760: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280764: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28076c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x28076cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280770: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x280770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x280774: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280774u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280778: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28077c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28077cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280780: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280780u;
    SET_GPR_U32(ctx, 31, 0x280788u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280780u, 0x280788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280788u;
label_280788:
    // 0x280788: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28078c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28078Cu;
    SET_GPR_U32(ctx, 31, 0x280794u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28078Cu, 0x280794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280794u;
}
