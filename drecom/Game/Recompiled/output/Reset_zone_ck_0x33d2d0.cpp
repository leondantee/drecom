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

// Function: Reset_zone_ck
// Address: 0x33d2d0 - 0x33d330
void Reset_zone_ck_0x33d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Reset_zone_ck_0x33d2d0");
#endif

    ctx->pc = 0x33d2d0u;

    // 0x33d2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33d2d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33d2d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x33d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x33d2dc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x33d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x33d2e0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33d2e4: 0x24505450  addiu       $s0, $v0, 0x5450
    ctx->pc = 0x33d2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33d2e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33d2ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x33d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d2f0: 0x431806  srlv        $v1, $v1, $v0
    ctx->pc = 0x33d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x33d2f4: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x33d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x33d2f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33d2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33d2fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33D2FCu;
    {
        const bool branch_taken_0x33d2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d2fc) {
            ctx->pc = 0x33D31Cu;
            goto label_33d31c;
        }
    }
    ctx->pc = 0x33D304u;
    // 0x33d304: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x33d304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x33d308: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x33d308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33d30c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33d310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d314: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33D314u;
    {
        const bool branch_taken_0x33d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d314) {
            ctx->pc = 0x33D320u;
            goto label_33d320;
        }
    }
    ctx->pc = 0x33D31Cu;
label_33d31c:
    // 0x33d31c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33d31cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33d320:
    // 0x33d320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d324: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33d324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33d328: 0x3e00008  jr          $ra
    ctx->pc = 0x33D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D330u;
}
