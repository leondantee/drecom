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

// Function: entry_0023b3ac
// Address: 0x23b3ac - 0x23b3ec
void entry_0023b3ac_0x23b3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b3ac_0x23b3ac");
#endif

    ctx->pc = 0x23b3acu;

    // 0x23b3ac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b3b0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b3b4: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x23b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x23b3b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b3bc: 0x0  nop
    ctx->pc = 0x23b3bcu;
    // NOP
    // 0x23b3c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23b3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b3c4: 0x0  nop
    ctx->pc = 0x23b3c4u;
    // NOP
    // 0x23b3c8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B3C8u;
    {
        const bool branch_taken_0x23b3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b3c8) {
            ctx->pc = 0x23B3ECu;
            return;
        }
    }
    ctx->pc = 0x23B3D0u;
    // 0x23b3d0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x23b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x23b3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b3d8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b3dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b3e0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23b3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23b3e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23B3E4u;
    {
        const bool branch_taken_0x23b3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3e4) {
            ctx->pc = 0x23B43Cu;
            return;
        }
    }
    ctx->pc = 0x23B3ECu;
}
