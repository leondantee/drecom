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

// Function: Om83_R1_mv00
// Address: 0x35ace0 - 0x35ad28
void Om83_R1_mv00_0x35ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om83_R1_mv00_0x35ace0");
#endif

    switch (ctx->pc) {
        case 0x35ad0cu: goto label_35ad0c;
        case 0x35ad18u: goto label_35ad18;
        default: break;
    }

    ctx->pc = 0x35ace0u;

    // 0x35ace0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ace4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35ace8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35acec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35acf0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x35acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35acf4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x35acf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x35acf8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35ACF8u;
    {
        const bool branch_taken_0x35acf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35acf8) {
            ctx->pc = 0x35AD18u;
            goto label_35ad18;
        }
    }
    ctx->pc = 0x35AD00u;
    // 0x35ad00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ad04: 0xc0d6bf4  jal         func_35AFD0
    ctx->pc = 0x35AD04u;
    SET_GPR_U32(ctx, 31, 0x35AD0Cu);
    ctx->pc = 0x35AFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFD0u, 0x35AD04u, 0x35AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD0Cu;
label_35ad0c:
    // 0x35ad0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ad10: 0xc0d6bd4  jal         func_35AF50
    ctx->pc = 0x35AD10u;
    SET_GPR_U32(ctx, 31, 0x35AD18u);
    ctx->pc = 0x35AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AF50u, 0x35AD10u, 0x35AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD18u;
label_35ad18:
    // 0x35ad18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35ad18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ad1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35ad1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35ad20: 0x3e00008  jr          $ra
    ctx->pc = 0x35AD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AD28u;
}
