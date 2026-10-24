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

// Function: entry_001aa24c
// Address: 0x1aa24c - 0x1aa274
void entry_001aa24c_0x1aa24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa24c_0x1aa24c");
#endif

    ctx->pc = 0x1aa24cu;

    // 0x1aa24c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1aa250: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa254: 0x9042002d  lbu         $v0, 0x2D($v0)
    ctx->pc = 0x1aa254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 45)));
    // 0x1aa258: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA258u;
    {
        const bool branch_taken_0x1aa258 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1aa258) {
            ctx->pc = 0x1AA274u;
            return;
        }
    }
    ctx->pc = 0x1AA260u;
    // 0x1aa260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa264: 0x0  nop
    ctx->pc = 0x1aa264u;
    // NOP
    // 0x1aa268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aa26c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA26Cu;
    {
        const bool branch_taken_0x1aa26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa26c) {
            ctx->pc = 0x1AA290u;
            return;
        }
    }
    ctx->pc = 0x1AA274u;
}
