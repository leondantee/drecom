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

// Function: __sinit
// Address: 0x117280 - 0x11730c
void ps2___sinit_0x117280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_0x117280");
#endif

    switch (ctx->pc) {
        case 0x1172c0u: goto label_1172c0;
        case 0x1172d4u: goto label_1172d4;
        case 0x1172e8u: goto label_1172e8;
        default: break;
    }

    ctx->pc = 0x117280u;

    // 0x117280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117284: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x117284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x117288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11728c: 0x24427260  addiu       $v0, $v0, 0x7260
    ctx->pc = 0x11728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29280));
    // 0x117290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117294: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117298: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x117298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x11729c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1172a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1172a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1172a4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1172a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1172a8: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1172a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1172ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1172acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1172b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1172b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1172b8: 0xc045c2e  jal         func_1170B8
    ctx->pc = 0x1172B8u;
    SET_GPR_U32(ctx, 31, 0x1172C0u);
    ctx->pc = 0x1172BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172B8u;
    // 0x1172bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170B8u, 0x1172B8u, 0x1172C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172C0u;
label_1172c0:
    // 0x1172c0: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x1172c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x1172c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1172c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1172c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1172cc: 0xc045c2e  jal         func_1170B8
    ctx->pc = 0x1172CCu;
    SET_GPR_U32(ctx, 31, 0x1172D4u);
    ctx->pc = 0x1172D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172CCu;
    // 0x1172d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170B8u, 0x1172CCu, 0x1172D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172D4u;
label_1172d4:
    // 0x1172d4: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x1172d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x1172d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1172d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1172dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1172e0: 0xc045c2e  jal         func_1170B8
    ctx->pc = 0x1172E0u;
    SET_GPR_U32(ctx, 31, 0x1172E8u);
    ctx->pc = 0x1172E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172E0u;
    // 0x1172e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170B8u, 0x1172E0u, 0x1172E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172E8u;
label_1172e8:
    // 0x1172e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1172e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1172ec: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x1172ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x1172f0: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x1172f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x1172f4: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x1172f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x1172f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1172f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1172fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1172fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117304: 0x3e00008  jr          $ra
    ctx->pc = 0x117304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117304u;
        // 0x117308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11730Cu;
}
