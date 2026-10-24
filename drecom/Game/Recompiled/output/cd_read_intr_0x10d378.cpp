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

// Function: cd_read_intr
// Address: 0x10d378 - 0x10d418
void cd_read_intr_0x10d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cd_read_intr_0x10d378");
#endif

    switch (ctx->pc) {
        case 0x10d3a8u: goto label_10d3a8;
        case 0x10d3f0u: goto label_10d3f0;
        default: break;
    }

    ctx->pc = 0x10d378u;

    // 0x10d378: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10d378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10d37c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x10d37cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x10d380: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d384: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10D384u;
    {
        const bool branch_taken_0x10d384 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D384u;
        // 0x10d388: 0x3c090038  lui         $t1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d384) {
            ctx->pc = 0x10D3D0u;
            goto label_10d3d0;
        }
    }
    ctx->pc = 0x10D38Cu;
    // 0x10d38c: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x10d38cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10d390: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10D390u;
    {
        const bool branch_taken_0x10d390 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D390u;
        // 0x10d394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d390) {
            ctx->pc = 0x10D3D0u;
            goto label_10d3d0;
        }
    }
    ctx->pc = 0x10D398u;
    // 0x10d398: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x10d398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x10d39c: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x10d39cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x10d3a0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x10d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x10d3a4: 0x0  nop
    ctx->pc = 0x10d3a4u;
    // NOP
label_10d3a8:
    // 0x10d3a8: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x10d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x10d3ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10d3acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d3b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10d3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10d3b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x10d3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10d3b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d3bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10d3bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10d3c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10D3C0u;
    {
        const bool branch_taken_0x10d3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3C0u;
        // 0x10d3c4: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3c0) {
            ctx->pc = 0x10D3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d3a8;
        }
    }
    ctx->pc = 0x10D3C8u;
    // 0x10d3c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10D3C8u;
    {
        const bool branch_taken_0x10d3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3C8u;
        // 0x10d3cc: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3c8) {
            ctx->pc = 0x10D3D4u;
            goto label_10d3d4;
        }
    }
    ctx->pc = 0x10D3D0u;
label_10d3d0:
    // 0x10d3d0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x10d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_10d3d4:
    // 0x10d3d4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10D3D4u;
    {
        const bool branch_taken_0x10d3d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10d3d4) {
            ctx->pc = 0x10D410u;
            goto label_10d410;
        }
    }
    ctx->pc = 0x10D3DCu;
    // 0x10d3dc: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x10d3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x10d3e0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10D3E0u;
    {
        const bool branch_taken_0x10d3e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3E0u;
        // 0x10d3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3e0) {
            ctx->pc = 0x10D410u;
            goto label_10d410;
        }
    }
    ctx->pc = 0x10D3E8u;
    // 0x10d3e8: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x10d3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x10d3ec: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x10d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_10d3f0:
    // 0x10d3f0: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x10d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x10d3f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10d3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d3f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10d3fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x10d3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10d400: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x10d400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10d404: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10d404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10d408: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10D408u;
    {
        const bool branch_taken_0x10d408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D408u;
        // 0x10d40c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d408) {
            ctx->pc = 0x10D3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d3f0;
        }
    }
    ctx->pc = 0x10D410u;
label_10d410:
    // 0x10d410: 0x804344a  j           func_10D128
    ctx->pc = 0x10D410u;
    ctx->pc = 0x10D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D410u;
    // 0x10d414: 0x252445f8  addiu       $a0, $t1, 0x45F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 17912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D128u;
    cd_callback_0x10d128(rdram, ctx, runtime); return;
    ctx->pc = 0x10D418u;
}
