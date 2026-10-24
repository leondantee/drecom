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

// Function: entry_00231358
// Address: 0x231358 - 0x2313c8
void entry_00231358_0x231358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231358_0x231358");
#endif

    ctx->pc = 0x231358u;

    // 0x231358: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x231358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23135c: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x23135cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231360: 0xa0c40029  sb          $a0, 0x29($a2)
    ctx->pc = 0x231360u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x231364: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x231368: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x231368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23136c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23136cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231370: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231374: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x231374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x231378: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x231378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23137c: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x23137cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x231380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231384: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231388: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x231388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23138c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231390: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x231390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x231394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231398: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23139c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x23139cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2313a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2313a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2313a4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2313a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2313a8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2313a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2313ac: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2313acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2313b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2313b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2313b4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2313b8: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2313b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x2313bc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2313bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2313c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2313c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2313c4: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x2313c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2313c8u;
}
