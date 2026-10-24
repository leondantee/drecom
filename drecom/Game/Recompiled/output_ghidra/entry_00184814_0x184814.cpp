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

// Function: entry_00184814
// Address: 0x184814 - 0x184838
void entry_00184814_0x184814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184814_0x184814");
#endif

    ctx->pc = 0x184814u;

    // 0x184814: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184818: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x184818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x18481c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18481Cu;
    {
        const bool branch_taken_0x18481c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18481c) {
            ctx->pc = 0x184838u;
            return;
        }
    }
    ctx->pc = 0x184824u;
    // 0x184824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184828: 0x0  nop
    ctx->pc = 0x184828u;
    // NOP
    // 0x18482c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18482cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184830: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184830u;
    {
        const bool branch_taken_0x184830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184830) {
            ctx->pc = 0x184854u;
            return;
        }
    }
    ctx->pc = 0x184838u;
}
