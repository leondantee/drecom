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

// Function: entry_00173140
// Address: 0x173140 - 0x173178
void entry_00173140_0x173140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173140_0x173140");
#endif

    ctx->pc = 0x173140u;

    // 0x173140: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x173140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173148: 0x0  nop
    ctx->pc = 0x173148u;
    // NOP
    // 0x17314c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17314cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173150: 0x0  nop
    ctx->pc = 0x173150u;
    // NOP
    // 0x173154: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x173154u;
    {
        const bool branch_taken_0x173154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173154) {
            ctx->pc = 0x173178u;
            return;
        }
    }
    ctx->pc = 0x17315Cu;
    // 0x17315c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x17315cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x173160: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173168: 0x0  nop
    ctx->pc = 0x173168u;
    // NOP
    // 0x17316c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17316cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x173170: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x173170u;
    {
        const bool branch_taken_0x173170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173170) {
            ctx->pc = 0x17318Cu;
            return;
        }
    }
    ctx->pc = 0x173178u;
}
