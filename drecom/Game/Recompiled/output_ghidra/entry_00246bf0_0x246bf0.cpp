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

// Function: entry_00246bf0
// Address: 0x246bf0 - 0x246c48
void entry_00246bf0_0x246bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246bf0_0x246bf0");
#endif

    ctx->pc = 0x246bf0u;

    // 0x246bf0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246bf4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x246bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246bf8: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x246bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x246bfc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x246bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x246c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246c04: 0x0  nop
    ctx->pc = 0x246c04u;
    // NOP
    // 0x246c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246c0c: 0x0  nop
    ctx->pc = 0x246c0cu;
    // NOP
    // 0x246c10: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x246C10u;
    {
        const bool branch_taken_0x246c10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246c10) {
            ctx->pc = 0x246C48u;
            return;
        }
    }
    ctx->pc = 0x246C18u;
    // 0x246c18: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x246c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x246c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246c20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246c28: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x246c2c: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x246c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x246c30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246c30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246c34: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246c3c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x246c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x246c40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x246C40u;
    {
        const bool branch_taken_0x246c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c40) {
            ctx->pc = 0x246C58u;
            return;
        }
    }
    ctx->pc = 0x246C48u;
}
