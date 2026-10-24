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

// Function: entry_00164980
// Address: 0x164980 - 0x164a7c
void entry_00164980_0x164980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164980_0x164980");
#endif

    ctx->pc = 0x164980u;

    // 0x164980: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x164980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x164984: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x164984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x164988: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x164988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x16498c: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x16498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x164990: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x164990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x164994: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x164998: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x164998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16499c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16499cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1649a0: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1649a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1649a4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1649a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1649a8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1649ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1649acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1649b0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x1649b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1649b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1649b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1649b8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1649b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1649bc: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1649bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1649c0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1649c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1649c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1649c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1649c8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1649c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1649cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1649ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1649d0: 0x96020040  lhu         $v0, 0x40($s0)
    ctx->pc = 0x1649d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1649d4: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x1649d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1649d8: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x1649d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
    // 0x1649dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1649dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1649e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1649e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1649e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1649e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1649e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1649e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1649ec: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1649ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1649f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1649f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1649f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1649f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1649f8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1649f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1649fc: 0x96020040  lhu         $v0, 0x40($s0)
    ctx->pc = 0x1649fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x164a00: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a04: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x164a04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x164a08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164a10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a14: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x164a14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164a1c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x164a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x164a20: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x164a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x164a24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164a28: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x164A28u;
    {
        const bool branch_taken_0x164a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a28) {
            ctx->pc = 0x164A7Cu;
            return;
        }
    }
    ctx->pc = 0x164A30u;
    // 0x164a30: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x164a30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x164a34: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a38: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x164a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x164a3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x164a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a40: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x164a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x164a44: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x164a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x164a48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x164a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a50: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x164a50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a54: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x164a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x164a58: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a5c: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x164a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x164a60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x164a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x164a68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164a6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a70: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x164a70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164A74u;
    {
        const bool branch_taken_0x164a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a74) {
            ctx->pc = 0x164AA0u;
            return;
        }
    }
    ctx->pc = 0x164A7Cu;
}
