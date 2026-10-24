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

// Function: entry_001d7724
// Address: 0x1d7724 - 0x1d77e8
void entry_001d7724_0x1d7724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7724_0x1d7724");
#endif

    ctx->pc = 0x1d7724u;

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
    ctx->pc = 0x1d77e8u;
}
