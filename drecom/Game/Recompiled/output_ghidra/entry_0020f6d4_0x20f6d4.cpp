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

// Function: entry_0020f6d4
// Address: 0x20f6d4 - 0x20f864
void entry_0020f6d4_0x20f6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f6d4_0x20f6d4");
#endif

    switch (ctx->pc) {
        case 0x20f7bcu: goto label_20f7bc;
        case 0x20f7dcu: goto label_20f7dc;
        case 0x20f7fcu: goto label_20f7fc;
        default: break;
    }

    ctx->pc = 0x20f6d4u;

    // 0x20f6d4: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f6d8: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20f6d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20f6dc: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x20f6dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20f6e0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20f6e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x20f6e4: 0x28c10245  slti        $at, $a2, 0x245
    ctx->pc = 0x20f6e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)581) ? 1 : 0);
    // 0x20f6e8: 0x1420005e  bnez        $at, . + 4 + (0x5E << 2)
    ctx->pc = 0x20F6E8u;
    {
        const bool branch_taken_0x20f6e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f6e8) {
            ctx->pc = 0x20F864u;
            return;
        }
    }
    ctx->pc = 0x20F6F0u;
    // 0x20f6f0: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f6f4: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x20f6f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20f6f8: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x20f6f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20f6fc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20f6fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x20f700: 0x28c102b5  slti        $at, $a2, 0x2B5
    ctx->pc = 0x20f700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)693) ? 1 : 0);
    // 0x20f704: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
    ctx->pc = 0x20F704u;
    {
        const bool branch_taken_0x20f704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f704) {
            ctx->pc = 0x20F864u;
            return;
        }
    }
    ctx->pc = 0x20F70Cu;
    // 0x20f70c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20f710: 0x2464a370  addiu       $a0, $v1, -0x5C90
    ctx->pc = 0x20f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943600));
    // 0x20f714: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x20f714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20f718: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20f718u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A370u));
    // 0x20f71c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x20f71cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x20f720: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20f720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x20f724: 0x24c3a380  addiu       $v1, $a2, -0x5C80
    ctx->pc = 0x20f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943616));
    // 0x20f728: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x20f728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x20f72c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x20f72cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x38A380u));
    // 0x20f730: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x20f730u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x20f734: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20f738: 0x2464a390  addiu       $a0, $v1, -0x5C70
    ctx->pc = 0x20f738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943632));
    // 0x20f73c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x20f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x20f740: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x20f740u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x38A390u));
    // 0x20f744: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x20f744u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x20f748: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20f74c: 0xa3a3051a  sb          $v1, 0x51A($sp)
    ctx->pc = 0x20f74cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1306), (uint8_t)GPR_U32(ctx, 3));
    // 0x20f750: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20f754: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x20f754u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x20f758: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x20f758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x20f75c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f760: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x20f760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20f764: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x20f764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x20f768: 0x43200  sll         $a2, $a0, 8
    ctx->pc = 0x20f768u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x20f76c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20f770: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20f770u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x20f774: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x20f774u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20f778: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x20f778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x20f77c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x20f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x20f780: 0x3085ff00  andi        $a1, $a0, 0xFF00
    ctx->pc = 0x20f780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x20f784: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x20f784u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x20f788: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20f78c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20f790: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20f790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20f794: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20f794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20f798: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x20f798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x20f79c: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x20f79cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x20f7a0: 0x0  nop
    ctx->pc = 0x20f7a0u;
    // NOP
    // 0x20f7a4: 0x0  nop
    ctx->pc = 0x20f7a4u;
    // NOP
    // 0x20f7a8: 0x1810  mfhi        $v1
    ctx->pc = 0x20f7a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20f7ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x20f7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20f7b0: 0xa3a3051b  sb          $v1, 0x51B($sp)
    ctx->pc = 0x20f7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1307), (uint8_t)GPR_U32(ctx, 3));
    // 0x20f7b4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20F7B4u;
    SET_GPR_U32(ctx, 31, 0x20F7BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F7B4u, 0x20F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7BCu;
label_20f7bc:
    // 0x20f7bc: 0x3c064409  lui         $a2, 0x4409
    ctx->pc = 0x20f7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17417 << 16));
    // 0x20f7c0: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x20f7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x20f7c4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f7c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f7c8: 0x0  nop
    ctx->pc = 0x20f7c8u;
    // NOP
    // 0x20f7cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f7d0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x20f7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x20f7d4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20F7D4u;
    SET_GPR_U32(ctx, 31, 0x20F7DCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F7D4u, 0x20F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7DCu;
label_20f7dc:
    // 0x20f7dc: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x20f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
    // 0x20f7e0: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x20f7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x20f7e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f7e8: 0x0  nop
    ctx->pc = 0x20f7e8u;
    // NOP
    // 0x20f7ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f7f0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x20f7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x20f7f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20F7F4u;
    SET_GPR_U32(ctx, 31, 0x20F7FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F7F4u, 0x20F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7FCu;
label_20f7fc:
    // 0x20f7fc: 0x3c064409  lui         $a2, 0x4409
    ctx->pc = 0x20f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17417 << 16));
    // 0x20f800: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x20f800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x20f804: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f804u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f808: 0x0  nop
    ctx->pc = 0x20f808u;
    // NOP
    // 0x20f80c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f80cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f810: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x20f810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x20f814: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x20f814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x20f818: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x20f818u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f81c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x20f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x20f820: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x20f820u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f824: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20f828: 0x93a3051a  lbu         $v1, 0x51A($sp)
    ctx->pc = 0x20f828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1306)));
    // 0x20f82c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x20f82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20f830: 0x93a3051b  lbu         $v1, 0x51B($sp)
    ctx->pc = 0x20f830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1307)));
    // 0x20f834: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x20f834u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20f838: 0x3c094348  lui         $t1, 0x4348
    ctx->pc = 0x20f838u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17224 << 16));
    // 0x20f83c: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x20f83cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f840: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f840u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f844: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x20f844u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20f848: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x20f848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20f84c: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20f84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f850: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x20f850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x20f854: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x20f854u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x20f858: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f858u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f85c: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20F85Cu;
    SET_GPR_U32(ctx, 31, 0x20F864u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F85Cu, 0x20F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F864u;
}
