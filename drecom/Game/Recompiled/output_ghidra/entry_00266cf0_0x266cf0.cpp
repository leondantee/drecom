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

// Function: entry_00266cf0
// Address: 0x266cf0 - 0x266d80
void entry_00266cf0_0x266cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266cf0_0x266cf0");
#endif

    ctx->pc = 0x266cf0u;

    // 0x266cf0: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266cf4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266cf8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266cfc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266d00: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266d04: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266d08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266d0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266d10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266d14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266d18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x266d1c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x266D1Cu;
    {
        const bool branch_taken_0x266d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266d1c) {
            ctx->pc = 0x266D80u;
            return;
        }
    }
    ctx->pc = 0x266D24u;
    // 0x266d24: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x266d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266d28: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x266d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x266d2c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x266d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x266d30: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x266d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x266d34: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266d34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266d38: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x266d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x266d3c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x266d40: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266d44: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266d48: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266d4c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266d50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266d54: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266d5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266d60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266d68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x266d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x266d6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266D6Cu;
    {
        const bool branch_taken_0x266d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266d6c) {
            ctx->pc = 0x266D80u;
            return;
        }
    }
    ctx->pc = 0x266D74u;
    // 0x266d74: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266d74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266d78: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x266d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x266d7c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x266d80u;
}
