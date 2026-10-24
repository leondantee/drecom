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

// Function: entry_0010233c
// Address: 0x10233c - 0x102374
void entry_0010233c_0x10233c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010233c_0x10233c");
#endif

    ctx->pc = 0x10233cu;

    // 0x10233c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102340: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x102340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x102344: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x102344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
    // 0x102348: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10234c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10234cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102350: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x102350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x102354: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x102354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102358: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x102358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10235c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10235cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102360: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x102360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102364: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10236c: 0x3e00008  jr          $ra
    ctx->pc = 0x10236Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10236Cu;
        // 0x102370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10236Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102374u;
}
