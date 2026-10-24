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

// Function: Efm_wave_index_set
// Address: 0x1d76a0 - 0x1d7a70
void Efm_wave_index_set_0x1d76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_wave_index_set_0x1d76a0");
#endif

    switch (ctx->pc) {
        case 0x1d7724u: goto label_1d7724;
        case 0x1d77e8u: goto label_1d77e8;
        case 0x1d77fcu: goto label_1d77fc;
        case 0x1d7950u: goto label_1d7950;
        default: break;
    }

    ctx->pc = 0x1d76a0u;

    // 0x1d76a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d76a4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1d76a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1d76a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d76a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d76ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d76acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d76b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d76b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d76b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d76b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d76b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d76b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d76bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d76bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d76c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d76c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d76c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d76c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d76c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d76c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d76cc: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x1d76ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x1d76d0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d76d4: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1d76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d76d8: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1d76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1d76dc: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d76e0: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d76e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d76e8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d76ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d76f0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d76f4: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x1d76f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d76f8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d76fc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d7700: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d7700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d7704: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d7704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d7708: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1d7708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d770c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1d770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1d7710: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1d7710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1d7714: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d7714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d7718: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1d7718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1d771c: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1d771cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x1d7720: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1d7720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_1d7724:
    // 0x1d7724: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d7724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d7728: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d7728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d772c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7730: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d7730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d7734: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d7734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d7738: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d7738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d773c: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x1d773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7740: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d7740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7744: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d7744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d7748: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d7748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d774c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d774cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d7750: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d7750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d7754: 0x24630a68  addiu       $v1, $v1, 0xA68
    ctx->pc = 0x1d7754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7758: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d7758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d775c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d7760: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1d7760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x1d7764: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d7764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d7768: 0x8c770068  lw          $s7, 0x68($v1)
    ctx->pc = 0x1d7768u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1d776c: 0x72e09628  paddub      $s2, $s7, $zero
    ctx->pc = 0x1d776cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d7770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7774: 0x0  nop
    ctx->pc = 0x1d7774u;
    // NOP
    // 0x1d7778: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1d7778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d777c: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x1d777cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d7780: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7784: 0x0  nop
    ctx->pc = 0x1d7784u;
    // NOP
    // 0x1d7788: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1d7788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d778c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d778cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7790: 0x0  nop
    ctx->pc = 0x1d7790u;
    // NOP
    // 0x1d7794: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1d7794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1d7798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d779c: 0x0  nop
    ctx->pc = 0x1d779cu;
    // NOP
    // 0x1d77a0: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1d77a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1d77a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d77a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d77a8: 0xa6430008  sh          $v1, 0x8($s2)
    ctx->pc = 0x1d77a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d77ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d77acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d77b0: 0xa643000a  sh          $v1, 0xA($s2)
    ctx->pc = 0x1d77b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d77b4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d77b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d77b8: 0xa643000c  sh          $v1, 0xC($s2)
    ctx->pc = 0x1d77b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d77bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d77bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d77c0: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x1d77c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d77c4: 0xa6400006  sh          $zero, 0x6($s2)
    ctx->pc = 0x1d77c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d77c8: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1d77c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d77cc: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x1d77ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x1d77d0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d77d0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d77d4: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d77d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d77d8: 0x8c7100a8  lw          $s1, 0xA8($v1)
    ctx->pc = 0x1d77d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1d77dc: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d77e0: 0x8c7e0020  lw          $fp, 0x20($v1)
    ctx->pc = 0x1d77e0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d77e4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1d77e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d77e8:
    // 0x1d77e8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1d77e8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d77ec: 0x72e08628  paddub      $s0, $s7, $zero
    ctx->pc = 0x1d77ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d77f0: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x1d77f0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1d77f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D77F4u;
    {
        const bool branch_taken_0x1d77f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d77f4) {
            ctx->pc = 0x1D7878u;
            goto label_1d7878;
        }
    }
    ctx->pc = 0x1D77FCu;
label_1d77fc:
    // 0x1d77fc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1d77fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7800: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7804: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7804u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7808: 0x0  nop
    ctx->pc = 0x1d7808u;
    // NOP
    // 0x1d780c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1D780Cu;
    {
        const bool branch_taken_0x1d780c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d780c) {
            ctx->pc = 0x1D7870u;
            goto label_1d7870;
        }
    }
    ctx->pc = 0x1D7814u;
    // 0x1d7814: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1d7814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7818: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d7818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d781c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d781cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7820: 0x0  nop
    ctx->pc = 0x1d7820u;
    // NOP
    // 0x1d7824: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7824u;
    {
        const bool branch_taken_0x1d7824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7824) {
            ctx->pc = 0x1D7870u;
            goto label_1d7870;
        }
    }
    ctx->pc = 0x1D782Cu;
    // 0x1d782c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1d782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7830: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7834: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7838: 0x0  nop
    ctx->pc = 0x1d7838u;
    // NOP
    // 0x1d783c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1D783Cu;
    {
        const bool branch_taken_0x1d783c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d783c) {
            ctx->pc = 0x1D7870u;
            goto label_1d7870;
        }
    }
    ctx->pc = 0x1D7844u;
    // 0x1d7844: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d7844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7848: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x1d7848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1d784c: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1d784cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d7850: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d7850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d7854: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d7854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d7858: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d7858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d785c: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x1d785cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d7860: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1d7860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d7864: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d7864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7868: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1d7868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d786c: 0x0  nop
    ctx->pc = 0x1d786cu;
    // NOP
label_1d7870:
    // 0x1d7870: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d7870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d7874: 0x0  nop
    ctx->pc = 0x1d7874u;
    // NOP
label_1d7878:
    // 0x1d7878: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x1d7878u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d787c: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d7880: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D7880u;
    {
        const bool branch_taken_0x1d7880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7880) {
            ctx->pc = 0x1D77FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d77fc;
        }
    }
    ctx->pc = 0x1D7888u;
    // 0x1d7888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d788c: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D788Cu;
    {
        const bool branch_taken_0x1d788c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d788c) {
            ctx->pc = 0x1D78A4u;
            goto label_1d78a4;
        }
    }
    ctx->pc = 0x1D7894u;
    // 0x1d7894: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d7898: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d789c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1D789Cu;
    {
        const bool branch_taken_0x1d789c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d789c) {
            ctx->pc = 0x1D7960u;
            goto label_1d7960;
        }
    }
    ctx->pc = 0x1D78A4u;
label_1d78a4:
    // 0x1d78a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d78a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d78a8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d78a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d78ac: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1d78acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d78b0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d78b4: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1d78b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d78b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d78b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d78bc: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1d78bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x1d78c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d78c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d78c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d78c8: 0x0  nop
    ctx->pc = 0x1d78c8u;
    // NOP
    // 0x1d78cc: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x1d78ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x1d78d0: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x1d78d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d78d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d78d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d78d8: 0x0  nop
    ctx->pc = 0x1d78d8u;
    // NOP
    // 0x1d78dc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1d78dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d78e0: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x1d78e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1d78e4: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x1d78e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d78e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d78e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d78ec: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x1d78ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d78f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d78f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d78f4: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x1d78f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d78f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d78fc: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1d78fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7904: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x1d7904u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d790c: 0x0  nop
    ctx->pc = 0x1d790cu;
    // NOP
    // 0x1d7910: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1d7910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d7914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7918: 0x0  nop
    ctx->pc = 0x1d7918u;
    // NOP
    // 0x1d791c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1d791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1d7920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7924: 0x0  nop
    ctx->pc = 0x1d7924u;
    // NOP
    // 0x1d7928: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1d7928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1d792c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d792cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7930: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7934: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1d7934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7938: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d7938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d793c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7940: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d7940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7944: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x1d7944u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d7948: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1D7948u;
    SET_GPR_U32(ctx, 31, 0x1D7950u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1D7948u, 0x1D7950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7950u;
label_1d7950:
    // 0x1d7950: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1d7950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d7954: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1d7954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d7958: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d795c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d7960:
    // 0x1d7960: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d7960u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d7964: 0x17c0ffa0  bnez        $fp, . + 4 + (-0x60 << 2)
    ctx->pc = 0x1D7964u;
    {
        const bool branch_taken_0x1d7964 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7964) {
            ctx->pc = 0x1D77E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d77e8;
        }
    }
    ctx->pc = 0x1D796Cu;
    // 0x1d796c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d7970: 0x8c770068  lw          $s7, 0x68($v1)
    ctx->pc = 0x1d7970u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1d7974: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x1d7974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x1d7978: 0xa6e30006  sh          $v1, 0x6($s7)
    ctx->pc = 0x1d7978u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d797c: 0xa6e00004  sh          $zero, 0x4($s7)
    ctx->pc = 0x1d797cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d7980: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7984: 0x0  nop
    ctx->pc = 0x1d7984u;
    // NOP
    // 0x1d7988: 0xe6e00010  swc1        $f0, 0x10($s7)
    ctx->pc = 0x1d7988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 16), bits); }
    // 0x1d798c: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x1d798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d7990: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d7990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d7994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d7998: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1d7998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d799c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d79a0: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d79a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d79a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d79a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d79ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d79acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d79b0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d79b4: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d79b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d79bc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d79c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d79c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d79c4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d79c8: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x1d79c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d79cc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d79d0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d79d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d79d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d79d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d79dc: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d79e0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1d79e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1d79e4: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1d79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x1d79e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1d79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d79ec: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d79ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d79f0: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1d79f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1d79f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d79f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d79f8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1d79f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1d79fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d79fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d7a00: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d7a00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7a04: 0x1460ff47  bnez        $v1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x1D7A04u;
    {
        const bool branch_taken_0x1d7a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a04) {
            ctx->pc = 0x1D7724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7724;
        }
    }
    ctx->pc = 0x1D7A0Cu;
    // 0x1d7a0c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d7a10: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x1d7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1d7a14: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1d7a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1d7a18: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7a1c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d7a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7a20: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1d7a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x1d7a24: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1d7a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d7a28: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1d7a28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1d7a2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d7a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d7a30: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d7a30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7a34: 0x1460ff3b  bnez        $v1, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x1D7A34u;
    {
        const bool branch_taken_0x1d7a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a34) {
            ctx->pc = 0x1D7724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7724;
        }
    }
    ctx->pc = 0x1D7A3Cu;
    // 0x1d7a3c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d7a3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d7a40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d7a40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d7a44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d7a44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d7a48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d7a48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d7a4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d7a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d7a50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d7a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7a54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7a64: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1d7a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d7a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7A70u;
}
