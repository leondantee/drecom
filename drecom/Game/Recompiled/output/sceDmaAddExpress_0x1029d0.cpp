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

// Function: sceDmaAddExpress
// Address: 0x1029d0 - 0x102a18
void sceDmaAddExpress_0x1029d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddExpress_0x1029d0");
#endif

    switch (ctx->pc) {
        case 0x1029e4u: goto label_1029e4;
        default: break;
    }

    ctx->pc = 0x1029d0u;

    // 0x1029d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1029d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1029d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1029d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1029d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1029d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1029dc: 0xc040a54  jal         func_102950
    ctx->pc = 0x1029DCu;
    SET_GPR_U32(ctx, 31, 0x1029E4u);
    ctx->pc = 0x1029E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1029DCu;
    // 0x1029e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102950u, 0x1029DCu, 0x1029E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029E4u;
label_1029e4:
    // 0x1029e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1029e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029e8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1029E8u;
    {
        const bool branch_taken_0x1029e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1029ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029E8u;
        // 0x1029ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1029e8) {
            ctx->pc = 0x102A0Cu;
            goto label_102a0c;
        }
    }
    ctx->pc = 0x1029F0u;
    // 0x1029f0: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x1029f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1029f4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1029f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1029f8: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x1029f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x1029fc: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x1029fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x102a00: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x102a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x102a04: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x102a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x102a08: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x102a08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_102a0c:
    // 0x102a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102a10: 0x3e00008  jr          $ra
    ctx->pc = 0x102A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A10u;
        // 0x102a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102A18u;
}
