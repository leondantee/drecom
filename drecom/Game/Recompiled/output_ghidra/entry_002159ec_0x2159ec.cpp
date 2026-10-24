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

// Function: entry_002159ec
// Address: 0x2159ec - 0x215a68
void entry_002159ec_0x2159ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002159ec_0x2159ec");
#endif

    switch (ctx->pc) {
        case 0x215a10u: goto label_215a10;
        case 0x215a50u: goto label_215a50;
        case 0x215a60u: goto label_215a60;
        default: break;
    }

    ctx->pc = 0x2159ecu;

    // 0x2159ec: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2159ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2159f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2159f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2159f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2159f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2159f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2159fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2159fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a00: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x215a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x215a04: 0x2484bc00  addiu       $a0, $a0, -0x4400
    ctx->pc = 0x215a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949888));
    // 0x215a08: 0xc08554c  jal         func_215530
    ctx->pc = 0x215A08u;
    SET_GPR_U32(ctx, 31, 0x215A10u);
    ctx->pc = 0x215A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A08u;
    // 0x215a0c: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215530u, 0x215A08u, 0x215A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A10u;
label_215a10:
    // 0x215a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a14: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x215A14u;
    {
        const bool branch_taken_0x215a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A14u;
        // 0x215a18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a14) {
            ctx->pc = 0x215AFCu;
            return;
        }
    }
    ctx->pc = 0x215A1Cu;
    // 0x215a1c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x215a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x215a20: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x215a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x215a24: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x215a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x215a28: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x215a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x215a2c: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x215a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x215a30: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x215a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x215a34: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x215A34u;
    {
        const bool branch_taken_0x215a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A34u;
        // 0x215a38: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a34) {
            ctx->pc = 0x215AC0u;
            return;
        }
    }
    ctx->pc = 0x215A3Cu;
    // 0x215a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215a40: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x215a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x215a44: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x215a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x215a48: 0xc084a88  jal         func_212A20
    ctx->pc = 0x215A48u;
    SET_GPR_U32(ctx, 31, 0x215A50u);
    ctx->pc = 0x215A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A48u;
    // 0x215a4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x215A50u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215A50u) { return; }
    ctx->pc = 0x215A50u;
label_215a50:
    // 0x215a50: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215A50u;
    {
        const bool branch_taken_0x215a50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x215A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A50u;
        // 0x215a54: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a50) {
            ctx->pc = 0x215A68u;
            return;
        }
    }
    ctx->pc = 0x215A58u;
    // 0x215a58: 0xc085576  jal         func_2155D8
    ctx->pc = 0x215A58u;
    SET_GPR_U32(ctx, 31, 0x215A60u);
    ctx->pc = 0x215A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A58u;
    // 0x215a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x215A58u, 0x215A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A60u;
label_215a60:
    // 0x215a60: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x215A60u;
    {
        const bool branch_taken_0x215a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A60u;
        // 0x215a64: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a60) {
            ctx->pc = 0x215AFCu;
            return;
        }
    }
    ctx->pc = 0x215A68u;
}
