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

// Function: entry_0029ef68
// Address: 0x29ef68 - 0x29eff4
void entry_0029ef68_0x29ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ef68_0x29ef68");
#endif

    switch (ctx->pc) {
        case 0x29ef98u: goto label_29ef98;
        default: break;
    }

    ctx->pc = 0x29ef68u;

    // 0x29ef68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29ef68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29ef6c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x29ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x29ef70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29ef70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29ef74: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x29EF74u;
    {
        const bool branch_taken_0x29ef74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ef74) {
            ctx->pc = 0x29EFF4u;
            return;
        }
    }
    ctx->pc = 0x29EF7Cu;
    // 0x29ef7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29ef84: 0x94630046  lhu         $v1, 0x46($v1)
    ctx->pc = 0x29ef84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x29ef88: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x29EF88u;
    {
        const bool branch_taken_0x29ef88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ef88) {
            ctx->pc = 0x29EFF4u;
            return;
        }
    }
    ctx->pc = 0x29EF90u;
    // 0x29ef90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EF90u;
    SET_GPR_U32(ctx, 31, 0x29EF98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EF90u, 0x29EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF98u;
label_29ef98:
    // 0x29ef98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29ef98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ef9c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x29ef9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x29efa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29efa4: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x29EFA4u;
    {
        const bool branch_taken_0x29efa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29efa4) {
            ctx->pc = 0x29EFF4u;
            return;
        }
    }
    ctx->pc = 0x29EFACu;
    // 0x29efac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29efb4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29efb8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29efb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29efbc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29EFBCu;
    {
        const bool branch_taken_0x29efbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29efbc) {
            ctx->pc = 0x29EFF4u;
            return;
        }
    }
    ctx->pc = 0x29EFC4u;
    // 0x29efc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29efc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efcc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29efccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29efd0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29efd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efd8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29efd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29efdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efe0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29efe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29efe4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efe8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29efe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29efec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eff0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29eff4u;
}
