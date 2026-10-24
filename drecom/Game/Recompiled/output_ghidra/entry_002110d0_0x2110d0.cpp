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

// Function: entry_002110d0
// Address: 0x2110d0 - 0x211274
void entry_002110d0_0x2110d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002110d0_0x2110d0");
#endif

    switch (ctx->pc) {
        case 0x21119cu: goto label_21119c;
        case 0x2111bcu: goto label_2111bc;
        case 0x2111dcu: goto label_2111dc;
        case 0x211270u: goto label_211270;
        default: break;
    }

    ctx->pc = 0x2110d0u;

    // 0x2110d0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2110d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2110d4: 0x84691278  lh          $t1, 0x1278($v1)
    ctx->pc = 0x2110d4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2110d8: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x2110d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
    // 0x2110dc: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x2110dcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x2110e0: 0x29410320  slti        $at, $t2, 0x320
    ctx->pc = 0x2110e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)800) ? 1 : 0);
    // 0x2110e4: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x2110E4u;
    {
        const bool branch_taken_0x2110e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2110e4) {
            ctx->pc = 0x211274u;
            return;
        }
    }
    ctx->pc = 0x2110ECu;
    // 0x2110ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2110ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2110f0: 0x2445a5d0  addiu       $a1, $v0, -0x5A30
    ctx->pc = 0x2110f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944208));
    // 0x2110f4: 0x27a604a0  addiu       $a2, $sp, 0x4A0
    ctx->pc = 0x2110f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x2110f8: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x2110f8u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x38A5D0u));
    // 0x2110fc: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x2110fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x211100: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x211100u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x211104: 0x2509a5e0  addiu       $t1, $t0, -0x5A20
    ctx->pc = 0x211104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944224));
    // 0x211108: 0x27aa04b0  addiu       $t2, $sp, 0x4B0
    ctx->pc = 0x211108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x21110c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x21110cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A5E0u));
    // 0x211110: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x211110u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x211114: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x211114u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x211118: 0x254aa5f0  addiu       $t2, $t2, -0x5A10
    ctx->pc = 0x211118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294944240));
    // 0x21111c: 0x27a704c0  addiu       $a3, $sp, 0x4C0
    ctx->pc = 0x21111cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x211120: 0x79480000  lq          $t0, 0x0($t2)
    ctx->pc = 0x211120u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x38A5F0u));
    // 0x211124: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x211124u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x211128: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x211128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21112c: 0xa3a3051c  sb          $v1, 0x51C($sp)
    ctx->pc = 0x21112cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1308), (uint8_t)GPR_U32(ctx, 3));
    // 0x211130: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x211134: 0x8c297508  lw          $t1, 0x7508($at)
    ctx->pc = 0x211134u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x387508u));
    // 0x211138: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x211138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x21113c: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211140: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x211140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x211144: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x211144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211148: 0x43200  sll         $a2, $a0, 8
    ctx->pc = 0x211148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x21114c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x211150: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x211150u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x211154: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x211154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x211158: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x211158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21115c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x211160: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x211160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x211164: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x211164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x211168: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x211168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21116c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x211170: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x211170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x211174: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x211174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x211178: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x211178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x21117c: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x21117cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x211180: 0x0  nop
    ctx->pc = 0x211180u;
    // NOP
    // 0x211184: 0x0  nop
    ctx->pc = 0x211184u;
    // NOP
    // 0x211188: 0x1810  mfhi        $v1
    ctx->pc = 0x211188u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21118c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x21118cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211190: 0xa3a4051d  sb          $a0, 0x51D($sp)
    ctx->pc = 0x211190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1309), (uint8_t)GPR_U32(ctx, 4));
    // 0x211194: 0xc06765c  jal         func_19D970
    ctx->pc = 0x211194u;
    SET_GPR_U32(ctx, 31, 0x21119Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x211194u, 0x21119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21119Cu;
label_21119c:
    // 0x21119c: 0x3c064409  lui         $a2, 0x4409
    ctx->pc = 0x21119cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17417 << 16));
    // 0x2111a0: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x2111a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x2111a4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2111a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2111a8: 0x0  nop
    ctx->pc = 0x2111a8u;
    // NOP
    // 0x2111ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2111acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2111b0: 0xe7a004c0  swc1        $f0, 0x4C0($sp)
    ctx->pc = 0x2111b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
    // 0x2111b4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2111B4u;
    SET_GPR_U32(ctx, 31, 0x2111BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2111B4u, 0x2111BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111BCu;
label_2111bc:
    // 0x2111bc: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x2111bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
    // 0x2111c0: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x2111c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2111c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2111c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2111c8: 0x0  nop
    ctx->pc = 0x2111c8u;
    // NOP
    // 0x2111cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2111ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2111d0: 0xe7a104c4  swc1        $f1, 0x4C4($sp)
    ctx->pc = 0x2111d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1220), bits); }
    // 0x2111d4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2111D4u;
    SET_GPR_U32(ctx, 31, 0x2111DCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2111D4u, 0x2111DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111DCu;
label_2111dc:
    // 0x2111dc: 0x3c064409  lui         $a2, 0x4409
    ctx->pc = 0x2111dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17417 << 16));
    // 0x2111e0: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x2111e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x2111e4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2111e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2111e8: 0x0  nop
    ctx->pc = 0x2111e8u;
    // NOP
    // 0x2111ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2111ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2111f0: 0xe7a004c8  swc1        $f0, 0x4C8($sp)
    ctx->pc = 0x2111f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1224), bits); }
    // 0x2111f4: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2111f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2111f8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2111f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2111fc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2111fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x211200: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x211200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x211204: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x211204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x211208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21120c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x21120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x211210: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x211210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x211214: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x211214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x211218: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x211218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21121c: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x21121cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x211220: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x211220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x211224: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x211224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x211228: 0x93a5051c  lbu         $a1, 0x51C($sp)
    ctx->pc = 0x211228u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1308)));
    // 0x21122c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x21122cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x211230: 0x93a3051d  lbu         $v1, 0x51D($sp)
    ctx->pc = 0x211230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1309)));
    // 0x211234: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x211234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211238: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x211238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x21123c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x21123cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x211240: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x211240u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x211244: 0x27a604a0  addiu       $a2, $sp, 0x4A0
    ctx->pc = 0x211244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x211248: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x211248u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x21124c: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x21124cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x211250: 0x27aa04b0  addiu       $t2, $sp, 0x4B0
    ctx->pc = 0x211250u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x211254: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x211254u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x211258: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x211258u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x21125c: 0x27ab04c0  addiu       $t3, $sp, 0x4C0
    ctx->pc = 0x21125cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x211260: 0x71605628  paddub      $t2, $t3, $zero
    ctx->pc = 0x211260u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x211264: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x211264u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211268: 0xc0bb888  jal         func_2EE220
    ctx->pc = 0x211268u;
    SET_GPR_U32(ctx, 31, 0x211270u);
    ctx->pc = 0x2EE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE220u, 0x211268u, 0x211270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211270u;
label_211270:
    // 0x211270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x211270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x211274u;
}
