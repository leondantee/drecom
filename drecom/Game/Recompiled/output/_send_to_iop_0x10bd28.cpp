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

// Function: _send_to_iop
// Address: 0x10bd28 - 0x10be58
void _send_to_iop_0x10bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_send_to_iop_0x10bd28");
#endif

    switch (ctx->pc) {
        case 0x10bd80u: goto label_10bd80;
        case 0x10bd9cu: goto label_10bd9c;
        case 0x10bdd0u: goto label_10bdd0;
        case 0x10bdf0u: goto label_10bdf0;
        case 0x10be14u: goto label_10be14;
        default: break;
    }

    ctx->pc = 0x10bd28u;

    // 0x10bd28: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x10bd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x10bd2c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x10bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10bd30: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x10bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x10bd34: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x10bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10bd38: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x10bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x10bd3c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10bd3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10bd40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd44: 0x72821018  mult1       $v0, $s4, $v0
    ctx->pc = 0x10bd44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10bd48: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x10bd48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10bd4c: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x10bd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x10bd50: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x10bd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x10bd54: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x10bd54u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x10bd58: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10bd5c: 0x26b23990  addiu       $s2, $s5, 0x3990
    ctx->pc = 0x10bd5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 14736));
    // 0x10bd60: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x10bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x10bd64: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x10bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x10bd68: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x10bd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bd6c: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x10bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x10bd70: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10bd70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd74: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x10bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10bd78: 0xc084b70  jal         func_212DC0
    ctx->pc = 0x10BD78u;
    SET_GPR_U32(ctx, 31, 0x10BD80u);
    ctx->pc = 0x10BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD78u;
    // 0x10bd7c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DC0u;
    {
        ctx->pc = 0x10BD80u;
        ps2_stubs::sceSifDmaStat(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BD80u) { return; }
    ctx->pc = 0x10BD80u;
label_10bd80:
    // 0x10bd80: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BD80u;
    {
        const bool branch_taken_0x10bd80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD80u;
        // 0x10bd84: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd80) {
            ctx->pc = 0x10BDA4u;
            goto label_10bda4;
        }
    }
    ctx->pc = 0x10BD88u;
    // 0x10bd88: 0x8c434564  lw          $v1, 0x4564($v0)
    ctx->pc = 0x10bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17764)));
    // 0x10bd8c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x10BD8Cu;
    {
        const bool branch_taken_0x10bd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD8Cu;
        // 0x10bd90: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd8c) {
            ctx->pc = 0x10BE34u;
            goto label_10be34;
        }
    }
    ctx->pc = 0x10BD94u;
    // 0x10bd94: 0xc046760  jal         func_119D80
    ctx->pc = 0x10BD94u;
    SET_GPR_U32(ctx, 31, 0x10BD9Cu);
    ctx->pc = 0x10BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD94u;
    // 0x10bd98: 0x2484ca90  addiu       $a0, $a0, -0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10BD9Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BD9Cu) { return; }
    ctx->pc = 0x10BD9Cu;
label_10bd9c:
    // 0x10bd9c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x10BD9Cu;
    {
        const bool branch_taken_0x10bd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD9Cu;
        // 0x10bda0: 0xdfbf0160  ld          $ra, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd9c) {
            ctx->pc = 0x10BE38u;
            goto label_10be38;
        }
    }
    ctx->pc = 0x10BDA4u;
label_10bda4:
    // 0x10bda4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10bda8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x10bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x10bdac: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x10bdacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10bdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10bdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bdb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10bdb8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x10bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10bdbc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x10bdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x10bdc0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x10bdc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10bdc8: 0xc084cb6  jal         func_2132D8
    ctx->pc = 0x10BDC8u;
    SET_GPR_U32(ctx, 31, 0x10BDD0u);
    ctx->pc = 0x10BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BDC8u;
    // 0x10bdcc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132D8u, 0x10BDC8u, 0x10BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BDD0u;
label_10bdd0:
    // 0x10bdd0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x10bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10bdd4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x10bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x10bdd8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x10bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x10bddc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bde0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x10bde4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bde8: 0xc084b78  jal         func_212DE0
    ctx->pc = 0x10BDE8u;
    SET_GPR_U32(ctx, 31, 0x10BDF0u);
    ctx->pc = 0x10BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BDE8u;
    // 0x10bdec: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DE0u;
    {
        ctx->pc = 0x10BDF0u;
        ps2_stubs::sceSifSetDma(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BDF0u) { return; }
    ctx->pc = 0x10BDF0u;
label_10bdf0:
    // 0x10bdf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bdf4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BDF4u;
    {
        const bool branch_taken_0x10bdf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDF4u;
        // 0x10bdf8: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bdf4) {
            ctx->pc = 0x10BE18u;
            goto label_10be18;
        }
    }
    ctx->pc = 0x10BDFCu;
    // 0x10bdfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10be00: 0x8c434564  lw          $v1, 0x4564($v0)
    ctx->pc = 0x10be00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x384564u));
    // 0x10be04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BE04u;
    {
        const bool branch_taken_0x10be04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE04u;
        // 0x10be08: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be04) {
            ctx->pc = 0x10BE14u;
            goto label_10be14;
        }
    }
    ctx->pc = 0x10BE0Cu;
    // 0x10be0c: 0xc046760  jal         func_119D80
    ctx->pc = 0x10BE0Cu;
    SET_GPR_U32(ctx, 31, 0x10BE14u);
    ctx->pc = 0x10BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE0Cu;
    // 0x10be10: 0x2484ca90  addiu       $a0, $a0, -0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10BE14u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BE14u) { return; }
    ctx->pc = 0x10BE14u;
label_10be14:
    // 0x10be14: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x10be14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_10be18:
    // 0x10be18: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x10be18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10be1c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x10be1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10be20: 0x72842018  mult1       $a0, $s4, $a0
    ctx->pc = 0x10be20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10be24: 0x26a23990  addiu       $v0, $s5, 0x3990
    ctx->pc = 0x10be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 14736));
    // 0x10be28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10be2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10be30: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x10be30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_10be34:
    // 0x10be34: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x10be34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_10be38:
    // 0x10be38: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x10be38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10be3c: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x10be3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10be40: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x10be40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10be44: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x10be44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10be48: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x10be48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10be4c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10be4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10be50: 0x3e00008  jr          $ra
    ctx->pc = 0x10BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE50u;
        // 0x10be54: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BE58u;
}
