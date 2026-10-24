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

// Function: Usage_disp
// Address: 0x1a5000 - 0x1a5074
void Usage_disp_0x1a5000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Usage_disp_0x1a5000");
#endif

    switch (ctx->pc) {
        case 0x1a504cu: goto label_1a504c;
        case 0x1a505cu: goto label_1a505c;
        default: break;
    }

    ctx->pc = 0x1a5000u;

    // 0x1a5000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5004: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a5004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a5008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a500c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5010: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a5010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a5014: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1a5014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a5018: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a5018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a501c: 0x24710320  addiu       $s1, $v1, 0x320
    ctx->pc = 0x1a501cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x1a5020: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1a5020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1a5024: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a5024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a5028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a502c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A502Cu;
    {
        const bool branch_taken_0x1a502c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a502c) {
            ctx->pc = 0x1A5054u;
            goto label_1a5054;
        }
    }
    ctx->pc = 0x1A5034u;
    // 0x1a5034: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5034u;
    {
        const bool branch_taken_0x1a5034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5034) {
            ctx->pc = 0x1A5044u;
            goto label_1a5044;
        }
    }
    ctx->pc = 0x1A503Cu;
    // 0x1a503c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A503Cu;
    {
        const bool branch_taken_0x1a503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a503c) {
            ctx->pc = 0x1A505Cu;
            goto label_1a505c;
        }
    }
    ctx->pc = 0x1A5044u;
label_1a5044:
    // 0x1a5044: 0xc069420  jal         func_1A5080
    ctx->pc = 0x1A5044u;
    SET_GPR_U32(ctx, 31, 0x1A504Cu);
    ctx->pc = 0x1A5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5080u, 0x1A5044u, 0x1A504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A504Cu;
label_1a504c:
    // 0x1a504c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A504Cu;
    {
        const bool branch_taken_0x1a504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a504c) {
            ctx->pc = 0x1A505Cu;
            goto label_1a505c;
        }
    }
    ctx->pc = 0x1A5054u;
label_1a5054:
    // 0x1a5054: 0xc0694a4  jal         func_1A5290
    ctx->pc = 0x1A5054u;
    SET_GPR_U32(ctx, 31, 0x1A505Cu);
    ctx->pc = 0x1A5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5290u, 0x1A5054u, 0x1A505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A505Cu;
label_1a505c:
    // 0x1a505c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a505cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5068: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a5068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a506c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A506Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5074u;
}
