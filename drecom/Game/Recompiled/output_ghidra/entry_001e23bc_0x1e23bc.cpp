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

// Function: entry_001e23bc
// Address: 0x1e23bc - 0x1e25d0
void entry_001e23bc_0x1e23bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e23bc_0x1e23bc");
#endif

    ctx->pc = 0x1e23bcu;

    // 0x1e23bc: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e23bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e23c0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e23c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e23c4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e23c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e23cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e23d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e23d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e23d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e23d8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e23d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e23dc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e23e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e23e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e23e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e23ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e23ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e23f0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e23f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e23f4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e23f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e23fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2400: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2404: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2408: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e2408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e240c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e240cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2410: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2414: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2418: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e241c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2420: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e2420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e2424: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2428: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e242c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e242cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2430: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2434: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2438: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e2438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e243c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e243cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2440: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2444: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2448: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e244c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2450: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e2450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e2454: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2458: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e245c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e245cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2460: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2464: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e2464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2468: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e2468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e246c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e246cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2470: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2474: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2478: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e247c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2480: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e2480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e2484: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2488: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e248c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e248cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2490: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2494: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e2494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2498: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e2498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e249c: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e249cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e24a0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1E24A0u;
    {
        const bool branch_taken_0x1e24a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e24a0) {
            ctx->pc = 0x1E2688u;
            return;
        }
    }
    ctx->pc = 0x1E24A8u;
    // 0x1e24a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e24ac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e24b0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e24b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e24b4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e24b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e24b8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e24bc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e24c0: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e24c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e24c8: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e24c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e24cc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e24d0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e24d4: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e24d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e24dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e24e0: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x1e24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x1e24e4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e24e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e24e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e24ec: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1E24ECu;
    {
        const bool branch_taken_0x1e24ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e24ec) {
            ctx->pc = 0x1E2648u;
            return;
        }
    }
    ctx->pc = 0x1E24F4u;
    // 0x1e24f4: 0x17c00036  bnez        $fp, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E24F4u;
    {
        const bool branch_taken_0x1e24f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e24f4) {
            ctx->pc = 0x1E25D0u;
            return;
        }
    }
    ctx->pc = 0x1E24FCu;
    // 0x1e24fc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2500: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2508: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e250c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2510: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e2510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e2514: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2518: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e251c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e251cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2520: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e2524: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e2524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2528: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e2528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e252c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e252cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2530: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2538: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e253c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2540: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e2540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e2544: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e254c: 0x0  nop
    ctx->pc = 0x1e254cu;
    // NOP
    // 0x1e2550: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e2550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e2554: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x1e2554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1e2558: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e2558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e255c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e2560: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2564: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e2564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e2568: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e2568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e256c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e256cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2570: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e2570u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e2574: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e2574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e2578: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x1e2578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e257c: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e2580: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e2580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2584: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2588: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e2588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e258c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e258cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e2590: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e2590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2594: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e2594u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e2598: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e2598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e259c: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x1e259cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e25a0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e25a4: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e25a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e25a8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e25ac: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x1e25acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x1e25b0: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e25b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e25b4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e25b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e25b8: 0x8fa50278  lw          $a1, 0x278($sp)
    ctx->pc = 0x1e25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1e25bc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e25bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e25c0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e25c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e25c4: 0x27ab0220  addiu       $t3, $sp, 0x220
    ctx->pc = 0x1e25c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1e25c8: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E25C8u;
    SET_GPR_U32(ctx, 31, 0x1E25D0u);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E25C8u, 0x1E25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25D0u;
}
