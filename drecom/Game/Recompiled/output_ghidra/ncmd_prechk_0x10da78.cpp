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

// Function: ncmd_prechk
// Address: 0x10da78 - 0x10dbe8
void ncmd_prechk_0x10da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ncmd_prechk_0x10da78");
#endif

    switch (ctx->pc) {
        case 0x10da98u: goto label_10da98;
        case 0x10daa4u: goto label_10daa4;
        case 0x10dad0u: goto label_10dad0;
        case 0x10daf4u: goto label_10daf4;
        case 0x10dafcu: goto label_10dafc;
        case 0x10db10u: goto label_10db10;
        case 0x10db20u: goto label_10db20;
        case 0x10db38u: goto label_10db38;
        case 0x10db40u: goto label_10db40;
        case 0x10db60u: goto label_10db60;
        case 0x10db74u: goto label_10db74;
        case 0x10db98u: goto label_10db98;
        case 0x10dba0u: goto label_10dba0;
        default: break;
    }

    ctx->pc = 0x10da78u;

    // 0x10da78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10da78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10da7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10da80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10da80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10da84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10da84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10da88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10da8c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10da8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10da90: 0xc043506  jal         func_10D418
    ctx->pc = 0x10DA90u;
    SET_GPR_U32(ctx, 31, 0x10DA98u);
    ctx->pc = 0x10DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA90u;
    // 0x10da94: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D418u, 0x10DA90u, 0x10DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA98u;
label_10da98:
    // 0x10da98: 0x8e0445b8  lw          $a0, 0x45B8($s0)
    ctx->pc = 0x10da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17848)));
    // 0x10da9c: 0xc084a9c  jal         func_212A70
    ctx->pc = 0x10DA9Cu;
    SET_GPR_U32(ctx, 31, 0x10DAA4u);
    ctx->pc = 0x212A70u;
    {
        ctx->pc = 0x10DAA4u;
        ps2_syscalls::PollSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DAA4u) { return; }
    ctx->pc = 0x10DAA4u;
label_10daa4:
    // 0x10daa4: 0x8e0345b8  lw          $v1, 0x45B8($s0)
    ctx->pc = 0x10daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17848)));
    // 0x10daa8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10DAA8u;
    {
        const bool branch_taken_0x10daa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAA8u;
        // 0x10daac: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10daa8) {
            ctx->pc = 0x10DAD8u;
            goto label_10dad8;
        }
    }
    ctx->pc = 0x10DAB0u;
    // 0x10dab0: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17832)));
    // 0x10dab4: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10DAB4u;
    {
        const bool branch_taken_0x10dab4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAB4u;
        // 0x10dab8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dab4) {
            ctx->pc = 0x10DB10u;
            goto label_10db10;
        }
    }
    ctx->pc = 0x10DABCu;
    // 0x10dabc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10dac0: 0x8c4645b0  lw          $a2, 0x45B0($v0)
    ctx->pc = 0x10dac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17840)));
    // 0x10dac4: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x10dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x10dac8: 0xc046760  jal         func_119D80
    ctx->pc = 0x10DAC8u;
    SET_GPR_U32(ctx, 31, 0x10DAD0u);
    ctx->pc = 0x10DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAC8u;
    // 0x10dacc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10DAD0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DAD0u) { return; }
    ctx->pc = 0x10DAD0u;
label_10dad0:
    // 0x10dad0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x10DAD0u;
    {
        const bool branch_taken_0x10dad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAD0u;
        // 0x10dad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dad0) {
            ctx->pc = 0x10DBD0u;
            goto label_10dbd0;
        }
    }
    ctx->pc = 0x10DAD8u;
label_10dad8:
    // 0x10dad8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10dadc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10dae0: 0x8c443b80  lw          $a0, 0x3B80($v0)
    ctx->pc = 0x10dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B3B80u));
    // 0x10dae4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x10dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x10dae8: 0xac7145b0  sw          $s1, 0x45B0($v1)
    ctx->pc = 0x10dae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3845B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845B0u, _value); } while (0);
    // 0x10daec: 0xc084a48  jal         func_212920
    ctx->pc = 0x10DAECu;
    SET_GPR_U32(ctx, 31, 0x10DAF4u);
    ctx->pc = 0x10DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAECu;
    // 0x10daf0: 0x24a53b88  addiu       $a1, $a1, 0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212920u;
    {
        ctx->pc = 0x10DAF4u;
        ps2_syscalls::ReferThreadStatus(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DAF4u) { return; }
    ctx->pc = 0x10DAF4u;
label_10daf4:
    // 0x10daf4: 0xc043a1e  jal         func_10E878
    ctx->pc = 0x10DAF4u;
    SET_GPR_U32(ctx, 31, 0x10DAFCu);
    ctx->pc = 0x10DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAF4u;
    // 0x10daf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E878u, 0x10DAF4u, 0x10DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAFCu;
label_10dafc:
    // 0x10dafc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DAFCu;
    {
        const bool branch_taken_0x10dafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAFCu;
        // 0x10db00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dafc) {
            ctx->pc = 0x10DB18u;
            goto label_10db18;
        }
    }
    ctx->pc = 0x10DB04u;
    // 0x10db04: 0x8e0445b8  lw          $a0, 0x45B8($s0)
    ctx->pc = 0x10db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17848)));
    // 0x10db08: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10DB08u;
    SET_GPR_U32(ctx, 31, 0x10DB10u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10DB10u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DB10u) { return; }
    ctx->pc = 0x10DB10u;
label_10db10:
    // 0x10db10: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10DB10u;
    {
        const bool branch_taken_0x10db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB10u;
        // 0x10db14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db10) {
            ctx->pc = 0x10DBD0u;
            goto label_10dbd0;
        }
    }
    ctx->pc = 0x10DB18u;
label_10db18:
    // 0x10db18: 0xc0854d2  jal         func_215348
    ctx->pc = 0x10DB18u;
    SET_GPR_U32(ctx, 31, 0x10DB20u);
    ctx->pc = 0x10DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB18u;
    // 0x10db1c: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x10DB20u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DB20u) { return; }
    ctx->pc = 0x10DB20u;
label_10db20:
    // 0x10db20: 0x8e4245d4  lw          $v0, 0x45D4($s2)
    ctx->pc = 0x10db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17876)));
    // 0x10db24: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x10DB24u;
    {
        const bool branch_taken_0x10db24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB24u;
        // 0x10db28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db24) {
            ctx->pc = 0x10DBD0u;
            goto label_10dbd0;
        }
    }
    ctx->pc = 0x10DB2Cu;
    // 0x10db2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10DB2Cu;
    {
        const bool branch_taken_0x10db2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB2Cu;
        // 0x10db30: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db2c) {
            ctx->pc = 0x10DB5Cu;
            goto label_10db5c;
        }
    }
    ctx->pc = 0x10DB34u;
    // 0x10db34: 0x0  nop
    ctx->pc = 0x10db34u;
    // NOP
label_10db38:
    // 0x10db38: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x10db3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10db40:
    // 0x10db40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10db40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10db44: 0x0  nop
    ctx->pc = 0x10db44u;
    // NOP
    // 0x10db48: 0x0  nop
    ctx->pc = 0x10db48u;
    // NOP
    // 0x10db4c: 0x0  nop
    ctx->pc = 0x10db4cu;
    // NOP
    // 0x10db50: 0x0  nop
    ctx->pc = 0x10db50u;
    // NOP
    // 0x10db54: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10DB54u;
    {
        const bool branch_taken_0x10db54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10db54) {
            ctx->pc = 0x10DB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10db40;
        }
    }
    ctx->pc = 0x10DB5Cu;
label_10db5c:
    // 0x10db5c: 0x26303e80  addiu       $s0, $s1, 0x3E80
    ctx->pc = 0x10db5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16000));
label_10db60:
    // 0x10db60: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10db60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10db64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10db64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db68: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x10db68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x10db6c: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10DB6Cu;
    SET_GPR_U32(ctx, 31, 0x10DB74u);
    ctx->pc = 0x10DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB6Cu;
    // 0x10db70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10DB74u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DB74u) { return; }
    ctx->pc = 0x10DB74u;
label_10db74:
    // 0x10db74: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10DB74u;
    {
        const bool branch_taken_0x10db74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10db74) {
            ctx->pc = 0x10DB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DB74u;
            // 0x10db78: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DBC4u;
            goto label_10dbc4;
        }
    }
    ctx->pc = 0x10DB7Cu;
    // 0x10db7c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10db80: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10db80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3845A8u));
    // 0x10db84: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DB84u;
    {
        const bool branch_taken_0x10db84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB84u;
        // 0x10db88: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db84) {
            ctx->pc = 0x10DB9Cu;
            goto label_10db9c;
        }
    }
    ctx->pc = 0x10DB8Cu;
    // 0x10db8c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10db90: 0xc046760  jal         func_119D80
    ctx->pc = 0x10DB90u;
    SET_GPR_U32(ctx, 31, 0x10DB98u);
    ctx->pc = 0x10DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB90u;
    // 0x10db94: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10DB98u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DB98u) { return; }
    ctx->pc = 0x10DB98u;
label_10db98:
    // 0x10db98: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10db98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_10db9c:
    // 0x10db9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10dba0:
    // 0x10dba0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10dba4: 0x0  nop
    ctx->pc = 0x10dba4u;
    // NOP
    // 0x10dba8: 0x0  nop
    ctx->pc = 0x10dba8u;
    // NOP
    // 0x10dbac: 0x0  nop
    ctx->pc = 0x10dbacu;
    // NOP
    // 0x10dbb0: 0x0  nop
    ctx->pc = 0x10dbb0u;
    // NOP
    // 0x10dbb4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10DBB4u;
    {
        const bool branch_taken_0x10dbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10dbb4) {
            ctx->pc = 0x10DBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dba0;
        }
    }
    ctx->pc = 0x10DBBCu;
    // 0x10dbbc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x10DBBCu;
    {
        const bool branch_taken_0x10dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBBCu;
        // 0x10dbc0: 0x26303e80  addiu       $s0, $s1, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbbc) {
            ctx->pc = 0x10DB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10db60;
        }
    }
    ctx->pc = 0x10DBC4u;
label_10dbc4:
    // 0x10dbc4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x10DBC4u;
    {
        const bool branch_taken_0x10dbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBC4u;
        // 0x10dbc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbc4) {
            ctx->pc = 0x10DB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10db38;
        }
    }
    ctx->pc = 0x10DBCCu;
    // 0x10dbcc: 0xae4045d4  sw          $zero, 0x45D4($s2)
    ctx->pc = 0x10dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17876), GPR_U32(ctx, 0));
label_10dbd0:
    // 0x10dbd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10dbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dbd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10dbd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dbd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10dbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dbdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x10DBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBE0u;
        // 0x10dbe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DBE8u;
}
