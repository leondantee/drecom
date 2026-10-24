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

// Function: entry_0014fd44
// Address: 0x14fd44 - 0x14fd80
void entry_0014fd44_0x14fd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fd44_0x14fd44");
#endif

    ctx->pc = 0x14fd44u;

    // 0x14fd44: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x14fd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd48: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x14fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x14fd4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14fd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14fd50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd54: 0x0  nop
    ctx->pc = 0x14fd54u;
    // NOP
    // 0x14fd58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14fd58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fd5c: 0x0  nop
    ctx->pc = 0x14fd5cu;
    // NOP
    // 0x14fd60: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x14FD60u;
    {
        const bool branch_taken_0x14fd60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fd60) {
            ctx->pc = 0x14FD80u;
            return;
        }
    }
    ctx->pc = 0x14FD68u;
    // 0x14fd68: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x14fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x14fd6c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14fd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14fd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd74: 0x0  nop
    ctx->pc = 0x14fd74u;
    // NOP
    // 0x14fd78: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14fd7c: 0x0  nop
    ctx->pc = 0x14fd7cu;
    // NOP
    ctx->pc = 0x14fd80u;
}
