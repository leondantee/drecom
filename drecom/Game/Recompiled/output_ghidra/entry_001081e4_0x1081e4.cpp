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

// Function: entry_001081e4
// Address: 0x1081e4 - 0x108210
void entry_001081e4_0x1081e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001081e4_0x1081e4");
#endif

    ctx->pc = 0x1081e4u;

    // 0x1081e4: 0x39420001  xori        $v0, $t2, 0x1
    ctx->pc = 0x1081e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)1);
    // 0x1081e8: 0x8e633d7c  lw          $v1, 0x3D7C($s3)
    ctx->pc = 0x1081e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15740)));
    // 0x1081ec: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x1081ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1081f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1081f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1081f4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1081F4u;
    {
        const bool branch_taken_0x1081f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1081F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081F4u;
        // 0x1081f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081f4) {
            ctx->pc = 0x108234u;
            return;
        }
    }
    ctx->pc = 0x1081FCu;
    // 0x1081fc: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1081FCu;
    {
        const bool branch_taken_0x1081fc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x108200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081FCu;
        // 0x108200: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081fc) {
            ctx->pc = 0x108210u;
            return;
        }
    }
    ctx->pc = 0x108204u;
    // 0x108204: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x108204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x108208: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x108208u;
    {
        const bool branch_taken_0x108208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x10820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108208u;
        // 0x10820c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108208) {
            ctx->pc = 0x108234u;
            return;
        }
    }
    ctx->pc = 0x108210u;
}
