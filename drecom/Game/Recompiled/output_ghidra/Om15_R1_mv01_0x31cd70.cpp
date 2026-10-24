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

// Function: Om15_R1_mv01
// Address: 0x31cd70 - 0x31d6b4
void Om15_R1_mv01_0x31cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om15_R1_mv01_0x31cd70");
#endif

    switch (ctx->pc) {
        case 0x31ce60u: goto label_31ce60;
        case 0x31ceacu: goto label_31ceac;
        case 0x31cef4u: goto label_31cef4;
        case 0x31cf38u: goto label_31cf38;
        case 0x31cf74u: goto label_31cf74;
        case 0x31d020u: goto label_31d020;
        case 0x31d054u: goto label_31d054;
        case 0x31d060u: goto label_31d060;
        case 0x31d094u: goto label_31d094;
        case 0x31d0a0u: goto label_31d0a0;
        case 0x31d0d8u: goto label_31d0d8;
        case 0x31d0e4u: goto label_31d0e4;
        case 0x31d11cu: goto label_31d11c;
        case 0x31d128u: goto label_31d128;
        case 0x31d15cu: goto label_31d15c;
        case 0x31d168u: goto label_31d168;
        case 0x31d180u: goto label_31d180;
        case 0x31d1b4u: goto label_31d1b4;
        case 0x31d1c0u: goto label_31d1c0;
        case 0x31d1f4u: goto label_31d1f4;
        case 0x31d200u: goto label_31d200;
        case 0x31d238u: goto label_31d238;
        case 0x31d244u: goto label_31d244;
        case 0x31d258u: goto label_31d258;
        case 0x31d2c0u: goto label_31d2c0;
        case 0x31d374u: goto label_31d374;
        case 0x31d414u: goto label_31d414;
        case 0x31d59cu: goto label_31d59c;
        case 0x31d608u: goto label_31d608;
        case 0x31d614u: goto label_31d614;
        case 0x31d658u: goto label_31d658;
        default: break;
    }

    ctx->pc = 0x31cd70u;

    // 0x31cd70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x31cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x31cd74: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x31cd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x31cd78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31cd7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31cd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31cd80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31cd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31cd84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31cd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31cd88: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x31cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x31cd8c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x31cd90: 0x24429d10  addiu       $v0, $v0, -0x62F0
    ctx->pc = 0x31cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941968));
    // 0x31cd94: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x31cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31cd98: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31cd98u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399D10u));
    // 0x31cd9c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31cd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x31cda0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x31cda4: 0x24429d20  addiu       $v0, $v0, -0x62E0
    ctx->pc = 0x31cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941984));
    // 0x31cda8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x31cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31cdac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31cdacu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399D20u));
    // 0x31cdb0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31cdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x31cdb4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x31cdb8: 0x24449d30  addiu       $a0, $v0, -0x62D0
    ctx->pc = 0x31cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x31cdbc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x31cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31cdc0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x31cdc0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399D30u));
    // 0x31cdc4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x31cdc8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cdcc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x31cdccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x31cdd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31cdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cdd4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x31cdd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x31cdd8: 0x10200127  beqz        $at, . + 4 + (0x127 << 2)
    ctx->pc = 0x31CDD8u;
    {
        const bool branch_taken_0x31cdd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cdd8) {
            ctx->pc = 0x31D278u;
            goto label_31d278;
        }
    }
    ctx->pc = 0x31CDE0u;
    // 0x31cde0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x31cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x31cde4: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x31cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x31cde8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31cdec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31cdf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31cdf4: 0x400008  jr          $v0
    ctx->pc = 0x31CDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31CDFCu: goto label_31cdfc;
            case 0x31CEBCu: goto label_31cebc;
            case 0x31CF8Cu: goto label_31cf8c;
            case 0x31CFF8u: goto label_31cff8;
            case 0x31D268u: goto label_31d268;
            case 0x31D278u: goto label_31d278;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CDF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31CDFCu;
label_31cdfc:
    // 0x31cdfc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce00: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x31ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x31ce04: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce08: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31ce0c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31ce0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ce10: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x31ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ce14: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x31ce18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce1c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31ce20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31ce20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ce24: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31ce28: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31ce2c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31ce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce30: 0x3c024743  lui         $v0, 0x4743
    ctx->pc = 0x31ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18243 << 16));
    // 0x31ce34: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x31ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x31ce38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ce38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ce3c: 0x0  nop
    ctx->pc = 0x31ce3cu;
    // NOP
    // 0x31ce40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ce40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31ce44: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31ce44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31ce48: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31ce4c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x31ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ce50: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31ce54: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31ce54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ce58: 0xc059e1c  jal         func_167870
    ctx->pc = 0x31CE58u;
    SET_GPR_U32(ctx, 31, 0x31CE60u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x31CE58u, 0x31CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE60u;
label_31ce60:
    // 0x31ce60: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x31ce60u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31ce64: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x31CE64u;
    {
        const bool branch_taken_0x31ce64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ce64) {
            ctx->pc = 0x31CEACu;
            goto label_31ceac;
        }
    }
    ctx->pc = 0x31CE6Cu;
    // 0x31ce6c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x31ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31ce70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31ce70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ce74: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce78: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x31ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x31ce7c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31ce80: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce84: 0xc4611304  lwc1        $f1, 0x1304($v1)
    ctx->pc = 0x31ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce88: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x31ce8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ce8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ce90: 0x0  nop
    ctx->pc = 0x31ce90u;
    // NOP
    // 0x31ce94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31ce94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31ce98: 0xe4601304  swc1        $f0, 0x1304($v1)
    ctx->pc = 0x31ce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4868), bits); }
    // 0x31ce9c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cea0: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31cea4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x31cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x31cea8: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
label_31ceac:
    // 0x31ceac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ceb0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31ceb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31ceb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ceb8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31ceb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31cebc:
    // 0x31cebc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cec0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31cec4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x31cec8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x31cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x31cecc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ced0: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x31ced0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31ced4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31ced4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ced8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cedc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31CEDCu;
    {
        const bool branch_taken_0x31cedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31cedc) {
            ctx->pc = 0x31CF38u;
            goto label_31cf38;
        }
    }
    ctx->pc = 0x31CEE4u;
    // 0x31cee4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31CEE4u;
    {
        const bool branch_taken_0x31cee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cee4) {
            ctx->pc = 0x31CEF4u;
            goto label_31cef4;
        }
    }
    ctx->pc = 0x31CEECu;
    // 0x31ceec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31CEECu;
    {
        const bool branch_taken_0x31ceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ceec) {
            ctx->pc = 0x31CF74u;
            goto label_31cf74;
        }
    }
    ctx->pc = 0x31CEF4u;
label_31cef4:
    // 0x31cef4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31cef8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cefc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf00: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x31cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x31cf04: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31cf08: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf0c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf10: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x31cf14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31cf18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf1c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x31cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf20: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x31cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x31cf24: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31cf24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf28: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x31cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x31cf2c: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x31cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x31cf30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31CF30u;
    {
        const bool branch_taken_0x31cf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cf30) {
            ctx->pc = 0x31CF74u;
            goto label_31cf74;
        }
    }
    ctx->pc = 0x31CF38u;
label_31cf38:
    // 0x31cf38: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x31cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31cf3c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf40: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x31cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31cf44: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x31cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x31cf48: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x31cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31cf4c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf50: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf54: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x31cf58: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x31cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31cf5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf60: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x31cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf64: 0xaca40068  sw          $a0, 0x68($a1)
    ctx->pc = 0x31cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 4));
    // 0x31cf68: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf6c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x31cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31cf70: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x31cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
label_31cf74:
    // 0x31cf74: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf78: 0xac60129c  sw          $zero, 0x129C($v1)
    ctx->pc = 0x31cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 0));
    // 0x31cf7c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31cf80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31cf84: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x31cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31cf88: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x31cf88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_31cf8c:
    // 0x31cf8c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31cf90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31cf94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cf98: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf9c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x31cf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x31cfa0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31cfa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31cfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cfac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfb0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x31cfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x31cfb4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31cfb8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31cfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cfc0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfc4: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x31cfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x31cfc8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfcc: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31cfd0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31cfd4: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x31cfd8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfdc: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31cfe0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x31cfe4: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x31cfe8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31cfecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31cff0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31cff4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31cff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31cff8:
    // 0x31cff8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cffc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x31cffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31d000: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31d000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31d004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d008: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x31D008u;
    {
        const bool branch_taken_0x31d008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d008) {
            ctx->pc = 0x31D180u;
            goto label_31d180;
        }
    }
    ctx->pc = 0x31D010u;
    // 0x31d010: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D010u;
    {
        const bool branch_taken_0x31d010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d010) {
            ctx->pc = 0x31D020u;
            goto label_31d020;
        }
    }
    ctx->pc = 0x31D018u;
    // 0x31d018: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x31D018u;
    {
        const bool branch_taken_0x31d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d018) {
            ctx->pc = 0x31D258u;
            goto label_31d258;
        }
    }
    ctx->pc = 0x31D020u;
label_31d020:
    // 0x31d020: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d024: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d028: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d02c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d030: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d034: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d038: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d03c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d03cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d040: 0x24042d02  addiu       $a0, $zero, 0x2D02
    ctx->pc = 0x31d040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11522));
    // 0x31d044: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d044u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d048: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d04c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D04Cu;
    SET_GPR_U32(ctx, 31, 0x31D054u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D04Cu, 0x31D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D054u;
label_31d054:
    // 0x31d054: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d058: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D058u;
    SET_GPR_U32(ctx, 31, 0x31D060u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D058u, 0x31D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D060u;
label_31d060:
    // 0x31d060: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d064: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d068: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d06c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d070: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d074: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d078: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d07c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d07cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d080: 0x2404490a  addiu       $a0, $zero, 0x490A
    ctx->pc = 0x31d080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18698));
    // 0x31d084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d088: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d08c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D08Cu;
    SET_GPR_U32(ctx, 31, 0x31D094u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D08Cu, 0x31D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D094u;
label_31d094:
    // 0x31d094: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d098: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D098u;
    SET_GPR_U32(ctx, 31, 0x31D0A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D098u, 0x31D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0A0u;
label_31d0a0:
    // 0x31d0a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31d0a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d0a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d0a8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d0ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d0b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d0b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d0b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d0bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d0c0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d0c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d0c4: 0x2404490b  addiu       $a0, $zero, 0x490B
    ctx->pc = 0x31d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18699));
    // 0x31d0c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d0c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d0cc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d0d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D0D0u;
    SET_GPR_U32(ctx, 31, 0x31D0D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D0D0u, 0x31D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0D8u;
label_31d0d8:
    // 0x31d0d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d0d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d0dc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D0DCu;
    SET_GPR_U32(ctx, 31, 0x31D0E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D0DCu, 0x31D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0E4u;
label_31d0e4:
    // 0x31d0e4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x31d0e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d0e8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d0ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d0f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d0f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d0f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d0fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d104: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d108: 0x2404490e  addiu       $a0, $zero, 0x490E
    ctx->pc = 0x31d108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18702));
    // 0x31d10c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d10cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d110: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d114: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D114u;
    SET_GPR_U32(ctx, 31, 0x31D11Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D114u, 0x31D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D11Cu;
label_31d11c:
    // 0x31d11c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d11cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d120: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D120u;
    SET_GPR_U32(ctx, 31, 0x31D128u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D120u, 0x31D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D128u;
label_31d128:
    // 0x31d128: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d12c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d130: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d134: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d138: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d13c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d140: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d144: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d144u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d148: 0x2404490f  addiu       $a0, $zero, 0x490F
    ctx->pc = 0x31d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18703));
    // 0x31d14c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d14cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d150: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d154: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D154u;
    SET_GPR_U32(ctx, 31, 0x31D15Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D154u, 0x31D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D15Cu;
label_31d15c:
    // 0x31d15c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d15cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d160: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D160u;
    SET_GPR_U32(ctx, 31, 0x31D168u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D160u, 0x31D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D168u;
label_31d168:
    // 0x31d168: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d16c: 0xac5012a4  sw          $s0, 0x12A4($v0)
    ctx->pc = 0x31d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4772), GPR_U32(ctx, 16));
    // 0x31d170: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d174: 0xac5112a8  sw          $s1, 0x12A8($v0)
    ctx->pc = 0x31d174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4776), GPR_U32(ctx, 17));
    // 0x31d178: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x31D178u;
    {
        const bool branch_taken_0x31d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d178) {
            ctx->pc = 0x31D258u;
            goto label_31d258;
        }
    }
    ctx->pc = 0x31D180u;
label_31d180:
    // 0x31d180: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d184: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d188: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d18c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d190: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d194: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d198: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d19c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d19cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d1a0: 0x24042d03  addiu       $a0, $zero, 0x2D03
    ctx->pc = 0x31d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11523));
    // 0x31d1a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d1a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d1a8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d1ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D1ACu;
    SET_GPR_U32(ctx, 31, 0x31D1B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D1ACu, 0x31D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1B4u;
label_31d1b4:
    // 0x31d1b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d1b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d1b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D1B8u;
    SET_GPR_U32(ctx, 31, 0x31D1C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D1B8u, 0x31D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1C0u;
label_31d1c0:
    // 0x31d1c0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d1c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d1c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d1cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d1d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d1d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d1d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d1dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d1dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d1e0: 0x2404490c  addiu       $a0, $zero, 0x490C
    ctx->pc = 0x31d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18700));
    // 0x31d1e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d1e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d1e8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d1ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D1ECu;
    SET_GPR_U32(ctx, 31, 0x31D1F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D1ECu, 0x31D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1F4u;
label_31d1f4:
    // 0x31d1f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d1f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d1f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D1F8u;
    SET_GPR_U32(ctx, 31, 0x31D200u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D1F8u, 0x31D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D200u;
label_31d200:
    // 0x31d200: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31d200u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d204: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d208: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d20c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d210: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d214: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d218: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d21c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d220: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d224: 0x2404490d  addiu       $a0, $zero, 0x490D
    ctx->pc = 0x31d224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18701));
    // 0x31d228: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d22c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d230: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D230u;
    SET_GPR_U32(ctx, 31, 0x31D238u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D230u, 0x31D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D238u;
label_31d238:
    // 0x31d238: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d238u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d23c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D23Cu;
    SET_GPR_U32(ctx, 31, 0x31D244u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D23Cu, 0x31D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D244u;
label_31d244:
    // 0x31d244: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x31d244u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d248: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d24c: 0xac5012a4  sw          $s0, 0x12A4($v0)
    ctx->pc = 0x31d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4772), GPR_U32(ctx, 16));
    // 0x31d250: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d254: 0xac5112a8  sw          $s1, 0x12A8($v0)
    ctx->pc = 0x31d254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4776), GPR_U32(ctx, 17));
label_31d258:
    // 0x31d258: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d25c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31d25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31d260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d264: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31d264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31d268:
    // 0x31d268: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d26c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31d26cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31d270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d274: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31d274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31d278:
    // 0x31d278: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d27c: 0x8c5012a4  lw          $s0, 0x12A4($v0)
    ctx->pc = 0x31d27cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x31d280: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d284: 0x8c5112a8  lw          $s1, 0x12A8($v0)
    ctx->pc = 0x31d284u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x31d288: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d28c: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x31d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x31d290: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31d294: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x31D294u;
    {
        const bool branch_taken_0x31d294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d294) {
            ctx->pc = 0x31D59Cu;
            goto label_31d59c;
        }
    }
    ctx->pc = 0x31D29Cu;
    // 0x31d29c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d2a0: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31d2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d2a8: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x31D2A8u;
    {
        const bool branch_taken_0x31d2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d2a8) {
            ctx->pc = 0x31D374u;
            goto label_31d374;
        }
    }
    ctx->pc = 0x31D2B0u;
    // 0x31d2b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D2B0u;
    {
        const bool branch_taken_0x31d2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d2b0) {
            ctx->pc = 0x31D2C0u;
            goto label_31d2c0;
        }
    }
    ctx->pc = 0x31D2B8u;
    // 0x31d2b8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x31D2B8u;
    {
        const bool branch_taken_0x31d2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d2b8) {
            ctx->pc = 0x31D414u;
            goto label_31d414;
        }
    }
    ctx->pc = 0x31D2C0u;
label_31d2c0:
    // 0x31d2c0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x31d2c4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x31d2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x31d2c8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31D2C8u;
    {
        const bool branch_taken_0x31d2c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d2c8) {
            ctx->pc = 0x31D2F4u;
            goto label_31d2f4;
        }
    }
    ctx->pc = 0x31D2D0u;
    // 0x31d2d0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d2d4: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31d2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d2d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31d2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d2e0: 0x0  nop
    ctx->pc = 0x31d2e0u;
    // NOP
    // 0x31d2e4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31d2e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d2e8: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d2ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31d2ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d2f0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31d2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_31d2f4:
    // 0x31d2f4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d2f8: 0xc46112dc  lwc1        $f1, 0x12DC($v1)
    ctx->pc = 0x31d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d2fc: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31d300: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31d300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31d304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d308: 0x0  nop
    ctx->pc = 0x31d308u;
    // NOP
    // 0x31d30c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31d30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31d310: 0xe46012dc  swc1        $f0, 0x12DC($v1)
    ctx->pc = 0x31d310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4828), bits); }
    // 0x31d314: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d318: 0x8c6212b0  lw          $v0, 0x12B0($v1)
    ctx->pc = 0x31d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x31d31c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d320: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31d320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    // 0x31d324: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d328: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d32c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31d330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d334: 0x0  nop
    ctx->pc = 0x31d334u;
    // NOP
    // 0x31d338: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31d338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d33c: 0x0  nop
    ctx->pc = 0x31d33cu;
    // NOP
    // 0x31d340: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x31D340u;
    {
        const bool branch_taken_0x31d340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d340) {
            ctx->pc = 0x31D414u;
            goto label_31d414;
        }
    }
    ctx->pc = 0x31D348u;
    // 0x31d348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d34c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d350: 0xac4312ac  sw          $v1, 0x12AC($v0)
    ctx->pc = 0x31d350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 3));
    // 0x31d354: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d358: 0xac4012b0  sw          $zero, 0x12B0($v0)
    ctx->pc = 0x31d358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 0));
    // 0x31d35c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31d360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d364: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d368: 0xe44012dc  swc1        $f0, 0x12DC($v0)
    ctx->pc = 0x31d368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4828), bits); }
    // 0x31d36c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x31D36Cu;
    {
        const bool branch_taken_0x31d36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d36c) {
            ctx->pc = 0x31D414u;
            goto label_31d414;
        }
    }
    ctx->pc = 0x31D374u;
label_31d374:
    // 0x31d374: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31d374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x31d378: 0x34430011  ori         $v1, $v0, 0x11
    ctx->pc = 0x31d378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x31d37c: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31D37Cu;
    {
        const bool branch_taken_0x31d37c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d37c) {
            ctx->pc = 0x31D3A8u;
            goto label_31d3a8;
        }
    }
    ctx->pc = 0x31D384u;
    // 0x31d384: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d388: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d38c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31d390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d394: 0x0  nop
    ctx->pc = 0x31d394u;
    // NOP
    // 0x31d398: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31d398u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d39c: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d3a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31d3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31d3a4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31d3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_31d3a8:
    // 0x31d3a8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d3ac: 0x8c6212b0  lw          $v0, 0x12B0($v1)
    ctx->pc = 0x31d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x31d3b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d3b4: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    // 0x31d3b8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d3bc: 0xc48112dc  lwc1        $f1, 0x12DC($a0)
    ctx->pc = 0x31d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d3c0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31d3c4: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x31d3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31d3c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d3cc: 0x0  nop
    ctx->pc = 0x31d3ccu;
    // NOP
    // 0x31d3d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31d3d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31d3d4: 0xe48012dc  swc1        $f0, 0x12DC($a0)
    ctx->pc = 0x31d3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4828), bits); }
    // 0x31d3d8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d3dc: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31d3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d3e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d3e4: 0x0  nop
    ctx->pc = 0x31d3e4u;
    // NOP
    // 0x31d3e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d3ec: 0x0  nop
    ctx->pc = 0x31d3ecu;
    // NOP
    // 0x31d3f0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31D3F0u;
    {
        const bool branch_taken_0x31d3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d3f0) {
            ctx->pc = 0x31D414u;
            goto label_31d414;
        }
    }
    ctx->pc = 0x31D3F8u;
    // 0x31d3f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d3fc: 0xac4012ac  sw          $zero, 0x12AC($v0)
    ctx->pc = 0x31d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 0));
    // 0x31d400: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d404: 0xac6012b0  sw          $zero, 0x12B0($v1)
    ctx->pc = 0x31d404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 0));
    // 0x31d408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d40c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d410: 0xe44012dc  swc1        $f0, 0x12DC($v0)
    ctx->pc = 0x31d410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4828), bits); }
label_31d414:
    // 0x31d414: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d418: 0x8c4312b4  lw          $v1, 0x12B4($v0)
    ctx->pc = 0x31d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4788)));
    // 0x31d41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d420: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31D420u;
    {
        const bool branch_taken_0x31d420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d420) {
            ctx->pc = 0x31D4F8u;
            goto label_31d4f8;
        }
    }
    ctx->pc = 0x31D428u;
    // 0x31d428: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D428u;
    {
        const bool branch_taken_0x31d428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d428) {
            ctx->pc = 0x31D438u;
            goto label_31d438;
        }
    }
    ctx->pc = 0x31D430u;
    // 0x31d430: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x31D430u;
    {
        const bool branch_taken_0x31d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d430) {
            ctx->pc = 0x31D59Cu;
            goto label_31d59c;
        }
    }
    ctx->pc = 0x31D438u;
label_31d438:
    // 0x31d438: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31d438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x31d43c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x31d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x31d440: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31D440u;
    {
        const bool branch_taken_0x31d440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d440) {
            ctx->pc = 0x31D470u;
            goto label_31d470;
        }
    }
    ctx->pc = 0x31D448u;
    // 0x31d448: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d44c: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d450: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31d450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31d454: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31d458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d45c: 0x0  nop
    ctx->pc = 0x31d45cu;
    // NOP
    // 0x31d460: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31d460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d464: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31d468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d46c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31d46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_31d470:
    // 0x31d470: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d474: 0xc46112e0  lwc1        $f1, 0x12E0($v1)
    ctx->pc = 0x31d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d478: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31d478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31d47c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31d480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d484: 0x0  nop
    ctx->pc = 0x31d484u;
    // NOP
    // 0x31d488: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31d488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31d48c: 0xe46012e0  swc1        $f0, 0x12E0($v1)
    ctx->pc = 0x31d48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4832), bits); }
    // 0x31d490: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d494: 0x8c6212b8  lw          $v0, 0x12B8($v1)
    ctx->pc = 0x31d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4792)));
    // 0x31d498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d49c: 0xac6212b8  sw          $v0, 0x12B8($v1)
    ctx->pc = 0x31d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 2));
    // 0x31d4a0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d4a4: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d4a8: 0x3c053e99  lui         $a1, 0x3E99
    ctx->pc = 0x31d4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16025 << 16));
    // 0x31d4ac: 0x34a4999a  ori         $a0, $a1, 0x999A
    ctx->pc = 0x31d4acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x31d4b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31d4b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d4b4: 0x0  nop
    ctx->pc = 0x31d4b4u;
    // NOP
    // 0x31d4b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31d4b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d4bc: 0x0  nop
    ctx->pc = 0x31d4bcu;
    // NOP
    // 0x31d4c0: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x31D4C0u;
    {
        const bool branch_taken_0x31d4c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d4c0) {
            ctx->pc = 0x31D59Cu;
            goto label_31d59c;
        }
    }
    ctx->pc = 0x31D4C8u;
    // 0x31d4c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31d4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d4cc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d4d0: 0xac4612b4  sw          $a2, 0x12B4($v0)
    ctx->pc = 0x31d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4788), GPR_U32(ctx, 6));
    // 0x31d4d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d4d8: 0xac4012b8  sw          $zero, 0x12B8($v0)
    ctx->pc = 0x31d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4792), GPR_U32(ctx, 0));
    // 0x31d4dc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31d4e0: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x31d4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31d4e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d4e8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d4ec: 0xe44012e0  swc1        $f0, 0x12E0($v0)
    ctx->pc = 0x31d4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4832), bits); }
    // 0x31d4f0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31D4F0u;
    {
        const bool branch_taken_0x31d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d4f0) {
            ctx->pc = 0x31D59Cu;
            goto label_31d59c;
        }
    }
    ctx->pc = 0x31D4F8u;
label_31d4f8:
    // 0x31d4f8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x31d4fc: 0x34430011  ori         $v1, $v0, 0x11
    ctx->pc = 0x31d4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x31d500: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x31D500u;
    {
        const bool branch_taken_0x31d500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d500) {
            ctx->pc = 0x31D530u;
            goto label_31d530;
        }
    }
    ctx->pc = 0x31D508u;
    // 0x31d508: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d50c: 0xc46112e0  lwc1        $f1, 0x12E0($v1)
    ctx->pc = 0x31d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d510: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31d510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31d514: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31d514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31d518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d51c: 0x0  nop
    ctx->pc = 0x31d51cu;
    // NOP
    // 0x31d520: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31d520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d524: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31d528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31d52c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31d52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_31d530:
    // 0x31d530: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d534: 0x8c6212b8  lw          $v0, 0x12B8($v1)
    ctx->pc = 0x31d534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4792)));
    // 0x31d538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d53c: 0xac6212b8  sw          $v0, 0x12B8($v1)
    ctx->pc = 0x31d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 2));
    // 0x31d540: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d544: 0xc46112e0  lwc1        $f1, 0x12E0($v1)
    ctx->pc = 0x31d544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d548: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31d54c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31d550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d554: 0x0  nop
    ctx->pc = 0x31d554u;
    // NOP
    // 0x31d558: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31d558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31d55c: 0xe46012e0  swc1        $f0, 0x12E0($v1)
    ctx->pc = 0x31d55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4832), bits); }
    // 0x31d560: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d564: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d56c: 0x0  nop
    ctx->pc = 0x31d56cu;
    // NOP
    // 0x31d570: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d574: 0x0  nop
    ctx->pc = 0x31d574u;
    // NOP
    // 0x31d578: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31D578u;
    {
        const bool branch_taken_0x31d578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d578) {
            ctx->pc = 0x31D59Cu;
            goto label_31d59c;
        }
    }
    ctx->pc = 0x31D580u;
    // 0x31d580: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d584: 0xac4012b4  sw          $zero, 0x12B4($v0)
    ctx->pc = 0x31d584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4788), GPR_U32(ctx, 0));
    // 0x31d588: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d58c: 0xac6012b8  sw          $zero, 0x12B8($v1)
    ctx->pc = 0x31d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 0));
    // 0x31d590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d594: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d598: 0xe44012e0  swc1        $f0, 0x12E0($v0)
    ctx->pc = 0x31d598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4832), bits); }
label_31d59c:
    // 0x31d59c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d5a0: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31d5a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31d5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x31d5a8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x31D5A8u;
    {
        const bool branch_taken_0x31d5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d5a8) {
            ctx->pc = 0x31D64Cu;
            goto label_31d64c;
        }
    }
    ctx->pc = 0x31D5B0u;
    // 0x31d5b0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d5b4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x31d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d5b8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d5bc: 0xc4401304  lwc1        $f0, 0x1304($v0)
    ctx->pc = 0x31d5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d5c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31d5c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31d5c4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x31d5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x31d5c8: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x31d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d5cc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x31d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x31d5d0: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x31d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x31d5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d5d8: 0x0  nop
    ctx->pc = 0x31d5d8u;
    // NOP
    // 0x31d5dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d5dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d5e0: 0x0  nop
    ctx->pc = 0x31d5e0u;
    // NOP
    // 0x31d5e4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x31D5E4u;
    {
        const bool branch_taken_0x31d5e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d5e4) {
            ctx->pc = 0x31D64Cu;
            goto label_31d64c;
        }
    }
    ctx->pc = 0x31D5ECu;
    // 0x31d5ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d5f0: 0x24044b00  addiu       $a0, $zero, 0x4B00
    ctx->pc = 0x31d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19200));
    // 0x31d5f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d5f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d5f8: 0x24461300  addiu       $a2, $v0, 0x1300
    ctx->pc = 0x31d5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x31d5fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31d5fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d600: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D600u;
    SET_GPR_U32(ctx, 31, 0x31D608u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D600u, 0x31D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D608u;
label_31d608:
    // 0x31d608: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d60c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D60Cu;
    SET_GPR_U32(ctx, 31, 0x31D614u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D60Cu, 0x31D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D614u;
label_31d614:
    // 0x31d614: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x31d614u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d618: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31d618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x31d61c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x31d61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x31d620: 0x1243000a  beq         $s2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31D620u;
    {
        const bool branch_taken_0x31d620 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d620) {
            ctx->pc = 0x31D64Cu;
            goto label_31d64c;
        }
    }
    ctx->pc = 0x31D628u;
    // 0x31d628: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x31d628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x31d62c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31d62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d630: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x31d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
    // 0x31d634: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x31d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x31d638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d63c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x31d63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d640: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31d640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d644: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31d644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x31d648: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x31d648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_31d64c:
    // 0x31d64c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d650: 0xc0c7874  jal         func_31E1D0
    ctx->pc = 0x31D650u;
    SET_GPR_U32(ctx, 31, 0x31D658u);
    ctx->pc = 0x31E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1D0u, 0x31D650u, 0x31D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D658u;
label_31d658:
    // 0x31d658: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31D658u;
    {
        const bool branch_taken_0x31d658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d658) {
            ctx->pc = 0x31D694u;
            goto label_31d694;
        }
    }
    ctx->pc = 0x31D660u;
    // 0x31d660: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31d660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31d664: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d668: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x31d668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x31d66c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d670: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31d670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d674: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d678: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31d678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d67c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d680: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x31d680u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d684: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d688: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31d688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31d68c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x31D68Cu;
    {
        const bool branch_taken_0x31d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d68c) {
            ctx->pc = 0x31D694u;
            goto label_31d694;
        }
    }
    ctx->pc = 0x31D694u;
label_31d694:
    // 0x31d694: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x31d694u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d698: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d69c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d6a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d6a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x31d6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x31d6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31D6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D6B4u;
}
