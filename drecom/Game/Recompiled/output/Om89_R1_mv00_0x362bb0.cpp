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

// Function: Om89_R1_mv00
// Address: 0x362bb0 - 0x362bf8
void Om89_R1_mv00_0x362bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om89_R1_mv00_0x362bb0");
#endif

    switch (ctx->pc) {
        case 0x362bdcu: goto label_362bdc;
        case 0x362be8u: goto label_362be8;
        default: break;
    }

    ctx->pc = 0x362bb0u;

    // 0x362bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x362bb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x362bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x362bb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x362bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x362bbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362bc0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x362bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x362bc4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x362bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x362bc8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362BC8u;
    {
        const bool branch_taken_0x362bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x362bc8) {
            ctx->pc = 0x362BE8u;
            goto label_362be8;
        }
    }
    ctx->pc = 0x362BD0u;
    // 0x362bd0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x362bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362bd4: 0xc0d8ba4  jal         func_362E90
    ctx->pc = 0x362BD4u;
    SET_GPR_U32(ctx, 31, 0x362BDCu);
    ctx->pc = 0x362E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362E90u, 0x362BD4u, 0x362BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BDCu;
label_362bdc:
    // 0x362bdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x362bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362be0: 0xc0d8b84  jal         func_362E10
    ctx->pc = 0x362BE0u;
    SET_GPR_U32(ctx, 31, 0x362BE8u);
    ctx->pc = 0x362E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362E10u, 0x362BE0u, 0x362BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BE8u;
label_362be8:
    // 0x362be8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x362be8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362bec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x362becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x362bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x362BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362BF8u;
}
