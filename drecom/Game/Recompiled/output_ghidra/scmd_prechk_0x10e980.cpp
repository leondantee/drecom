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

// Function: scmd_prechk
// Address: 0x10e980 - 0x10eaf0
void scmd_prechk_0x10e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scmd_prechk_0x10e980");
#endif

    switch (ctx->pc) {
        case 0x10e9a0u: goto label_10e9a0;
        case 0x10e9acu: goto label_10e9ac;
        case 0x10e9d8u: goto label_10e9d8;
        case 0x10e9fcu: goto label_10e9fc;
        case 0x10ea04u: goto label_10ea04;
        case 0x10ea18u: goto label_10ea18;
        case 0x10ea28u: goto label_10ea28;
        case 0x10ea40u: goto label_10ea40;
        case 0x10ea48u: goto label_10ea48;
        case 0x10ea68u: goto label_10ea68;
        case 0x10ea7cu: goto label_10ea7c;
        case 0x10eaa0u: goto label_10eaa0;
        case 0x10eaa8u: goto label_10eaa8;
        default: break;
    }

    ctx->pc = 0x10e980u;

    // 0x10e980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e984: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e98c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e990: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10e994: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10e994u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10e998: 0xc043506  jal         func_10D418
    ctx->pc = 0x10E998u;
    SET_GPR_U32(ctx, 31, 0x10E9A0u);
    ctx->pc = 0x10E99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E998u;
    // 0x10e99c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D418u, 0x10E998u, 0x10E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9A0u;
label_10e9a0:
    // 0x10e9a0: 0x8e0445bc  lw          $a0, 0x45BC($s0)
    ctx->pc = 0x10e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17852)));
    // 0x10e9a4: 0xc084a9c  jal         func_212A70
    ctx->pc = 0x10E9A4u;
    SET_GPR_U32(ctx, 31, 0x10E9ACu);
    ctx->pc = 0x212A70u;
    {
        ctx->pc = 0x10E9ACu;
        ps2_syscalls::PollSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E9ACu) { return; }
    ctx->pc = 0x10E9ACu;
label_10e9ac:
    // 0x10e9ac: 0x8e0345bc  lw          $v1, 0x45BC($s0)
    ctx->pc = 0x10e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17852)));
    // 0x10e9b0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10E9B0u;
    {
        const bool branch_taken_0x10e9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9B0u;
        // 0x10e9b4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9b0) {
            ctx->pc = 0x10E9E0u;
            goto label_10e9e0;
        }
    }
    ctx->pc = 0x10E9B8u;
    // 0x10e9b8: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17832)));
    // 0x10e9bc: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10E9BCu;
    {
        const bool branch_taken_0x10e9bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9BCu;
        // 0x10e9c0: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9bc) {
            ctx->pc = 0x10EA18u;
            goto label_10ea18;
        }
    }
    ctx->pc = 0x10E9C4u;
    // 0x10e9c4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10e9c8: 0x8c4645ac  lw          $a2, 0x45AC($v0)
    ctx->pc = 0x10e9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17836)));
    // 0x10e9cc: 0x2484cda0  addiu       $a0, $a0, -0x3260
    ctx->pc = 0x10e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954400));
    // 0x10e9d0: 0xc046760  jal         func_119D80
    ctx->pc = 0x10E9D0u;
    SET_GPR_U32(ctx, 31, 0x10E9D8u);
    ctx->pc = 0x10E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9D0u;
    // 0x10e9d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10E9D8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E9D8u) { return; }
    ctx->pc = 0x10E9D8u;
label_10e9d8:
    // 0x10e9d8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x10E9D8u;
    {
        const bool branch_taken_0x10e9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9D8u;
        // 0x10e9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9d8) {
            ctx->pc = 0x10EAD8u;
            goto label_10ead8;
        }
    }
    ctx->pc = 0x10E9E0u;
label_10e9e0:
    // 0x10e9e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10e9e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10e9e8: 0x8c443b80  lw          $a0, 0x3B80($v0)
    ctx->pc = 0x10e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B3B80u));
    // 0x10e9ec: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x10e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x10e9f0: 0xac7145ac  sw          $s1, 0x45AC($v1)
    ctx->pc = 0x10e9f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3845ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845ACu, _value); } while (0);
    // 0x10e9f4: 0xc084a48  jal         func_212920
    ctx->pc = 0x10E9F4u;
    SET_GPR_U32(ctx, 31, 0x10E9FCu);
    ctx->pc = 0x10E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9F4u;
    // 0x10e9f8: 0x24a53b88  addiu       $a1, $a1, 0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212920u;
    {
        ctx->pc = 0x10E9FCu;
        ps2_syscalls::ReferThreadStatus(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E9FCu) { return; }
    ctx->pc = 0x10E9FCu;
label_10e9fc:
    // 0x10e9fc: 0xc043a46  jal         func_10E918
    ctx->pc = 0x10E9FCu;
    SET_GPR_U32(ctx, 31, 0x10EA04u);
    ctx->pc = 0x10EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9FCu;
    // 0x10ea00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E918u, 0x10E9FCu, 0x10EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA04u;
label_10ea04:
    // 0x10ea04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EA04u;
    {
        const bool branch_taken_0x10ea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA04u;
        // 0x10ea08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea04) {
            ctx->pc = 0x10EA20u;
            goto label_10ea20;
        }
    }
    ctx->pc = 0x10EA0Cu;
    // 0x10ea0c: 0x8e0445bc  lw          $a0, 0x45BC($s0)
    ctx->pc = 0x10ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17852)));
    // 0x10ea10: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10EA10u;
    SET_GPR_U32(ctx, 31, 0x10EA18u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10EA18u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EA18u) { return; }
    ctx->pc = 0x10EA18u;
label_10ea18:
    // 0x10ea18: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10EA18u;
    {
        const bool branch_taken_0x10ea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA18u;
        // 0x10ea1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea18) {
            ctx->pc = 0x10EAD8u;
            goto label_10ead8;
        }
    }
    ctx->pc = 0x10EA20u;
label_10ea20:
    // 0x10ea20: 0xc0854d2  jal         func_215348
    ctx->pc = 0x10EA20u;
    SET_GPR_U32(ctx, 31, 0x10EA28u);
    ctx->pc = 0x10EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA20u;
    // 0x10ea24: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x10EA28u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EA28u) { return; }
    ctx->pc = 0x10EA28u;
label_10ea28:
    // 0x10ea28: 0x8e4245dc  lw          $v0, 0x45DC($s2)
    ctx->pc = 0x10ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17884)));
    // 0x10ea2c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x10EA2Cu;
    {
        const bool branch_taken_0x10ea2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA2Cu;
        // 0x10ea30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea2c) {
            ctx->pc = 0x10EAD8u;
            goto label_10ead8;
        }
    }
    ctx->pc = 0x10EA34u;
    // 0x10ea34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10EA34u;
    {
        const bool branch_taken_0x10ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA34u;
        // 0x10ea38: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea34) {
            ctx->pc = 0x10EA64u;
            goto label_10ea64;
        }
    }
    ctx->pc = 0x10EA3Cu;
    // 0x10ea3c: 0x0  nop
    ctx->pc = 0x10ea3cu;
    // NOP
label_10ea40:
    // 0x10ea40: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x10ea44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ea48:
    // 0x10ea48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10ea4c: 0x0  nop
    ctx->pc = 0x10ea4cu;
    // NOP
    // 0x10ea50: 0x0  nop
    ctx->pc = 0x10ea50u;
    // NOP
    // 0x10ea54: 0x0  nop
    ctx->pc = 0x10ea54u;
    // NOP
    // 0x10ea58: 0x0  nop
    ctx->pc = 0x10ea58u;
    // NOP
    // 0x10ea5c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10EA5Cu;
    {
        const bool branch_taken_0x10ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ea5c) {
            ctx->pc = 0x10EA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ea48;
        }
    }
    ctx->pc = 0x10EA64u;
label_10ea64:
    // 0x10ea64: 0x26304fe0  addiu       $s0, $s1, 0x4FE0
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20448));
label_10ea68:
    // 0x10ea68: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10ea68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10ea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea70: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x10ea70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x10ea74: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10EA74u;
    SET_GPR_U32(ctx, 31, 0x10EA7Cu);
    ctx->pc = 0x10EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA74u;
    // 0x10ea78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10EA7Cu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EA7Cu) { return; }
    ctx->pc = 0x10EA7Cu;
label_10ea7c:
    // 0x10ea7c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10EA7Cu;
    {
        const bool branch_taken_0x10ea7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10ea7c) {
            ctx->pc = 0x10EA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EA7Cu;
            // 0x10ea80: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EACCu;
            goto label_10eacc;
        }
    }
    ctx->pc = 0x10EA84u;
    // 0x10ea84: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10ea88: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3845A8u));
    // 0x10ea8c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EA8Cu;
    {
        const bool branch_taken_0x10ea8c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA8Cu;
        // 0x10ea90: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea8c) {
            ctx->pc = 0x10EAA4u;
            goto label_10eaa4;
        }
    }
    ctx->pc = 0x10EA94u;
    // 0x10ea94: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10ea98: 0xc046760  jal         func_119D80
    ctx->pc = 0x10EA98u;
    SET_GPR_U32(ctx, 31, 0x10EAA0u);
    ctx->pc = 0x10EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA98u;
    // 0x10ea9c: 0x2484cdc8  addiu       $a0, $a0, -0x3238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10EAA0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EAA0u) { return; }
    ctx->pc = 0x10EAA0u;
label_10eaa0:
    // 0x10eaa0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_10eaa4:
    // 0x10eaa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10eaa8:
    // 0x10eaa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10eaac: 0x0  nop
    ctx->pc = 0x10eaacu;
    // NOP
    // 0x10eab0: 0x0  nop
    ctx->pc = 0x10eab0u;
    // NOP
    // 0x10eab4: 0x0  nop
    ctx->pc = 0x10eab4u;
    // NOP
    // 0x10eab8: 0x0  nop
    ctx->pc = 0x10eab8u;
    // NOP
    // 0x10eabc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10EABCu;
    {
        const bool branch_taken_0x10eabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10eabc) {
            ctx->pc = 0x10EAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10eaa8;
        }
    }
    ctx->pc = 0x10EAC4u;
    // 0x10eac4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x10EAC4u;
    {
        const bool branch_taken_0x10eac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAC4u;
        // 0x10eac8: 0x26304fe0  addiu       $s0, $s1, 0x4FE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eac4) {
            ctx->pc = 0x10EA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ea68;
        }
    }
    ctx->pc = 0x10EACCu;
label_10eacc:
    // 0x10eacc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x10EACCu;
    {
        const bool branch_taken_0x10eacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EACCu;
        // 0x10ead0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eacc) {
            ctx->pc = 0x10EA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ea40;
        }
    }
    ctx->pc = 0x10EAD4u;
    // 0x10ead4: 0xae4045dc  sw          $zero, 0x45DC($s2)
    ctx->pc = 0x10ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17884), GPR_U32(ctx, 0));
label_10ead8:
    // 0x10ead8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10ead8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10eadc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10eadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eae0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10eae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10eae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eae8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAE8u;
        // 0x10eaec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EAF0u;
}
