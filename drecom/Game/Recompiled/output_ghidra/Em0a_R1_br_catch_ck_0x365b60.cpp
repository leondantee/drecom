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

// Function: Em0a_R1_br_catch_ck
// Address: 0x365b60 - 0x365bf8
void Em0a_R1_br_catch_ck_0x365b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_br_catch_ck_0x365b60");
#endif

    switch (ctx->pc) {
        case 0x365b98u: goto label_365b98;
        default: break;
    }

    ctx->pc = 0x365b60u;

    // 0x365b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x365b64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x365b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x365b68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x365b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x365b6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365b70: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x365b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x365b74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x365b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x365b78: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x365b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x365b7c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x365B7Cu;
    {
        const bool branch_taken_0x365b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365b7c) {
            ctx->pc = 0x365BE8u;
            goto label_365be8;
        }
    }
    ctx->pc = 0x365B84u;
    // 0x365b84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x365b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365b88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x365b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x365b8c: 0x2445aef0  addiu       $a1, $v0, -0x5110
    ctx->pc = 0x365b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946544));
    // 0x365b90: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x365B90u;
    SET_GPR_U32(ctx, 31, 0x365B98u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x365B90u, 0x365B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B98u;
label_365b98:
    // 0x365b98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x365b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365b9c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x365B9Cu;
    {
        const bool branch_taken_0x365b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x365b9c) {
            ctx->pc = 0x365BB8u;
            goto label_365bb8;
        }
    }
    ctx->pc = 0x365BA4u;
    // 0x365ba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x365ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365ba8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x365BA8u;
    {
        const bool branch_taken_0x365ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x365ba8) {
            ctx->pc = 0x365BB8u;
            goto label_365bb8;
        }
    }
    ctx->pc = 0x365BB0u;
    // 0x365bb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x365BB0u;
    {
        const bool branch_taken_0x365bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365bb0) {
            ctx->pc = 0x365BE8u;
            goto label_365be8;
        }
    }
    ctx->pc = 0x365BB8u;
label_365bb8:
    // 0x365bb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365bbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365bc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365bc4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x365bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x365bc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365bcc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365bccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365bd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365bd4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365bd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365bdc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365be0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x365be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365be4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_365be8:
    // 0x365be8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x365be8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365bec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x365becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x365BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365BF8u;
}
