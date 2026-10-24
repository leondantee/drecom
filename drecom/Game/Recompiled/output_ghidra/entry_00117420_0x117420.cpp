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

// Function: entry_00117420
// Address: 0x117420 - 0x117468
void entry_00117420_0x117420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117420_0x117420");
#endif

    ctx->pc = 0x117420u;

    // 0x117420: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x117420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x117424: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x117424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x117428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11742c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11742Cu;
    {
        const bool branch_taken_0x11742c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11742Cu;
        // 0x117430: 0x35220001  ori         $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11742c) {
            ctx->pc = 0x117480u;
            return;
        }
    }
    ctx->pc = 0x117434u;
    // 0x117434: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x117434u;
    {
        const bool branch_taken_0x117434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x117438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117434u;
        // 0x117438: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117434) {
            ctx->pc = 0x117468u;
            return;
        }
    }
    ctx->pc = 0x11743Cu;
    // 0x11743c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x11743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x117440: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x117440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x117444: 0x24424930  addiu       $v0, $v0, 0x4930
    ctx->pc = 0x117444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18736));
    // 0x117448: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x117448u;
    {
        const bool branch_taken_0x117448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x117448) {
            ctx->pc = 0x11744Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117448u;
            // 0x11744c: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117470u;
            return;
        }
    }
    ctx->pc = 0x117450u;
    // 0x117450: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x117450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x117454: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x117454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117458: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x117458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x11745c: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x11745cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x117460: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x117460u;
    {
        const bool branch_taken_0x117460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117460u;
        // 0x117464: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117460) {
            ctx->pc = 0x11747Cu;
            return;
        }
    }
    ctx->pc = 0x117468u;
}
