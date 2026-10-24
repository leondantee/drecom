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

// Function: entry_00154850
// Address: 0x154850 - 0x154a48
void entry_00154850_0x154850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154850_0x154850");
#endif

    ctx->pc = 0x154850u;

    // 0x154850: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x154850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x154854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154858: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x15485c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15485cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154864: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154868: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x15486c: 0x2466bd00  addiu       $a2, $v1, -0x4300
    ctx->pc = 0x15486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154870: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x154870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x154874: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x154874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x154878: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x154878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x15487c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15487cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154880: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154884: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154888: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15488c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15488cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154890: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154894: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154898: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15489c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x15489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1548a0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1548a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1548a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1548a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1548a8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1548a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1548ac: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1548acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1548b0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1548b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1548b4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1548b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1548b8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1548b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1548bc: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x1548bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1548c0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1548c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1548c4: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1548c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x1548c8: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x1548c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x1548cc: 0x3444c8c9  ori         $a0, $v0, 0xC8C9
    ctx->pc = 0x1548ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x1548d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1548d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1548d4: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1548d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1548d8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1548d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1548dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1548e0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1548e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1548e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1548e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1548e8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1548e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1548ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1548ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1548f0: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1548f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1548f4: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x1548f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
    // 0x1548f8: 0x3482c8c9  ori         $v0, $a0, 0xC8C9
    ctx->pc = 0x1548f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x1548fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1548fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154900: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154904: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154908: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15490c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15490cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154910: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x154910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x154914: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x154914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x154918: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15491c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x15491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x154920: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x154920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x154924: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154924u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154928: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x15492c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15492cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154934: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154938: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x15493c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x15493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154940: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154944: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x154948: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x15494c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15494cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154950: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x154950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154954: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x154954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x154958: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15495c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15495cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154960: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154964: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154968: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15496c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x15496cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x154970: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x154970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x154974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154978: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x15497c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x15497cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154980: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154984: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x154984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154988: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x15498c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154990: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x154994: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x154994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x154998: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x154998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x15499c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15499cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1549a0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1549a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1549a4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1549a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1549a8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1549a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1549ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1549acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1549b0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1549b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1549b4: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x1549b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1549b8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1549b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1549bc: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x1549bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x1549c0: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
    // 0x1549c4: 0x34a3c8c9  ori         $v1, $a1, 0xC8C9
    ctx->pc = 0x1549c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
    // 0x1549c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1549c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1549cc: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1549d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1549d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1549d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1549d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1549d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1549d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1549dc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1549dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1549e0: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x1549e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1549e4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1549e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1549e8: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x1549e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1549ec: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x1549ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x1549f0: 0x3443c8c9  ori         $v1, $v0, 0xC8C9
    ctx->pc = 0x1549f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x1549f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1549f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1549f8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1549f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1549fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1549fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154a00: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154a04: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154a08: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x154a0c: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x154a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x154a10: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x154a14: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x154a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x154a18: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x154a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x154a1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154a1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154a20: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154a24: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x154a28: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x154a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154a2c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x154a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x154a30: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154a34: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154a38: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x154a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x154a3c: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x154a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x154a40: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x154A40u;
    {
        const bool branch_taken_0x154a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a40) {
            ctx->pc = 0x154C38u;
            return;
        }
    }
    ctx->pc = 0x154A48u;
}
