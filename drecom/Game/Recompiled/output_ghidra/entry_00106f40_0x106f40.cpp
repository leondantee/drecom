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

// Function: entry_00106f40
// Address: 0x106f40 - 0x106f80
void entry_00106f40_0x106f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f40_0x106f40");
#endif

    ctx->pc = 0x106f40u;

    // 0x106f40: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x106f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x106f44: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x106f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x106f48: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x106f48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x106f4c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x106f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x106f50: 0x26453a70  addiu       $a1, $s2, 0x3A70
    ctx->pc = 0x106f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 14960));
    // 0x106f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106f58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x106f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x106f5c: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x106f5cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106f60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106f64: 0x4c1000f  bgez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x106F64u;
    {
        const bool branch_taken_0x106f64 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x106F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F64u;
        // 0x106f68: 0xae633c24  sw          $v1, 0x3C24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 15396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f64) {
            ctx->pc = 0x106FA4u;
            return;
        }
    }
    ctx->pc = 0x106F6Cu;
    // 0x106f6c: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x106f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x106f70: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x106f70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x106f74: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x106f74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x106f78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f7c: 0x0  nop
    ctx->pc = 0x106f7cu;
    // NOP
    ctx->pc = 0x106f80u;
}
