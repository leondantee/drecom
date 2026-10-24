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

// Function: entry_001ea7a0
// Address: 0x1ea7a0 - 0x1ea830
void entry_001ea7a0_0x1ea7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea7a0_0x1ea7a0");
#endif

    ctx->pc = 0x1ea7a0u;

    // 0x1ea7a0: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x1ea7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x1ea7a4: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x1ea7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ea7a8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1ea7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1ea7ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ea7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ea7b0: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x1ea7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x1ea7b4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x1ea7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x1ea7b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ea7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea7bc: 0x0  nop
    ctx->pc = 0x1ea7bcu;
    // NOP
    // 0x1ea7c0: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x1ea7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x1ea7c4: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x1ea7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x1ea7c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ea7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ea7cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea7d0: 0x0  nop
    ctx->pc = 0x1ea7d0u;
    // NOP
    // 0x1ea7d4: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1ea7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1ea7d8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1ea7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1ea7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea7e0: 0x0  nop
    ctx->pc = 0x1ea7e0u;
    // NOP
    // 0x1ea7e4: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x1ea7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x1ea7e8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea7ec: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1ea7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ea7f0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1ea7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1ea7f4: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x1ea7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x1ea7f8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1ea7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea7fc: 0x24c700d0  addiu       $a3, $a2, 0xD0
    ctx->pc = 0x1ea7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x1ea800: 0xae47000c  sw          $a3, 0xC($s2)
    ctx->pc = 0x1ea800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 7));
    // 0x1ea804: 0x3c08c348  lui         $t0, 0xC348
    ctx->pc = 0x1ea804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49992 << 16));
    // 0x1ea808: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1ea808u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea80c: 0x0  nop
    ctx->pc = 0x1ea80cu;
    // NOP
    // 0x1ea810: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x1ea810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1ea814: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ea814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ea818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea81c: 0x0  nop
    ctx->pc = 0x1ea81cu;
    // NOP
    // 0x1ea820: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x1ea820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x1ea824: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea828: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x1ea828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x1ea82c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ea82cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1ea830u;
}
