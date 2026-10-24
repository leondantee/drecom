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

// Function: Em0c_R1_br_mv0c
// Address: 0x22a080 - 0x22a134
void Em0c_R1_br_mv0c_0x22a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_br_mv0c_0x22a080");
#endif

    switch (ctx->pc) {
        case 0x22a0e0u: goto label_22a0e0;
        case 0x22a104u: goto label_22a104;
        default: break;
    }

    ctx->pc = 0x22a080u;

    // 0x22a080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22a084: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x22a084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x22a088: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x22a088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x22a08c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22a08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22a090: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x22a090u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x22a094: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22a094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x22a098: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x22a098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x22a09c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22a09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22a0a0: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22A0A0u;
    {
        const bool branch_taken_0x22a0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a0a0) {
            ctx->pc = 0x22A124u;
            goto label_22a124;
        }
    }
    ctx->pc = 0x22A0A8u;
    // 0x22a0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a0ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a0b0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22a0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22a0b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a0b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a0bc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22a0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22a0c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a0c4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22a0c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a0cc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22a0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22a0d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a0d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22a0d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22A0D8u;
    SET_GPR_U32(ctx, 31, 0x22A0E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22A0D8u, 0x22A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0E0u;
label_22a0e0:
    // 0x22a0e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22a0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22a0e4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22a0e8: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x22a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x22a0ec: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22a0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22a0f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22a0f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22a0f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a0f8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22a0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22a0fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22A0FCu;
    SET_GPR_U32(ctx, 31, 0x22A104u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22A0FCu, 0x22A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A104u;
label_22a104:
    // 0x22a104: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22a104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22a108: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22a108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22a10c: 0x246301f4  addiu       $v1, $v1, 0x1F4
    ctx->pc = 0x22a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 500));
    // 0x22a110: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22a110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22a114: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22a114u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22a118: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22a118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a11c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22a120: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22a120u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_22a124:
    // 0x22a124: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x22a124u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a128: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22a128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22a12c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A134u;
}
