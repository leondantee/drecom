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

// Function: Em1c_R1_atk_magma
// Address: 0x36e740 - 0x36e82c
void Em1c_R1_atk_magma_0x36e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_magma_0x36e740");
#endif

    switch (ctx->pc) {
        case 0x36e7b0u: goto label_36e7b0;
        case 0x36e7d8u: goto label_36e7d8;
        case 0x36e800u: goto label_36e800;
        case 0x36e80cu: goto label_36e80c;
        case 0x36e818u: goto label_36e818;
        default: break;
    }

    ctx->pc = 0x36e740u;

    // 0x36e740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e744: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x36e744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x36e748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36e74c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x36e750: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e754: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e758: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e75c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e760: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x36E760u;
    {
        const bool branch_taken_0x36e760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e760) {
            ctx->pc = 0x36E7F0u;
            goto label_36e7f0;
        }
    }
    ctx->pc = 0x36E768u;
    // 0x36e768: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E768u;
    {
        const bool branch_taken_0x36e768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e768) {
            ctx->pc = 0x36E778u;
            goto label_36e778;
        }
    }
    ctx->pc = 0x36E770u;
    // 0x36e770: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x36E770u;
    {
        const bool branch_taken_0x36e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e770) {
            ctx->pc = 0x36E818u;
            goto label_36e818;
        }
    }
    ctx->pc = 0x36E778u;
label_36e778:
    // 0x36e778: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e77c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36e780: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x36e780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36e784: 0x8602127a  lh          $v0, 0x127A($s0)
    ctx->pc = 0x36e784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4730)));
    // 0x36e788: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36E788u;
    {
        const bool branch_taken_0x36e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e788) {
            ctx->pc = 0x36E7B8u;
            goto label_36e7b8;
        }
    }
    ctx->pc = 0x36E790u;
    // 0x36e790: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e794: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e798: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e79c: 0x24065a0a  addiu       $a2, $zero, 0x5A0A
    ctx->pc = 0x36e79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23050));
    // 0x36e7a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e7a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e7a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E7A8u;
    SET_GPR_U32(ctx, 31, 0x36E7B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E7A8u, 0x36E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E7B0u;
label_36e7b0:
    // 0x36e7b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x36E7B0u;
    {
        const bool branch_taken_0x36e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e7b0) {
            ctx->pc = 0x36E7D8u;
            goto label_36e7d8;
        }
    }
    ctx->pc = 0x36E7B8u;
label_36e7b8:
    // 0x36e7b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e7bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e7c0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e7c4: 0x24065a09  addiu       $a2, $zero, 0x5A09
    ctx->pc = 0x36e7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23049));
    // 0x36e7c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e7cc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e7d0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E7D0u;
    SET_GPR_U32(ctx, 31, 0x36E7D8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E7D0u, 0x36E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E7D8u;
label_36e7d8:
    // 0x36e7d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e7dc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36e7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36e7e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e7e4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e7e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e7ec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e7f0:
    // 0x36e7f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e7f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e7f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e7f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E7F8u;
    SET_GPR_U32(ctx, 31, 0x36E800u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E7F8u, 0x36E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E800u;
label_36e800:
    // 0x36e800: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e804: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E804u;
    SET_GPR_U32(ctx, 31, 0x36E80Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E804u, 0x36E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E80Cu;
label_36e80c:
    // 0x36e80c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e810: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E810u;
    SET_GPR_U32(ctx, 31, 0x36E818u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E810u, 0x36E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E818u;
label_36e818:
    // 0x36e818: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x36e818u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e81c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e820: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36e824: 0x3e00008  jr          $ra
    ctx->pc = 0x36E824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E82Cu;
}
