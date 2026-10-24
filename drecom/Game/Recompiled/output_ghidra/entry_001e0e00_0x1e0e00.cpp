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

// Function: entry_001e0e00
// Address: 0x1e0e00 - 0x1e0fe0
void entry_001e0e00_0x1e0e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0e00_0x1e0e00");
#endif

    switch (ctx->pc) {
        case 0x1e0f70u: goto label_1e0f70;
        default: break;
    }

    ctx->pc = 0x1e0e00u;

    // 0x1e0e00: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e0e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e0e04: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e0e04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e0e08: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e14: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e1c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e0e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e0e20: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e34: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e0e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e0e38: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e44: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e4c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1e0e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e0e50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0e58: 0x0  nop
    ctx->pc = 0x1e0e58u;
    // NOP
    // 0x1e0e5c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e0e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1e0e60: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e6c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e70: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e0e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e74: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e0e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e0e78: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e84: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e88: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e0e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e8c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e0e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e0e90: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0ea0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e0ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ea4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e0ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e0ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0eb0: 0x0  nop
    ctx->pc = 0x1e0eb0u;
    // NOP
    // 0x1e0eb4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e0eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e0eb8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0ebc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0ec0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0ec4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0ec8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e0ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ecc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e0eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e0ed0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0ed4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0ed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0edc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0ee0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e0ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ee4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e0ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e0ee8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0eec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0ef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0ef4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0ef8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e0ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0efc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e0efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e0f00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0f08: 0x0  nop
    ctx->pc = 0x1e0f08u;
    // NOP
    // 0x1e0f0c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e0f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e0f10: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e0f14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e0f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e0f18: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E0F18u;
    {
        const bool branch_taken_0x1e0f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f18) {
            ctx->pc = 0x1E0FE0u;
            return;
        }
    }
    ctx->pc = 0x1E0F20u;
    // 0x1e0f20: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e0f24: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x1e0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e0f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0f2c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e0f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e0f30: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e0f30u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0f34: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e0f38: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e0f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e0f3c: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e0f40: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e0f44: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e0f44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0f48: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e0f4c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e0f50: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e0f54: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e0f58: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1e0f58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0f5c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e0f5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e0f60: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e0f60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e0f64: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e0f64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e0f68: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E0F68u;
    SET_GPR_U32(ctx, 31, 0x1E0F70u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E0F68u, 0x1E0F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F70u;
label_1e0f70:
    // 0x1e0f70: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e0f74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e0f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e0f78: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e0f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e0f7c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e0f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0f80: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x1e0f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0f84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e0f84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0f88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e0f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0f90: 0x0  nop
    ctx->pc = 0x1e0f90u;
    // NOP
    // 0x1e0f94: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0f94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e0f98: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e0f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e0f9c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e0f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0fa0: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x1e0fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0fa4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e0fa4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0fa8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e0fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0fb0: 0x0  nop
    ctx->pc = 0x1e0fb0u;
    // NOP
    // 0x1e0fb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0fb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e0fb8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e0fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e0fbc: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e0fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0fc0: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x1e0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0fc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e0fc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0fc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e0fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0fd0: 0x0  nop
    ctx->pc = 0x1e0fd0u;
    // NOP
    // 0x1e0fd4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0fd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e0fd8: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e0fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e0fdc: 0x0  nop
    ctx->pc = 0x1e0fdcu;
    // NOP
    ctx->pc = 0x1e0fe0u;
}
