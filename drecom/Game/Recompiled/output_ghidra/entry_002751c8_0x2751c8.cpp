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

// Function: entry_002751c8
// Address: 0x2751c8 - 0x275208
void entry_002751c8_0x2751c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002751c8_0x2751c8");
#endif

    ctx->pc = 0x2751c8u;

    // 0x2751c8: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x2751c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2751cc: 0x1460ff62  bnez        $v1, . + 4 + (-0x9E << 2)
    ctx->pc = 0x2751CCu;
    {
        const bool branch_taken_0x2751cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2751cc) {
            ctx->pc = 0x274F58u;
            return;
        }
    }
    ctx->pc = 0x2751D4u;
    // 0x2751d4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2751d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2751d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2751d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2751dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2751dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2751e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2751e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2751e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2751e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2751e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2751e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2751ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2751ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2751f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2751f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2751f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2751f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2751f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2751f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2751fc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2751fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x275200: 0x3e00008  jr          $ra
    ctx->pc = 0x275200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275208u;
}
