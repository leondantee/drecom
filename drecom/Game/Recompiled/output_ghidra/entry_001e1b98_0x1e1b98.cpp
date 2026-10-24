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

// Function: entry_001e1b98
// Address: 0x1e1b98 - 0x1e1e48
void entry_001e1b98_0x1e1b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1b98_0x1e1b98");
#endif

    switch (ctx->pc) {
        case 0x1e1dd0u: goto label_1e1dd0;
        default: break;
    }

    ctx->pc = 0x1e1b98u;

    // 0x1e1b98: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e1b98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e1b9c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e1b9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e1ba0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1ba4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1ba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1bac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1bb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1bb4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e1bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e1bb8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1bbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1bc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1bc4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1bc8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e1bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1bcc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e1bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e1bd0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1bd4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1bd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1bdc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1be0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e1be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1be4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e1be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e1be8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1bf0: 0x0  nop
    ctx->pc = 0x1e1bf0u;
    // NOP
    // 0x1e1bf4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e1bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e1bf8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1bfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c04: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e1c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c0c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e1c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e1c10: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c1c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c20: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e1c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c24: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e1c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e1c28: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c34: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c38: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e1c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c3c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e1c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e1c40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1c48: 0x0  nop
    ctx->pc = 0x1e1c48u;
    // NOP
    // 0x1e1c4c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e1c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e1c50: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c5c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c60: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e1c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c64: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e1c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e1c68: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c74: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c78: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e1c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c7c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e1c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e1c80: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c8c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c90: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e1c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c94: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e1c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e1c98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ca0: 0x0  nop
    ctx->pc = 0x1e1ca0u;
    // NOP
    // 0x1e1ca4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e1ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e1ca8: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e1ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e1cac: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1E1CACu;
    {
        const bool branch_taken_0x1e1cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1cac) {
            ctx->pc = 0x1E1E74u;
            return;
        }
    }
    ctx->pc = 0x1E1CB4u;
    // 0x1e1cb4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1cb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1cc0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e1cc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e1cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1cc8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e1cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e1ccc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1cd0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1cd8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e1cdc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e1cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1ce0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e1ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e1ce4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1ce8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1cec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1cf0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e1cf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e1cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1cf8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e1cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e1cfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1d04: 0x0  nop
    ctx->pc = 0x1e1d04u;
    // NOP
    // 0x1e1d08: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e1d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e1d0c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1d10: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e1d14: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e1d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e1d18: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e1d18u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e1d1c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1d20: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e1d24: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e1d28: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e1d2c: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e1d2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1d30: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1d34: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e1d38: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e1d3c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e1d40: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1e1d40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1d44: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1d48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e1d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e1d4c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E1D4Cu;
    {
        const bool branch_taken_0x1e1d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d4c) {
            ctx->pc = 0x1E1E48u;
            return;
        }
    }
    ctx->pc = 0x1E1D54u;
    // 0x1e1d54: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x1e1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1e1d58: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e1d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e1d5c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1d60: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1d64: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e1d68: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e1d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e1d6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e1d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1d70: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e1d70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e1d74: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e1d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e1d78: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x1e1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1d7c: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e1d80: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e1d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1d84: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1d88: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e1d8c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e1d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e1d90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e1d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1d94: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e1d94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e1d98: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e1d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e1d9c: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x1e1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1da0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e1da4: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e1da4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1da8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1dac: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x1e1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1e1db0: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e1db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1db4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e1db8: 0x8fa50278  lw          $a1, 0x278($sp)
    ctx->pc = 0x1e1db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1e1dbc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e1dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e1dc0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e1dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e1dc4: 0x27ab0220  addiu       $t3, $sp, 0x220
    ctx->pc = 0x1e1dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1e1dc8: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E1DC8u;
    SET_GPR_U32(ctx, 31, 0x1E1DD0u);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E1DC8u, 0x1E1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DD0u;
label_1e1dd0:
    // 0x1e1dd0: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e1dd4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1dd8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e1dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e1ddc: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e1de0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1de4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e1de8: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e1dec: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1df0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e1df4: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e1df8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1dfc: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e1e00: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e1e04: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e08: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e1e0c: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e1e10: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e14: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e1e18: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e1e1c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e20: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e1e24: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e1e28: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e2c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e1e30: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e1e34: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e38: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e1e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e1e3c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1e40: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e1e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e1e44: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    ctx->pc = 0x1e1e48u;
}
