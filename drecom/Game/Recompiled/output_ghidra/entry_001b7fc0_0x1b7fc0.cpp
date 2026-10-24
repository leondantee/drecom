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

// Function: entry_001b7fc0
// Address: 0x1b7fc0 - 0x1b8038
void entry_001b7fc0_0x1b7fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7fc0_0x1b7fc0");
#endif

    ctx->pc = 0x1b7fc0u;

    // 0x1b7fc0: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b7fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7fc4: 0xad001b60  sw          $zero, 0x1B60($t0)
    ctx->pc = 0x1b7fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 0));
    // 0x1b7fc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7fcc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b7fd0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1b7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1b7fd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b7fd8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B7FD8u;
    {
        const bool branch_taken_0x1b7fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7fd8) {
            ctx->pc = 0x1B8040u;
            return;
        }
    }
    ctx->pc = 0x1B7FE0u;
    // 0x1b7fe0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7fe4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b7fe8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1b7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1b7fec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7ff0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b7ff4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1b7ff8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7ffc: 0x904413a6  lbu         $a0, 0x13A6($v0)
    ctx->pc = 0x1b7ffcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x1b8000: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b8000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b8004: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b8004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8008: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8008u;
    {
        const bool branch_taken_0x1b8008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8008) {
            ctx->pc = 0x1B8038u;
            return;
        }
    }
    ctx->pc = 0x1B8010u;
    // 0x1b8010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8014: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8014u;
    {
        const bool branch_taken_0x1b8014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8014) {
            ctx->pc = 0x1B8038u;
            return;
        }
    }
    ctx->pc = 0x1B801Cu;
    // 0x1b801c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8020: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8020u;
    {
        const bool branch_taken_0x1b8020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8020) {
            ctx->pc = 0x1B8040u;
            return;
        }
    }
    ctx->pc = 0x1B8028u;
    // 0x1b8028: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8028u;
    {
        const bool branch_taken_0x1b8028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8028) {
            ctx->pc = 0x1B8040u;
            return;
        }
    }
    ctx->pc = 0x1B8030u;
    // 0x1b8030: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8030u;
    {
        const bool branch_taken_0x1b8030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8030) {
            ctx->pc = 0x1B8040u;
            return;
        }
    }
    ctx->pc = 0x1B8038u;
}
