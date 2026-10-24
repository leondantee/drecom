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

// Function: entry_00102424
// Address: 0x102424 - 0x10245c
void entry_00102424_0x102424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102424_0x102424");
#endif

    ctx->pc = 0x102424u;

    // 0x102424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x102424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102428: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x102428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x10242c: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x10242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
    // 0x102430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x102434: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x102434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102438: 0x34420109  ori         $v0, $v0, 0x109
    ctx->pc = 0x102438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)265);
    // 0x10243c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10243cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102440: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x102440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x102444: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x102444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102448: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x102448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10244c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10244cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102454: 0x3e00008  jr          $ra
    ctx->pc = 0x102454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102454u;
        // 0x102458: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10245Cu;
}
