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

// Function: entry_00106b40
// Address: 0x106b40 - 0x106ba4
void entry_00106b40_0x106b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106b40_0x106b40");
#endif

    switch (ctx->pc) {
        case 0x106b64u: goto label_106b64;
        default: break;
    }

    ctx->pc = 0x106b40u;

    // 0x106b40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x106b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b44: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x106b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x106b48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x106b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b4c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x106b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b50: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x106b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b54: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x106b54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b5c: 0xc041aea  jal         func_106BA8
    ctx->pc = 0x106B5Cu;
    SET_GPR_U32(ctx, 31, 0x106B64u);
    ctx->pc = 0x106B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B5Cu;
    // 0x106b60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BA8u, 0x106B5Cu, 0x106B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B64u;
label_106b64:
    // 0x106b64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106b68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x106b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x106b6c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x106b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x106b70: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x106b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x106b74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x106b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106b78: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x106b78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106b7c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x106b7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106b80: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x106b80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106b84: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106b84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106b88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106b88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106b8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106b90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x106B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B9Cu;
        // 0x106ba0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106BA4u;
}
