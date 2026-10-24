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

// Function: entry_0017b470
// Address: 0x17b470 - 0x17b494
void entry_0017b470_0x17b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b470_0x17b470");
#endif

    ctx->pc = 0x17b470u;

    // 0x17b470: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x17b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x17b474: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B474u;
    {
        const bool branch_taken_0x17b474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b474) {
            ctx->pc = 0x17B494u;
            return;
        }
    }
    ctx->pc = 0x17B47Cu;
    // 0x17b47c: 0x262301a0  addiu       $v1, $s1, 0x1A0
    ctx->pc = 0x17b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x17b480: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17b480u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b484: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x17b484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17b488: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17b488u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17b48c: 0xc62001b0  lwc1        $f0, 0x1B0($s1)
    ctx->pc = 0x17b48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b490: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x17b490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    ctx->pc = 0x17b494u;
}
