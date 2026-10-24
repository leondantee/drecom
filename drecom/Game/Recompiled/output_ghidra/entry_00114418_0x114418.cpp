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

// Function: entry_00114418
// Address: 0x114418 - 0x114438
void entry_00114418_0x114418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114418_0x114418");
#endif

    ctx->pc = 0x114418u;

    // 0x114418: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x114418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x11441c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x11441cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x114420: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x114420u;
    {
        const bool branch_taken_0x114420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114420) {
            ctx->pc = 0x114424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114420u;
            // 0x114424: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x114464u;
            return;
        }
    }
    ctx->pc = 0x114428u;
    // 0x114428: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x114428u;
    {
        const bool branch_taken_0x114428 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x114428) {
            ctx->pc = 0x114438u;
            return;
        }
    }
    ctx->pc = 0x114430u;
    // 0x114430: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x114430u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x114434: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x114434u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->pc = 0x114438u;
}
