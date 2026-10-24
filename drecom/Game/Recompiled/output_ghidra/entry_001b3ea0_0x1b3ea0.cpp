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

// Function: entry_001b3ea0
// Address: 0x1b3ea0 - 0x1b3f58
void entry_001b3ea0_0x1b3ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ea0_0x1b3ea0");
#endif

    ctx->pc = 0x1b3ea0u;

    // 0x1b3ea0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3ea8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b3ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b3eac: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B3EACu;
    {
        const bool branch_taken_0x1b3eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3eac) {
            ctx->pc = 0x1B3F58u;
            return;
        }
    }
    ctx->pc = 0x1B3EB4u;
    // 0x1b3eb4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3eb8: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3ebc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3ec0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3ec4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3ec8: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x1b3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x1b3ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3ed0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1b3ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ed8: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3edc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b3ee0: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b3ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3ee4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3ee8: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1b3ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b3eec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3ef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3ef4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b3ef8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1b3ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3efc: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b3efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3f00: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3f04: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1b3f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b3f08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3f0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3f10: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b3f14: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b3f14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b3f18: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3f1c: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1b3f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x1b3f20: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b3f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3f24: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3f28: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3f2c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3f30: 0x90420027  lbu         $v0, 0x27($v0)
    ctx->pc = 0x1b3f30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x1b3f34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3f38: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b3f3c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1B3F3Cu;
    {
        const bool branch_taken_0x1b3f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f3c) {
            ctx->pc = 0x1B3FF8u;
            return;
        }
    }
    ctx->pc = 0x1B3F44u;
    // 0x1b3f44: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b3f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b3f48: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b3f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b3f4c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3f50: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B3F50u;
    {
        const bool branch_taken_0x1b3f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f50) {
            ctx->pc = 0x1B3FF8u;
            return;
        }
    }
    ctx->pc = 0x1B3F58u;
}
