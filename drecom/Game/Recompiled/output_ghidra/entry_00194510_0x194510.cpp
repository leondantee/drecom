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

// Function: entry_00194510
// Address: 0x194510 - 0x194550
void entry_00194510_0x194510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194510_0x194510");
#endif

    ctx->pc = 0x194510u;

    // 0x194510: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x194510u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x194514: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x194514u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x194518: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x194518u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19451c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19451cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194520: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x194520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194524: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x194524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194528: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x194528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19452c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19452cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194530: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x194530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194534: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194538: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x194538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19453c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x19453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x194540: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x194540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194544: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x194544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194548: 0x3e00008  jr          $ra
    ctx->pc = 0x194548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194550u;
}
