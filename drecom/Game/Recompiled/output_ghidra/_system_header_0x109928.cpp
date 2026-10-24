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

// Function: _system_header
// Address: 0x109928 - 0x109994
void _system_header_0x109928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_system_header_0x109928");
#endif

    switch (ctx->pc) {
        case 0x109944u: goto label_109944;
        case 0x109954u: goto label_109954;
        case 0x109960u: goto label_109960;
        case 0x10996cu: goto label_10996c;
        case 0x109978u: goto label_109978;
        default: break;
    }

    ctx->pc = 0x109928u;

    // 0x109928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10992c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x10992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x109930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109934: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109938: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10993c: 0xc04240a  jal         func_109028
    ctx->pc = 0x10993Cu;
    SET_GPR_U32(ctx, 31, 0x109944u);
    ctx->pc = 0x109940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10993Cu;
    // 0x109940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x10993Cu, 0x109944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109944u;
label_109944:
    // 0x109944: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x109944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10994c: 0xc04240a  jal         func_109028
    ctx->pc = 0x10994Cu;
    SET_GPR_U32(ctx, 31, 0x109954u);
    ctx->pc = 0x109950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10994Cu;
    // 0x109950: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x10994Cu, 0x109954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109954u;
label_109954:
    // 0x109954: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x109954u;
    {
        const bool branch_taken_0x109954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109954u;
        // 0x109958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109954) {
            ctx->pc = 0x109970u;
            goto label_109970;
        }
    }
    ctx->pc = 0x10995Cu;
    // 0x10995c: 0x0  nop
    ctx->pc = 0x10995cu;
    // NOP
label_109960:
    // 0x109960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109964: 0xc04240a  jal         func_109028
    ctx->pc = 0x109964u;
    SET_GPR_U32(ctx, 31, 0x10996Cu);
    ctx->pc = 0x109968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109964u;
    // 0x109968: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109964u, 0x10996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10996Cu;
label_10996c:
    // 0x10996c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109970:
    // 0x109970: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x109970u;
    SET_GPR_U32(ctx, 31, 0x109978u);
    ctx->pc = 0x109974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109970u;
    // 0x109974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x109970u, 0x109978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109978u;
label_109978:
    // 0x109978: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x109978u;
    {
        const bool branch_taken_0x109978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109978u;
        // 0x10997c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109978) {
            ctx->pc = 0x109960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109960;
        }
    }
    ctx->pc = 0x109980u;
    // 0x109980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109984: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10998c: 0x3e00008  jr          $ra
    ctx->pc = 0x10998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10998Cu;
        // 0x109990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109994u;
}
