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

// Function: entry_00214060
// Address: 0x214060 - 0x2140b0
void entry_00214060_0x214060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214060_0x214060");
#endif

    switch (ctx->pc) {
        case 0x214098u: goto label_214098;
        default: break;
    }

    ctx->pc = 0x214060u;

label_214060:
    // 0x214060: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x214060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x214064: 0x0  nop
    ctx->pc = 0x214064u;
    // NOP
    // 0x214068: 0x0  nop
    ctx->pc = 0x214068u;
    // NOP
    // 0x21406c: 0x0  nop
    ctx->pc = 0x21406cu;
    // NOP
    // 0x214070: 0x0  nop
    ctx->pc = 0x214070u;
    // NOP
    // 0x214074: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x214074u;
    {
        const bool branch_taken_0x214074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214074) {
            ctx->pc = 0x214060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214060;
        }
    }
    ctx->pc = 0x21407Cu;
    // 0x21407c: 0x26659e50  addiu       $a1, $s3, -0x61B0
    ctx->pc = 0x21407cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942288));
    // 0x214080: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x214080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x214084: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x214084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x214088: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x214088u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21408c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x21408cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x214090: 0xc084f3c  jal         func_213CF0
    ctx->pc = 0x214090u;
    SET_GPR_U32(ctx, 31, 0x214098u);
    ctx->pc = 0x214094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214090u;
    // 0x214094: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213CF0u, 0x214090u, 0x214098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214098u;
label_214098:
    // 0x214098: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x214098u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21409c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2140a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2140A0u;
    {
        const bool branch_taken_0x2140a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2140A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140A0u;
        // 0x2140a4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140a0) {
            ctx->pc = 0x2140B0u;
            return;
        }
    }
    ctx->pc = 0x2140A8u;
    // 0x2140a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2140A8u;
    {
        const bool branch_taken_0x2140a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2140ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140A8u;
        // 0x2140ac: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140a8) {
            ctx->pc = 0x2140B8u;
            return;
        }
    }
    ctx->pc = 0x2140B0u;
}
