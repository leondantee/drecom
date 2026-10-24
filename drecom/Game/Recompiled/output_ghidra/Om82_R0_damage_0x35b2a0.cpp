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

// Function: Om82_R0_damage
// Address: 0x35b2a0 - 0x35b2fc
void Om82_R0_damage_0x35b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om82_R0_damage_0x35b2a0");
#endif

    switch (ctx->pc) {
        case 0x35b2a0u: goto label_35b2a0;
        case 0x35b2a4u: goto label_35b2a4;
        case 0x35b2a8u: goto label_35b2a8;
        case 0x35b2acu: goto label_35b2ac;
        case 0x35b2b0u: goto label_35b2b0;
        case 0x35b2b4u: goto label_35b2b4;
        case 0x35b2b8u: goto label_35b2b8;
        case 0x35b2bcu: goto label_35b2bc;
        case 0x35b2c0u: goto label_35b2c0;
        case 0x35b2c4u: goto label_35b2c4;
        case 0x35b2c8u: goto label_35b2c8;
        case 0x35b2ccu: goto label_35b2cc;
        case 0x35b2d0u: goto label_35b2d0;
        case 0x35b2d4u: goto label_35b2d4;
        case 0x35b2d8u: goto label_35b2d8;
        case 0x35b2dcu: goto label_35b2dc;
        case 0x35b2e0u: goto label_35b2e0;
        case 0x35b2e4u: goto label_35b2e4;
        case 0x35b2e8u: goto label_35b2e8;
        case 0x35b2ecu: goto label_35b2ec;
        case 0x35b2f0u: goto label_35b2f0;
        case 0x35b2f4u: goto label_35b2f4;
        case 0x35b2f8u: goto label_35b2f8;
        default: break;
    }

    ctx->pc = 0x35b2a0u;

label_35b2a0:
    // 0x35b2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35b2a4:
    // 0x35b2a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35b2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35b2a8:
    // 0x35b2a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35b2ac:
    // 0x35b2ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b2b0:
    // 0x35b2b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b2b4:
    // 0x35b2b4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35b2b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35b2b8:
    // 0x35b2b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35b2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35b2bc:
    // 0x35b2bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35b2c0:
    // 0x35b2c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35b2c4:
    // 0x35b2c4: 0x2442a9a8  addiu       $v0, $v0, -0x5658
    ctx->pc = 0x35b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945192));
label_35b2c8:
    // 0x35b2c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35b2cc:
    // 0x35b2cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35b2d0:
    // 0x35b2d0: 0x40f809  jalr        $v0
label_35b2d4:
    if (ctx->pc == 0x35B2D4u) {
        ctx->pc = 0x35B2D8u;
        goto label_35b2d8;
    }
    ctx->pc = 0x35B2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35B2D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B2D0u, 0x35B2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35B2D8u;
label_35b2d8:
    // 0x35b2d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b2dc:
    // 0x35b2dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b2e0:
    // 0x35b2e0: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x35b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_35b2e4:
    // 0x35b2e4: 0xc079140  jal         func_1E4500
label_35b2e8:
    if (ctx->pc == 0x35B2E8u) {
        ctx->pc = 0x35B2ECu;
        goto label_35b2ec;
    }
    ctx->pc = 0x35B2E4u;
    SET_GPR_U32(ctx, 31, 0x35B2ECu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x35B2E4u, 0x35B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B2ECu;
label_35b2ec:
    // 0x35b2ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35b2ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b2f0:
    // 0x35b2f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35b2f4:
    // 0x35b2f4: 0x3e00008  jr          $ra
label_35b2f8:
    if (ctx->pc == 0x35B2F8u) {
        ctx->pc = 0x35B2FCu;
        goto label_fallthrough_0x35b2f4;
    }
    ctx->pc = 0x35B2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35b2f4:
    ctx->pc = 0x35B2FCu;
}
