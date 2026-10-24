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

// Function: entry_0022b384
// Address: 0x22b384 - 0x22b3c4
void entry_0022b384_0x22b384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b384_0x22b384");
#endif

    ctx->pc = 0x22b384u;

    // 0x22b384: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b388: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b38c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x22b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x22b390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b394: 0x0  nop
    ctx->pc = 0x22b394u;
    // NOP
    // 0x22b398: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b39c: 0x0  nop
    ctx->pc = 0x22b39cu;
    // NOP
    // 0x22b3a0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22B3A0u;
    {
        const bool branch_taken_0x22b3a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b3a0) {
            ctx->pc = 0x22B3C4u;
            return;
        }
    }
    ctx->pc = 0x22B3A8u;
    // 0x22b3a8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x22b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22b3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b3b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b3b4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x22b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b3b8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22b3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22b3bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22B3BCu;
    {
        const bool branch_taken_0x22b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b3bc) {
            ctx->pc = 0x22B418u;
            return;
        }
    }
    ctx->pc = 0x22B3C4u;
}
