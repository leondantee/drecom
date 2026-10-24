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

// Function: entry_0010bda4
// Address: 0x10bda4 - 0x10be14
void entry_0010bda4_0x10bda4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bda4_0x10bda4");
#endif

    switch (ctx->pc) {
        case 0x10bdd0u: goto label_10bdd0;
        case 0x10bdf0u: goto label_10bdf0;
        default: break;
    }

    ctx->pc = 0x10bda4u;

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
            return;
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
            return;
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
}
