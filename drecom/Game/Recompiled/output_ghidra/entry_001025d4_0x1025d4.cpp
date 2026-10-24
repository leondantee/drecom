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

// Function: entry_001025d4
// Address: 0x1025d4 - 0x102614
void entry_001025d4_0x1025d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001025d4_0x1025d4");
#endif

    ctx->pc = 0x1025d4u;

    // 0x1025d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1025d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1025d8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x1025d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1025dc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1025dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1025e0: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x1025e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
    // 0x1025e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1025e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1025e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1025e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1025ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1025ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1025f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1025f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1025f4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1025f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1025f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1025f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1025fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1025fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x102600: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x102600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102604: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10260c: 0x3e00008  jr          $ra
    ctx->pc = 0x10260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10260Cu;
        // 0x102610: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10260Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102614u;
}
