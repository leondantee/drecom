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

// Function: entry_0017f294
// Address: 0x17f294 - 0x17f2d4
void entry_0017f294_0x17f294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f294_0x17f294");
#endif

    switch (ctx->pc) {
        case 0x17f2c0u: goto label_17f2c0;
        case 0x17f2c8u: goto label_17f2c8;
        default: break;
    }

    ctx->pc = 0x17f294u;

    // 0x17f294: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f298: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f298u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f29c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f2a0: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17F2A0u;
    {
        const bool branch_taken_0x17f2a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17f2a0) {
            ctx->pc = 0x17F2D4u;
            return;
        }
    }
    ctx->pc = 0x17F2A8u;
    // 0x17f2a8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x17f2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f2ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17f2b0: 0x2444ed40  addiu       $a0, $v0, -0x12C0
    ctx->pc = 0x17f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962496));
    // 0x17f2b4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17f2b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17f2b8: 0xc059c48  jal         func_167120
    ctx->pc = 0x17F2B8u;
    SET_GPR_U32(ctx, 31, 0x17F2C0u);
    ctx->pc = 0x167120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167120u, 0x17F2B8u, 0x17F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2C0u;
label_17f2c0:
    // 0x17f2c0: 0xc0593e8  jal         func_164FA0
    ctx->pc = 0x17F2C0u;
    SET_GPR_U32(ctx, 31, 0x17F2C8u);
    ctx->pc = 0x164FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164FA0u, 0x17F2C0u, 0x17F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2C8u;
label_17f2c8:
    // 0x17f2c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f2cc: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x17F2CCu;
    {
        const bool branch_taken_0x17f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f2cc) {
            ctx->pc = 0x17F870u;
            return;
        }
    }
    ctx->pc = 0x17F2D4u;
}
