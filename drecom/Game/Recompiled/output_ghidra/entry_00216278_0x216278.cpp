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

// Function: entry_00216278
// Address: 0x216278 - 0x2162b0
void entry_00216278_0x216278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216278_0x216278");
#endif

    ctx->pc = 0x216278u;

label_216278:
    // 0x216278: 0x42000039  di
    ctx->pc = 0x216278u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x21627c: 0x40f  sync.p
    ctx->pc = 0x21627cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x216280: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x216280u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x216284: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x216284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x216288: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x216288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21628c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21628Cu;
    {
        const bool branch_taken_0x21628c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21628c) {
            ctx->pc = 0x216278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216278;
        }
    }
    ctx->pc = 0x216294u;
    // 0x216294: 0x2483c950  addiu       $v1, $a0, -0x36B0
    ctx->pc = 0x216294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953296));
    // 0x216298: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x216298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x21629c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x21629cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2162a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2162A0u;
    {
        const bool branch_taken_0x2162a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162A0u;
        // 0x2162a4: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162a0) {
            ctx->pc = 0x2162D4u;
            return;
        }
    }
    ctx->pc = 0x2162A8u;
    // 0x2162a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2162a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2162ac: 0x0  nop
    ctx->pc = 0x2162acu;
    // NOP
    ctx->pc = 0x2162b0u;
}
