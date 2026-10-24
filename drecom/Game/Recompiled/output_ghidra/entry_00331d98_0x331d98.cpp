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

// Function: entry_00331d98
// Address: 0x331d98 - 0x331dd0
void entry_00331d98_0x331d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331d98_0x331d98");
#endif

    ctx->pc = 0x331d98u;

    // 0x331d98: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x331d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x331d9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x331d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x331da0: 0x0  nop
    ctx->pc = 0x331da0u;
    // NOP
    // 0x331da4: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x331da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x331da8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x331da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x331dac: 0x8fb20268  lw          $s2, 0x268($sp)
    ctx->pc = 0x331dacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x331db0: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x331db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x331db4: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x331DB4u;
    {
        const bool branch_taken_0x331db4 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x331db4) {
            ctx->pc = 0x331DD0u;
            return;
        }
    }
    ctx->pc = 0x331DBCu;
    // 0x331dbc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x331dbcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x331dc0: 0x0  nop
    ctx->pc = 0x331dc0u;
    // NOP
    // 0x331dc4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x331dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331dc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x331DC8u;
    {
        const bool branch_taken_0x331dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331dc8) {
            ctx->pc = 0x331DECu;
            return;
        }
    }
    ctx->pc = 0x331DD0u;
}
