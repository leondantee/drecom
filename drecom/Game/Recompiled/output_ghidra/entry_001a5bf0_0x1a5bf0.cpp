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

// Function: entry_001a5bf0
// Address: 0x1a5bf0 - 0x1a5d50
void entry_001a5bf0_0x1a5bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5bf0_0x1a5bf0");
#endif

    ctx->pc = 0x1a5bf0u;

    // 0x1a5bf0: 0x9202031a  lbu         $v0, 0x31A($s0)
    ctx->pc = 0x1a5bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 794)));
    // 0x1a5bf4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1A5BF4u;
    {
        const bool branch_taken_0x1a5bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bf4) {
            ctx->pc = 0x1A5D50u;
            return;
        }
    }
    ctx->pc = 0x1A5BFCu;
    // 0x1a5bfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5c00: 0xae2206f0  sw          $v0, 0x6F0($s1)
    ctx->pc = 0x1a5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1776), GPR_U32(ctx, 2));
    // 0x1a5c04: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1a5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1a5c08: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x1a5c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1a5c0c: 0xae2206f4  sw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 2));
    // 0x1a5c10: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a5c14: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1a5c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a5c18: 0x262206f8  addiu       $v0, $s1, 0x6F8
    ctx->pc = 0x1a5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1784));
    // 0x1a5c1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5c20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5c24: 0x8c223cd8  lw          $v0, 0x3CD8($at)
    ctx->pc = 0x1a5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD8u));
    // 0x1a5c28: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a5c2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5c30: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a5c34: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a5c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a5c38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5c3c: 0x8c223cd0  lw          $v0, 0x3CD0($at)
    ctx->pc = 0x1a5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD0u));
    // 0x1a5c40: 0x24430064  addiu       $v1, $v0, 0x64
    ctx->pc = 0x1a5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a5c44: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1a5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5c48: 0x24b27900  addiu       $s2, $a1, 0x7900
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x1a5c4c: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x1a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x1a5c50: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1a5c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a5c54: 0x262306fc  addiu       $v1, $s1, 0x6FC
    ctx->pc = 0x1a5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1788));
    // 0x1a5c58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a5c5c: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a5c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a5c60: 0x26220700  addiu       $v0, $s1, 0x700
    ctx->pc = 0x1a5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1a5c64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5c68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5c6c: 0x8c223cc8  lw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CC8u));
    // 0x1a5c70: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a5c74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5c78: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a5c7c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a5c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a5c80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5c84: 0x8c233cc0  lw          $v1, 0x3CC0($at)
    ctx->pc = 0x1a5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D3CC0u));
    // 0x1a5c88: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1a5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1a5c8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5c90: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x1a5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a5c94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a5c98: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a5c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a5c9c: 0x26220704  addiu       $v0, $s1, 0x704
    ctx->pc = 0x1a5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1796));
    // 0x1a5ca0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5ca4: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x1a5ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a5ca8: 0x26230708  addiu       $v1, $s1, 0x708
    ctx->pc = 0x1a5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1800));
    // 0x1a5cac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a5cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a5cb0: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x1a5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x1a5cb4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a5cb8: 0xae2202c0  sw          $v0, 0x2C0($s1)
    ctx->pc = 0x1a5cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 2));
    // 0x1a5cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5cc0: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x1a5cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a5cc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5cc8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a5cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5ccc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1a5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a5cd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a5cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a5cd4: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1a5cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a5cd8: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x1a5cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5cdc: 0x9204002c  lbu         $a0, 0x2C($s0)
    ctx->pc = 0x1a5cdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a5ce0: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1a5ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a5ce4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a5ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a5ce8: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1a5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1a5cec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a5cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a5cf0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a5cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5cf4: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x1a5cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5cf8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5cfc: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x1a5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
    // 0x1a5d00: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1a5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1a5d04: 0x3442103b  ori         $v0, $v0, 0x103B
    ctx->pc = 0x1a5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x1a5d08: 0xae0202ec  sw          $v0, 0x2EC($s0)
    ctx->pc = 0x1a5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 2));
    // 0x1a5d0c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a5d10: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1a5d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a5d14: 0xfe0202f0  sd          $v0, 0x2F0($s0)
    ctx->pc = 0x1a5d14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 752), GPR_U64(ctx, 2));
    // 0x1a5d18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a5d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5d1c: 0xae0302b8  sw          $v1, 0x2B8($s0)
    ctx->pc = 0x1a5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 3));
    // 0x1a5d20: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1a5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1a5d24: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x1a5d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x1a5d28: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x1a5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
    // 0x1a5d2c: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1a5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a5d30: 0xfe0202c0  sd          $v0, 0x2C0($s0)
    ctx->pc = 0x1a5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 704), GPR_U64(ctx, 2));
    // 0x1a5d34: 0xde0402c0  ld          $a0, 0x2C0($s0)
    ctx->pc = 0x1a5d34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x1a5d38: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a5d3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a5d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5d40: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a5d44: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a5d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5d48: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a5d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a5d4c: 0xfe0202c0  sd          $v0, 0x2C0($s0)
    ctx->pc = 0x1a5d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 704), GPR_U64(ctx, 2));
    ctx->pc = 0x1a5d50u;
}
