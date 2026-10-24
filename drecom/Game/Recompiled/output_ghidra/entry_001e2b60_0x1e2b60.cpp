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

// Function: entry_001e2b60
// Address: 0x1e2b60 - 0x1e2e18
void entry_001e2b60_0x1e2b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2b60_0x1e2b60");
#endif

    switch (ctx->pc) {
        case 0x1e2d9cu: goto label_1e2d9c;
        default: break;
    }

    ctx->pc = 0x1e2b60u;

    // 0x1e2b60: 0x96050100  lhu         $a1, 0x100($s0)
    ctx->pc = 0x1e2b60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e2b64: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1e2b64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e2b68: 0x113840  sll         $a3, $s1, 1
    ctx->pc = 0x1e2b68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2b6c: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x1e2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1e2b70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e2b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2b74: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1e2b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e2b78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e2b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2b7c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e2b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e2b80: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1e2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2b84: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1e2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e2b88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e2b8c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1e2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e2b90: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e2b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2b94: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e2b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e2b98: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x1e2b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2b9c: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x1e2b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1e2ba0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e2ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e2ba4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1e2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e2ba8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1e2ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2bac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e2bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e2bb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2bb8: 0x0  nop
    ctx->pc = 0x1e2bb8u;
    // NOP
    // 0x1e2bbc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e2bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e2bc0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2bc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2bc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2bcc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2bd0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2bd4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e2bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e2bd8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2bdc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2be0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2be4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2be8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e2be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2bec: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e2becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e2bf0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2bf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2bf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2bfc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2c00: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e2c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c04: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e2c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e2c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2c10: 0x0  nop
    ctx->pc = 0x1e2c10u;
    // NOP
    // 0x1e2c14: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e2c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e2c18: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2c1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2c20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2c24: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2c28: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e2c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c2c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e2c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e2c30: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2c34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2c38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2c3c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2c40: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e2c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c44: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e2c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e2c48: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2c4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2c54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2c58: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e2c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c5c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e2c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e2c60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2c68: 0x0  nop
    ctx->pc = 0x1e2c68u;
    // NOP
    // 0x1e2c6c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e2c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e2c70: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e2c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e2c74: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1E2C74u;
    {
        const bool branch_taken_0x1e2c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c74) {
            ctx->pc = 0x1E2E58u;
            return;
        }
    }
    ctx->pc = 0x1E2C7Cu;
    // 0x1e2c7c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2c80: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e2c84: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e2c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e2c88: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e2c88u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e2c8c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2c90: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e2c94: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e2c98: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e2c9c: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e2c9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2ca0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2ca4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e2ca8: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e2cac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e2cb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2cb4: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1e2cb8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2cbc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e2cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e2cc0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1E2CC0u;
    {
        const bool branch_taken_0x1e2cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2cc0) {
            ctx->pc = 0x1E2E18u;
            return;
        }
    }
    ctx->pc = 0x1E2CC8u;
    // 0x1e2cc8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2ccc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2cd4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e2cd8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e2cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2cdc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e2cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e2ce0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2ce4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2ce8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2cec: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e2cf0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e2cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2cf4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e2cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e2cf8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2cfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2d00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2d04: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e2d08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e2d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2d0c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e2d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e2d10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2d18: 0x0  nop
    ctx->pc = 0x1e2d18u;
    // NOP
    // 0x1e2d1c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e2d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e2d20: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1e2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e2d24: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e2d28: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2d2c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2d30: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e2d34: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e2d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e2d38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e2d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2d3c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e2d3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e2d40: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e2d44: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1e2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2d48: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e2d4c: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e2d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2d50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2d54: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e2d58: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e2d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e2d5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e2d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2d60: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e2d60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e2d64: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e2d68: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1e2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2d6c: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e2d70: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e2d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2d74: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e2d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2d78: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e2d7c: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e2d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2d80: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e2d84: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x1e2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1e2d88: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e2d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e2d8c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e2d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e2d90: 0x27ab01a0  addiu       $t3, $sp, 0x1A0
    ctx->pc = 0x1e2d90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e2d94: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E2D94u;
    SET_GPR_U32(ctx, 31, 0x1E2D9Cu);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E2D94u, 0x1E2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D9Cu;
label_1e2d9c:
    // 0x1e2d9c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1e2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1e2da0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2da4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e2da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e2da8: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x1e2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1e2dac: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2db0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e2db4: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x1e2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e2db8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2dbc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e2dc0: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1e2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1e2dc4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2dc8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e2dcc: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x1e2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1e2dd0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2dd4: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e2dd8: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x1e2dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e2ddc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2de0: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e2de4: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1e2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1e2de8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2dec: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e2decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e2df0: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1e2df4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2df8: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e2dfc: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x1e2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e2e00: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2e04: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e2e08: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2e0c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e2e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e2e10: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e2e14: 0x0  nop
    ctx->pc = 0x1e2e14u;
    // NOP
    ctx->pc = 0x1e2e18u;
}
