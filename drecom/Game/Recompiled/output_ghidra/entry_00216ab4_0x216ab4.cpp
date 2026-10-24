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

// Function: entry_00216ab4
// Address: 0x216ab4 - 0x216b18
void entry_00216ab4_0x216ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216ab4_0x216ab4");
#endif

    switch (ctx->pc) {
        case 0x216abcu: goto label_216abc;
        case 0x216ac8u: goto label_216ac8;
        case 0x216b00u: goto label_216b00;
        case 0x216b10u: goto label_216b10;
        default: break;
    }

    ctx->pc = 0x216ab4u;

    // 0x216ab4: 0xc0854a6  jal         func_215298
    ctx->pc = 0x216AB4u;
    SET_GPR_U32(ctx, 31, 0x216ABCu);
    ctx->pc = 0x216AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AB4u;
    // 0x216ab8: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x216ABCu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216ABCu) { return; }
    ctx->pc = 0x216ABCu;
label_216abc:
    // 0x216abc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x216abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ac0: 0xc0854a6  jal         func_215298
    ctx->pc = 0x216AC0u;
    SET_GPR_U32(ctx, 31, 0x216AC8u);
    ctx->pc = 0x216AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AC0u;
    // 0x216ac4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x216AC8u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216AC8u) { return; }
    ctx->pc = 0x216AC8u;
label_216ac8:
    // 0x216ac8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x216ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x216acc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x216accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x216ad0: 0x2451c880  addiu       $s1, $v0, -0x3780
    ctx->pc = 0x216ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x216ad4: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x216ad4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    // 0x216ad8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x216ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x216adc: 0x2484ca50  addiu       $a0, $a0, -0x35B0
    ctx->pc = 0x216adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953552));
    // 0x216ae0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x216ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ae4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x216ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ae8: 0x256b6920  addiu       $t3, $t3, 0x6920
    ctx->pc = 0x216ae8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 26912));
    // 0x216aec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x216aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216af0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x216af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x216af4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x216af4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216af8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x216AF8u;
    SET_GPR_U32(ctx, 31, 0x216B00u);
    ctx->pc = 0x216AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AF8u;
    // 0x216afc: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x216B00u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216B00u) { return; }
    ctx->pc = 0x216B00u;
label_216b00:
    // 0x216b00: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216B00u;
    {
        const bool branch_taken_0x216b00 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x216b00) {
            ctx->pc = 0x216B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216B00u;
            // 0x216b04: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216B18u;
            return;
        }
    }
    ctx->pc = 0x216B08u;
    // 0x216b08: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216B08u;
    SET_GPR_U32(ctx, 31, 0x216B10u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216B08u, 0x216B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B10u;
label_216b10:
    // 0x216b10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x216B10u;
    {
        const bool branch_taken_0x216b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B10u;
        // 0x216b14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b10) {
            ctx->pc = 0x216B34u;
            return;
        }
    }
    ctx->pc = 0x216B18u;
}
