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

// Function: entry_00153864
// Address: 0x153864 - 0x153a5c
void entry_00153864_0x153864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153864_0x153864");
#endif

    ctx->pc = 0x153864u;

    // 0x153864: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x153864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x153868: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153868u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15386c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15386cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153870: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153874: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153878: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x153878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15387c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x15387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x153880: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x153880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x153884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153888: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x153888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x15388c: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x153890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153894: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153898: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15389c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1538a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1538a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1538a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1538a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1538a8: 0x2466bd00  addiu       $a2, $v1, -0x4300
    ctx->pc = 0x1538a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1538ac: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1538acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1538b0: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x1538b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x1538b4: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x1538b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
    // 0x1538b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1538b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1538bc: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1538bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1538c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1538c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1538c4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1538c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1538c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1538c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1538cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1538ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1538d0: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1538d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1538d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1538d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1538d8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1538d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1538dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1538dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1538e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1538e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1538e4: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1538e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1538e8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1538e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1538ec: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1538ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1538f0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1538f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1538f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1538f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1538f8: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x1538f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1538fc: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1538fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153900: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x153900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x153904: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x153904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x153908: 0x3444e6e7  ori         $a0, $v0, 0xE6E7
    ctx->pc = 0x153908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59111);
    // 0x15390c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15390cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153910: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153914: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153918: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15391c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x15391cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153920: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153924: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153928: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15392c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x15392cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x153930: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x153930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
    // 0x153934: 0x34829091  ori         $v0, $a0, 0x9091
    ctx->pc = 0x153934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
    // 0x153938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15393c: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x15393cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153940: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153944: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x153944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153948: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15394c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x15394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x153950: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x153950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x153954: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153958: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x153958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x15395c: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x15395cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x153960: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153960u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153964: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153968: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15396c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153970: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153974: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153978: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x15397c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x15397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x153980: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x153984: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x153984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
    // 0x153988: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153988u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15398c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x15398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153990: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x153990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x153994: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153998: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x153998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15399c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15399cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1539a0: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1539a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1539a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1539a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1539a8: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1539a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1539ac: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x1539acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
    // 0x1539b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1539b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1539b4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1539b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1539b8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1539b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1539bc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1539bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1539c0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1539c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1539c4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1539c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1539c8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1539c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1539cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1539ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1539d0: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1539d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1539d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1539d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1539d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1539d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1539dc: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1539dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1539e0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1539e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1539e4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1539e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1539e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1539e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1539ec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1539ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1539f0: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x1539f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1539f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1539f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1539f8: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x1539f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1539fc: 0x3c053f66  lui         $a1, 0x3F66
    ctx->pc = 0x1539fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16230 << 16));
    // 0x153a00: 0x34a3e6e7  ori         $v1, $a1, 0xE6E7
    ctx->pc = 0x153a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59111);
    // 0x153a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a08: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153a0c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153a10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x153a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153a14: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153a18: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153a1c: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153a20: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x153a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153a24: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x153a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x153a28: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x153a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
    // 0x153a2c: 0x34439091  ori         $v1, $v0, 0x9091
    ctx->pc = 0x153a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
    // 0x153a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a34: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153a38: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153a3c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153a40: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153a44: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153a48: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x153a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153a4c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x153a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x153a50: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x153a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x153a54: 0x10000284  b           . + 4 + (0x284 << 2)
    ctx->pc = 0x153A54u;
    {
        const bool branch_taken_0x153a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153a54) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x153A5Cu;
}
