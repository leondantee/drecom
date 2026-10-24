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

// Function: entry_00116cb8
// Address: 0x116cb8 - 0x116d00
void entry_00116cb8_0x116cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116cb8_0x116cb8");
#endif

    switch (ctx->pc) {
        case 0x116cccu: goto label_116ccc;
        case 0x116cdcu: goto label_116cdc;
        default: break;
    }

    ctx->pc = 0x116cb8u;

    // 0x116cb8: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x116CB8u;
    {
        const bool branch_taken_0x116cb8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x116CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CB8u;
        // 0x116cbc: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cb8) {
            ctx->pc = 0x116D0Cu;
            return;
        }
    }
    ctx->pc = 0x116CC0u;
    // 0x116cc0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cc4: 0xc046542  jal         func_119508
    ctx->pc = 0x116CC4u;
    SET_GPR_U32(ctx, 31, 0x116CCCu);
    ctx->pc = 0x116CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CC4u;
    // 0x116cc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116CC4u, 0x116CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CCCu;
label_116ccc:
    // 0x116ccc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x116cd0: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x116cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x116cd4: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116CD4u;
    SET_GPR_U32(ctx, 31, 0x116CDCu);
    ctx->pc = 0x116CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CD4u;
    // 0x116cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116CD4u, 0x116CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CDCu;
label_116cdc:
    // 0x116cdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ce0: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x116CE0u;
    {
        const bool branch_taken_0x116ce0 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x116ce0) {
            ctx->pc = 0x116CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116CE0u;
            // 0x116ce4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116D00u;
            return;
        }
    }
    ctx->pc = 0x116CE8u;
    // 0x116ce8: 0x56200058  bnel        $s1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x116CE8u;
    {
        const bool branch_taken_0x116ce8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x116ce8) {
            ctx->pc = 0x116CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116CE8u;
            // 0x116cec: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E4Cu;
            return;
        }
    }
    ctx->pc = 0x116CF0u;
    // 0x116cf0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x116cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x116cf4: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x116CF4u;
    {
        const bool branch_taken_0x116cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116cf4) {
            ctx->pc = 0x116CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116CF4u;
            // 0x116cf8: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E4Cu;
            return;
        }
    }
    ctx->pc = 0x116CFCu;
    // 0x116cfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x116cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x116d00u;
}
