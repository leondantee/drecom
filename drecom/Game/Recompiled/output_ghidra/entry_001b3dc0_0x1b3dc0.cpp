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

// Function: entry_001b3dc0
// Address: 0x1b3dc0 - 0x1b3ea0
void entry_001b3dc0_0x1b3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3dc0_0x1b3dc0");
#endif

    ctx->pc = 0x1b3dc0u;

    // 0x1b3dc0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3dc4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3dcc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b3dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b3dd0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1B3DD0u;
    {
        const bool branch_taken_0x1b3dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3dd0) {
            ctx->pc = 0x1B3EA0u;
            return;
        }
    }
    ctx->pc = 0x1B3DD8u;
    // 0x1b3dd8: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3ddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3de0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3de4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3de8: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x1b3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x1b3dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3df0: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x1b3df0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3df8: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3dfc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3e00: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b3e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
    // 0x1b3e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3e0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b3e10: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b3e14: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1b3e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b3e18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3e1c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1b3e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1b3e20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e24: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b3e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3e28: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3e2c: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b3e2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
    // 0x1b3e30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3e38: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b3e3c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b3e40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3e44: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1b3e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1b3e48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b3e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3e4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b3e4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b3e50: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b3e50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3e54: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1b3e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x1b3e58: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b3e58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3e5c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3e60: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b3e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
    // 0x1b3e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e68: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3e68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3e6c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3e70: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3e74: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3e78: 0x90420027  lbu         $v0, 0x27($v0)
    ctx->pc = 0x1b3e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x1b3e7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e80: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b3e84: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1B3E84u;
    {
        const bool branch_taken_0x1b3e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e84) {
            ctx->pc = 0x1B3FF8u;
            return;
        }
    }
    ctx->pc = 0x1B3E8Cu;
    // 0x1b3e8c: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b3e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b3e90: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b3e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b3e94: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3e98: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1B3E98u;
    {
        const bool branch_taken_0x1b3e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e98) {
            ctx->pc = 0x1B3FF8u;
            return;
        }
    }
    ctx->pc = 0x1B3EA0u;
}
