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

// Function: PowerOffCB
// Address: 0x10d640 - 0x10d788
void PowerOffCB_0x10d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PowerOffCB_0x10d640");
#endif

    switch (ctx->pc) {
        case 0x10d664u: goto label_10d664;
        case 0x10d678u: goto label_10d678;
        case 0x10d680u: goto label_10d680;
        case 0x10d6b8u: goto label_10d6b8;
        case 0x10d6ccu: goto label_10d6cc;
        case 0x10d6f0u: goto label_10d6f0;
        case 0x10d6f8u: goto label_10d6f8;
        case 0x10d764u: goto label_10d764;
        default: break;
    }

    ctx->pc = 0x10d640u;

    // 0x10d640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10d644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d648: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10d64c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10d64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10d650: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10d650u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x10d654: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10d658: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10d65c: 0xc0854d2  jal         func_215348
    ctx->pc = 0x10D65Cu;
    SET_GPR_U32(ctx, 31, 0x10D664u);
    ctx->pc = 0x10D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D65Cu;
    // 0x10d660: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x10D664u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D664u) { return; }
    ctx->pc = 0x10D664u;
label_10d664:
    // 0x10d664: 0x8e4245cc  lw          $v0, 0x45CC($s2)
    ctx->pc = 0x10d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17868)));
    // 0x10d668: 0x441002f  bgez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x10D668u;
    {
        const bool branch_taken_0x10d668 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D668u;
        // 0x10d66c: 0x3c13003b  lui         $s3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d668) {
            ctx->pc = 0x10D728u;
            goto label_10d728;
        }
    }
    ctx->pc = 0x10D670u;
    // 0x10d670: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10D670u;
    {
        const bool branch_taken_0x10d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D670u;
        // 0x10d674: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d670) {
            ctx->pc = 0x10D6B4u;
            goto label_10d6b4;
        }
    }
    ctx->pc = 0x10D678u;
label_10d678:
    // 0x10d678: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x10d678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10d67c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10d680:
    // 0x10d680: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d684: 0x0  nop
    ctx->pc = 0x10d684u;
    // NOP
    // 0x10d688: 0x0  nop
    ctx->pc = 0x10d688u;
    // NOP
    // 0x10d68c: 0x0  nop
    ctx->pc = 0x10d68cu;
    // NOP
    // 0x10d690: 0x0  nop
    ctx->pc = 0x10d690u;
    // NOP
    // 0x10d694: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D694u;
    {
        const bool branch_taken_0x10d694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d694) {
            ctx->pc = 0x10D680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d680;
        }
    }
    ctx->pc = 0x10D69Cu;
    // 0x10d69c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10d69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6a0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x10d6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x10d6a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D6A4u;
    {
        const bool branch_taken_0x10d6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6A4u;
        // 0x10d6a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6a4) {
            ctx->pc = 0x10D6B4u;
            goto label_10d6b4;
        }
    }
    ctx->pc = 0x10D6ACu;
    // 0x10d6ac: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10D6ACu;
    {
        const bool branch_taken_0x10d6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6ACu;
        // 0x10d6b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6ac) {
            ctx->pc = 0x10D76Cu;
            goto label_10d76c;
        }
    }
    ctx->pc = 0x10D6B4u;
label_10d6b4:
    // 0x10d6b4: 0x26703c60  addiu       $s0, $s3, 0x3C60
    ctx->pc = 0x10d6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 15456));
label_10d6b8:
    // 0x10d6b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10d6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6c0: 0x34a50596  ori         $a1, $a1, 0x596
    ctx->pc = 0x10d6c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1430);
    // 0x10d6c4: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10D6C4u;
    SET_GPR_U32(ctx, 31, 0x10D6CCu);
    ctx->pc = 0x10D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6C4u;
    // 0x10d6c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10D6CCu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D6CCu) { return; }
    ctx->pc = 0x10D6CCu;
label_10d6cc:
    // 0x10d6cc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10D6CCu;
    {
        const bool branch_taken_0x10d6cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10d6cc) {
            ctx->pc = 0x10D6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D6CCu;
            // 0x10d6d0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D71Cu;
            goto label_10d71c;
        }
    }
    ctx->pc = 0x10D6D4u;
    // 0x10d6d4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10d6d8: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3845A8u));
    // 0x10d6dc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D6DCu;
    {
        const bool branch_taken_0x10d6dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6DCu;
        // 0x10d6e0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6dc) {
            ctx->pc = 0x10D6F4u;
            goto label_10d6f4;
        }
    }
    ctx->pc = 0x10D6E4u;
    // 0x10d6e4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10d6e8: 0xc046760  jal         func_119D80
    ctx->pc = 0x10D6E8u;
    SET_GPR_U32(ctx, 31, 0x10D6F0u);
    ctx->pc = 0x10D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6E8u;
    // 0x10d6ec: 0x2484cc10  addiu       $a0, $a0, -0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10D6F0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D6F0u) { return; }
    ctx->pc = 0x10D6F0u;
label_10d6f0:
    // 0x10d6f0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_10d6f4:
    // 0x10d6f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10d6f8:
    // 0x10d6f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d6fc: 0x0  nop
    ctx->pc = 0x10d6fcu;
    // NOP
    // 0x10d700: 0x0  nop
    ctx->pc = 0x10d700u;
    // NOP
    // 0x10d704: 0x0  nop
    ctx->pc = 0x10d704u;
    // NOP
    // 0x10d708: 0x0  nop
    ctx->pc = 0x10d708u;
    // NOP
    // 0x10d70c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D70Cu;
    {
        const bool branch_taken_0x10d70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d70c) {
            ctx->pc = 0x10D6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d6f8;
        }
    }
    ctx->pc = 0x10D714u;
    // 0x10d714: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x10D714u;
    {
        const bool branch_taken_0x10d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D714u;
        // 0x10d718: 0x26703c60  addiu       $s0, $s3, 0x3C60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 15456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d714) {
            ctx->pc = 0x10D6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d6b8;
        }
    }
    ctx->pc = 0x10D71Cu;
label_10d71c:
    // 0x10d71c: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x10D71Cu;
    {
        const bool branch_taken_0x10d71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D71Cu;
        // 0x10d720: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d71c) {
            ctx->pc = 0x10D678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d678;
        }
    }
    ctx->pc = 0x10D724u;
    // 0x10d724: 0xae4045cc  sw          $zero, 0x45CC($s2)
    ctx->pc = 0x10d724u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17868), GPR_U32(ctx, 0));
label_10d728:
    // 0x10d728: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10d728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10d72c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x10d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10d730: 0x24453c88  addiu       $a1, $v0, 0x3C88
    ctx->pc = 0x10d730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15496));
    // 0x10d734: 0x3c0b0011  lui         $t3, 0x11
    ctx->pc = 0x10d734u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17 << 16));
    // 0x10d738: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x10d738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x10d73c: 0x26643c60  addiu       $a0, $s3, 0x3C60
    ctx->pc = 0x10d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 15456));
    // 0x10d740: 0xac433c88  sw          $v1, 0x3C88($v0)
    ctx->pc = 0x10d740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3B3C88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3C88u, _value); } while (0);
    // 0x10d744: 0x256bd128  addiu       $t3, $t3, -0x2ED8
    ctx->pc = 0x10d744u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955304));
    // 0x10d748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10d748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d74c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10d750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10d754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d758: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10d758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d75c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10D75Cu;
    SET_GPR_U32(ctx, 31, 0x10D764u);
    ctx->pc = 0x10D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D75Cu;
    // 0x10d760: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10D764u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D764u) { return; }
    ctx->pc = 0x10D764u;
label_10d764:
    // 0x10d764: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10d764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d768: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x10d768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10d76c:
    // 0x10d76c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10d76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d770: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10d770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d774: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10d774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d778: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10d778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d77c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d77cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d780: 0x3e00008  jr          $ra
    ctx->pc = 0x10D780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D780u;
        // 0x10d784: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D788u;
}
