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

// Function: Em1c_R1_atk_eye3
// Address: 0x36e840 - 0x36e8e4
void Em1c_R1_atk_eye3_0x36e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_eye3_0x36e840");
#endif

    switch (ctx->pc) {
        case 0x36e894u: goto label_36e894;
        case 0x36e8bcu: goto label_36e8bc;
        case 0x36e8c8u: goto label_36e8c8;
        case 0x36e8d4u: goto label_36e8d4;
        default: break;
    }

    ctx->pc = 0x36e840u;

    // 0x36e840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e844: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e848: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36e84c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e850: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e854: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e85c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36E85Cu;
    {
        const bool branch_taken_0x36e85c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e85c) {
            ctx->pc = 0x36E8ACu;
            goto label_36e8ac;
        }
    }
    ctx->pc = 0x36E864u;
    // 0x36e864: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E864u;
    {
        const bool branch_taken_0x36e864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e864) {
            ctx->pc = 0x36E874u;
            goto label_36e874;
        }
    }
    ctx->pc = 0x36E86Cu;
    // 0x36e86c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x36E86Cu;
    {
        const bool branch_taken_0x36e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e86c) {
            ctx->pc = 0x36E8D4u;
            goto label_36e8d4;
        }
    }
    ctx->pc = 0x36E874u;
label_36e874:
    // 0x36e874: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e878: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e87c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e880: 0x24065a0b  addiu       $a2, $zero, 0x5A0B
    ctx->pc = 0x36e880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23051));
    // 0x36e884: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e888: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e88c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E88Cu;
    SET_GPR_U32(ctx, 31, 0x36E894u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E88Cu, 0x36E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E894u;
label_36e894:
    // 0x36e894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e898: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36e898u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36e89c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e8a0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e8a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e8a8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e8ac:
    // 0x36e8ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e8b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e8b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e8b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E8B4u;
    SET_GPR_U32(ctx, 31, 0x36E8BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E8B4u, 0x36E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E8BCu;
label_36e8bc:
    // 0x36e8bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e8c0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E8C0u;
    SET_GPR_U32(ctx, 31, 0x36E8C8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E8C0u, 0x36E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E8C8u;
label_36e8c8:
    // 0x36e8c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e8cc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E8CCu;
    SET_GPR_U32(ctx, 31, 0x36E8D4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E8CCu, 0x36E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E8D4u;
label_36e8d4:
    // 0x36e8d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e8d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e8d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36E8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E8E4u;
}
