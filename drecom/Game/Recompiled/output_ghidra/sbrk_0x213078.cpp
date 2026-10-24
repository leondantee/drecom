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

// Function: sbrk
// Address: 0x213078 - 0x213120
void sbrk_0x213078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sbrk_0x213078");
#endif

    switch (ctx->pc) {
        case 0x2130a0u: goto label_2130a0;
        case 0x2130d0u: goto label_2130d0;
        case 0x2130e4u: goto label_2130e4;
        default: break;
    }

    ctx->pc = 0x213078u;

    // 0x213078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x213078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21307c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x213080: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x213080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x213084: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x213084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x213088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21308c: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x21308cu;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x213090: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x213090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x213094: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x213094u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x213098: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x213098u;
    {
        const bool branch_taken_0x213098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213098u;
        // 0x21309c: 0x3c120039  lui         $s2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213098) {
            ctx->pc = 0x2130C4u;
            goto label_2130c4;
        }
    }
    ctx->pc = 0x2130A0u;
label_2130a0:
    // 0x2130a0: 0x42000039  di
    ctx->pc = 0x2130a0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2130a4: 0x40f  sync.p
    ctx->pc = 0x2130a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2130a8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2130a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2130ac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2130acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2130b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2130b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2130b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2130B4u;
    {
        const bool branch_taken_0x2130b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2130b4) {
            ctx->pc = 0x2130A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2130a0;
        }
    }
    ctx->pc = 0x2130BCu;
    // 0x2130bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2130BCu;
    {
        const bool branch_taken_0x2130bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130BCu;
        // 0x2130c0: 0x8e42aac4  lw          $v0, -0x553C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130bc) {
            ctx->pc = 0x2130C8u;
            goto label_2130c8;
        }
    }
    ctx->pc = 0x2130C4u;
label_2130c4:
    // 0x2130c4: 0x8e42aac4  lw          $v0, -0x553C($s2)
    ctx->pc = 0x2130c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945476)));
label_2130c8:
    // 0x2130c8: 0xc084a80  jal         func_212A00
    ctx->pc = 0x2130C8u;
    SET_GPR_U32(ctx, 31, 0x2130D0u);
    ctx->pc = 0x2130CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130C8u;
    // 0x2130cc: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A00u;
    {
        ctx->pc = 0x2130D0u;
        ps2_syscalls::EndOfHeap(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2130D0u) { return; }
    ctx->pc = 0x2130D0u;
label_2130d0:
    // 0x2130d0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2130d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2130d4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2130D4u;
    {
        const bool branch_taken_0x2130d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2130d4) {
            ctx->pc = 0x2130D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2130D4u;
            // 0x2130d8: 0x8e42aac4  lw          $v0, -0x553C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2130FCu;
            goto label_2130fc;
        }
    }
    ctx->pc = 0x2130DCu;
    // 0x2130dc: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x2130DCu;
    SET_GPR_U32(ctx, 31, 0x2130E4u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x2130DCu, 0x2130E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130E4u;
label_2130e4:
    // 0x2130e4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2130e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2130e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2130e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2130ec: 0x42000038  ei
    ctx->pc = 0x2130ecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2130f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2130f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2130f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2130F4u;
    {
        const bool branch_taken_0x2130f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130F4u;
        // 0x2130f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130f4) {
            ctx->pc = 0x213108u;
            goto label_213108;
        }
    }
    ctx->pc = 0x2130FCu;
label_2130fc:
    // 0x2130fc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2130FCu;
    {
        const bool branch_taken_0x2130fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x213100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130FCu;
        // 0x213100: 0xae50aac4  sw          $s0, -0x553C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294945476), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130fc) {
            ctx->pc = 0x213108u;
            goto label_213108;
        }
    }
    ctx->pc = 0x213104u;
    // 0x213104: 0x42000038  ei
    ctx->pc = 0x213104u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_213108:
    // 0x213108: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x213108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21310c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21310cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213110: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x213110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213118: 0x3e00008  jr          $ra
    ctx->pc = 0x213118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213118u;
        // 0x21311c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213120u;
}
