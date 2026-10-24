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

// Function: entry_0025d614
// Address: 0x25d614 - 0x25d638
void entry_0025d614_0x25d614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d614_0x25d614");
#endif

    ctx->pc = 0x25d614u;

    // 0x25d614: 0x8e021098  lw          $v0, 0x1098($s0)
    ctx->pc = 0x25d614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4248)));
    // 0x25d618: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25d618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d61c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D61Cu;
    {
        const bool branch_taken_0x25d61c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25d61c) {
            ctx->pc = 0x25D638u;
            return;
        }
    }
    ctx->pc = 0x25D624u;
    // 0x25d624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d628: 0x0  nop
    ctx->pc = 0x25d628u;
    // NOP
    // 0x25d62c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25d62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D630u;
    {
        const bool branch_taken_0x25d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d630) {
            ctx->pc = 0x25D654u;
            return;
        }
    }
    ctx->pc = 0x25D638u;
}
