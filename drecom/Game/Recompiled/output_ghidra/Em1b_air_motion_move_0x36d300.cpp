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

// Function: Em1b_air_motion_move
// Address: 0x36d300 - 0x36d3e4
void Em1b_air_motion_move_0x36d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_air_motion_move_0x36d300");
#endif

    switch (ctx->pc) {
        case 0x36d320u: goto label_36d320;
        case 0x36d368u: goto label_36d368;
        case 0x36d374u: goto label_36d374;
        case 0x36d3c0u: goto label_36d3c0;
        case 0x36d3ccu: goto label_36d3cc;
        default: break;
    }

    ctx->pc = 0x36d300u;

    // 0x36d300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36d300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36d304: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x36d304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x36d308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d30c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36d310: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x36d310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x36d314: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x36d314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d318: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x36D318u;
    {
        const bool branch_taken_0x36d318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d318) {
            ctx->pc = 0x36D350u;
            goto label_36d350;
        }
    }
    ctx->pc = 0x36D320u;
label_36d320:
    // 0x36d320: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d324: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36d324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36d328: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x36d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36d32c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36d330: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36d334: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36d334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36d338: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x36d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x36d33c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36d33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d340: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x36d340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x36d344: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x36d344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x36d348: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x36d348u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x36d34c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36d34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36d350:
    // 0x36d350: 0x2e010011  sltiu       $at, $s0, 0x11
    ctx->pc = 0x36d350u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x36d354: 0x1420fff2  bnez        $at, . + 4 + (-0xE << 2)
    ctx->pc = 0x36D354u;
    {
        const bool branch_taken_0x36d354 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d354) {
            ctx->pc = 0x36D320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d320;
        }
    }
    ctx->pc = 0x36D35Cu;
    // 0x36d35c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d360: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x36D360u;
    SET_GPR_U32(ctx, 31, 0x36D368u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x36D360u, 0x36D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D368u;
label_36d368:
    // 0x36d368: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x36d368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d36c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36D36Cu;
    {
        const bool branch_taken_0x36d36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d36c) {
            ctx->pc = 0x36D3A8u;
            goto label_36d3a8;
        }
    }
    ctx->pc = 0x36D374u;
label_36d374:
    // 0x36d374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d378: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36d378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36d37c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x36d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36d380: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36d380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36d384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36d388: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36d388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36d38c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x36d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x36d390: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36d390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d394: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x36d394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x36d398: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x36d398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x36d39c: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x36d39cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x36d3a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36d3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36d3a4: 0x0  nop
    ctx->pc = 0x36d3a4u;
    // NOP
label_36d3a8:
    // 0x36d3a8: 0x2e010011  sltiu       $at, $s0, 0x11
    ctx->pc = 0x36d3a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x36d3ac: 0x1420fff1  bnez        $at, . + 4 + (-0xF << 2)
    ctx->pc = 0x36D3ACu;
    {
        const bool branch_taken_0x36d3ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d3ac) {
            ctx->pc = 0x36D374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d374;
        }
    }
    ctx->pc = 0x36D3B4u;
    // 0x36d3b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d3b8: 0xc099010  jal         func_264040
    ctx->pc = 0x36D3B8u;
    SET_GPR_U32(ctx, 31, 0x36D3C0u);
    ctx->pc = 0x264040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264040u, 0x36D3B8u, 0x36D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3C0u;
label_36d3c0:
    // 0x36d3c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d3c4: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x36D3C4u;
    SET_GPR_U32(ctx, 31, 0x36D3CCu);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x36D3C4u, 0x36D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3CCu;
label_36d3cc:
    // 0x36d3cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36d3ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d3d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d3d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36d3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d3d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36d3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D3E4u;
}
