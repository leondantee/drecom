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

// Function: Em1c_R1_atk_wave
// Address: 0x36e3d0 - 0x36e46c
void Em1c_R1_atk_wave_0x36e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_wave_0x36e3d0");
#endif

    switch (ctx->pc) {
        case 0x36e424u: goto label_36e424;
        case 0x36e444u: goto label_36e444;
        case 0x36e450u: goto label_36e450;
        case 0x36e45cu: goto label_36e45c;
        default: break;
    }

    ctx->pc = 0x36e3d0u;

    // 0x36e3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e3d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e3d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36e3dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e3e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e3e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e3e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e3ec: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36E3ECu;
    {
        const bool branch_taken_0x36e3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e3ec) {
            ctx->pc = 0x36E434u;
            goto label_36e434;
        }
    }
    ctx->pc = 0x36E3F4u;
    // 0x36e3f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E3F4u;
    {
        const bool branch_taken_0x36e3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e3f4) {
            ctx->pc = 0x36E404u;
            goto label_36e404;
        }
    }
    ctx->pc = 0x36E3FCu;
    // 0x36e3fc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36E3FCu;
    {
        const bool branch_taken_0x36e3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e3fc) {
            ctx->pc = 0x36E45Cu;
            goto label_36e45c;
        }
    }
    ctx->pc = 0x36E404u;
label_36e404:
    // 0x36e404: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e408: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e40c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e410: 0x24065a03  addiu       $a2, $zero, 0x5A03
    ctx->pc = 0x36e410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23043));
    // 0x36e414: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e418: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e41c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E41Cu;
    SET_GPR_U32(ctx, 31, 0x36E424u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E41Cu, 0x36E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E424u;
label_36e424:
    // 0x36e424: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e428: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e42c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e430: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e434:
    // 0x36e434: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e438: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e43c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E43Cu;
    SET_GPR_U32(ctx, 31, 0x36E444u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E43Cu, 0x36E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E444u;
label_36e444:
    // 0x36e444: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e448: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E448u;
    SET_GPR_U32(ctx, 31, 0x36E450u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E448u, 0x36E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E450u;
label_36e450:
    // 0x36e450: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e454: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E454u;
    SET_GPR_U32(ctx, 31, 0x36E45Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E454u, 0x36E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E45Cu;
label_36e45c:
    // 0x36e45c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e45cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e460: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e464: 0x3e00008  jr          $ra
    ctx->pc = 0x36E464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E46Cu;
}
