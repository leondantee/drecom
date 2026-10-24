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

// Function: entry_0027e4d8
// Address: 0x27e4d8 - 0x27e544
void entry_0027e4d8_0x27e4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e4d8_0x27e4d8");
#endif

    switch (ctx->pc) {
        case 0x27e500u: goto label_27e500;
        default: break;
    }

    ctx->pc = 0x27e4d8u;

    // 0x27e4d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e4dc: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e4e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27e4e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27e4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27e4e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27E4E8u;
    {
        const bool branch_taken_0x27e4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e4e8) {
            ctx->pc = 0x27E544u;
            return;
        }
    }
    ctx->pc = 0x27E4F0u;
    // 0x27e4f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e4f4: 0x244413e0  addiu       $a0, $v0, 0x13E0
    ctx->pc = 0x27e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5088));
    // 0x27e4f8: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27E4F8u;
    SET_GPR_U32(ctx, 31, 0x27E500u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27E4F8u, 0x27E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E500u;
label_27e500:
    // 0x27e500: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27e500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27e504: 0x2450bb48  addiu       $s0, $v0, -0x44B8
    ctx->pc = 0x27e504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x27e508: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x27e508u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB48u));
    // 0x27e50c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x27e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27e510: 0xa622127e  sh          $v0, 0x127E($s1)
    ctx->pc = 0x27e510u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e514: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27e518: 0x2450bb4c  addiu       $s0, $v0, -0x44B4
    ctx->pc = 0x27e518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949708));
    // 0x27e51c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x27e51cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x27e520: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x27e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27e524: 0xa622127e  sh          $v0, 0x127E($s1)
    ctx->pc = 0x27e524u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e528: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27e528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27e52c: 0x2450bb50  addiu       $s0, $v0, -0x44B0
    ctx->pc = 0x27e52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949712));
    // 0x27e530: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x27e530u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB50u));
    // 0x27e534: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x27e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27e538: 0xa622127e  sh          $v0, 0x127E($s1)
    ctx->pc = 0x27e538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e53c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27E53Cu;
    {
        const bool branch_taken_0x27e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e53c) {
            ctx->pc = 0x27E5A8u;
            return;
        }
    }
    ctx->pc = 0x27E544u;
}
