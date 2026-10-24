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

// Function: entry_00233bf0
// Address: 0x233bf0 - 0x233dd4
void entry_00233bf0_0x233bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233bf0_0x233bf0");
#endif

    ctx->pc = 0x233bf0u;

    // 0x233bf0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x233bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233bf4: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x233bf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x233bf8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x233bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x233bfc: 0x30850002  andi        $a1, $a0, 0x2
    ctx->pc = 0x233bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x233c00: 0x10a00074  beqz        $a1, . + 4 + (0x74 << 2)
    ctx->pc = 0x233C00u;
    {
        const bool branch_taken_0x233c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x233c00) {
            ctx->pc = 0x233DD4u;
            return;
        }
    }
    ctx->pc = 0x233C08u;
    // 0x233c08: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x233c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233c0c: 0x94850006  lhu         $a1, 0x6($a0)
    ctx->pc = 0x233c0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x233c10: 0x30a3fffd  andi        $v1, $a1, 0xFFFD
    ctx->pc = 0x233c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65533);
    // 0x233c14: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x233c14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x233c18: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x233c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233c1c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x233c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x233c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233c24: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x233c24u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x233c28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233c2c: 0xa2660000  sb          $a2, 0x0($s3)
    ctx->pc = 0x233c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x233c30: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233c34: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x233c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x233c38: 0x24724010  addiu       $s2, $v1, 0x4010
    ctx->pc = 0x233c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16400));
    // 0x233c3c: 0x96460140  lhu         $a2, 0x140($s2)
    ctx->pc = 0x233c3cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x233c40: 0x34c50008  ori         $a1, $a2, 0x8
    ctx->pc = 0x233c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x233c44: 0xa6450140  sh          $a1, 0x140($s2)
    ctx->pc = 0x233c44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 320), (uint16_t)GPR_U32(ctx, 5));
    // 0x233c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c4c: 0x0  nop
    ctx->pc = 0x233c4cu;
    // NOP
    // 0x233c50: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x233c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x233c54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x233c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x233c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c5c: 0x0  nop
    ctx->pc = 0x233c5cu;
    // NOP
    // 0x233c60: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x233c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x233c64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c68: 0x0  nop
    ctx->pc = 0x233c68u;
    // NOP
    // 0x233c6c: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x233c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x233c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c74: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x233c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233c78: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x233c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x233c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c80: 0x26170150  addiu       $s7, $s0, 0x150
    ctx->pc = 0x233c80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233c84: 0xe6e0001c  swc1        $f0, 0x1C($s7)
    ctx->pc = 0x233c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 28), bits); }
    // 0x233c88: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x233c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233c8c: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x233c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x233c90: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x233c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x233c94: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x233c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x233c98: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x233c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x233c9c: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x233c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x233ca0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x233ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233ca4: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x233ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233ca8: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x233ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x233cac: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x233cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x233cb0: 0x24a4cfd0  addiu       $a0, $a1, -0x3030
    ctx->pc = 0x233cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x233cb4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x233cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x233cb8: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233cbc: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x233cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233cc0: 0x94c410a4  lhu         $a0, 0x10A4($a2)
    ctx->pc = 0x233cc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4260)));
    // 0x233cc4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x233cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233cc8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233ccc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x233cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233cd0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x233cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x233cd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x233cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x233cd8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x233cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233cdc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x233cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x233ce0: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x233ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233ce4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233ce8: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x233ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233cec: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x233cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x233cf0: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233cf4: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233cf8: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x233cf8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233cfc: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x233cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x233d00: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233d04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233d08: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x233d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233d0c: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x233d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x233d10: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x233d10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233d14: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x233d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x233d18: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233d18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233d1c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233d20: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233d24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233d28: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233d28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233d2c: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233d30: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x233d30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
    // 0x233d34: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x233d34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233d38: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x233d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x233d3c: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x233d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x233d40: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233d44: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x233d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x233d48: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x233d48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233d4c: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x233d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x233d50: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233d54: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233d58: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233d5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233d60: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233d60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233d64: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233d68: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x233d68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
    // 0x233d6c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x233d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233d70: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x233d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233d74: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x233d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x233d78: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233d7c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x233d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x233d80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x233d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233d84: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x233d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233d88: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x233d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233d8c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x233d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x233d90: 0x24a4cfd0  addiu       $a0, $a1, -0x3030
    ctx->pc = 0x233d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x233d94: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x233d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x233d98: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233d98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233d9c: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233da0: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x233da0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
    // 0x233da4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x233da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233da8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233dac: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x233dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233db0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233db4: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x233db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x233db8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x233db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233dbc: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x233dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x233dc0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x233dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x233dc4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x233dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x233dc8: 0x2463cfd0  addiu       $v1, $v1, -0x3030
    ctx->pc = 0x233dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x233dcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233dd0: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x233dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x233dd4u;
}
