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

// Function: entry_0025ad54
// Address: 0x25ad54 - 0x25ad7c
void entry_0025ad54_0x25ad54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ad54_0x25ad54");
#endif

    ctx->pc = 0x25ad54u;

    // 0x25ad54: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ad58: 0x8c6309f8  lw          $v1, 0x9F8($v1)
    ctx->pc = 0x25ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
    // 0x25ad5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25ad5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25ad60: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AD60u;
    {
        const bool branch_taken_0x25ad60 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25ad60) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25AD68u;
    // 0x25ad68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ad68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad6c: 0x0  nop
    ctx->pc = 0x25ad6cu;
    // NOP
    // 0x25ad70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25ad70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ad74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AD74u;
    {
        const bool branch_taken_0x25ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad74) {
            ctx->pc = 0x25AD98u;
            return;
        }
    }
    ctx->pc = 0x25AD7Cu;
}
