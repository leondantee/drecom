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

// Function: Om09_R0_die
// Address: 0x37c940 - 0x37c988
void Om09_R0_die_0x37c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om09_R0_die_0x37c940");
#endif

    switch (ctx->pc) {
        case 0x37c940u: goto label_37c940;
        case 0x37c944u: goto label_37c944;
        case 0x37c948u: goto label_37c948;
        case 0x37c94cu: goto label_37c94c;
        case 0x37c950u: goto label_37c950;
        case 0x37c954u: goto label_37c954;
        case 0x37c958u: goto label_37c958;
        case 0x37c95cu: goto label_37c95c;
        case 0x37c960u: goto label_37c960;
        case 0x37c964u: goto label_37c964;
        case 0x37c968u: goto label_37c968;
        case 0x37c96cu: goto label_37c96c;
        case 0x37c970u: goto label_37c970;
        case 0x37c974u: goto label_37c974;
        case 0x37c978u: goto label_37c978;
        case 0x37c97cu: goto label_37c97c;
        case 0x37c980u: goto label_37c980;
        case 0x37c984u: goto label_37c984;
        default: break;
    }

    ctx->pc = 0x37c940u;

label_37c940:
    // 0x37c940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37c944:
    // 0x37c944: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x37c944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_37c948:
    // 0x37c948: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x37c948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37c94c:
    // 0x37c94c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37c950:
    // 0x37c950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37c954:
    // 0x37c954: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x37c954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_37c958:
    // 0x37c958: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37c958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37c95c:
    // 0x37c95c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37c960:
    // 0x37c960: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37c960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_37c964:
    // 0x37c964: 0x2442ba78  addiu       $v0, $v0, -0x4588
    ctx->pc = 0x37c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949496));
label_37c968:
    // 0x37c968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37c96c:
    // 0x37c96c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37c970:
    // 0x37c970: 0x40f809  jalr        $v0
label_37c974:
    if (ctx->pc == 0x37C974u) {
        ctx->pc = 0x37C978u;
        goto label_37c978;
    }
    ctx->pc = 0x37C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37C978u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C970u, 0x37C978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C978u;
label_37c978:
    // 0x37c978: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37c978u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c97c:
    // 0x37c97c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37c97cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37c980:
    // 0x37c980: 0x3e00008  jr          $ra
label_37c984:
    if (ctx->pc == 0x37C984u) {
        ctx->pc = 0x37C988u;
        goto label_fallthrough_0x37c980;
    }
    ctx->pc = 0x37C980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37c980:
    ctx->pc = 0x37C988u;
}
