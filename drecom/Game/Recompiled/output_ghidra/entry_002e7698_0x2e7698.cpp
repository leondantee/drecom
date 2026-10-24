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

// Function: entry_002e7698
// Address: 0x2e7698 - 0x2e7718
void entry_002e7698_0x2e7698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7698_0x2e7698");
#endif

    ctx->pc = 0x2e7698u;

    // 0x2e7698: 0x1a20fff0  blez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E7698u;
    {
        const bool branch_taken_0x2e7698 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2e7698) {
            ctx->pc = 0x2E765Cu;
            return;
        }
    }
    ctx->pc = 0x2E76A0u;
    // 0x2e76a0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e76a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e76a8: 0x24700ab0  addiu       $s0, $v1, 0xAB0
    ctx->pc = 0x2e76a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2736));
    // 0x2e76ac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e76acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e76b0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e76b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e76b4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x2e76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e76b8: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2e76b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2e76bc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e76bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e76c0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e76c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e76c4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e76c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e76cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e76ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e76d0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2e76d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2e76d4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e76d8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e76d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e76dc: 0x24700990  addiu       $s0, $v1, 0x990
    ctx->pc = 0x2e76dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x2e76e0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e76e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e76e4: 0x96440140  lhu         $a0, 0x140($s2)
    ctx->pc = 0x2e76e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x2e76e8: 0x34850010  ori         $a1, $a0, 0x10
    ctx->pc = 0x2e76e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x2e76ec: 0xa6450140  sh          $a1, 0x140($s2)
    ctx->pc = 0x2e76ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 320), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e76f0: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x2e76f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x2e76f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2e76f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e76f8: 0x0  nop
    ctx->pc = 0x2e76f8u;
    // NOP
    // 0x2e76fc: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x2e76fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x2e7700: 0x3c07437a  lui         $a3, 0x437A
    ctx->pc = 0x2e7700u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17274 << 16));
    // 0x2e7704: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2e7704u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7708: 0x0  nop
    ctx->pc = 0x2e7708u;
    // NOP
    // 0x2e770c: 0xe680009c  swc1        $f0, 0x9C($s4)
    ctx->pc = 0x2e770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 156), bits); }
    // 0x2e7710: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2E7710u;
    {
        const bool branch_taken_0x2e7710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7710) {
            ctx->pc = 0x2E785Cu;
            return;
        }
    }
    ctx->pc = 0x2E7718u;
}
