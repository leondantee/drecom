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

// Function: entry_00274168
// Address: 0x274168 - 0x2741b4
void entry_00274168_0x274168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274168_0x274168");
#endif

    ctx->pc = 0x274168u;

    // 0x274168: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x274168u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27416c: 0x1460fe73  bnez        $v1, . + 4 + (-0x18D << 2)
    ctx->pc = 0x27416Cu;
    {
        const bool branch_taken_0x27416c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27416c) {
            ctx->pc = 0x273B3Cu;
            return;
        }
    }
    ctx->pc = 0x274174u;
    // 0x274174: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x274174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x274178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27417c: 0xae631bf0  sw          $v1, 0x1BF0($s3)
    ctx->pc = 0x27417cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7152), GPR_U32(ctx, 3));
    // 0x274180: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x274180u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274184: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x274184u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274188: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x274188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27418c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27418cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274190: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x274190u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274194: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x274194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27419c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27419cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2741a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2741a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2741a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2741a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2741a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2741a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2741ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2741ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2741ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2741B4u;
}
