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

// Function: Sub_calc_matrix_em1e_0
// Address: 0x374020 - 0x37453c
void Sub_calc_matrix_em1e_0_0x374020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sub_calc_matrix_em1e_0_0x374020");
#endif

    switch (ctx->pc) {
        case 0x374060u: goto label_374060;
        case 0x3740a0u: goto label_3740a0;
        case 0x3740b8u: goto label_3740b8;
        case 0x374128u: goto label_374128;
        case 0x374168u: goto label_374168;
        case 0x374180u: goto label_374180;
        case 0x374200u: goto label_374200;
        case 0x3743c8u: goto label_3743c8;
        case 0x3743f4u: goto label_3743f4;
        case 0x37444cu: goto label_37444c;
        case 0x374468u: goto label_374468;
        case 0x3744a0u: goto label_3744a0;
        case 0x3744c8u: goto label_3744c8;
        case 0x3744dcu: goto label_3744dc;
        case 0x3744ecu: goto label_3744ec;
        default: break;
    }

    ctx->pc = 0x374020u;

    // 0x374020: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x374020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x374024: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x374024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x374028: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x374028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37402c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x374030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374038: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x374038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x37403c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x37403cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374040: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374044: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x374044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x374048: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x374048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x37404c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x37404Cu;
    {
        const bool branch_taken_0x37404c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37404c) {
            ctx->pc = 0x374108u;
            goto label_374108;
        }
    }
    ctx->pc = 0x374054u;
    // 0x374054: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x374054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x374058: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x374058u;
    SET_GPR_U32(ctx, 31, 0x374060u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x374060u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374060u) { return; }
    ctx->pc = 0x374060u;
label_374060:
    // 0x374060: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374064: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x374064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374068: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x374068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x37406c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374070: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x374070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374074: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x374074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x374078: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37407c: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x37407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374080: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x374080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x374084: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374088: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37408c: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x37408cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x374090: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x374090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x374094: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x374094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x374098: 0xc067618  jal         func_19D860
    ctx->pc = 0x374098u;
    SET_GPR_U32(ctx, 31, 0x3740A0u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x374098u, 0x3740A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740A0u;
label_3740a0:
    // 0x3740a0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3740a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3740a4: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x3740a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3740a8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3740a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3740ac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3740acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3740b0: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x3740b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x3740b4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3740b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_3740b8:
    // 0x3740b8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x3740b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3740bc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3740bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3740c0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x3740c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3740c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3740c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3740c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3740c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3740cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3740ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3740d0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3740d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3740d4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3740d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3740d8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3740d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3740dc: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3740dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3740e0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3740e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3740e4: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x3740e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x3740e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3740e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3740ec: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3740ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3740f0: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x3740f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x3740f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3740f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3740f8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x3740f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3740fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3740FCu;
    {
        const bool branch_taken_0x3740fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3740fc) {
            ctx->pc = 0x3740B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3740b8;
        }
    }
    ctx->pc = 0x374104u;
    // 0x374104: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x374104u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_374108:
    // 0x374108: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37410c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x37410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x374110: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x374110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x374114: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x374114u;
    {
        const bool branch_taken_0x374114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374114) {
            ctx->pc = 0x3741D0u;
            goto label_3741d0;
        }
    }
    ctx->pc = 0x37411Cu;
    // 0x37411c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x37411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x374120: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x374120u;
    SET_GPR_U32(ctx, 31, 0x374128u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x374128u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374128u) { return; }
    ctx->pc = 0x374128u;
label_374128:
    // 0x374128: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37412c: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x37412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374130: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x374130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x374134: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374138: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x374138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37413c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x37413cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x374140: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374144: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x374144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374148: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x374148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x37414c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x37414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374150: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374154: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x374154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x374158: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x374158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37415c: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x37415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x374160: 0xc067618  jal         func_19D860
    ctx->pc = 0x374160u;
    SET_GPR_U32(ctx, 31, 0x374168u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x374160u, 0x374168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374168u;
label_374168:
    // 0x374168: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37416c: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x37416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x374170: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x374170u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374174: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374178: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x374178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x37417c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x37417cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_374180:
    // 0x374180: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x374180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374184: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x374184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x374188: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x374188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x37418c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37418cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x374190: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x374190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x374194: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x374194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x374198: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x374198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x37419c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x37419cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3741a0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3741a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3741a4: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3741a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3741a8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3741a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3741ac: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x3741acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x3741b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3741b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3741b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3741b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3741b8: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x3741b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x3741bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3741bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3741c0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x3741c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3741c4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3741C4u;
    {
        const bool branch_taken_0x3741c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3741c4) {
            ctx->pc = 0x374180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374180;
        }
    }
    ctx->pc = 0x3741CCu;
    // 0x3741cc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x3741ccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3741d0:
    // 0x3741d0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3741d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3741d4: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x3741d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3741d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3741D8u;
    {
        const bool branch_taken_0x3741d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3741d8) {
            ctx->pc = 0x374200u;
            goto label_374200;
        }
    }
    ctx->pc = 0x3741E0u;
    // 0x3741e0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x3741e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3741e4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3741e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3741e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3741e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3741ec: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x3741ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x3741f0: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x3741f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3741f4: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x3741f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x3741f8: 0xc040c00  jal         func_103000
    ctx->pc = 0x3741F8u;
    SET_GPR_U32(ctx, 31, 0x374200u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x374200u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374200u) { return; }
    ctx->pc = 0x374200u;
label_374200:
    // 0x374200: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x374200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374204: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x374204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x374208: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x374208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x37420c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37420cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x374210: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x374210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x374214: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x374214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x374218: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x374218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x37421c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x37421cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374220: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374224: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x374228: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x374228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37422c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37422Cu;
    {
        const bool branch_taken_0x37422c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37422c) {
            ctx->pc = 0x374260u;
            goto label_374260;
        }
    }
    ctx->pc = 0x374234u;
    // 0x374234: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374238: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37423c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37423cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x374240: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x374240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374244: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x374244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x374248: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x374248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37424c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x37424cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x374250: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374254: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x374254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x374258: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x374258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37425c: 0x0  nop
    ctx->pc = 0x37425cu;
    // NOP
label_374260:
    // 0x374260: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374264: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374268: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x374268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37426c: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x37426Cu;
    {
        const bool branch_taken_0x37426c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37426c) {
            ctx->pc = 0x374500u;
            goto label_374500;
        }
    }
    ctx->pc = 0x374274u;
    // 0x374274: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374274u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374278: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x374278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x37427c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x37427cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x374280: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374284: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x374284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x374288: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x374288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x37428c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x37428cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374290: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374294: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x374298: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x374298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37429c: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x37429Cu;
    {
        const bool branch_taken_0x37429c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37429c) {
            ctx->pc = 0x3743A8u;
            goto label_3743a8;
        }
    }
    ctx->pc = 0x3742A4u;
    // 0x3742a4: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x3742a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3742a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3742a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3742ac: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x3742acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3742b0: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3742B0u;
    {
        const bool branch_taken_0x3742b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3742b0) {
            ctx->pc = 0x374388u;
            goto label_374388;
        }
    }
    ctx->pc = 0x3742B8u;
    // 0x3742b8: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x3742b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3742bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3742bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3742c0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x3742c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x3742c4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3742C4u;
    {
        const bool branch_taken_0x3742c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3742c4) {
            ctx->pc = 0x374304u;
            goto label_374304;
        }
    }
    ctx->pc = 0x3742CCu;
    // 0x3742cc: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x3742ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3742d0: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x3742d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3742d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3742d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3742d8: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x3742d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x3742dc: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x3742dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3742e0: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x3742e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3742e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3742e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3742e8: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x3742e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x3742ec: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x3742ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3742f0: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x3742f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3742f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3742f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3742f8: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x3742f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x3742fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3742FCu;
    {
        const bool branch_taken_0x3742fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3742fc) {
            ctx->pc = 0x374328u;
            goto label_374328;
        }
    }
    ctx->pc = 0x374304u;
label_374304:
    // 0x374304: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x374304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374308: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x374308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x37430c: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x37430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374310: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x374310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x374314: 0xc620013c  lwc1        $f0, 0x13C($s1)
    ctx->pc = 0x374314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374318: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x374318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x37431c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x37431cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374320: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x374320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x374324: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x374324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_374328:
    // 0x374328: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37432c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x37432cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x374330: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x374330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x374334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x374334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374338: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x374338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37433c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x37433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374340: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x374340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x374344: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x374344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x374348: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37434c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x37434cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x374350: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x374350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x374354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x374354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374358: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x374358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37435c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x37435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374360: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x374360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x374364: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x374364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x374368: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37436c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x37436cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x374370: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x374370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x374374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x374374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374378: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x374378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37437c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x37437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374380: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x374380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x374384: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x374384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_374388:
    // 0x374388: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x374388u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x37438c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37438cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374390: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x374390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x374394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x374394u;
    {
        const bool branch_taken_0x374394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374394) {
            ctx->pc = 0x3743A8u;
            goto label_3743a8;
        }
    }
    ctx->pc = 0x37439Cu;
    // 0x37439c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x37439cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3743a0: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3743a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3743a4: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3743a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_3743a8:
    // 0x3743a8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3743a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3743ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3743acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3743b0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3743b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3743b4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3743B4u;
    {
        const bool branch_taken_0x3743b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3743b4) {
            ctx->pc = 0x374400u;
            goto label_374400;
        }
    }
    ctx->pc = 0x3743BCu;
    // 0x3743bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3743bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3743c0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3743C0u;
    SET_GPR_U32(ctx, 31, 0x3743C8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3743C8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3743C8u) { return; }
    ctx->pc = 0x3743C8u;
label_3743c8:
    // 0x3743c8: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x3743c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3743cc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3743ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3743d0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3743d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3743d4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3743d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3743d8: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3743d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3743dc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3743dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3743e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3743e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3743e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3743e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3743e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3743e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3743ec: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3743ECu;
    SET_GPR_U32(ctx, 31, 0x3743F4u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3743ECu, 0x3743F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743F4u;
label_3743f4:
    // 0x3743f4: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3743f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3743f8: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3743f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3743fc: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3743fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_374400:
    // 0x374400: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374404: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374408: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x374408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x37440c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x37440Cu;
    {
        const bool branch_taken_0x37440c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37440c) {
            ctx->pc = 0x374480u;
            goto label_374480;
        }
    }
    ctx->pc = 0x374414u;
    // 0x374414: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374418: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37441c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x37441cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x374420: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x374420u;
    {
        const bool branch_taken_0x374420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374420) {
            ctx->pc = 0x374454u;
            goto label_374454;
        }
    }
    ctx->pc = 0x374428u;
    // 0x374428: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x37442c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37442cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374430: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x374430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x374434: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x374434u;
    {
        const bool branch_taken_0x374434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374434) {
            ctx->pc = 0x374468u;
            goto label_374468;
        }
    }
    ctx->pc = 0x37443Cu;
    // 0x37443c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x37443cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x374440: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x374440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x374444: 0xc067634  jal         func_19D8D0
    ctx->pc = 0x374444u;
    SET_GPR_U32(ctx, 31, 0x37444Cu);
    ctx->pc = 0x19D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8D0u, 0x374444u, 0x37444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37444Cu;
label_37444c:
    // 0x37444c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37444Cu;
    {
        const bool branch_taken_0x37444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37444c) {
            ctx->pc = 0x374468u;
            goto label_374468;
        }
    }
    ctx->pc = 0x374454u;
label_374454:
    // 0x374454: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x374454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x374458: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x374458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x37445c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x37445cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x374460: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x374460u;
    SET_GPR_U32(ctx, 31, 0x374468u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x374460u, 0x374468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374468u;
label_374468:
    // 0x374468: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x37446c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x37446cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x374470: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x374470u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x374474: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374478: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x374478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x37447c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x37447cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_374480:
    // 0x374480: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374484: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374488: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x374488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x37448c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x37448Cu;
    {
        const bool branch_taken_0x37448c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37448c) {
            ctx->pc = 0x3744F0u;
            goto label_3744f0;
        }
    }
    ctx->pc = 0x374494u;
    // 0x374494: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x374494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x374498: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x374498u;
    SET_GPR_U32(ctx, 31, 0x3744A0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3744A0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3744A0u) { return; }
    ctx->pc = 0x3744A0u;
label_3744a0:
    // 0x3744a0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x3744a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3744a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3744a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3744a8: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3744a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3744ac: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3744acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3744b0: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3744b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3744b4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3744b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3744b8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3744b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3744bc: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x3744bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3744c0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3744C0u;
    SET_GPR_U32(ctx, 31, 0x3744C8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3744C8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3744C8u) { return; }
    ctx->pc = 0x3744C8u;
label_3744c8:
    // 0x3744c8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x3744c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3744cc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3744ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3744d0: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x3744d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3744d4: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3744D4u;
    SET_GPR_U32(ctx, 31, 0x3744DCu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3744D4u, 0x3744DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744DCu;
label_3744dc:
    // 0x3744dc: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x3744dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3744e0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3744e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3744e4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3744E4u;
    SET_GPR_U32(ctx, 31, 0x3744ECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3744ECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3744ECu) { return; }
    ctx->pc = 0x3744ECu;
label_3744ec:
    // 0x3744ec: 0x0  nop
    ctx->pc = 0x3744ecu;
    // NOP
label_3744f0:
    // 0x3744f0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3744f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3744f4: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3744f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3744f8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3744f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3744fc: 0x0  nop
    ctx->pc = 0x3744fcu;
    // NOP
label_374500:
    // 0x374500: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x374500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x374504: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374508: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x374508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x37450c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37450cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374510: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x374510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x374514: 0x1460ff3a  bnez        $v1, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x374514u;
    {
        const bool branch_taken_0x374514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374514) {
            ctx->pc = 0x374200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374200;
        }
    }
    ctx->pc = 0x37451Cu;
    // 0x37451c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x37451cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x374520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x374524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37452c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37452cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374530: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x374530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x374534: 0x3e00008  jr          $ra
    ctx->pc = 0x374534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37453Cu;
}
