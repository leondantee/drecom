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

// Function: entry_00116024
// Address: 0x116024 - 0x116060
void entry_00116024_0x116024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116024_0x116024");
#endif

    switch (ctx->pc) {
        case 0x116050u: goto label_116050;
        default: break;
    }

    ctx->pc = 0x116024u;

    // 0x116024: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x116024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x116028: 0x2e620017  sltiu       $v0, $s3, 0x17
    ctx->pc = 0x116028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x11602c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11602Cu;
    {
        const bool branch_taken_0x11602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11602Cu;
        // 0x116030: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11602c) {
            ctx->pc = 0x116060u;
            return;
        }
    }
    ctx->pc = 0x116034u;
    // 0x116034: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x116034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x116038: 0x2442da08  addiu       $v0, $v0, -0x25F8
    ctx->pc = 0x116038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957576));
    // 0x11603c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116044: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x116044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x116048: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116048u;
    SET_GPR_U32(ctx, 31, 0x116050u);
    ctx->pc = 0x11604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116048u;
    // 0x11604c: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116048u, 0x116050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116050u;
label_116050:
    // 0x116050: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x116050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116054: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x116054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x116058: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x116058u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11605c: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x11605cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    ctx->pc = 0x116060u;
}
