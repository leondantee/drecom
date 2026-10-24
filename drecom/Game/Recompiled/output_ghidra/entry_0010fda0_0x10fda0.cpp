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

// Function: entry_0010fda0
// Address: 0x10fda0 - 0x10fdfc
void entry_0010fda0_0x10fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fda0_0x10fda0");
#endif

    switch (ctx->pc) {
        case 0x10fdacu: goto label_10fdac;
        case 0x10fde0u: goto label_10fde0;
        case 0x10fdf4u: goto label_10fdf4;
        default: break;
    }

    ctx->pc = 0x10fda0u;

    // 0x10fda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fda4: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10FDA4u;
    SET_GPR_U32(ctx, 31, 0x10FDACu);
    ctx->pc = 0x10FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDA4u;
    // 0x10fda8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10FDACu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FDACu) { return; }
    ctx->pc = 0x10FDACu;
label_10fdac:
    // 0x10fdac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10fdb0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10fdb4: 0x24513c00  addiu       $s1, $v0, 0x3C00
    ctx->pc = 0x10fdb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15360));
    // 0x10fdb8: 0x24843e80  addiu       $a0, $a0, 0x3E80
    ctx->pc = 0x10fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16000));
    // 0x10fdbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10fdbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdc0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10fdc4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x10fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10fdc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fdc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdcc: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x10fdccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10fdd0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x10fdd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdd4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10fdd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10fdd8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10FDD8u;
    SET_GPR_U32(ctx, 31, 0x10FDE0u);
    ctx->pc = 0x10FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDD8u;
    // 0x10fddc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10FDE0u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FDE0u) { return; }
    ctx->pc = 0x10FDE0u;
label_10fde0:
    // 0x10fde0: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FDE0u;
    {
        const bool branch_taken_0x10fde0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10fde0) {
            ctx->pc = 0x10FDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FDE0u;
            // 0x10fde4: 0x8ec245a8  lw          $v0, 0x45A8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FDFCu;
            return;
        }
    }
    ctx->pc = 0x10FDE8u;
    // 0x10fde8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10fdec: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10FDECu;
    SET_GPR_U32(ctx, 31, 0x10FDF4u);
    ctx->pc = 0x10FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDECu;
    // 0x10fdf0: 0x8c4445b8  lw          $a0, 0x45B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10FDF4u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FDF4u) { return; }
    ctx->pc = 0x10FDF4u;
label_10fdf4:
    // 0x10fdf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10FDF4u;
    {
        const bool branch_taken_0x10fdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDF4u;
        // 0x10fdf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdf4) {
            ctx->pc = 0x10FE28u;
            return;
        }
    }
    ctx->pc = 0x10FDFCu;
}
