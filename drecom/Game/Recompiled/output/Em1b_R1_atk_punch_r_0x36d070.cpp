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

// Function: Em1b_R1_atk_punch_r
// Address: 0x36d070 - 0x36d154
void Em1b_R1_atk_punch_r_0x36d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_atk_punch_r_0x36d070");
#endif

    switch (ctx->pc) {
        case 0x36d0c4u: goto label_36d0c4;
        case 0x36d0ecu: goto label_36d0ec;
        case 0x36d0f8u: goto label_36d0f8;
        case 0x36d104u: goto label_36d104;
        default: break;
    }

    ctx->pc = 0x36d070u;

    // 0x36d070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d074: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36d074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36d078: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36d078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36d07c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d080: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36d080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36d084: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36d084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36d088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36d088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d08c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36D08Cu;
    {
        const bool branch_taken_0x36d08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36d08c) {
            ctx->pc = 0x36D0DCu;
            goto label_36d0dc;
        }
    }
    ctx->pc = 0x36D094u;
    // 0x36d094: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D094u;
    {
        const bool branch_taken_0x36d094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d094) {
            ctx->pc = 0x36D0A4u;
            goto label_36d0a4;
        }
    }
    ctx->pc = 0x36D09Cu;
    // 0x36d09c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x36D09Cu;
    {
        const bool branch_taken_0x36d09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d09c) {
            ctx->pc = 0x36D144u;
            goto label_36d144;
        }
    }
    ctx->pc = 0x36D0A4u;
label_36d0a4:
    // 0x36d0a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36d0b0: 0x24065a0e  addiu       $a2, $zero, 0x5A0E
    ctx->pc = 0x36d0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23054));
    // 0x36d0b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36d0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d0b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36d0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36d0bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36D0BCu;
    SET_GPR_U32(ctx, 31, 0x36D0C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36D0BCu, 0x36D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0C4u;
label_36d0c4:
    // 0x36d0c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0c8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36d0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36d0cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0d0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36d0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36d0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36d0d8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36d0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36d0dc:
    // 0x36d0dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36d0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36d0e4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36D0E4u;
    SET_GPR_U32(ctx, 31, 0x36D0ECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36D0E4u, 0x36D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0ECu;
label_36d0ec:
    // 0x36d0ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36D0F0u;
    SET_GPR_U32(ctx, 31, 0x36D0F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36D0F0u, 0x36D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0F8u;
label_36d0f8:
    // 0x36d0f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0fc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36D0FCu;
    SET_GPR_U32(ctx, 31, 0x36D104u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36D0FCu, 0x36D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D104u;
label_36d104:
    // 0x36d104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d108: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36d108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36d10c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36D10Cu;
    {
        const bool branch_taken_0x36d10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d10c) {
            ctx->pc = 0x36D144u;
            goto label_36d144;
        }
    }
    ctx->pc = 0x36D114u;
    // 0x36d114: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d118: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d11c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36d11cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36d120: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d124: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36d124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d128: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d12c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36d12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d130: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d134: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36d134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36d138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d13c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d140: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36d140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_36d144:
    // 0x36d144: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36d144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d148: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36d148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36d14c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D154u;
}
