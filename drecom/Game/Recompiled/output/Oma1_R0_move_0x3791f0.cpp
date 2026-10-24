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

// Function: Oma1_R0_move
// Address: 0x3791f0 - 0x379238
void Oma1_R0_move_0x3791f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma1_R0_move_0x3791f0");
#endif

    switch (ctx->pc) {
        case 0x3791f0u: goto label_3791f0;
        case 0x3791f4u: goto label_3791f4;
        case 0x3791f8u: goto label_3791f8;
        case 0x3791fcu: goto label_3791fc;
        case 0x379200u: goto label_379200;
        case 0x379204u: goto label_379204;
        case 0x379208u: goto label_379208;
        case 0x37920cu: goto label_37920c;
        case 0x379210u: goto label_379210;
        case 0x379214u: goto label_379214;
        case 0x379218u: goto label_379218;
        case 0x37921cu: goto label_37921c;
        case 0x379220u: goto label_379220;
        case 0x379224u: goto label_379224;
        case 0x379228u: goto label_379228;
        case 0x37922cu: goto label_37922c;
        case 0x379230u: goto label_379230;
        case 0x379234u: goto label_379234;
        default: break;
    }

    ctx->pc = 0x3791f0u;

label_3791f0:
    // 0x3791f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3791f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3791f4:
    // 0x3791f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3791f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3791f8:
    // 0x3791f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3791f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3791fc:
    // 0x3791fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3791fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_379200:
    // 0x379200: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x379200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_379204:
    // 0x379204: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x379204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_379208:
    // 0x379208: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x379208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37920c:
    // 0x37920c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37920cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_379210:
    // 0x379210: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x379210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_379214:
    // 0x379214: 0x2442b790  addiu       $v0, $v0, -0x4870
    ctx->pc = 0x379214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948752));
label_379218:
    // 0x379218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x379218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37921c:
    // 0x37921c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_379220:
    // 0x379220: 0x40f809  jalr        $v0
label_379224:
    if (ctx->pc == 0x379224u) {
        ctx->pc = 0x379228u;
        goto label_379228;
    }
    ctx->pc = 0x379220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x379228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379220u, 0x379228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379228u;
label_379228:
    // 0x379228: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x379228u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37922c:
    // 0x37922c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37922cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_379230:
    // 0x379230: 0x3e00008  jr          $ra
label_379234:
    if (ctx->pc == 0x379234u) {
        ctx->pc = 0x379238u;
        goto label_fallthrough_0x379230;
    }
    ctx->pc = 0x379230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x379230:
    ctx->pc = 0x379238u;
}
