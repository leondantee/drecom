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

// Function: entry_00326df4
// Address: 0x326df4 - 0x326f58
void entry_00326df4_0x326df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326df4_0x326df4");
#endif

    ctx->pc = 0x326df4u;

    // 0x326df4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x326df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326df8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326dfc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e04: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326e08: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e0c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326e10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e18: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326e1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326e20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326e20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326e24: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326e28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e30: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326e34: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x326e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e38: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326e3c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326e40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e48: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326e4c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e50: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326e54: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326e58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e60: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326e64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326e68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326e6c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326e70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326e74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e7c: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326e80: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e84: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326e88: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326e8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e94: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326e98: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e9c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326ea0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ea4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326eac: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326eb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326eb8: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326ebc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ec0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ec4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ec8: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326ecc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326ed0: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326ed4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ed8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326edc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ee0: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326ee4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326ee8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326eec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ef0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ef4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ef8: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326efc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326f04: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326f08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326f0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326f10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326f14: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326f18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x326f18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x326f1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326f20: 0x8c720ac4  lw          $s2, 0xAC4($v1)
    ctx->pc = 0x326f20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2756)));
    // 0x326f24: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x326f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x326f28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326f2c: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x326f2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x326f30: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x326F30u;
    {
        const bool branch_taken_0x326f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326f30) {
            ctx->pc = 0x326F70u;
            return;
        }
    }
    ctx->pc = 0x326F38u;
    // 0x326f38: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x326f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x326f3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326f40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x326f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x326f44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x326F44u;
    {
        const bool branch_taken_0x326f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f44) {
            ctx->pc = 0x326F58u;
            return;
        }
    }
    ctx->pc = 0x326F4Cu;
    // 0x326f4c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x326f4cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x326f50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x326F50u;
    {
        const bool branch_taken_0x326f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f50) {
            ctx->pc = 0x326F70u;
            return;
        }
    }
    ctx->pc = 0x326F58u;
}
