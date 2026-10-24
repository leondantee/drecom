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

// Function: entry_00112be8
// Address: 0x112be8 - 0x112c34
void entry_00112be8_0x112be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112be8_0x112be8");
#endif

    switch (ctx->pc) {
        case 0x112c10u: goto label_112c10;
        case 0x112c1cu: goto label_112c1c;
        default: break;
    }

    ctx->pc = 0x112be8u;

label_112be8:
    // 0x112be8: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x112be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x112bec: 0x8fa80230  lw          $t0, 0x230($sp)
    ctx->pc = 0x112becu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x112bf0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x112bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x112bf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x112bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x112bf8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x112bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x112bfc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x112bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x112c00: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x112c00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112c04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x112c08: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112C08u;
    SET_GPR_U32(ctx, 31, 0x112C10u);
    ctx->pc = 0x112C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C08u;
    // 0x112c0c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112C08u, 0x112C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C10u;
label_112c10:
    // 0x112c10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x112c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c14: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x112C14u;
    SET_GPR_U32(ctx, 31, 0x112C1Cu);
    ctx->pc = 0x112C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C14u;
    // 0x112c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x112C14u, 0x112C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C1Cu;
label_112c1c:
    // 0x112c1c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x112c1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c20: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x112c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x112c24: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112C24u;
    {
        const bool branch_taken_0x112c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C24u;
        // 0x112c28: 0x8fa20254  lw          $v0, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c24) {
            ctx->pc = 0x112BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112be8;
        }
    }
    ctx->pc = 0x112C2Cu;
    // 0x112c2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112C2Cu;
    {
        const bool branch_taken_0x112c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C2Cu;
        // 0x112c30: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c2c) {
            ctx->pc = 0x112C44u;
            return;
        }
    }
    ctx->pc = 0x112C34u;
}
