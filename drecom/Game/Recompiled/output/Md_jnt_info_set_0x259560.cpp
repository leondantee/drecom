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

// Function: Md_jnt_info_set
// Address: 0x259560 - 0x259740
void Md_jnt_info_set_0x259560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_jnt_info_set_0x259560");
#endif

    switch (ctx->pc) {
        case 0x2595bcu: goto label_2595bc;
        case 0x259600u: goto label_259600;
        case 0x259628u: goto label_259628;
        case 0x259640u: goto label_259640;
        case 0x2596a0u: goto label_2596a0;
        default: break;
    }

    ctx->pc = 0x259560u;

    // 0x259560: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x259560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x259564: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x259564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x259568: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x259568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25956c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x259570: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x259570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x259574: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x259574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x259578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25957c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259584: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x259584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x259588: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x259588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25958c: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x25958cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x259590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x259590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259594: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x259594u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259598: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x259598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25959c: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x25959cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2595a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2595a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2595a4: 0x8c520330  lw          $s2, 0x330($v0)
    ctx->pc = 0x2595a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2595a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2595a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2595ac: 0x8c530344  lw          $s3, 0x344($v0)
    ctx->pc = 0x2595acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x2595b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2595b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2595b4: 0x8c54034c  lw          $s4, 0x34C($v0)
    ctx->pc = 0x2595b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 844)));
    // 0x2595b8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2595b8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2595bc:
    // 0x2595bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2595bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2595c0: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2595c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2595c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2595c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2595c8: 0x0  nop
    ctx->pc = 0x2595c8u;
    // NOP
    // 0x2595cc: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x2595ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x2595d0: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x2595d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x2595d4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2595d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2595d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2595d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2595dc: 0x0  nop
    ctx->pc = 0x2595dcu;
    // NOP
    // 0x2595e0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2595e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2595e4: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2595e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2595e8: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x2595e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x2595ec: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2595ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2595f0: 0xa2020143  sb          $v0, 0x143($s0)
    ctx->pc = 0x2595f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x2595f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2595f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2595f8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2595F8u;
    SET_GPR_U32(ctx, 31, 0x259600u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x259600u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x259600u) { return; }
    ctx->pc = 0x259600u;
label_259600:
    // 0x259600: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x259600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259604: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x259604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x259608: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x259608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25960c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25960cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x259610: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x259610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259614: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x259614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x259618: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x259618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25961c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25961cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x259620: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x259620u;
    SET_GPR_U32(ctx, 31, 0x259628u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x259628u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x259628u) { return; }
    ctx->pc = 0x259628u;
label_259628:
    // 0x259628: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x259628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25962c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25962cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259630: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x259630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x259634: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x259634u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x259638: 0xc040c8c  jal         func_103230
    ctx->pc = 0x259638u;
    SET_GPR_U32(ctx, 31, 0x259640u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x259640u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x259640u) { return; }
    ctx->pc = 0x259640u;
label_259640:
    // 0x259640: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x259640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x259644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x259644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259648: 0x0  nop
    ctx->pc = 0x259648u;
    // NOP
    // 0x25964c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x25964cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x259650: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x259650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x259654: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x259654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259658: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x259658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25965c: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x25965Cu;
    {
        const bool branch_taken_0x25965c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25965c) {
            ctx->pc = 0x2596C4u;
            goto label_2596c4;
        }
    }
    ctx->pc = 0x259664u;
    // 0x259664: 0x92020143  lbu         $v0, 0x143($s0)
    ctx->pc = 0x259664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x259668: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x259668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25966c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25966cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259670: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x259670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259674: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x259674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259678: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x259678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25967c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25967cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x259680: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x259680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x259684: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x259684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x259688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25968c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25968cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x259690: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x259690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x259694: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x259694u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x259698: 0xc040c00  jal         func_103000
    ctx->pc = 0x259698u;
    SET_GPR_U32(ctx, 31, 0x2596A0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2596A0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2596A0u) { return; }
    ctx->pc = 0x2596A0u;
label_2596a0:
    // 0x2596a0: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x2596a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x2596a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2596a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2596a8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2596a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2596ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2596acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2596b0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2596b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2596b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2596b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2596b8: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2596b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2596bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2596BCu;
    {
        const bool branch_taken_0x2596bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2596bc) {
            ctx->pc = 0x2596D0u;
            goto label_2596d0;
        }
    }
    ctx->pc = 0x2596C4u;
label_2596c4:
    // 0x2596c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2596c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2596c8: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x2596c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2596cc: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2596ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_2596d0:
    // 0x2596d0: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x2596d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x2596d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2596d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2596d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2596d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2596dc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2596dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2596e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2596e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2596e4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2596e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2596e8: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2596e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2596ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2596ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2596f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2596f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2596f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2596f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2596f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2596f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2596fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2596fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x259700: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x259700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x259704: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259708: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x259708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25970c: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
    ctx->pc = 0x25970Cu;
    {
        const bool branch_taken_0x25970c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25970c) {
            ctx->pc = 0x2595BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2595bc;
        }
    }
    ctx->pc = 0x259714u;
    // 0x259714: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x259714u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259718: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x259718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25971c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25971cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259720: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x259720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x259724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25972c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25972cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259734: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x259734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x259738: 0x3e00008  jr          $ra
    ctx->pc = 0x259738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259740u;
}
