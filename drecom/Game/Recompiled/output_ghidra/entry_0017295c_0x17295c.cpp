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

// Function: entry_0017295c
// Address: 0x17295c - 0x172994
void entry_0017295c_0x17295c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017295c_0x17295c");
#endif

    ctx->pc = 0x17295cu;

    // 0x17295c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x17295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172964: 0x0  nop
    ctx->pc = 0x172964u;
    // NOP
    // 0x172968: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17296c: 0x0  nop
    ctx->pc = 0x17296cu;
    // NOP
    // 0x172970: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172970u;
    {
        const bool branch_taken_0x172970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172970) {
            ctx->pc = 0x172994u;
            return;
        }
    }
    ctx->pc = 0x172978u;
    // 0x172978: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x172978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x17297c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x17297cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172984: 0x0  nop
    ctx->pc = 0x172984u;
    // NOP
    // 0x172988: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x172988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17298c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17298Cu;
    {
        const bool branch_taken_0x17298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17298c) {
            ctx->pc = 0x1729A8u;
            return;
        }
    }
    ctx->pc = 0x172994u;
}
