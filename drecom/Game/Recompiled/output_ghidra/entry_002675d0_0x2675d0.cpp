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

// Function: entry_002675d0
// Address: 0x2675d0 - 0x26761c
void entry_002675d0_0x2675d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002675d0_0x2675d0");
#endif

    ctx->pc = 0x2675d0u;

    // 0x2675d0: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x2675d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x2675d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2675d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2675d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2675d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2675dc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2675dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2675e0: 0x1440fed3  bnez        $v0, . + 4 + (-0x12D << 2)
    ctx->pc = 0x2675E0u;
    {
        const bool branch_taken_0x2675e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2675e0) {
            ctx->pc = 0x267130u;
            return;
        }
    }
    ctx->pc = 0x2675E8u;
    // 0x2675e8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2675e8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2675ec: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2675ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2675f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2675f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2675f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2675f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2675f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2675f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2675fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2675fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26760c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26760cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267610: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x267610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x267614: 0x3e00008  jr          $ra
    ctx->pc = 0x267614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26761Cu;
}
