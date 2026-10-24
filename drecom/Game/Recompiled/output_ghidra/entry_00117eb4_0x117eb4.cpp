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

// Function: entry_00117eb4
// Address: 0x117eb4 - 0x117ef8
void entry_00117eb4_0x117eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117eb4_0x117eb4");
#endif

    switch (ctx->pc) {
        case 0x117ee4u: goto label_117ee4;
        default: break;
    }

    ctx->pc = 0x117eb4u;

    // 0x117eb4: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x117eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x117eb8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x117eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x117ebc: 0x24637260  addiu       $v1, $v1, 0x7260
    ctx->pc = 0x117ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29280));
    // 0x117ec0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x117ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x117ec4: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x117ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x117ec8: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x117ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x117ecc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x117eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x117ed0: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x117ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x117ed4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x117ED4u;
    {
        const bool branch_taken_0x117ed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117ED4u;
        // 0x117ed8: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ed4) {
            ctx->pc = 0x117EF8u;
            return;
        }
    }
    ctx->pc = 0x117EDCu;
    // 0x117edc: 0xc084c48  jal         func_213120
    ctx->pc = 0x117EDCu;
    SET_GPR_U32(ctx, 31, 0x117EE4u);
    ctx->pc = 0x117EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EDCu;
    // 0x117ee0: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213120u, 0x117EDCu, 0x117EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EE4u;
label_117ee4:
    // 0x117ee4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117EE4u;
    {
        const bool branch_taken_0x117ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EE4u;
        // 0x117ee8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ee4) {
            ctx->pc = 0x117EFCu;
            return;
        }
    }
    ctx->pc = 0x117EECu;
    // 0x117eec: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x117eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117ef0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x117ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x117ef4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x117ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x117ef8u;
}
