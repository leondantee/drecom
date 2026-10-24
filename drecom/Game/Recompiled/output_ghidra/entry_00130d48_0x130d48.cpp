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

// Function: entry_00130d48
// Address: 0x130d48 - 0x130d84
void entry_00130d48_0x130d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d48_0x130d48");
#endif

    ctx->pc = 0x130d48u;

    // 0x130d48: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d4c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x130d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x130d50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d58: 0x0  nop
    ctx->pc = 0x130d58u;
    // NOP
    // 0x130d5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130d60: 0x0  nop
    ctx->pc = 0x130d60u;
    // NOP
    // 0x130d64: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x130D64u;
    {
        const bool branch_taken_0x130d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130d64) {
            ctx->pc = 0x130D84u;
            return;
        }
    }
    ctx->pc = 0x130D6Cu;
    // 0x130d6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d70: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x130d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d78: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x130d7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x130D7Cu;
    {
        const bool branch_taken_0x130d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130d7c) {
            ctx->pc = 0x130DB0u;
            return;
        }
    }
    ctx->pc = 0x130D84u;
}
