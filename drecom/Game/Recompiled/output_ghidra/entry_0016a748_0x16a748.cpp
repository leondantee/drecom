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

// Function: entry_0016a748
// Address: 0x16a748 - 0x16a780
void entry_0016a748_0x16a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a748_0x16a748");
#endif

    ctx->pc = 0x16a748u;

    // 0x16a748: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x16a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a74c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a750: 0x0  nop
    ctx->pc = 0x16a750u;
    // NOP
    // 0x16a754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a758: 0x0  nop
    ctx->pc = 0x16a758u;
    // NOP
    // 0x16a75c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16A75Cu;
    {
        const bool branch_taken_0x16a75c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a75c) {
            ctx->pc = 0x16A780u;
            return;
        }
    }
    ctx->pc = 0x16A764u;
    // 0x16a764: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a768: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16a76c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a76cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a770: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x16a770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a774: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a774u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16a778: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16A778u;
    {
        const bool branch_taken_0x16a778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a778) {
            ctx->pc = 0x16A7E4u;
            return;
        }
    }
    ctx->pc = 0x16A780u;
}
