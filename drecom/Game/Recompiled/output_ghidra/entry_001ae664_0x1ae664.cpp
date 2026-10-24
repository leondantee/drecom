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

// Function: entry_001ae664
// Address: 0x1ae664 - 0x1ae6c0
void entry_001ae664_0x1ae664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae664_0x1ae664");
#endif

    ctx->pc = 0x1ae664u;

    // 0x1ae664: 0x0  nop
    ctx->pc = 0x1ae664u;
    // NOP
    // 0x1ae668: 0x0  nop
    ctx->pc = 0x1ae668u;
    // NOP
    // 0x1ae66c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ae66cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae670: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae674: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae674u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae678: 0xc420b514  lwc1        $f0, -0x4AEC($at)
    ctx->pc = 0x1ae678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae67c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ae67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ae680: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae684: 0xe420efe8  swc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE8u, _value); } while (0); }
    // 0x1ae688: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae68c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae68cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae690: 0x9422b504  lhu         $v0, -0x4AFC($at)
    ctx->pc = 0x1ae690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948100)));
    // 0x1ae694: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ae694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ae698: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae69c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae69cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6a0: 0x9422b502  lhu         $v0, -0x4AFE($at)
    ctx->pc = 0x1ae6a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948098)));
    // 0x1ae6a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ae6a8: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AE6A8u;
    {
        const bool branch_taken_0x1ae6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ae6a8) {
            ctx->pc = 0x1AE76Cu;
            return;
        }
    }
    ctx->pc = 0x1AE6B0u;
    // 0x1ae6b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae6b4: 0xa2220d86  sb          $v0, 0xD86($s1)
    ctx->pc = 0x1ae6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3462), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae6b8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1AE6B8u;
    {
        const bool branch_taken_0x1ae6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae6b8) {
            ctx->pc = 0x1AE76Cu;
            return;
        }
    }
    ctx->pc = 0x1AE6C0u;
}
