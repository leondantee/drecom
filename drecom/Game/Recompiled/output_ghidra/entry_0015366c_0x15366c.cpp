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

// Function: entry_0015366c
// Address: 0x15366c - 0x153864
void entry_0015366c_0x15366c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015366c_0x15366c");
#endif

    ctx->pc = 0x15366cu;

    // 0x15366c: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x15366cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x153670: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153670u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153674: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153678: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15367c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x15367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153680: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x153680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153684: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153688: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x15368c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x15368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x153690: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x153694: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x153694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x153698: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153698u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15369c: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x15369cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1536a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1536a4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1536a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1536a8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1536ac: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1536acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1536b0: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1536b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1536b4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1536b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1536b8: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x1536b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x1536bc: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x1536c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1536c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1536c4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1536c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1536c8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1536c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1536cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1536ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1536d0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1536d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1536d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1536d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1536d8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1536d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1536dc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1536dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1536e0: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x1536e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x1536e4: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x1536e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
    // 0x1536e8: 0x34a3c8c9  ori         $v1, $a1, 0xC8C9
    ctx->pc = 0x1536e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
    // 0x1536ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1536ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1536f0: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1536f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1536f4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1536f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1536f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1536f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1536fc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1536fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153700: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153704: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153708: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15370c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x15370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x153710: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x153710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
    // 0x153714: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x153714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x153718: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153718u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15371c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15371cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153720: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153724: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x153724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153728: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15372c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15372cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153730: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153734: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x153734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153738: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x153738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x15373c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15373cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x153740: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153744: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153748: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15374c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x153750: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153754: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153758: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x15375c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15375cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153760: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x153760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x153764: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x153764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x153768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15376c: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x15376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153770: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153774: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153778: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15377c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15377cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153780: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153784: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153788: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x15378c: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x15378cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x153790: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153790u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153794: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153798: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15379c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1537a0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1537a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1537a4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1537a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1537a8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1537a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1537ac: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1537acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1537b0: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1537b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x1537b4: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1537b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1537b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1537b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1537bc: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x1537bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1537c0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1537c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1537c4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1537c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1537c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1537c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1537cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1537ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1537d0: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x1537d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1537d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1537d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1537d8: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1537d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x1537dc: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x1537dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
    // 0x1537e0: 0x34a4c8c9  ori         $a0, $a1, 0xC8C9
    ctx->pc = 0x1537e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
    // 0x1537e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1537e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1537e8: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1537e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1537ec: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1537ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1537f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1537f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1537f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1537f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1537f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1537f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1537fc: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1537fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153800: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x153800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x153804: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x153804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x153808: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x153808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
    // 0x15380c: 0x3483c8c9  ori         $v1, $a0, 0xC8C9
    ctx->pc = 0x15380cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x153810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153814: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153818: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15381c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153820: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153824: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153828: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x15382c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x15382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153830: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x153830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x153834: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x153834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x153838: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x153838u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15383c: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x15383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153840: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153844: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153848: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15384c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x15384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x153850: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x153850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x153854: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x153854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153858: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x153858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x15385c: 0x10000302  b           . + 4 + (0x302 << 2)
    ctx->pc = 0x15385Cu;
    {
        const bool branch_taken_0x15385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15385c) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x153864u;
}
