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

// Function: entry_001b3f58
// Address: 0x1b3f58 - 0x1b3ff8
void entry_001b3f58_0x1b3f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3f58_0x1b3f58");
#endif

    ctx->pc = 0x1b3f58u;

    // 0x1b3f58: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3f5c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3f60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3f64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b3f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3f68: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3f6c: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x1b3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x1b3f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3f74: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1b3f74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3f7c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3f80: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b3f84: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b3f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3f88: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3f8c: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1b3f8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b3f90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3f94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3f98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b3f9c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1b3f9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3fa0: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b3fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3fa4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3fa8: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1b3fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b3fac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3fb4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b3fb8: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b3fb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b3fbc: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3fc0: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1b3fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x1b3fc4: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b3fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3fc8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3fcc: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3fd0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3fd4: 0x90420027  lbu         $v0, 0x27($v0)
    ctx->pc = 0x1b3fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x1b3fd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3fdc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b3fe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3FE0u;
    {
        const bool branch_taken_0x1b3fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3fe0) {
            ctx->pc = 0x1B3FF8u;
            return;
        }
    }
    ctx->pc = 0x1B3FE8u;
    // 0x1b3fe8: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b3fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b3fec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b3fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b3ff0: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3ff4: 0x0  nop
    ctx->pc = 0x1b3ff4u;
    // NOP
    ctx->pc = 0x1b3ff8u;
}
