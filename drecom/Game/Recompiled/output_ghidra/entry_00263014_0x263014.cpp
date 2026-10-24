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

// Function: entry_00263014
// Address: 0x263014 - 0x26303c
void entry_00263014_0x263014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263014_0x263014");
#endif

    ctx->pc = 0x263014u;

    // 0x263014: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x263014u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263018: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x263018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x26301c: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x26301cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x263020: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263020u;
    {
        const bool branch_taken_0x263020 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x263020) {
            ctx->pc = 0x26303Cu;
            return;
        }
    }
    ctx->pc = 0x263028u;
    // 0x263028: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x263028u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26302c: 0x0  nop
    ctx->pc = 0x26302cu;
    // NOP
    // 0x263030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263034u;
    {
        const bool branch_taken_0x263034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263034) {
            ctx->pc = 0x263058u;
            return;
        }
    }
    ctx->pc = 0x26303Cu;
}
