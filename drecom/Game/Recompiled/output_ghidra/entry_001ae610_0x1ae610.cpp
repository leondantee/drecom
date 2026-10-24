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

// Function: entry_001ae610
// Address: 0x1ae610 - 0x1ae648
void entry_001ae610_0x1ae610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae610_0x1ae610");
#endif

    ctx->pc = 0x1ae610u;

    // 0x1ae610: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae614: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae614u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae618: 0xc420b50c  lwc1        $f0, -0x4AF4($at)
    ctx->pc = 0x1ae618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae61c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ae61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae620: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae624: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae624u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae628: 0x9422b502  lhu         $v0, -0x4AFE($at)
    ctx->pc = 0x1ae628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948098)));
    // 0x1ae62c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE62Cu;
    {
        const bool branch_taken_0x1ae62c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae62c) {
            ctx->pc = 0x1AE648u;
            return;
        }
    }
    ctx->pc = 0x1AE634u;
    // 0x1ae634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae638: 0x0  nop
    ctx->pc = 0x1ae638u;
    // NOP
    // 0x1ae63c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae640: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE640u;
    {
        const bool branch_taken_0x1ae640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae640) {
            ctx->pc = 0x1AE664u;
            return;
        }
    }
    ctx->pc = 0x1AE648u;
}
