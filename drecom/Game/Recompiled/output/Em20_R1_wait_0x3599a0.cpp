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

// Function: Em20_R1_wait
// Address: 0x3599a0 - 0x359a4c
void Em20_R1_wait_0x3599a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em20_R1_wait_0x3599a0");
#endif

    switch (ctx->pc) {
        case 0x3599f4u: goto label_3599f4;
        case 0x359a14u: goto label_359a14;
        case 0x359a20u: goto label_359a20;
        case 0x359a30u: goto label_359a30;
        case 0x359a3cu: goto label_359a3c;
        default: break;
    }

    ctx->pc = 0x3599a0u;

    // 0x3599a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3599a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3599a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3599a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3599a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3599a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3599ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3599acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3599b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3599b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3599b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3599b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3599b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3599b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3599bc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3599BCu;
    {
        const bool branch_taken_0x3599bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3599bc) {
            ctx->pc = 0x359A04u;
            goto label_359a04;
        }
    }
    ctx->pc = 0x3599C4u;
    // 0x3599c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3599C4u;
    {
        const bool branch_taken_0x3599c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3599c4) {
            ctx->pc = 0x3599D4u;
            goto label_3599d4;
        }
    }
    ctx->pc = 0x3599CCu;
    // 0x3599cc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3599CCu;
    {
        const bool branch_taken_0x3599cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3599cc) {
            ctx->pc = 0x359A3Cu;
            goto label_359a3c;
        }
    }
    ctx->pc = 0x3599D4u;
label_3599d4:
    // 0x3599d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3599d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3599d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3599d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3599dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3599dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3599e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3599e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3599e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3599e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3599e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3599e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3599ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3599ECu;
    SET_GPR_U32(ctx, 31, 0x3599F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3599ECu, 0x3599F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599F4u;
label_3599f4:
    // 0x3599f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3599f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3599f8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3599f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3599fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3599fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359a00: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x359a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_359a04:
    // 0x359a04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359a08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359a0c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x359A0Cu;
    SET_GPR_U32(ctx, 31, 0x359A14u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x359A0Cu, 0x359A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A14u;
label_359a14:
    // 0x359a14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359a18: 0xc05cd10  jal         func_173440
    ctx->pc = 0x359A18u;
    SET_GPR_U32(ctx, 31, 0x359A20u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x359A18u, 0x359A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A20u;
label_359a20:
    // 0x359a20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359a24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359a24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359a28: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x359A28u;
    SET_GPR_U32(ctx, 31, 0x359A30u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x359A28u, 0x359A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A30u;
label_359a30:
    // 0x359a30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359a34: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x359A34u;
    SET_GPR_U32(ctx, 31, 0x359A3Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x359A34u, 0x359A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A3Cu;
label_359a3c:
    // 0x359a3c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359a3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359a40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x359a44: 0x3e00008  jr          $ra
    ctx->pc = 0x359A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359A4Cu;
}
