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

// Function: entry_00329f98
// Address: 0x329f98 - 0x329fb8
void entry_00329f98_0x329f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329f98_0x329f98");
#endif

    ctx->pc = 0x329f98u;

    // 0x329f98: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x329f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x329f9c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x329F9Cu;
    {
        const bool branch_taken_0x329f9c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x329f9c) {
            ctx->pc = 0x329FB8u;
            return;
        }
    }
    ctx->pc = 0x329FA4u;
    // 0x329fa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329fa8: 0x0  nop
    ctx->pc = 0x329fa8u;
    // NOP
    // 0x329fac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329fb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x329FB0u;
    {
        const bool branch_taken_0x329fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329fb0) {
            ctx->pc = 0x329FD4u;
            return;
        }
    }
    ctx->pc = 0x329FB8u;
}
