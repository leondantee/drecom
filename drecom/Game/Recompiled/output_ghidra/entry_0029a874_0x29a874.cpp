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

// Function: entry_0029a874
// Address: 0x29a874 - 0x29a890
void entry_0029a874_0x29a874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a874_0x29a874");
#endif

    ctx->pc = 0x29a874u;

    // 0x29a874: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A874u;
    {
        const bool branch_taken_0x29a874 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x29a874) {
            ctx->pc = 0x29A890u;
            return;
        }
    }
    ctx->pc = 0x29A87Cu;
    // 0x29a87c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x29a87cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a880: 0x0  nop
    ctx->pc = 0x29a880u;
    // NOP
    // 0x29a884: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a888: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29A888u;
    {
        const bool branch_taken_0x29a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a888) {
            ctx->pc = 0x29A8ACu;
            return;
        }
    }
    ctx->pc = 0x29A890u;
}
