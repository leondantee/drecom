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

// Function: entry_00329f18
// Address: 0x329f18 - 0x329f50
void entry_00329f18_0x329f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329f18_0x329f18");
#endif

    ctx->pc = 0x329f18u;

    // 0x329f18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329f1c: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x329f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329f20: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x329f24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329f28: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x329F28u;
    {
        const bool branch_taken_0x329f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329f28) {
            ctx->pc = 0x329F98u;
            return;
        }
    }
    ctx->pc = 0x329F30u;
    // 0x329f30: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x329f30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x329f34: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x329F34u;
    {
        const bool branch_taken_0x329f34 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x329f34) {
            ctx->pc = 0x329F50u;
            return;
        }
    }
    ctx->pc = 0x329F3Cu;
    // 0x329f3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329f40: 0x0  nop
    ctx->pc = 0x329f40u;
    // NOP
    // 0x329f44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329f48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x329F48u;
    {
        const bool branch_taken_0x329f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329f48) {
            ctx->pc = 0x329F6Cu;
            return;
        }
    }
    ctx->pc = 0x329F50u;
}
