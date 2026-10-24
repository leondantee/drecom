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

// Function: entry_00199004
// Address: 0x199004 - 0x199024
void entry_00199004_0x199004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199004_0x199004");
#endif

    ctx->pc = 0x199004u;

    // 0x199004: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199008: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19900c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199010: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199014: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199018: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19901c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19901Cu;
    {
        const bool branch_taken_0x19901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19901c) {
            ctx->pc = 0x199094u;
            return;
        }
    }
    ctx->pc = 0x199024u;
}
