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

// Function: entry_0010bfb8
// Address: 0x10bfb8 - 0x10c010
void entry_0010bfb8_0x10bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bfb8_0x10bfb8");
#endif

    ctx->pc = 0x10bfb8u;

label_10bfb8:
    // 0x10bfb8: 0xac40ff8c  sw          $zero, -0x74($v0)
    ctx->pc = 0x10bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), GPR_U32(ctx, 0));
    // 0x10bfbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10bfc0: 0xac40ff94  sw          $zero, -0x6C($v0)
    ctx->pc = 0x10bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), GPR_U32(ctx, 0));
    // 0x10bfc4: 0xac40ff90  sw          $zero, -0x70($v0)
    ctx->pc = 0x10bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
    // 0x10bfc8: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x10bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x10bfcc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10bfd0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10bfd4: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10BFD4u;
    {
        const bool branch_taken_0x10bfd4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BFD4u;
        // 0x10bfd8: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bfd4) {
            ctx->pc = 0x10BFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bfb8;
        }
    }
    ctx->pc = 0x10BFDCu;
    // 0x10bfdc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x10bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10bfe0: 0x24903b00  addiu       $s0, $a0, 0x3B00
    ctx->pc = 0x10bfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 15104));
    // 0x10bfe4: 0xac823b00  sw          $v0, 0x3B00($a0)
    ctx->pc = 0x10bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15104), GPR_U32(ctx, 2));
    // 0x10bfe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bfec: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10bfecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10bff0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10bff4: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10bff8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10bffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c000: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10c000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c004: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10c004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10c008: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10c008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c00c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10c00cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x10c010u;
}
