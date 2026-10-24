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

// Function: entry_003269c4
// Address: 0x3269c4 - 0x326b28
void entry_003269c4_0x3269c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003269c4_0x3269c4");
#endif

    ctx->pc = 0x3269c4u;

    // 0x3269c4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3269c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3269c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3269c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3269cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3269ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3269d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3269d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3269d4: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x3269d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x3269d8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3269d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3269dc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3269dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3269e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3269e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3269e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3269e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3269e8: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x3269e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x3269ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3269ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3269f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3269f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3269f4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3269f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3269f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3269f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3269fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3269fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a00: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326a04: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326a08: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326a0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a18: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326a1c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326a20: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326a24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a30: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326a34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326a38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326a3c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326a40: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a4c: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326a50: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x326a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326a54: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326a58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a64: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326a68: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326a6c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326a70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a7c: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326a80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326a88: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326a8c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a98: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326a9c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326aa0: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326aa4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326aa8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326aac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ab0: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326ab4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326ab8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326abc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ac0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ac8: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326acc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326ad4: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326ad8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326adc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ae0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ae4: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326ae8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x326ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x326aec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326af0: 0x8c720ac4  lw          $s2, 0xAC4($v1)
    ctx->pc = 0x326af0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2756)));
    // 0x326af4: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x326af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x326af8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326afc: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x326afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x326b00: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x326B00u;
    {
        const bool branch_taken_0x326b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326b00) {
            ctx->pc = 0x326B40u;
            return;
        }
    }
    ctx->pc = 0x326B08u;
    // 0x326b08: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x326b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x326b0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326b10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x326b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x326b14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x326B14u;
    {
        const bool branch_taken_0x326b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326b14) {
            ctx->pc = 0x326B28u;
            return;
        }
    }
    ctx->pc = 0x326B1Cu;
    // 0x326b1c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x326b1cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x326b20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x326B20u;
    {
        const bool branch_taken_0x326b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326b20) {
            ctx->pc = 0x326B40u;
            return;
        }
    }
    ctx->pc = 0x326B28u;
}
