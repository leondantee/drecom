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

// Function: Om82_R1_mv00
// Address: 0x35b250 - 0x35b298
void Om82_R1_mv00_0x35b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om82_R1_mv00_0x35b250");
#endif

    switch (ctx->pc) {
        case 0x35b27cu: goto label_35b27c;
        case 0x35b288u: goto label_35b288;
        default: break;
    }

    ctx->pc = 0x35b250u;

    // 0x35b250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b254: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35b254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35b258: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35b258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35b25c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b260: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x35b260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35b264: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x35b264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x35b268: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35B268u;
    {
        const bool branch_taken_0x35b268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b268) {
            ctx->pc = 0x35B288u;
            goto label_35b288;
        }
    }
    ctx->pc = 0x35B270u;
    // 0x35b270: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35b270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b274: 0xc0d6d4c  jal         func_35B530
    ctx->pc = 0x35B274u;
    SET_GPR_U32(ctx, 31, 0x35B27Cu);
    ctx->pc = 0x35B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B530u, 0x35B274u, 0x35B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B27Cu;
label_35b27c:
    // 0x35b27c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b280: 0xc0d6d2c  jal         func_35B4B0
    ctx->pc = 0x35B280u;
    SET_GPR_U32(ctx, 31, 0x35B288u);
    ctx->pc = 0x35B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B4B0u, 0x35B280u, 0x35B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B288u;
label_35b288:
    // 0x35b288: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35b288u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b28c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b28cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35b290: 0x3e00008  jr          $ra
    ctx->pc = 0x35B290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B298u;
}
