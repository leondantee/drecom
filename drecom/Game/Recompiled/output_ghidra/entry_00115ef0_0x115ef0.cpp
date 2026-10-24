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

// Function: entry_00115ef0
// Address: 0x115ef0 - 0x115f2c
void entry_00115ef0_0x115ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115ef0_0x115ef0");
#endif

    ctx->pc = 0x115ef0u;

    // 0x115ef0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x115ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115ef4: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x115ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x115ef8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x115ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x115efc: 0x24940432  addiu       $s4, $a0, 0x432
    ctx->pc = 0x115efcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x115f00: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x115f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x115f04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x115F04u;
    {
        const bool branch_taken_0x115f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F04u;
        // 0x115f08: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f04) {
            ctx->pc = 0x115F2Cu;
            return;
        }
    }
    ctx->pc = 0x115F0Cu;
    // 0x115f0c: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x115f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x115f10: 0x141823  negu        $v1, $s4
    ctx->pc = 0x115f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x115f14: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x115f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x115f18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x115f18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x115f1c: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x115f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x115f20: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x115f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x115f24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115F24u;
    {
        const bool branch_taken_0x115f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F24u;
        // 0x115f28: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f24) {
            ctx->pc = 0x115F38u;
            return;
        }
    }
    ctx->pc = 0x115F2Cu;
}
