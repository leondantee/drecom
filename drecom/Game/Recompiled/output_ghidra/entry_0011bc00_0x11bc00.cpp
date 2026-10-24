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

// Function: entry_0011bc00
// Address: 0x11bc00 - 0x11bc30
void entry_0011bc00_0x11bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc00_0x11bc00");
#endif

    ctx->pc = 0x11bc00u;

label_11bc00:
    // 0x11bc00: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x11bc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x11bc04: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x11bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x11bc08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11bc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11bc0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11bc0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11bc10: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11bc10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11bc14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11bc18: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x11bc18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x11bc1c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11bc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bc20: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11BC20u;
    {
        const bool branch_taken_0x11bc20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC20u;
        // 0x11bc24: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc20) {
            ctx->pc = 0x11BC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bc00;
        }
    }
    ctx->pc = 0x11BC28u;
    // 0x11bc28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC28u;
    {
        const bool branch_taken_0x11bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC28u;
        // 0x11bc2c: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc28) {
            ctx->pc = 0x11BC3Cu;
            return;
        }
    }
    ctx->pc = 0x11BC30u;
}
