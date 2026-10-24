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

// Function: fs_read_intr
// Address: 0x216920 - 0x2169b8
void fs_read_intr_0x216920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fs_read_intr_0x216920");
#endif

    switch (ctx->pc) {
        case 0x216950u: goto label_216950;
        case 0x216990u: goto label_216990;
        default: break;
    }

    ctx->pc = 0x216920u;

    // 0x216920: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x216920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216924: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x216924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x216928: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x216928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21692c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x216930: 0x58400010  blezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x216930u;
    {
        const bool branch_taken_0x216930 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x216930) {
            ctx->pc = 0x216934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216930u;
            // 0x216934: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216974u;
            goto label_216974;
        }
    }
    ctx->pc = 0x216938u;
    // 0x216938: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x216938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21693c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21693Cu;
    {
        const bool branch_taken_0x21693c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x216940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21693Cu;
        // 0x216940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21693c) {
            ctx->pc = 0x216970u;
            goto label_216970;
        }
    }
    ctx->pc = 0x216944u;
    // 0x216944: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x216944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x216948: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x216948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x21694c: 0x0  nop
    ctx->pc = 0x21694cu;
    // NOP
label_216950:
    // 0x216950: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x216950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x216954: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x216954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216958: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x216958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21695c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x21695cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x216960: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x216960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x216964: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x216964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x216968: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x216968u;
    {
        const bool branch_taken_0x216968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216968u;
        // 0x21696c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216968) {
            ctx->pc = 0x216950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216950;
        }
    }
    ctx->pc = 0x216970u;
label_216970:
    // 0x216970: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x216970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_216974:
    // 0x216974: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x216974u;
    {
        const bool branch_taken_0x216974 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x216974) {
            ctx->pc = 0x2169B0u;
            goto label_2169b0;
        }
    }
    ctx->pc = 0x21697Cu;
    // 0x21697c: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x21697cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x216980: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x216980u;
    {
        const bool branch_taken_0x216980 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x216984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216980u;
        // 0x216984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216980) {
            ctx->pc = 0x2169B0u;
            goto label_2169b0;
        }
    }
    ctx->pc = 0x216988u;
    // 0x216988: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x216988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x21698c: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x21698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_216990:
    // 0x216990: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x216990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x216994: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x216994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216998: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x216998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21699c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x21699cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2169a0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2169a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2169a4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2169a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2169a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2169A8u;
    {
        const bool branch_taken_0x2169a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2169ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169A8u;
        // 0x2169ac: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169a8) {
            ctx->pc = 0x216990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216990;
        }
    }
    ctx->pc = 0x2169B0u;
label_2169b0:
    // 0x2169b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2169B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2169B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2169B8u;
}
