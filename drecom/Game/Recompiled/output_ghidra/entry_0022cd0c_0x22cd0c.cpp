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

// Function: entry_0022cd0c
// Address: 0x22cd0c - 0x22cd4c
void entry_0022cd0c_0x22cd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cd0c_0x22cd0c");
#endif

    ctx->pc = 0x22cd0cu;

    // 0x22cd0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd10: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cd14: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x22cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
    // 0x22cd18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22cd18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd1c: 0x0  nop
    ctx->pc = 0x22cd1cu;
    // NOP
    // 0x22cd20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22cd20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cd24: 0x0  nop
    ctx->pc = 0x22cd24u;
    // NOP
    // 0x22cd28: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22CD28u;
    {
        const bool branch_taken_0x22cd28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cd28) {
            ctx->pc = 0x22CD4Cu;
            return;
        }
    }
    ctx->pc = 0x22CD30u;
    // 0x22cd30: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x22cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x22cd34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cd40: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22cd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x22cd44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22CD44u;
    {
        const bool branch_taken_0x22cd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd44) {
            ctx->pc = 0x22CDA0u;
            return;
        }
    }
    ctx->pc = 0x22CD4Cu;
}
