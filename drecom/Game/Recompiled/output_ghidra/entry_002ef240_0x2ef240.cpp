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

// Function: entry_002ef240
// Address: 0x2ef240 - 0x2ef280
void entry_002ef240_0x2ef240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef240_0x2ef240");
#endif

    ctx->pc = 0x2ef240u;

    // 0x2ef240: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x2ef240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ef244: 0x1460fedb  bnez        $v1, . + 4 + (-0x125 << 2)
    ctx->pc = 0x2EF244u;
    {
        const bool branch_taken_0x2ef244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef244) {
            ctx->pc = 0x2EEDB4u;
            return;
        }
    }
    ctx->pc = 0x2EF24Cu;
    // 0x2ef24c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2ef24cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ef250: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ef250u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ef254: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ef254u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ef258: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ef258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ef25c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ef25cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef260: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ef260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef26c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef274: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2ef274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ef278: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF280u;
}
