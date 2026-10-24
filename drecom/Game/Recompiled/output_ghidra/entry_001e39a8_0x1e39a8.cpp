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

// Function: entry_001e39a8
// Address: 0x1e39a8 - 0x1e3c00
void entry_001e39a8_0x1e39a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e39a8_0x1e39a8");
#endif

    switch (ctx->pc) {
        case 0x1e3bf0u: goto label_1e3bf0;
        default: break;
    }

    ctx->pc = 0x1e39a8u;

    // 0x1e39a8: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e39a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e39ac: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e39acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e39b0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e39b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e39b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e39bc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e39c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e39c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e39c4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e39c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e39c8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e39cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e39d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e39d4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e39d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e39d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e39dc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e39dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e39e0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e39e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e39e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e39ec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e39f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e39f4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e39f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e39f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e39fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e39fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3a00: 0x0  nop
    ctx->pc = 0x1e3a00u;
    // NOP
    // 0x1e3a04: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e3a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e3a08: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a14: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a18: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e3a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a1c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e3a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e3a20: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a30: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a34: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e3a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e3a38: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a44: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a48: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a4c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e3a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e3a50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3a58: 0x0  nop
    ctx->pc = 0x1e3a58u;
    // NOP
    // 0x1e3a5c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e3a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e3a60: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a70: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a74: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e3a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e3a78: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a88: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e3a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a8c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e3a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e3a90: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a9c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3aa0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3aa4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e3aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e3aa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3ab0: 0x0  nop
    ctx->pc = 0x1e3ab0u;
    // NOP
    // 0x1e3ab4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e3ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e3ab8: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e3ab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e3abc: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1E3ABCu;
    {
        const bool branch_taken_0x1e3abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3abc) {
            ctx->pc = 0x1E3CA4u;
            return;
        }
    }
    ctx->pc = 0x1E3AC4u;
    // 0x1e3ac4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3ac8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3acc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3ad0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e3ad4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e3ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3ad8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e3ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e3adc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3ae0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3ae4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3ae8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e3aec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3af0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e3af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e3af4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3af8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3afc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3b00: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e3b04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e3b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3b08: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e3b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e3b0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3b14: 0x0  nop
    ctx->pc = 0x1e3b14u;
    // NOP
    // 0x1e3b18: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e3b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e3b1c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e3b20: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e3b24: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e3b28: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e3b28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e3b2c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3b30: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e3b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e3b34: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e3b38: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3b3c: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e3b3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3b40: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3b44: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e3b48: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e3b4c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3b50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3b54: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1e3b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1e3b58: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3b5c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e3b60: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E3B60u;
    {
        const bool branch_taken_0x1e3b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b60) {
            ctx->pc = 0x1E3C78u;
            return;
        }
    }
    ctx->pc = 0x1E3B68u;
    // 0x1e3b68: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x1e3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e3b6c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E3B6Cu;
    {
        const bool branch_taken_0x1e3b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b6c) {
            ctx->pc = 0x1E3C00u;
            return;
        }
    }
    ctx->pc = 0x1E3B74u;
    // 0x1e3b74: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1e3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e3b78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e3b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e3b7c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3b80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e3b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e3b84: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e3b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e3b88: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e3b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e3b8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e3b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e3b90: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e3b90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e3b94: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e3b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e3b98: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3b9c: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e3ba0: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e3ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e3ba4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e3ba8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e3bac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e3bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e3bb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e3bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e3bb4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e3bb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e3bb8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e3bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e3bbc: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3bc0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e3bc4: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e3bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e3bc8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3bcc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1e3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1e3bd0: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e3bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e3bd4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e3bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e3bd8: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x1e3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e3bdc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e3bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3be0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e3be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e3be4: 0x27ab0160  addiu       $t3, $sp, 0x160
    ctx->pc = 0x1e3be4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e3be8: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E3BE8u;
    SET_GPR_U32(ctx, 31, 0x1E3BF0u);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E3BE8u, 0x1E3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BF0u;
label_1e3bf0:
    // 0x1e3bf0: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x1e3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e3bf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e3bf8: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x1e3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x1e3bfc: 0x0  nop
    ctx->pc = 0x1e3bfcu;
    // NOP
    ctx->pc = 0x1e3c00u;
}
