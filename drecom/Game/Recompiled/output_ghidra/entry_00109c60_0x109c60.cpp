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

// Function: entry_00109c60
// Address: 0x109c60 - 0x109cec
void entry_00109c60_0x109c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109c60_0x109c60");
#endif

    switch (ctx->pc) {
        case 0x109c74u: goto label_109c74;
        case 0x109c84u: goto label_109c84;
        case 0x109c94u: goto label_109c94;
        case 0x109ca4u: goto label_109ca4;
        case 0x109cb4u: goto label_109cb4;
        case 0x109cc0u: goto label_109cc0;
        case 0x109cd4u: goto label_109cd4;
        case 0x109ce0u: goto label_109ce0;
        default: break;
    }

    ctx->pc = 0x109c60u;

    // 0x109c60: 0x16b00045  bne         $s5, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x109C60u;
    {
        const bool branch_taken_0x109c60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x109C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C60u;
        // 0x109c64: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c60) {
            ctx->pc = 0x109D78u;
            return;
        }
    }
    ctx->pc = 0x109C68u;
    // 0x109c68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c6c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C6Cu;
    SET_GPR_U32(ctx, 31, 0x109C74u);
    ctx->pc = 0x109C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C6Cu;
    // 0x109c70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C6Cu, 0x109C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C74u;
label_109c74:
    // 0x109c74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c7c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C7Cu;
    SET_GPR_U32(ctx, 31, 0x109C84u);
    ctx->pc = 0x109C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C7Cu;
    // 0x109c80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C7Cu, 0x109C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C84u;
label_109c84:
    // 0x109c84: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x109c84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c8c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C8Cu;
    SET_GPR_U32(ctx, 31, 0x109C94u);
    ctx->pc = 0x109C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C8Cu;
    // 0x109c90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C8Cu, 0x109C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C94u;
label_109c94:
    // 0x109c94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c9c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C9Cu;
    SET_GPR_U32(ctx, 31, 0x109CA4u);
    ctx->pc = 0x109CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C9Cu;
    // 0x109ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C9Cu, 0x109CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CA4u;
label_109ca4:
    // 0x109ca4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x109ca4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cac: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CACu;
    SET_GPR_U32(ctx, 31, 0x109CB4u);
    ctx->pc = 0x109CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CACu;
    // 0x109cb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CACu, 0x109CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CB4u;
label_109cb4:
    // 0x109cb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cb8: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CB8u;
    SET_GPR_U32(ctx, 31, 0x109CC0u);
    ctx->pc = 0x109CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CB8u;
    // 0x109cbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CB8u, 0x109CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CC0u;
label_109cc0:
    // 0x109cc0: 0x1615000a  bne         $s0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x109CC0u;
    {
        const bool branch_taken_0x109cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x109CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CC0u;
        // 0x109cc4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cc0) {
            ctx->pc = 0x109CECu;
            return;
        }
    }
    ctx->pc = 0x109CC8u;
    // 0x109cc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ccc: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CCCu;
    SET_GPR_U32(ctx, 31, 0x109CD4u);
    ctx->pc = 0x109CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CCCu;
    // 0x109cd0: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CCCu, 0x109CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CD4u;
label_109cd4:
    // 0x109cd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cd8: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CD8u;
    SET_GPR_U32(ctx, 31, 0x109CE0u);
    ctx->pc = 0x109CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CD8u;
    // 0x109cdc: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CD8u, 0x109CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CE0u;
label_109ce0:
    // 0x109ce0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ce4: 0xc04240a  jal         func_109028
    ctx->pc = 0x109CE4u;
    SET_GPR_U32(ctx, 31, 0x109CECu);
    ctx->pc = 0x109CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CE4u;
    // 0x109ce8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109CE4u, 0x109CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CECu;
}
