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

// Function: entry_00116bf8
// Address: 0x116bf8 - 0x116c48
void entry_00116bf8_0x116bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116bf8_0x116bf8");
#endif

    switch (ctx->pc) {
        case 0x116c04u: goto label_116c04;
        case 0x116c14u: goto label_116c14;
        case 0x116c28u: goto label_116c28;
        case 0x116c44u: goto label_116c44;
        default: break;
    }

    ctx->pc = 0x116bf8u;

    // 0x116bf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116bfc: 0xc0456c2  jal         func_115B08
    ctx->pc = 0x116BFCu;
    SET_GPR_U32(ctx, 31, 0x116C04u);
    ctx->pc = 0x116C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BFCu;
    // 0x116c00: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B08u, 0x116BFCu, 0x116C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C04u;
label_116c04:
    // 0x116c04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116c08: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x116c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x116c0c: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116C0Cu;
    SET_GPR_U32(ctx, 31, 0x116C14u);
    ctx->pc = 0x116C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C0Cu;
    // 0x116c10: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116C0Cu, 0x116C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C14u;
label_116c14:
    // 0x116c14: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x116c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x116c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c1c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x116c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116c20: 0xc0465ba  jal         func_1196E8
    ctx->pc = 0x116C20u;
    SET_GPR_U32(ctx, 31, 0x116C28u);
    ctx->pc = 0x116C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C20u;
    // 0x116c24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1196E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1196E8u, 0x116C20u, 0x116C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C28u;
label_116c28:
    // 0x116c28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c2c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x116c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x116c30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116C30u;
    {
        const bool branch_taken_0x116c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C30u;
        // 0x116c34: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c30) {
            ctx->pc = 0x116C48u;
            return;
        }
    }
    ctx->pc = 0x116C38u;
    // 0x116c38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116c3c: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116C3Cu;
    SET_GPR_U32(ctx, 31, 0x116C44u);
    ctx->pc = 0x116C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C3Cu;
    // 0x116c40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116C3Cu, 0x116C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C44u;
label_116c44:
    // 0x116c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116c48u;
}
