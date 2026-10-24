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

// Function: entry_00255968
// Address: 0x255968 - 0x2559b0
void entry_00255968_0x255968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255968_0x255968");
#endif

    ctx->pc = 0x255968u;

    // 0x255968: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25596c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x25596cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x255970: 0x1460fdc8  bnez        $v1, . + 4 + (-0x238 << 2)
    ctx->pc = 0x255970u;
    {
        const bool branch_taken_0x255970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255970) {
            ctx->pc = 0x255094u;
            return;
        }
    }
    ctx->pc = 0x255978u;
    // 0x255978: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25597c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x25597cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x255980: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x255980u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x255984: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x255984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x255988: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x255988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25598c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25598cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255990: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x255990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25599c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25599cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2559a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2559a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2559a4: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2559a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2559a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2559A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2559A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2559B0u;
}
