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

// Function: entry_00113248
// Address: 0x113248 - 0x1132a4
void entry_00113248_0x113248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113248_0x113248");
#endif

    switch (ctx->pc) {
        case 0x113274u: goto label_113274;
        case 0x113280u: goto label_113280;
        default: break;
    }

    ctx->pc = 0x113248u;

label_113248:
    // 0x113248: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x113248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x11324c: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x11324cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x113250: 0x27c2d710  addiu       $v0, $fp, -0x28F0
    ctx->pc = 0x113250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956816));
    // 0x113254: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x113254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x113258: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x113258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11325c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x11325cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113260: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x113260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x113264: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x113264u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113268: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x113268u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11326c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11326Cu;
    SET_GPR_U32(ctx, 31, 0x113274u);
    ctx->pc = 0x113270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11326Cu;
    // 0x113270: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11326Cu, 0x113274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113274u;
label_113274:
    // 0x113274: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x113274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113278: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113278u;
    SET_GPR_U32(ctx, 31, 0x113280u);
    ctx->pc = 0x11327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113278u;
    // 0x11327c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113278u, 0x113280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113280u;
label_113280:
    // 0x113280: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x113280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x113284: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x113284u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113288: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x113288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11328c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11328Cu;
    {
        const bool branch_taken_0x11328c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11328Cu;
        // 0x113290: 0x270102a  slt         $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11328c) {
            ctx->pc = 0x1132ACu;
            return;
        }
    }
    ctx->pc = 0x113294u;
    // 0x113294: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x113294u;
    {
        const bool branch_taken_0x113294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113294u;
        // 0x113298: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113294) {
            ctx->pc = 0x113248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113248;
        }
    }
    ctx->pc = 0x11329Cu;
    // 0x11329c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11329Cu;
    {
        const bool branch_taken_0x11329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11329Cu;
        // 0x1132a0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11329c) {
            ctx->pc = 0x1132B4u;
            return;
        }
    }
    ctx->pc = 0x1132A4u;
}
