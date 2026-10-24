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

// Function: entry_002e265c
// Address: 0x2e265c - 0x2e2798
void entry_002e265c_0x2e265c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e265c_0x2e265c");
#endif

    ctx->pc = 0x2e265cu;

    // 0x2e265c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2e265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e2660: 0xa60200c8  sh          $v0, 0xC8($s0)
    ctx->pc = 0x2e2660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e2664: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e2664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e2668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e266c: 0x0  nop
    ctx->pc = 0x2e266cu;
    // NOP
    // 0x2e2670: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e2670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x2e2674: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2e2674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2e2678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e267c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2680: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e2680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e2684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2688: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e268c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e268cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e2690: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e2690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e2694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2698: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2e2698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2e269c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2e269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2e26a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e26a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e26a4: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e26a8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e26ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e26acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e26b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e26b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e26b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e26b8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e26bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e26c0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2e26c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2e26c4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e26c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e26c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e26cc: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e26d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e26d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e26d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e26dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e26e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e26e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e26e8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2e26e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2e26ec: 0x3c023ec8  lui         $v0, 0x3EC8
    ctx->pc = 0x2e26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16072 << 16));
    // 0x2e26f0: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x2e26f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x2e26f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e26f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e26f8: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e26fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e2700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2704: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e2708: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e2708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e270c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e2710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2714: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2e2714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2e2718: 0x3c023ec8  lui         $v0, 0x3EC8
    ctx->pc = 0x2e2718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16072 << 16));
    // 0x2e271c: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x2e271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x2e2720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2724: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e2724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2728: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e2728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e272c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2730: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e2734: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e2734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e2738: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e2738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e273c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2740: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2e2740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2e2744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e2744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e274c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2750: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e2750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e2754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2758: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e275c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e275cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e2760: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e2760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e2764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2768: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x2e2768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x2e276c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2770: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e2770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e2774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2778: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e277c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e2780: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e2780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e2784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2788: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x2e2788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x2e278c: 0x920200dd  lbu         $v0, 0xDD($s0)
    ctx->pc = 0x2e278cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 221)));
    // 0x2e2790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e2790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e2794: 0xa20200dd  sb          $v0, 0xDD($s0)
    ctx->pc = 0x2e2794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 221), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e2798u;
}
