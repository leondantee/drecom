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

// Function: entry_001161c4
// Address: 0x1161c4 - 0x116238
void entry_001161c4_0x1161c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001161c4_0x1161c4");
#endif

    switch (ctx->pc) {
        case 0x1161ccu: goto label_1161cc;
        case 0x116234u: goto label_116234;
        default: break;
    }

    ctx->pc = 0x1161c4u;

    // 0x1161c4: 0xc046348  jal         func_118D20
    ctx->pc = 0x1161C4u;
    SET_GPR_U32(ctx, 31, 0x1161CCu);
    ctx->pc = 0x1161C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161C4u;
    // 0x1161c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x1161C4u, 0x1161CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161CCu;
label_1161cc:
    // 0x1161cc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1161ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1161d0: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x1161d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x1161d4: 0x12200102  beqz        $s1, . + 4 + (0x102 << 2)
    ctx->pc = 0x1161D4u;
    {
        const bool branch_taken_0x1161d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161D4u;
        // 0x1161d8: 0x8fb50058  lw          $s5, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161d4) {
            ctx->pc = 0x1165E0u;
            return;
        }
    }
    ctx->pc = 0x1161DCu;
    // 0x1161dc: 0x12400100  beqz        $s2, . + 4 + (0x100 << 2)
    ctx->pc = 0x1161DCu;
    {
        const bool branch_taken_0x1161dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161DCu;
        // 0x1161e0: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161dc) {
            ctx->pc = 0x1165E0u;
            return;
        }
    }
    ctx->pc = 0x1161E4u;
    // 0x1161e4: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x1161e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161e8: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x1161e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x1161ec: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1161f0: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x1161F0u;
    {
        const bool branch_taken_0x1161f0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1161F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161F0u;
        // 0x1161f4: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161f0) {
            ctx->pc = 0x116284u;
            return;
        }
    }
    ctx->pc = 0x1161F8u;
    // 0x1161f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1161f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1161fc: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x1161fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x116200: 0x2442da08  addiu       $v0, $v0, -0x25F8
    ctx->pc = 0x116200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957576));
    // 0x116204: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x116204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x116208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11620c: 0x138103  sra         $s0, $s3, 4
    ctx->pc = 0x11620cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
    // 0x116210: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x116210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x116214: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116214u;
    {
        const bool branch_taken_0x116214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116214u;
        // 0x116218: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116214) {
            ctx->pc = 0x116238u;
            return;
        }
    }
    ctx->pc = 0x11621Cu;
    // 0x11621c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x116220: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116224: 0xdc45daf0  ld          $a1, -0x2510($v0)
    ctx->pc = 0x116224u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3ADAF0u));
    // 0x116228: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x116228u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x11622c: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x11622Cu;
    SET_GPR_U32(ctx, 31, 0x116234u);
    ctx->pc = 0x116230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11622Cu;
    // 0x116230: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x11622Cu, 0x116234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116234u;
label_116234:
    // 0x116234: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x116234u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116238u;
}
