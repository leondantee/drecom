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

// Function: entry_0017ea68
// Address: 0x17ea68 - 0x17eaa4
void entry_0017ea68_0x17ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ea68_0x17ea68");
#endif

    ctx->pc = 0x17ea68u;

    // 0x17ea68: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ea6c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x17ea70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ea70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ea74: 0x0  nop
    ctx->pc = 0x17ea74u;
    // NOP
    // 0x17ea78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ea78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ea7c: 0x0  nop
    ctx->pc = 0x17ea7cu;
    // NOP
    // 0x17ea80: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17EA80u;
    {
        const bool branch_taken_0x17ea80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ea80) {
            ctx->pc = 0x17EAA4u;
            return;
        }
    }
    ctx->pc = 0x17EA88u;
    // 0x17ea88: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x17ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x17ea8c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x17ea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17ea90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ea90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ea94: 0x0  nop
    ctx->pc = 0x17ea94u;
    // NOP
    // 0x17ea98: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17ea98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17ea9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17EA9Cu;
    {
        const bool branch_taken_0x17ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ea9c) {
            ctx->pc = 0x17EABCu;
            return;
        }
    }
    ctx->pc = 0x17EAA4u;
}
