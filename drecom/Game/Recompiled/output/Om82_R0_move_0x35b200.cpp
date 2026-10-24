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

// Function: Om82_R0_move
// Address: 0x35b200 - 0x35b248
void Om82_R0_move_0x35b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om82_R0_move_0x35b200");
#endif

    switch (ctx->pc) {
        case 0x35b200u: goto label_35b200;
        case 0x35b204u: goto label_35b204;
        case 0x35b208u: goto label_35b208;
        case 0x35b20cu: goto label_35b20c;
        case 0x35b210u: goto label_35b210;
        case 0x35b214u: goto label_35b214;
        case 0x35b218u: goto label_35b218;
        case 0x35b21cu: goto label_35b21c;
        case 0x35b220u: goto label_35b220;
        case 0x35b224u: goto label_35b224;
        case 0x35b228u: goto label_35b228;
        case 0x35b22cu: goto label_35b22c;
        case 0x35b230u: goto label_35b230;
        case 0x35b234u: goto label_35b234;
        case 0x35b238u: goto label_35b238;
        case 0x35b23cu: goto label_35b23c;
        case 0x35b240u: goto label_35b240;
        case 0x35b244u: goto label_35b244;
        default: break;
    }

    ctx->pc = 0x35b200u;

label_35b200:
    // 0x35b200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35b204:
    // 0x35b204: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35b204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35b208:
    // 0x35b208: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35b208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35b20c:
    // 0x35b20c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b210:
    // 0x35b210: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b214:
    // 0x35b214: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35b214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35b218:
    // 0x35b218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35b21c:
    // 0x35b21c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35b220:
    // 0x35b220: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35b220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35b224:
    // 0x35b224: 0x2442a9a0  addiu       $v0, $v0, -0x5660
    ctx->pc = 0x35b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945184));
label_35b228:
    // 0x35b228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35b22c:
    // 0x35b22c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35b230:
    // 0x35b230: 0x40f809  jalr        $v0
label_35b234:
    if (ctx->pc == 0x35B234u) {
        ctx->pc = 0x35B238u;
        goto label_35b238;
    }
    ctx->pc = 0x35B230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35B238u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B230u, 0x35B238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35B238u;
label_35b238:
    // 0x35b238: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35b238u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b23c:
    // 0x35b23c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b23cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35b240:
    // 0x35b240: 0x3e00008  jr          $ra
label_35b244:
    if (ctx->pc == 0x35B244u) {
        ctx->pc = 0x35B248u;
        goto label_fallthrough_0x35b240;
    }
    ctx->pc = 0x35B240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35b240:
    ctx->pc = 0x35B248u;
}
