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

// Function: Em1c_R1_atk_laser
// Address: 0x36e480 - 0x36e51c
void Em1c_R1_atk_laser_0x36e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_laser_0x36e480");
#endif

    switch (ctx->pc) {
        case 0x36e4d4u: goto label_36e4d4;
        case 0x36e4f4u: goto label_36e4f4;
        case 0x36e500u: goto label_36e500;
        case 0x36e50cu: goto label_36e50c;
        default: break;
    }

    ctx->pc = 0x36e480u;

    // 0x36e480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e484: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e488: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36e48c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e490: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e494: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e49c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36E49Cu;
    {
        const bool branch_taken_0x36e49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e49c) {
            ctx->pc = 0x36E4E4u;
            goto label_36e4e4;
        }
    }
    ctx->pc = 0x36E4A4u;
    // 0x36e4a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E4A4u;
    {
        const bool branch_taken_0x36e4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e4a4) {
            ctx->pc = 0x36E4B4u;
            goto label_36e4b4;
        }
    }
    ctx->pc = 0x36E4ACu;
    // 0x36e4ac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36E4ACu;
    {
        const bool branch_taken_0x36e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e4ac) {
            ctx->pc = 0x36E50Cu;
            goto label_36e50c;
        }
    }
    ctx->pc = 0x36E4B4u;
label_36e4b4:
    // 0x36e4b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e4b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e4bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e4c0: 0x24065a05  addiu       $a2, $zero, 0x5A05
    ctx->pc = 0x36e4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23045));
    // 0x36e4c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e4c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e4cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E4CCu;
    SET_GPR_U32(ctx, 31, 0x36E4D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E4CCu, 0x36E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4D4u;
label_36e4d4:
    // 0x36e4d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e4d8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e4dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e4e0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e4e4:
    // 0x36e4e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e4e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e4e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e4ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E4ECu;
    SET_GPR_U32(ctx, 31, 0x36E4F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E4ECu, 0x36E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4F4u;
label_36e4f4:
    // 0x36e4f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e4f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E4F8u;
    SET_GPR_U32(ctx, 31, 0x36E500u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E4F8u, 0x36E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E500u;
label_36e500:
    // 0x36e500: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e504: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E504u;
    SET_GPR_U32(ctx, 31, 0x36E50Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E504u, 0x36E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E50Cu;
label_36e50c:
    // 0x36e50c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e50cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e510: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e514: 0x3e00008  jr          $ra
    ctx->pc = 0x36E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E51Cu;
}
