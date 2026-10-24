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

// Function: entry_00112c88
// Address: 0x112c88 - 0x112cf8
void entry_00112c88_0x112c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112c88_0x112c88");
#endif

    switch (ctx->pc) {
        case 0x112c9cu: goto label_112c9c;
        case 0x112ca8u: goto label_112ca8;
        case 0x112cb0u: goto label_112cb0;
        case 0x112cc4u: goto label_112cc4;
        case 0x112cd0u: goto label_112cd0;
        case 0x112cd8u: goto label_112cd8;
        case 0x112cecu: goto label_112cec;
        default: break;
    }

    ctx->pc = 0x112c88u;

label_112c88:
    // 0x112c88: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x112c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x112c8c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x112c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x112c90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c94: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112C94u;
    SET_GPR_U32(ctx, 31, 0x112C9Cu);
    ctx->pc = 0x112C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C94u;
    // 0x112c98: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112C94u, 0x112C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C9Cu;
label_112c9c:
    // 0x112c9c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x112c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ca0: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x112CA0u;
    SET_GPR_U32(ctx, 31, 0x112CA8u);
    ctx->pc = 0x112CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CA0u;
    // 0x112ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x112CA0u, 0x112CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CA8u;
label_112ca8:
    // 0x112ca8: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x112CA8u;
    SET_GPR_U32(ctx, 31, 0x112CB0u);
    ctx->pc = 0x112CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CA8u;
    // 0x112cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x112CA8u, 0x112CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CB0u;
label_112cb0:
    // 0x112cb0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x112cb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cb4: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x112cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x112cb8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x112cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x112cbc: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112CBCu;
    SET_GPR_U32(ctx, 31, 0x112CC4u);
    ctx->pc = 0x112CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CBCu;
    // 0x112cc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112CBCu, 0x112CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CC4u;
label_112cc4:
    // 0x112cc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cc8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112CC8u;
    SET_GPR_U32(ctx, 31, 0x112CD0u);
    ctx->pc = 0x112CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CC8u;
    // 0x112ccc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112CC8u, 0x112CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CD0u;
label_112cd0:
    // 0x112cd0: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x112CD0u;
    SET_GPR_U32(ctx, 31, 0x112CD8u);
    ctx->pc = 0x112CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CD0u;
    // 0x112cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x112CD0u, 0x112CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CD8u;
label_112cd8:
    // 0x112cd8: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x112cd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x112cdc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x112cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ce0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x112ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x112ce4: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x112CE4u;
    SET_GPR_U32(ctx, 31, 0x112CECu);
    ctx->pc = 0x112CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CE4u;
    // 0x112ce8: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x112CE4u, 0x112CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CECu;
label_112cec:
    // 0x112cec: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x112cecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x112cf0: 0x1e20ffe5  bgtz        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x112CF0u;
    {
        const bool branch_taken_0x112cf0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x112CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CF0u;
        // 0x112cf4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cf0) {
            ctx->pc = 0x112C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112c88;
        }
    }
    ctx->pc = 0x112CF8u;
}
