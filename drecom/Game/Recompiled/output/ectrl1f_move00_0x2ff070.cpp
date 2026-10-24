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

// Function: ectrl1f_move00
// Address: 0x2ff070 - 0x3000bc
void ectrl1f_move00_0x2ff070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1f_move00_0x2ff070");
#endif

    switch (ctx->pc) {
        case 0x2ff0b0u: goto label_2ff0b0;
        case 0x2ff174u: goto label_2ff174;
        case 0x2ff1a4u: goto label_2ff1a4;
        case 0x2ff1d0u: goto label_2ff1d0;
        case 0x2ff250u: goto label_2ff250;
        case 0x2ff37cu: goto label_2ff37c;
        case 0x2ff388u: goto label_2ff388;
        case 0x2ff3d8u: goto label_2ff3d8;
        case 0x2ff3e4u: goto label_2ff3e4;
        case 0x2ff46cu: goto label_2ff46c;
        case 0x2ff49cu: goto label_2ff49c;
        case 0x2ff4c8u: goto label_2ff4c8;
        case 0x2ff520u: goto label_2ff520;
        case 0x2ff644u: goto label_2ff644;
        case 0x2ff650u: goto label_2ff650;
        case 0x2ff698u: goto label_2ff698;
        case 0x2ff6a4u: goto label_2ff6a4;
        case 0x2ff788u: goto label_2ff788;
        case 0x2ff794u: goto label_2ff794;
        case 0x2ff7c4u: goto label_2ff7c4;
        case 0x2ff7f0u: goto label_2ff7f0;
        case 0x2ff820u: goto label_2ff820;
        case 0x2ff91cu: goto label_2ff91c;
        case 0x2ff928u: goto label_2ff928;
        case 0x2ff974u: goto label_2ff974;
        case 0x2ff980u: goto label_2ff980;
        case 0x2ffa44u: goto label_2ffa44;
        case 0x2ffa50u: goto label_2ffa50;
        case 0x2ffa80u: goto label_2ffa80;
        case 0x2ffaacu: goto label_2ffaac;
        case 0x2ffadcu: goto label_2ffadc;
        case 0x2ffbdcu: goto label_2ffbdc;
        case 0x2ffbe8u: goto label_2ffbe8;
        case 0x2ffc34u: goto label_2ffc34;
        case 0x2ffc40u: goto label_2ffc40;
        case 0x2ffc5cu: goto label_2ffc5c;
        case 0x2ffc78u: goto label_2ffc78;
        case 0x2ffcacu: goto label_2ffcac;
        case 0x2ffcd8u: goto label_2ffcd8;
        case 0x2ffcf4u: goto label_2ffcf4;
        case 0x2ffd24u: goto label_2ffd24;
        case 0x2ffe1cu: goto label_2ffe1c;
        case 0x2ffe28u: goto label_2ffe28;
        case 0x2ffe60u: goto label_2ffe60;
        case 0x2ffe70u: goto label_2ffe70;
        case 0x2ffe7cu: goto label_2ffe7c;
        case 0x2ffe98u: goto label_2ffe98;
        case 0x2ffeccu: goto label_2ffecc;
        case 0x2ffef8u: goto label_2ffef8;
        case 0x2fff14u: goto label_2fff14;
        case 0x2fff44u: goto label_2fff44;
        case 0x30004cu: goto label_30004c;
        case 0x300058u: goto label_300058;
        case 0x30008cu: goto label_30008c;
        case 0x300098u: goto label_300098;
        default: break;
    }

    ctx->pc = 0x2ff070u;

    // 0x2ff070: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ff070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ff074: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2ff074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2ff078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ff078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ff07c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ff07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ff080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ff084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ff088: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2ff088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2ff08c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ff08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ff090: 0x24649210  addiu       $a0, $v1, -0x6DF0
    ctx->pc = 0x2ff090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939152));
    // 0x2ff094: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2ff094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff098: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2ff098u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399210u));
    // 0x2ff09c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2ff09cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2ff0a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff0a4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ff0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ff0a8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2FF0A8u;
    SET_GPR_U32(ctx, 31, 0x2FF0B0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2FF0B0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FF0B0u) { return; }
    ctx->pc = 0x2FF0B0u;
label_2ff0b0:
    // 0x2ff0b0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff0b4: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x2ff0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff0b8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2ff0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff0bc: 0xe4c00090  swc1        $f0, 0x90($a2)
    ctx->pc = 0x2ff0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 144), bits); }
    // 0x2ff0c0: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2ff0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff0c4: 0xc4c000a4  lwc1        $f0, 0xA4($a2)
    ctx->pc = 0x2ff0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff0c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff0cc: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ff0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ff0d0: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x2ff0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff0d4: 0xc4e000a8  lwc1        $f0, 0xA8($a3)
    ctx->pc = 0x2ff0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff0d8: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x2ff0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff0dc: 0xe5000098  swc1        $f0, 0x98($t0)
    ctx->pc = 0x2ff0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 152), bits); }
    // 0x2ff0e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff0e4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2ff0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ff0e8: 0x2861000c  slti        $at, $v1, 0xC
    ctx->pc = 0x2ff0e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2ff0ec: 0x102000bf  beqz        $at, . + 4 + (0xBF << 2)
    ctx->pc = 0x2FF0ECu;
    {
        const bool branch_taken_0x2ff0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0ec) {
            ctx->pc = 0x2FF3ECu;
            goto label_2ff3ec;
        }
    }
    ctx->pc = 0x2FF0F4u;
    // 0x2ff0f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff0f8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff0fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff100: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ff104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff108: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ff108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ff10c: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x2ff10cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ff110: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff114: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff118: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff11c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ff120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff124: 0x3066ff00  andi        $a2, $v1, 0xFF00
    ctx->pc = 0x2ff124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ff128: 0x62a02  srl         $a1, $a2, 8
    ctx->pc = 0x2ff128u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2ff12c: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2ff12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ff130: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff134: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ff134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ff138: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ff138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ff13c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ff13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ff140: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ff140u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ff144: 0x0  nop
    ctx->pc = 0x2ff144u;
    // NOP
    // 0x2ff148: 0x0  nop
    ctx->pc = 0x2ff148u;
    // NOP
    // 0x2ff14c: 0x3010  mfhi        $a2
    ctx->pc = 0x2ff14cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2ff150: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF150u;
    {
        const bool branch_taken_0x2ff150 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff150) {
            ctx->pc = 0x2FF16Cu;
            goto label_2ff16c;
        }
    }
    ctx->pc = 0x2FF158u;
    // 0x2ff158: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2ff158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff15c: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x2ff15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2ff160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff164: 0x148303cd  bne         $a0, $v1, . + 4 + (0x3CD << 2)
    ctx->pc = 0x2FF164u;
    {
        const bool branch_taken_0x2ff164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff164) {
            ctx->pc = 0x30009Cu;
            goto label_30009c;
        }
    }
    ctx->pc = 0x2FF16Cu;
label_2ff16c:
    // 0x2ff16c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF16Cu;
    SET_GPR_U32(ctx, 31, 0x2FF174u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF16Cu, 0x2FF174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF174u;
label_2ff174:
    // 0x2ff174: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ff174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff17c: 0x0  nop
    ctx->pc = 0x2ff17cu;
    // NOP
    // 0x2ff180: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff184: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ff184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ff188: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x2ff188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x2ff18c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2ff18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2ff190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff194: 0x0  nop
    ctx->pc = 0x2ff194u;
    // NOP
    // 0x2ff198: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ff198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ff19c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF19Cu;
    SET_GPR_U32(ctx, 31, 0x2FF1A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF19Cu, 0x2FF1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1A4u;
label_2ff1a4:
    // 0x2ff1a4: 0x3c084316  lui         $t0, 0x4316
    ctx->pc = 0x2ff1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff1a8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2ff1a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff1ac: 0x0  nop
    ctx->pc = 0x2ff1acu;
    // NOP
    // 0x2ff1b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff1b4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ff1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ff1b8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2ff1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff1bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ff1bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff1c0: 0x0  nop
    ctx->pc = 0x2ff1c0u;
    // NOP
    // 0x2ff1c4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ff1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ff1c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF1C8u;
    SET_GPR_U32(ctx, 31, 0x2FF1D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF1C8u, 0x2FF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1D0u;
label_2ff1d0:
    // 0x2ff1d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff1d4: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2ff1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2ff1d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff1d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff1dc: 0x0  nop
    ctx->pc = 0x2ff1dcu;
    // NOP
    // 0x2ff1e0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2ff1e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ff1e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ff1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ff1e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff1ec: 0x0  nop
    ctx->pc = 0x2ff1ecu;
    // NOP
    // 0x2ff1f0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ff1f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ff1f4: 0x3c0245ab  lui         $v0, 0x45AB
    ctx->pc = 0x2ff1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17835 << 16));
    // 0x2ff1f8: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x2ff1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x2ff1fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff200: 0x0  nop
    ctx->pc = 0x2ff200u;
    // NOP
    // 0x2ff204: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ff204u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ff208: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff20c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ff20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ff210: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x2ff210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff214: 0x8ce600d4  lw          $a2, 0xD4($a3)
    ctx->pc = 0x2ff214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2ff218: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ff218u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff21c: 0x0  nop
    ctx->pc = 0x2ff21cu;
    // NOP
    // 0x2ff220: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2ff220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ff224: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x2ff224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x2ff228: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ff228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff22c: 0x0  nop
    ctx->pc = 0x2ff22cu;
    // NOP
    // 0x2ff230: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2ff230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ff234: 0x3c03c47a  lui         $v1, 0xC47A
    ctx->pc = 0x2ff234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50298 << 16));
    // 0x2ff238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff23c: 0x0  nop
    ctx->pc = 0x2ff23cu;
    // NOP
    // 0x2ff240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ff240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ff244: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ff244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ff248: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF248u;
    SET_GPR_U32(ctx, 31, 0x2FF250u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF248u, 0x2FF250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF250u;
label_2ff250:
    // 0x2ff250: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff254: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2ff254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2ff258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff25c: 0x0  nop
    ctx->pc = 0x2ff25cu;
    // NOP
    // 0x2ff260: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2ff260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ff264: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ff264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ff268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff26c: 0x0  nop
    ctx->pc = 0x2ff26cu;
    // NOP
    // 0x2ff270: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ff270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ff274: 0x3c0645ab  lui         $a2, 0x45AB
    ctx->pc = 0x2ff274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17835 << 16));
    // 0x2ff278: 0x34c2e000  ori         $v0, $a2, 0xE000
    ctx->pc = 0x2ff278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x2ff27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff280: 0x0  nop
    ctx->pc = 0x2ff280u;
    // NOP
    // 0x2ff284: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ff284u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ff288: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff28c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ff28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ff290: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ff290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff298: 0x0  nop
    ctx->pc = 0x2ff298u;
    // NOP
    // 0x2ff29c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ff29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ff2a0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2ff2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff2a4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x2ff2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff2a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff2ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff2b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff2b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff2b8: 0x835024  and         $t2, $a0, $v1
    ctx->pc = 0x2ff2b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff2bc: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x2ff2bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2ff2c0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2ff2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ff2c4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ff2c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff2c8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2ff2c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2ff2cc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ff2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff2d0: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2ff2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2ff2d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff2d8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2ff2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2ff2dc: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x2ff2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x2ff2e0: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x2ff2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff2e4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x2ff2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff2e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff2ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff2f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff2f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff2f8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2ff2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ff2fc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2ff2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff300: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff304: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff308: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ff308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ff30c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2ff30cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff310: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x2ff310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x2ff314: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x2ff314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ff318: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ff318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ff31c: 0xa24825  or          $t1, $a1, $v0
    ctx->pc = 0x2ff31cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2ff320: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff324: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x2ff324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2ff328: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2ff328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff32c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ff32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ff330: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ff330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff334: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ff334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ff338: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x2ff338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ff33c: 0x452024  and         $a0, $v0, $a1
    ctx->pc = 0x2ff33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ff340: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x2ff340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff344: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff348: 0x24880060  addiu       $t0, $a0, 0x60
    ctx->pc = 0x2ff348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2ff34c: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x2ff34cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2ff350: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2ff350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2ff354: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2ff354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff358: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x2ff358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
    // 0x2ff35c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ff35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ff360: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x2ff360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2ff364: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x2ff364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x2ff368: 0x24043302  addiu       $a0, $zero, 0x3302
    ctx->pc = 0x2ff368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13058));
    // 0x2ff36c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2ff36cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2ff370: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2ff370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2ff374: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FF374u;
    SET_GPR_U32(ctx, 31, 0x2FF37Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FF374u, 0x2FF37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF37Cu;
label_2ff37c:
    // 0x2ff37c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff37cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff380: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FF380u;
    SET_GPR_U32(ctx, 31, 0x2FF388u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FF380u, 0x2FF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF388u;
label_2ff388:
    // 0x2ff388: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2ff388u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff38c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ff38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ff390: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ff390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ff394: 0x2232026  xor         $a0, $s1, $v1
    ctx->pc = 0x2ff394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x2ff398: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2ff398u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ff39c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff3a0: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2ff3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ff3a4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2ff3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff3a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff3ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff3b0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2ff3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2ff3b4: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x2ff3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff3b8: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2ff3b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ff3bc: 0x34069301  ori         $a2, $zero, 0x9301
    ctx->pc = 0x2ff3bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ff3c0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2ff3c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2ff3c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ff3c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff3c8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2ff3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff3cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2ff3ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff3d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FF3D0u;
    SET_GPR_U32(ctx, 31, 0x2FF3D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FF3D0u, 0x2FF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3D8u;
label_2ff3d8:
    // 0x2ff3d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff3d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff3dc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FF3DCu;
    SET_GPR_U32(ctx, 31, 0x2FF3E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FF3DCu, 0x2FF3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3E4u;
label_2ff3e4:
    // 0x2ff3e4: 0x1000032d  b           . + 4 + (0x32D << 2)
    ctx->pc = 0x2FF3E4u;
    {
        const bool branch_taken_0x2ff3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff3e4) {
            ctx->pc = 0x30009Cu;
            goto label_30009c;
        }
    }
    ctx->pc = 0x2FF3ECu;
label_2ff3ec:
    // 0x2ff3ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff3f0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2ff3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ff3f4: 0x2861001c  slti        $at, $v1, 0x1C
    ctx->pc = 0x2ff3f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x2ff3f8: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
    ctx->pc = 0x2FF3F8u;
    {
        const bool branch_taken_0x2ff3f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff3f8) {
            ctx->pc = 0x2FF6B0u;
            goto label_2ff6b0;
        }
    }
    ctx->pc = 0x2FF400u;
    // 0x2ff400: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff404: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff404u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff408: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff40c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ff410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff414: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ff414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ff418: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2ff418u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ff41c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff420: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff420u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff424: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff428: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff42c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ff42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff430: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ff430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ff434: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x2ff434u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ff438: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2ff438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ff43c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff440: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ff440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ff444: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ff444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ff448: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ff448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ff44c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ff44cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ff450: 0x0  nop
    ctx->pc = 0x2ff450u;
    // NOP
    // 0x2ff454: 0x0  nop
    ctx->pc = 0x2ff454u;
    // NOP
    // 0x2ff458: 0x1810  mfhi        $v1
    ctx->pc = 0x2ff458u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ff45c: 0x1460030f  bnez        $v1, . + 4 + (0x30F << 2)
    ctx->pc = 0x2FF45Cu;
    {
        const bool branch_taken_0x2ff45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff45c) {
            ctx->pc = 0x30009Cu;
            goto label_30009c;
        }
    }
    ctx->pc = 0x2FF464u;
    // 0x2ff464: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF464u;
    SET_GPR_U32(ctx, 31, 0x2FF46Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF464u, 0x2FF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF46Cu;
label_2ff46c:
    // 0x2ff46c: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x2ff46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff470: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ff470u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff474: 0x0  nop
    ctx->pc = 0x2ff474u;
    // NOP
    // 0x2ff478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff47c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ff47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ff480: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x2ff480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x2ff484: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x2ff484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2ff488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff48c: 0x0  nop
    ctx->pc = 0x2ff48cu;
    // NOP
    // 0x2ff490: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ff490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ff494: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF494u;
    SET_GPR_U32(ctx, 31, 0x2FF49Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF494u, 0x2FF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF49Cu;
label_2ff49c:
    // 0x2ff49c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ff49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff4a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff4a4: 0x0  nop
    ctx->pc = 0x2ff4a4u;
    // NOP
    // 0x2ff4a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff4ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ff4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ff4b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ff4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff4b8: 0x0  nop
    ctx->pc = 0x2ff4b8u;
    // NOP
    // 0x2ff4bc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ff4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ff4c0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF4C0u;
    SET_GPR_U32(ctx, 31, 0x2FF4C8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF4C0u, 0x2FF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF4C8u;
label_2ff4c8:
    // 0x2ff4c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff4cc: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2ff4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2ff4d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff4d4: 0x0  nop
    ctx->pc = 0x2ff4d4u;
    // NOP
    // 0x2ff4d8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2ff4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ff4dc: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ff4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ff4e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff4e4: 0x0  nop
    ctx->pc = 0x2ff4e4u;
    // NOP
    // 0x2ff4e8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ff4e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ff4ec: 0x3c0445ab  lui         $a0, 0x45AB
    ctx->pc = 0x2ff4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17835 << 16));
    // 0x2ff4f0: 0x3483e000  ori         $v1, $a0, 0xE000
    ctx->pc = 0x2ff4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x2ff4f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff4f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff4f8: 0x0  nop
    ctx->pc = 0x2ff4f8u;
    // NOP
    // 0x2ff4fc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ff4fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ff500: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff504: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ff504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ff508: 0x3c03c5fa  lui         $v1, 0xC5FA
    ctx->pc = 0x2ff508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50682 << 16));
    // 0x2ff50c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff510: 0x0  nop
    ctx->pc = 0x2ff510u;
    // NOP
    // 0x2ff514: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ff514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ff518: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF518u;
    SET_GPR_U32(ctx, 31, 0x2FF520u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF518u, 0x2FF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF520u;
label_2ff520:
    // 0x2ff520: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff524: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2ff524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ff528: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff52c: 0x0  nop
    ctx->pc = 0x2ff52cu;
    // NOP
    // 0x2ff530: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2ff530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ff534: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2ff534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2ff538: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff53c: 0x0  nop
    ctx->pc = 0x2ff53cu;
    // NOP
    // 0x2ff540: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ff540u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ff544: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x2ff544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x2ff548: 0x3466e000  ori         $a2, $v1, 0xE000
    ctx->pc = 0x2ff548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x2ff54c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2ff54cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff550: 0x0  nop
    ctx->pc = 0x2ff550u;
    // NOP
    // 0x2ff554: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ff554u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ff558: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff55c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ff55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ff560: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2ff560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff564: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ff564u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff568: 0x0  nop
    ctx->pc = 0x2ff568u;
    // NOP
    // 0x2ff56c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ff56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ff570: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2ff570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff574: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ff574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff578: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff57c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff580: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff584: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x2ff584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff588: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x2ff588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2ff58c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2ff58cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff590: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ff590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ff594: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x2ff594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2ff598: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff59c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff5a0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff5a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff5a8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2ff5a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff5ac: 0x1072825  or          $a1, $t0, $a3
    ctx->pc = 0x2ff5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2ff5b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff5b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ff5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff5b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff5bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff5c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff5c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff5c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ff5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff5cc: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ff5ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff5d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff5d4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ff5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff5d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ff5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ff5dc: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x2ff5dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff5e0: 0x131c38  dsll        $v1, $s3, 16
    ctx->pc = 0x2ff5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << 16);
    // 0x2ff5e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff5e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ff5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ff5ec: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x2ff5ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2ff5f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff5f4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ff5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ff5f8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ff5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff5fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff600: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff604: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff608: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x2ff608u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff60c: 0x672024  and         $a0, $v1, $a3
    ctx->pc = 0x2ff60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2ff610: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x2ff610u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff614: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff618: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ff618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ff61c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ff61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff620: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff624: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff628: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff62c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff630: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ff630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ff634: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x2ff634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2ff638: 0x24043302  addiu       $a0, $zero, 0x3302
    ctx->pc = 0x2ff638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13058));
    // 0x2ff63c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FF63Cu;
    SET_GPR_U32(ctx, 31, 0x2FF644u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FF63Cu, 0x2FF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF644u;
label_2ff644:
    // 0x2ff644: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff648: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FF648u;
    SET_GPR_U32(ctx, 31, 0x2FF650u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FF648u, 0x2FF650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF650u;
label_2ff650:
    // 0x2ff650: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2ff650u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff654: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ff654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ff658: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ff658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ff65c: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x2ff65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x2ff660: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ff660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ff664: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff668: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ff668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ff66c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2ff66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff670: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff674: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff678: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2ff678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2ff67c: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x2ff67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff680: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2ff680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ff684: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x2ff684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ff688: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ff688u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff68c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ff68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff690: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FF690u;
    SET_GPR_U32(ctx, 31, 0x2FF698u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FF690u, 0x2FF698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF698u;
label_2ff698:
    // 0x2ff698: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff69c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FF69Cu;
    SET_GPR_U32(ctx, 31, 0x2FF6A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FF69Cu, 0x2FF6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6A4u;
label_2ff6a4:
    // 0x2ff6a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ff6a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff6a8: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x2FF6A8u;
    {
        const bool branch_taken_0x2ff6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff6a8) {
            ctx->pc = 0x30009Cu;
            goto label_30009c;
        }
    }
    ctx->pc = 0x2FF6B0u;
label_2ff6b0:
    // 0x2ff6b0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2ff6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff6b4: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x2ff6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2ff6b8: 0x28610046  slti        $at, $v1, 0x46
    ctx->pc = 0x2ff6b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x2ff6bc: 0x10200162  beqz        $at, . + 4 + (0x162 << 2)
    ctx->pc = 0x2FF6BCu;
    {
        const bool branch_taken_0x2ff6bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff6bc) {
            ctx->pc = 0x2FFC48u;
            goto label_2ffc48;
        }
    }
    ctx->pc = 0x2FF6C4u;
    // 0x2ff6c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff6c8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff6cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff6ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff6d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff6d4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2ff6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff6d8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2ff6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ff6dc: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2ff6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ff6e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff6e4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff6e8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff6ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff6f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ff6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff6f4: 0x3067ff00  andi        $a3, $v1, 0xFF00
    ctx->pc = 0x2ff6f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ff6f8: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x2ff6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2ff6fc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2ff6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ff700: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff704: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2ff704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ff708: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x2ff708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ff70c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2ff70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ff710: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ff710u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ff714: 0x0  nop
    ctx->pc = 0x2ff714u;
    // NOP
    // 0x2ff718: 0x0  nop
    ctx->pc = 0x2ff718u;
    // NOP
    // 0x2ff71c: 0x1810  mfhi        $v1
    ctx->pc = 0x2ff71cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ff720: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF720u;
    {
        const bool branch_taken_0x2ff720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff720) {
            ctx->pc = 0x2FF73Cu;
            goto label_2ff73c;
        }
    }
    ctx->pc = 0x2FF728u;
    // 0x2ff728: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff72c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2ff72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ff730: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2ff730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2ff734: 0x14830093  bne         $a0, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x2FF734u;
    {
        const bool branch_taken_0x2ff734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff734) {
            ctx->pc = 0x2FF984u;
            goto label_2ff984;
        }
    }
    ctx->pc = 0x2FF73Cu;
label_2ff73c:
    // 0x2ff73c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ff73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ff740: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ff740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ff744: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ff744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ff748: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ff748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ff74c: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x2ff74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x2ff750: 0x44847800  mtc1        $a0, $f15
    ctx->pc = 0x2ff750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ff754: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff758: 0x3c0646ab  lui         $a2, 0x46AB
    ctx->pc = 0x2ff758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18091 << 16));
    // 0x2ff75c: 0x34c4e000  ori         $a0, $a2, 0xE000
    ctx->pc = 0x2ff75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x2ff760: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2ff760u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff764: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2ff764u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff768: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ff768u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff76c: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2ff76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2ff770: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2ff770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2ff774: 0x24671b40  addiu       $a3, $v1, 0x1B40
    ctx->pc = 0x2ff774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x2ff778: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ff778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff77c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2ff77cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff780: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2FF780u;
    SET_GPR_U32(ctx, 31, 0x2FF788u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2FF780u, 0x2FF788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF788u;
label_2ff788:
    // 0x2ff788: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ff788u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff78c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF78Cu;
    SET_GPR_U32(ctx, 31, 0x2FF794u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF78Cu, 0x2FF794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF794u;
label_2ff794:
    // 0x2ff794: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ff794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff79c: 0x0  nop
    ctx->pc = 0x2ff79cu;
    // NOP
    // 0x2ff7a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff7a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ff7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ff7a8: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x2ff7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x2ff7ac: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2ff7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2ff7b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff7b4: 0x0  nop
    ctx->pc = 0x2ff7b4u;
    // NOP
    // 0x2ff7b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ff7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ff7bc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF7BCu;
    SET_GPR_U32(ctx, 31, 0x2FF7C4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF7BCu, 0x2FF7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7C4u;
label_2ff7c4:
    // 0x2ff7c4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ff7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff7c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff7cc: 0x0  nop
    ctx->pc = 0x2ff7ccu;
    // NOP
    // 0x2ff7d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff7d4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ff7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ff7d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ff7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff7e0: 0x0  nop
    ctx->pc = 0x2ff7e0u;
    // NOP
    // 0x2ff7e4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ff7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ff7e8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF7E8u;
    SET_GPR_U32(ctx, 31, 0x2FF7F0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF7E8u, 0x2FF7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7F0u;
label_2ff7f0:
    // 0x2ff7f0: 0x3c0744bb  lui         $a3, 0x44BB
    ctx->pc = 0x2ff7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17595 << 16));
    // 0x2ff7f4: 0x34e38000  ori         $v1, $a3, 0x8000
    ctx->pc = 0x2ff7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x2ff7f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff7fc: 0x0  nop
    ctx->pc = 0x2ff7fcu;
    // NOP
    // 0x2ff800: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff804: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ff804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ff808: 0x3c03c57a  lui         $v1, 0xC57A
    ctx->pc = 0x2ff808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50554 << 16));
    // 0x2ff80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff810: 0x0  nop
    ctx->pc = 0x2ff810u;
    // NOP
    // 0x2ff814: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ff814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ff818: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF818u;
    SET_GPR_U32(ctx, 31, 0x2FF820u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF818u, 0x2FF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF820u;
label_2ff820:
    // 0x2ff820: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2ff820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2ff824: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2ff824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ff828: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ff828u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff82c: 0x0  nop
    ctx->pc = 0x2ff82cu;
    // NOP
    // 0x2ff830: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff834: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ff834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ff838: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ff838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff83c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff83cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff840: 0x0  nop
    ctx->pc = 0x2ff840u;
    // NOP
    // 0x2ff844: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ff844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ff848: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ff848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff84c: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x2ff84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff850: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ff850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ff854: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff858: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2ff858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2ff85c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2ff85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ff860: 0xa33024  and         $a2, $a1, $v1
    ctx->pc = 0x2ff860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ff864: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x2ff864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff868: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ff868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ff86c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ff86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff870: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff874: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff878: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff87c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff880: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x2ff880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ff884: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x2ff884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x2ff888: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff88c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ff88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff890: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff894: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff898: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff89c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff8a0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ff8a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ff8a4: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x2ff8a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff8a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff8ac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ff8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff8b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff8b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff8b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff8bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff8c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ff8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ff8c4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ff8c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ff8c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff8cc: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x2ff8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ff8d0: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x2ff8d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff8d4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff8d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff8dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff8e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff8e4: 0x835024  and         $t2, $a0, $v1
    ctx->pc = 0x2ff8e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff8e8: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x2ff8e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2ff8ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff8f0: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x2ff8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ff8f4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x2ff8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff8f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff8fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff900: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff904: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff908: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ff908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff90c: 0x1233825  or          $a3, $t1, $v1
    ctx->pc = 0x2ff90cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x2ff910: 0x24043302  addiu       $a0, $zero, 0x3302
    ctx->pc = 0x2ff910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13058));
    // 0x2ff914: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FF914u;
    SET_GPR_U32(ctx, 31, 0x2FF91Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FF914u, 0x2FF91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF91Cu;
label_2ff91c:
    // 0x2ff91c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff91cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff920: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FF920u;
    SET_GPR_U32(ctx, 31, 0x2FF928u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FF920u, 0x2FF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF928u;
label_2ff928:
    // 0x2ff928: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ff928u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff92c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2ff92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2ff930: 0x34820011  ori         $v0, $a0, 0x11
    ctx->pc = 0x2ff930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x2ff934: 0x2022826  xor         $a1, $s0, $v0
    ctx->pc = 0x2ff934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2ff938: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x2ff938u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2ff93c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff940: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ff940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ff944: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ff944u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff948: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2ff948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2ff94c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ff94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff950: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x2ff950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x2ff954: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2ff954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2ff958: 0xe24824  and         $t1, $a3, $v0
    ctx->pc = 0x2ff958u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2ff95c: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x2ff95cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ff960: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ff960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff964: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ff964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff968: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2ff968u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2ff96c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FF96Cu;
    SET_GPR_U32(ctx, 31, 0x2FF974u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FF96Cu, 0x2FF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF974u;
label_2ff974:
    // 0x2ff974: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff978: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FF978u;
    SET_GPR_U32(ctx, 31, 0x2FF980u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FF978u, 0x2FF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF980u;
label_2ff980:
    // 0x2ff980: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff980u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ff984:
    // 0x2ff984: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff988: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2ff988u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff98c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2ff98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ff990: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ff990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ff994: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x2ff994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ff998: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2ff998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2ff99c: 0x44200  sll         $t0, $a0, 8
    ctx->pc = 0x2ff99cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2ff9a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff9a4: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x2ff9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff9a8: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x2ff9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ff9ac: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ff9acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ff9b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ff9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ff9b4: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x2ff9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2ff9b8: 0x43a02  srl         $a3, $a0, 8
    ctx->pc = 0x2ff9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2ff9bc: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x2ff9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2ff9c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff9c4: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x2ff9c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ff9c8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ff9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ff9cc: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x2ff9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ff9d0: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x2ff9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2ff9d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF9D4u;
    {
        const bool branch_taken_0x2ff9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff9d4) {
            ctx->pc = 0x2FF9F0u;
            goto label_2ff9f0;
        }
    }
    ctx->pc = 0x2FF9DCu;
    // 0x2ff9dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff9e0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2ff9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ff9e4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2ff9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2ff9e8: 0x148301ac  bne         $a0, $v1, . + 4 + (0x1AC << 2)
    ctx->pc = 0x2FF9E8u;
    {
        const bool branch_taken_0x2ff9e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff9e8) {
            ctx->pc = 0x30009Cu;
            goto label_30009c;
        }
    }
    ctx->pc = 0x2FF9F0u;
label_2ff9f0:
    // 0x2ff9f0: 0x3c0446ab  lui         $a0, 0x46AB
    ctx->pc = 0x2ff9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18091 << 16));
    // 0x2ff9f4: 0x3482e000  ori         $v0, $a0, 0xE000
    ctx->pc = 0x2ff9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x2ff9f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ff9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff9fc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ff9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ffa00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ffa00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ffa04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffa08: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ffa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ffa0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ffa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ffa10: 0x3c074270  lui         $a3, 0x4270
    ctx->pc = 0x2ffa10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17008 << 16));
    // 0x2ffa14: 0x44877800  mtc1        $a3, $f15
    ctx->pc = 0x2ffa14u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ffa18: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2ffa18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffa1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ffa1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffa20: 0x246600a0  addiu       $a2, $v1, 0xA0
    ctx->pc = 0x2ffa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x2ffa24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ffa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ffa28: 0x24421b40  addiu       $v0, $v0, 0x1B40
    ctx->pc = 0x2ffa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x2ffa2c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2ffa2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffa30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffa34: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2ffa34u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffa38: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2ffa38u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffa3c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2FFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2FFA44u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2FFA3Cu, 0x2FFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA44u;
label_2ffa44:
    // 0x2ffa44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ffa44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffa48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFA48u;
    SET_GPR_U32(ctx, 31, 0x2FFA50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFA48u, 0x2FFA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA50u;
label_2ffa50:
    // 0x2ffa50: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ffa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ffa54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ffa54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffa58: 0x0  nop
    ctx->pc = 0x2ffa58u;
    // NOP
    // 0x2ffa5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffa5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffa60: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ffa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ffa64: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x2ffa64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x2ffa68: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2ffa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2ffa6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffa6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffa70: 0x0  nop
    ctx->pc = 0x2ffa70u;
    // NOP
    // 0x2ffa74: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ffa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ffa78: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFA78u;
    SET_GPR_U32(ctx, 31, 0x2FFA80u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFA78u, 0x2FFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA80u;
label_2ffa80:
    // 0x2ffa80: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ffa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ffa84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ffa84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffa88: 0x0  nop
    ctx->pc = 0x2ffa88u;
    // NOP
    // 0x2ffa8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffa8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffa90: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ffa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ffa94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ffa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffa98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffa98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffa9c: 0x0  nop
    ctx->pc = 0x2ffa9cu;
    // NOP
    // 0x2ffaa0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ffaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ffaa4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFAA4u;
    SET_GPR_U32(ctx, 31, 0x2FFAACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFAA4u, 0x2FFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAACu;
label_2ffaac:
    // 0x2ffaac: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x2ffaacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
    // 0x2ffab0: 0x34c38000  ori         $v1, $a2, 0x8000
    ctx->pc = 0x2ffab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x2ffab4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ffab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffab8: 0x0  nop
    ctx->pc = 0x2ffab8u;
    // NOP
    // 0x2ffabc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffabcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffac0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ffac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ffac4: 0x3c03c5fa  lui         $v1, 0xC5FA
    ctx->pc = 0x2ffac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50682 << 16));
    // 0x2ffac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffacc: 0x0  nop
    ctx->pc = 0x2ffaccu;
    // NOP
    // 0x2ffad0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ffad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ffad4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFAD4u;
    SET_GPR_U32(ctx, 31, 0x2FFADCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFAD4u, 0x2FFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFADCu;
label_2ffadc:
    // 0x2ffadc: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2ffadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x2ffae0: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2ffae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ffae4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ffae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffae8: 0x0  nop
    ctx->pc = 0x2ffae8u;
    // NOP
    // 0x2ffaec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffaf0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ffaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ffaf4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ffaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffaf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffaf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffafc: 0x0  nop
    ctx->pc = 0x2ffafcu;
    // NOP
    // 0x2ffb00: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ffb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ffb04: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2ffb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffb08: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2ffb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb0c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ffb0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ffb10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb14: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2ffb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2ffb18: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2ffb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ffb1c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ffb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ffb20: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ffb20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb24: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2ffb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ffb28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ffb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffb2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffb30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ffb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ffb38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ffb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffb3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ffb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ffb40: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2ffb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ffb44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffb48: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ffb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb4c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ffb4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ffb50: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb54: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ffb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ffb58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ffb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffb5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ffb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ffb60: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2ffb60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffb68: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2ffb68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffb6c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ffb6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ffb70: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb74: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2ffb74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2ffb78: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2ffb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ffb7c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ffb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ffb80: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2ffb80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2ffb84: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffb88: 0x24680060  addiu       $t0, $v1, 0x60
    ctx->pc = 0x2ffb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ffb8c: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x2ffb8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2ffb90: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ffb90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ffb94: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ffb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffb98: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2ffb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2ffb9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ffb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffba0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ffba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ffba4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ffba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffba8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2ffba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffbac: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x2ffbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x2ffbb0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ffbb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffbb4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ffbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ffbb8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffbbc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ffbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ffbc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ffbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffbc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ffbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ffbc8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2ffbc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2ffbcc: 0x24043303  addiu       $a0, $zero, 0x3303
    ctx->pc = 0x2ffbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13059));
    // 0x2ffbd0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2ffbd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffbd4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FFBD4u;
    SET_GPR_U32(ctx, 31, 0x2FFBDCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FFBD4u, 0x2FFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBDCu;
label_2ffbdc:
    // 0x2ffbdc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ffbdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffbe0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FFBE0u;
    SET_GPR_U32(ctx, 31, 0x2FFBE8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FFBE0u, 0x2FFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBE8u;
label_2ffbe8:
    // 0x2ffbe8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2ffbe8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffbec: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ffbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ffbf0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ffbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ffbf4: 0x2631026  xor         $v0, $s3, $v1
    ctx->pc = 0x2ffbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 3));
    // 0x2ffbf8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ffbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ffbfc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2ffbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffc00: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x2ffc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x2ffc04: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2ffc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffc08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ffc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ffc0c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffc10: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2ffc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2ffc14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ffc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffc18: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2ffc18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ffc1c: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x2ffc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ffc20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ffc20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffc24: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2ffc24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffc28: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2ffc28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2ffc2c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FFC2Cu;
    SET_GPR_U32(ctx, 31, 0x2FFC34u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FFC2Cu, 0x2FFC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC34u;
label_2ffc34:
    // 0x2ffc34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ffc34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffc38: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FFC38u;
    SET_GPR_U32(ctx, 31, 0x2FFC40u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FFC38u, 0x2FFC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC40u;
label_2ffc40:
    // 0x2ffc40: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x2FFC40u;
    {
        const bool branch_taken_0x2ffc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc40) {
            ctx->pc = 0x30009Cu;
            goto label_30009c;
        }
    }
    ctx->pc = 0x2FFC48u;
label_2ffc48:
    // 0x2ffc48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ffc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffc4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ffc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffc50: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2ffc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2ffc54: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFC54u;
    SET_GPR_U32(ctx, 31, 0x2FFC5Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFC54u, 0x2FFC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC5Cu;
label_2ffc5c:
    // 0x2ffc5c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ffc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffc60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffc64: 0x0  nop
    ctx->pc = 0x2ffc64u;
    // NOP
    // 0x2ffc68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffc68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffc6c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ffc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ffc70: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FFC70u;
    SET_GPR_U32(ctx, 31, 0x2FFC78u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FFC70u, 0x2FFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC78u;
label_2ffc78:
    // 0x2ffc78: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x2ffc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x2ffc7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ffc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ffc80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffc80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffc84: 0x0  nop
    ctx->pc = 0x2ffc84u;
    // NOP
    // 0x2ffc88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ffc88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffc8c: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x2ffc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x2ffc90: 0x34874000  ori         $a3, $a0, 0x4000
    ctx->pc = 0x2ffc90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2ffc94: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ffc94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffc98: 0x0  nop
    ctx->pc = 0x2ffc98u;
    // NOP
    // 0x2ffc9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ffc9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ffca0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ffca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ffca4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFCA4u;
    SET_GPR_U32(ctx, 31, 0x2FFCACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFCA4u, 0x2FFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCACu;
label_2ffcac:
    // 0x2ffcac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ffcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffcb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffcb4: 0x0  nop
    ctx->pc = 0x2ffcb4u;
    // NOP
    // 0x2ffcb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffcb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffcbc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ffcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ffcc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ffcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffcc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ffcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffcc8: 0x0  nop
    ctx->pc = 0x2ffcc8u;
    // NOP
    // 0x2ffccc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ffcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ffcd0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFCD0u;
    SET_GPR_U32(ctx, 31, 0x2FFCD8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFCD0u, 0x2FFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCD8u;
label_2ffcd8:
    // 0x2ffcd8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ffcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffcdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffcdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffce0: 0x0  nop
    ctx->pc = 0x2ffce0u;
    // NOP
    // 0x2ffce4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffce8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ffce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ffcec: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FFCECu;
    SET_GPR_U32(ctx, 31, 0x2FFCF4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FFCECu, 0x2FFCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCF4u;
label_2ffcf4:
    // 0x2ffcf4: 0x3c0245ab  lui         $v0, 0x45AB
    ctx->pc = 0x2ffcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17835 << 16));
    // 0x2ffcf8: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x2ffcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x2ffcfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffcfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffd00: 0x0  nop
    ctx->pc = 0x2ffd00u;
    // NOP
    // 0x2ffd04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ffd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffd08: 0x3c02c5fa  lui         $v0, 0xC5FA
    ctx->pc = 0x2ffd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50682 << 16));
    // 0x2ffd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ffd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffd10: 0x0  nop
    ctx->pc = 0x2ffd10u;
    // NOP
    // 0x2ffd14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ffd14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ffd18: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ffd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ffd1c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFD1Cu;
    SET_GPR_U32(ctx, 31, 0x2FFD24u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFD1Cu, 0x2FFD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD24u;
label_2ffd24:
    // 0x2ffd24: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ffd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffd28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffd2c: 0x0  nop
    ctx->pc = 0x2ffd2cu;
    // NOP
    // 0x2ffd30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffd30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffd34: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ffd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ffd38: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2ffd38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffd3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ffd3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffd40: 0x0  nop
    ctx->pc = 0x2ffd40u;
    // NOP
    // 0x2ffd44: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ffd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ffd48: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2ffd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffd4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ffd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffd50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffd54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffd58: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x2ffd58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x2ffd5c: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x2ffd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2ffd60: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x2ffd60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ffd64: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2ffd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ffd68: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2ffd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ffd6c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2ffd6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffd70: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ffd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ffd74: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffd78: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ffd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ffd7c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2ffd7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffd80: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2ffd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2ffd84: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2ffd84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ffd88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffd8c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2ffd8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffd90: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2ffd90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2ffd94: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffd98: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2ffd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2ffd9c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2ffd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ffda0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2ffda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2ffda4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ffda4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffda8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffdac: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2ffdacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffdb0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2ffdb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2ffdb4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ffdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffdb8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2ffdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2ffdbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ffdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffdc0: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x2ffdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2ffdc4: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x2ffdc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2ffdc8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ffdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffdcc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ffdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ffdd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ffdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffdd4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffdd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffddc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ffddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ffde0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ffde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffde4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ffde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ffde8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2ffde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffdec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ffdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffdf0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ffdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ffdf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ffdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffdf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffdfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffe00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ffe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ffe04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ffe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffe08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ffe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ffe0c: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x2ffe0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ffe10: 0x24043200  addiu       $a0, $zero, 0x3200
    ctx->pc = 0x2ffe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12800));
    // 0x2ffe14: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FFE14u;
    SET_GPR_U32(ctx, 31, 0x2FFE1Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FFE14u, 0x2FFE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE1Cu;
label_2ffe1c:
    // 0x2ffe1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ffe1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffe20: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FFE20u;
    SET_GPR_U32(ctx, 31, 0x2FFE28u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FFE20u, 0x2FFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE28u;
label_2ffe28:
    // 0x2ffe28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffe2c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x2ffe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ffe30: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ffe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ffe34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffe38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffe38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffe3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ffe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ffe40: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x2ffe40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffe44: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2ffe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ffe48: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x2ffe48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ffe4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ffe4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffe50: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ffe50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffe54: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2ffe54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffe58: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FFE58u;
    SET_GPR_U32(ctx, 31, 0x2FFE60u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FFE58u, 0x2FFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE60u;
label_2ffe60:
    // 0x2ffe60: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2ffe60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffe64: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2ffe64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2ffe68: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FFE68u;
    SET_GPR_U32(ctx, 31, 0x2FFE70u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FFE68u, 0x2FFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE70u;
label_2ffe70:
    // 0x2ffe70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ffe70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffe74: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFE74u;
    SET_GPR_U32(ctx, 31, 0x2FFE7Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFE74u, 0x2FFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE7Cu;
label_2ffe7c:
    // 0x2ffe7c: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x2ffe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffe80: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2ffe80u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffe84: 0x0  nop
    ctx->pc = 0x2ffe84u;
    // NOP
    // 0x2ffe88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffe88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffe8c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ffe8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ffe90: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FFE90u;
    SET_GPR_U32(ctx, 31, 0x2FFE98u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FFE90u, 0x2FFE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE98u;
label_2ffe98:
    // 0x2ffe98: 0x3c034509  lui         $v1, 0x4509
    ctx->pc = 0x2ffe98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17673 << 16));
    // 0x2ffe9c: 0x34688000  ori         $t0, $v1, 0x8000
    ctx->pc = 0x2ffe9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ffea0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2ffea0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffea4: 0x0  nop
    ctx->pc = 0x2ffea4u;
    // NOP
    // 0x2ffea8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ffea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffeac: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x2ffeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x2ffeb0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2ffeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2ffeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffeb8: 0x0  nop
    ctx->pc = 0x2ffeb8u;
    // NOP
    // 0x2ffebc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ffebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ffec0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ffec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ffec4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFEC4u;
    SET_GPR_U32(ctx, 31, 0x2FFECCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFEC4u, 0x2FFECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFECCu;
label_2ffecc:
    // 0x2ffecc: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x2ffeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffed0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ffed0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffed4: 0x0  nop
    ctx->pc = 0x2ffed4u;
    // NOP
    // 0x2ffed8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffedc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ffedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ffee0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ffee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffee4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffee8: 0x0  nop
    ctx->pc = 0x2ffee8u;
    // NOP
    // 0x2ffeec: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ffeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ffef0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFEF0u;
    SET_GPR_U32(ctx, 31, 0x2FFEF8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFEF0u, 0x2FFEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFEF8u;
label_2ffef8:
    // 0x2ffef8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2ffef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffefc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ffefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fff00: 0x0  nop
    ctx->pc = 0x2fff00u;
    // NOP
    // 0x2fff04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fff04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fff08: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fff08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fff0c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FFF0Cu;
    SET_GPR_U32(ctx, 31, 0x2FFF14u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FFF0Cu, 0x2FFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF14u;
label_2fff14:
    // 0x2fff14: 0x3c07455a  lui         $a3, 0x455A
    ctx->pc = 0x2fff14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17754 << 16));
    // 0x2fff18: 0x34e3c000  ori         $v1, $a3, 0xC000
    ctx->pc = 0x2fff18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)49152);
    // 0x2fff1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fff1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fff20: 0x0  nop
    ctx->pc = 0x2fff20u;
    // NOP
    // 0x2fff24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fff24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fff28: 0x3c03c5fa  lui         $v1, 0xC5FA
    ctx->pc = 0x2fff28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50682 << 16));
    // 0x2fff2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fff2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fff30: 0x0  nop
    ctx->pc = 0x2fff30u;
    // NOP
    // 0x2fff34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fff34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fff38: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fff38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fff3c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFF3Cu;
    SET_GPR_U32(ctx, 31, 0x2FFF44u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFF3Cu, 0x2FFF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF44u;
label_2fff44:
    // 0x2fff44: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x2fff44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x2fff48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2fff48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fff4c: 0x0  nop
    ctx->pc = 0x2fff4cu;
    // NOP
    // 0x2fff50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fff50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fff54: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fff54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fff58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fff58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fff5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fff5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fff60: 0x0  nop
    ctx->pc = 0x2fff60u;
    // NOP
    // 0x2fff64: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2fff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fff68: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2fff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fff6c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fff6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fff70: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fff70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fff74: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2fff74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fff78: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x2fff78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x2fff7c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2fff7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fff80: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2fff80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2fff84: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fff84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fff88: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2fff88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fff8c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x2fff8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fff90: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fff90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fff94: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fff94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fff98: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fff98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fff9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fffa0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fffa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fffa4: 0xc24025  or          $t0, $a2, $v0
    ctx->pc = 0x2fffa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fffa8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2fffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fffac: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x2fffacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fffb0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fffb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fffb4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fffb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fffb8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fffbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fffc0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fffc4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fffc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fffc8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2fffc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fffcc: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x2fffccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fffd0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fffd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fffd4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fffd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fffd8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fffd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fffdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fffe0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fffe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fffe4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2fffe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2fffe8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2fffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fffec: 0x24c30060  addiu       $v1, $a2, 0x60
    ctx->pc = 0x2fffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x2ffff0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ffff0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffff4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2ffff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2ffff8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ffff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffffc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2ffffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x300000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x300000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x300004: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x300004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x300008: 0x3503c  dsll32      $t2, $v1, 0
    ctx->pc = 0x300008u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30000c: 0x8fa90078  lw          $t1, 0x78($sp)
    ctx->pc = 0x30000cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300010: 0x25230060  addiu       $v1, $t1, 0x60
    ctx->pc = 0x300010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x300014: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x300014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x300018: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x300018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30001c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x30001cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300020: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x300020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x300024: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x300024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x300028: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x300028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x30002c: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x30002cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x300030: 0x24073201  addiu       $a3, $zero, 0x3201
    ctx->pc = 0x300030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12801));
    // 0x300034: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x300034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x300038: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x300038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x30003c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x30003cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300040: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x300040u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x300044: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x300044u;
    SET_GPR_U32(ctx, 31, 0x30004Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x300044u, 0x30004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30004Cu;
label_30004c:
    // 0x30004c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30004cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300050: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x300050u;
    SET_GPR_U32(ctx, 31, 0x300058u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x300050u, 0x300058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300058u;
label_300058:
    // 0x300058: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30005c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x30005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300060: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x300060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300064: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x300064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x300068: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x300068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30006c: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x30006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x300070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300074: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x300074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x300078: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x300078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x30007c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30007cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x300080: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x300080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x300084: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x300084u;
    SET_GPR_U32(ctx, 31, 0x30008Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x300084u, 0x30008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30008Cu;
label_30008c:
    // 0x30008c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30008cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300090: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x300090u;
    SET_GPR_U32(ctx, 31, 0x300098u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x300090u, 0x300098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300098u;
label_300098:
    // 0x300098: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x300098u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30009c:
    // 0x30009c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x30009cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3000a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3000a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3000a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3000a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3000a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3000a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3000ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3000acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3000b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3000b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3000b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3000B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3000B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3000BCu;
}
