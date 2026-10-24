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

// Function: __sfmoreglue
// Address: 0x117110 - 0x117180
void ps2___sfmoreglue_0x117110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfmoreglue_0x117110");
#endif

    switch (ctx->pc) {
        case 0x117138u: goto label_117138;
        case 0x117164u: goto label_117164;
        default: break;
    }

    ctx->pc = 0x117110u;

    // 0x117110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117114: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x117114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x117118: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11711c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117120: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x117120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117124: 0x2229018  mult        $s2, $s1, $v0
    ctx->pc = 0x117124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x117128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11712c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117130: 0xc04605a  jal         func_118168
    ctx->pc = 0x117130u;
    SET_GPR_U32(ctx, 31, 0x117138u);
    ctx->pc = 0x117134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117130u;
    // 0x117134: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118168u;
    {
        ctx->pc = 0x117138u;
        ps2_stubs::malloc_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117138u) { return; }
    ctx->pc = 0x117138u;
label_117138:
    // 0x117138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11713c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x11713Cu;
    {
        const bool branch_taken_0x11713c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11713Cu;
        // 0x117140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11713c) {
            ctx->pc = 0x117168u;
            goto label_117168;
        }
    }
    ctx->pc = 0x117144u;
    // 0x117144: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x117144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x117148: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x117148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x11714c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x117150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117154: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x117154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117158: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x117158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x11715c: 0xc046314  jal         func_118C50
    ctx->pc = 0x11715Cu;
    SET_GPR_U32(ctx, 31, 0x117164u);
    ctx->pc = 0x117160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11715Cu;
    // 0x117160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x117164u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117164u) { return; }
    ctx->pc = 0x117164u;
label_117164:
    // 0x117164: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117168:
    // 0x117168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11716c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11716cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117170: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117178: 0x3e00008  jr          $ra
    ctx->pc = 0x117178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117178u;
        // 0x11717c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117180u;
}
