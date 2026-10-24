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

// Function: entry_002df254
// Address: 0x2df254 - 0x2df2b4
void entry_002df254_0x2df254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df254_0x2df254");
#endif

    switch (ctx->pc) {
        case 0x2df280u: goto label_2df280;
        case 0x2df2a4u: goto label_2df2a4;
        default: break;
    }

    ctx->pc = 0x2df254u;

    // 0x2df254: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2df254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2df258: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df25c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2df25cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df260: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df264: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df268: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2df268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2df26c: 0x24060a25  addiu       $a2, $zero, 0xA25
    ctx->pc = 0x2df26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2597));
    // 0x2df270: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df274: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2df274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df278: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DF278u;
    SET_GPR_U32(ctx, 31, 0x2DF280u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DF278u, 0x2DF280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF280u;
label_2df280:
    // 0x2df280: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df284: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2df284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2df288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df28c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DF28Cu;
    {
        const bool branch_taken_0x2df28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2df28c) {
            ctx->pc = 0x2DF2B4u;
            return;
        }
    }
    ctx->pc = 0x2DF294u;
    // 0x2df294: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2df298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df29c: 0xc0b8910  jal         func_2E2440
    ctx->pc = 0x2DF29Cu;
    SET_GPR_U32(ctx, 31, 0x2DF2A4u);
    ctx->pc = 0x2E2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2440u, 0x2DF29Cu, 0x2DF2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2A4u;
label_2df2a4:
    // 0x2df2a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2df2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df2ac: 0xc0b8910  jal         func_2E2440
    ctx->pc = 0x2DF2ACu;
    SET_GPR_U32(ctx, 31, 0x2DF2B4u);
    ctx->pc = 0x2E2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2440u, 0x2DF2ACu, 0x2DF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2B4u;
}
