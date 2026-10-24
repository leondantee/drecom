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

// Function: entry_00325d04
// Address: 0x325d04 - 0x325d4c
void entry_00325d04_0x325d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325d04_0x325d04");
#endif

    ctx->pc = 0x325d04u;

    // 0x325d04: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x325d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325d08: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x325d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x325d0c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325d10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325d14: 0x0  nop
    ctx->pc = 0x325d14u;
    // NOP
    // 0x325d18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x325d18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325d1c: 0x0  nop
    ctx->pc = 0x325d1cu;
    // NOP
    // 0x325d20: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x325D20u;
    {
        const bool branch_taken_0x325d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325d20) {
            ctx->pc = 0x325D4Cu;
            return;
        }
    }
    ctx->pc = 0x325D28u;
    // 0x325d28: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x325d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325d2c: 0x3c03bf19  lui         $v1, 0xBF19
    ctx->pc = 0x325d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48921 << 16));
    // 0x325d30: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325d38: 0x0  nop
    ctx->pc = 0x325d38u;
    // NOP
    // 0x325d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x325d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325d40: 0x0  nop
    ctx->pc = 0x325d40u;
    // NOP
    // 0x325d44: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x325D44u;
    {
        const bool branch_taken_0x325d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325d44) {
            ctx->pc = 0x325D6Cu;
            return;
        }
    }
    ctx->pc = 0x325D4Cu;
}
