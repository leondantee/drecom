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

// Function: entry_0013be28
// Address: 0x13be28 - 0x13be70
void entry_0013be28_0x13be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013be28_0x13be28");
#endif

    ctx->pc = 0x13be28u;

    // 0x13be28: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13be2c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x13be2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x13be30: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x13be30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x13be34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13be34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13be38: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x13be38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFD60u));
    // 0x13be3c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13be40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13be40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13be44: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13BE44u;
    {
        const bool branch_taken_0x13be44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be44) {
            ctx->pc = 0x13BEB8u;
            return;
        }
    }
    ctx->pc = 0x13BE4Cu;
    // 0x13be4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13be4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13be50: 0xc421cc6c  lwc1        $f1, -0x3394($at)
    ctx->pc = 0x13be50u;
    { uint32_t bits = FAST_READ32(0x47CC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13be54: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BE54u;
    {
        const bool branch_taken_0x13be54 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x13be54) {
            ctx->pc = 0x13BE70u;
            return;
        }
    }
    ctx->pc = 0x13BE5Cu;
    // 0x13be5c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x13be5cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13be60: 0x0  nop
    ctx->pc = 0x13be60u;
    // NOP
    // 0x13be64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13be64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13be68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13BE68u;
    {
        const bool branch_taken_0x13be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be68) {
            ctx->pc = 0x13BE8Cu;
            return;
        }
    }
    ctx->pc = 0x13BE70u;
}
