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

// Function: entry_00215360
// Address: 0x215360 - 0x215394
void entry_00215360_0x215360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215360_0x215360");
#endif

    ctx->pc = 0x215360u;

label_215360:
    // 0x215360: 0x42000039  di
    ctx->pc = 0x215360u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x215364: 0x40f  sync.p
    ctx->pc = 0x215364u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215368: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x215368u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x21536c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x21536cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x215370: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x215370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x215374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x215374u;
    {
        const bool branch_taken_0x215374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215374) {
            ctx->pc = 0x215360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215360;
        }
    }
    ctx->pc = 0x21537Cu;
    // 0x21537c: 0x8c82aae0  lw          $v0, -0x5520($a0)
    ctx->pc = 0x21537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945504)));
    // 0x215380: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215380u;
    {
        const bool branch_taken_0x215380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215380u;
        // 0x215384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215380) {
            ctx->pc = 0x215394u;
            return;
        }
    }
    ctx->pc = 0x215388u;
    // 0x215388: 0x42000038  ei
    ctx->pc = 0x215388u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x21538c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x21538Cu;
    {
        const bool branch_taken_0x21538c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21538Cu;
        // 0x215390: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21538c) {
            ctx->pc = 0x2154F0u;
            return;
        }
    }
    ctx->pc = 0x215394u;
}
