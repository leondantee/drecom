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

// Function: entry_0017b438
// Address: 0x17b438 - 0x17b464
void entry_0017b438_0x17b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b438_0x17b438");
#endif

    ctx->pc = 0x17b438u;

    // 0x17b438: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x17b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x17b43c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B43Cu;
    {
        const bool branch_taken_0x17b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b43c) {
            ctx->pc = 0x17B464u;
            return;
        }
    }
    ctx->pc = 0x17B444u;
    // 0x17b444: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17b448: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x17b448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x17b44c: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x17b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x17b450: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17b450u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b454: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x17b454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17b458: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17b458u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17b45c: 0xc62001b0  lwc1        $f0, 0x1B0($s1)
    ctx->pc = 0x17b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b460: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x17b460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    ctx->pc = 0x17b464u;
}
