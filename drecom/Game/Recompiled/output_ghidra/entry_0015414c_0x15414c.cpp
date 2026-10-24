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

// Function: entry_0015414c
// Address: 0x15414c - 0x154344
void entry_0015414c_0x15414c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015414c_0x15414c");
#endif

    ctx->pc = 0x15414cu;

    // 0x15414c: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x15414cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x154150: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154150u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154154: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154158: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15415c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154160: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154164: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154168: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x15416c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154170: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x154170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x154174: 0x3c054366  lui         $a1, 0x4366
    ctx->pc = 0x154174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17254 << 16));
    // 0x154178: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x154178u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15417c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15417cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154180: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154184: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154188: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x154188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15418c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15418cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154190: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154194: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154198: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x154198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x15419c: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x15419cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
    // 0x1541a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1541a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1541a4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1541a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1541a8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1541a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1541ac: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1541acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1541b0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1541b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1541b4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1541b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1541b8: 0x2484bd00  addiu       $a0, $a0, -0x4300
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1541bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1541bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1541c0: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1541c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x1541c4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1541c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1541c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1541c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1541cc: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x1541ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1541d0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1541d4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1541d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1541d8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1541dc: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1541dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1541e0: 0x24c4bd00  addiu       $a0, $a2, -0x4300
    ctx->pc = 0x1541e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x1541e4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1541e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1541e8: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x1541e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x1541ec: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x1541ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x1541f0: 0x3482e6e7  ori         $v0, $a0, 0xE6E7
    ctx->pc = 0x1541f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
    // 0x1541f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1541f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1541f8: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x1541f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1541fc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1541fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x154200: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x154200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x154204: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154208: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x15420c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154210: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x154210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154214: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x154214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x154218: 0x3c033f10  lui         $v1, 0x3F10
    ctx->pc = 0x154218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16144 << 16));
    // 0x15421c: 0x34639091  ori         $v1, $v1, 0x9091
    ctx->pc = 0x15421cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37009);
    // 0x154220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154224: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154228: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15422c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154230: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x154234: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x154234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x154238: 0x24c5bd00  addiu       $a1, $a2, -0x4300
    ctx->pc = 0x154238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x15423c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15423cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x154240: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x154244: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x154244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x154248: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154248u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15424c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x15424cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154250: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154258: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15425c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15425cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154260: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154264: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x154264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154268: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x154268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x15426c: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x15426cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x154270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154274: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154278: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x154278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15427c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x15427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154280: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x154280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x154284: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x154288: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x154288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x15428c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x15428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x154290: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x154290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x154294: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x154294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x154298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15429c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x15429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1542a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1542a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1542a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1542a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1542a8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1542a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1542ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1542acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1542b0: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1542b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1542b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1542b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1542b8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1542b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1542bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1542bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1542c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1542c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1542c4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1542c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1542c8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1542c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1542cc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1542ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1542d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1542d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1542d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1542d8: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x1542d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1542dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1542dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1542e0: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x1542e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x1542e4: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x1542e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x1542e8: 0x3482e6e7  ori         $v0, $a0, 0xE6E7
    ctx->pc = 0x1542e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
    // 0x1542ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1542ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1542f0: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1542f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1542f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1542f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1542f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1542f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1542fc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1542fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154300: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154304: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154308: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15430c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x15430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x154310: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x154310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
    // 0x154314: 0x34449091  ori         $a0, $v0, 0x9091
    ctx->pc = 0x154314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
    // 0x154318: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154318u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15431c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x15431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154320: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154328: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15432c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15432cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154330: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154334: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154338: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x15433c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x15433Cu;
    {
        const bool branch_taken_0x15433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15433c) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x154344u;
}
