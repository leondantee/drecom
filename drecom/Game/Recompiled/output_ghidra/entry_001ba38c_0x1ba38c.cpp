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

// Function: entry_001ba38c
// Address: 0x1ba38c - 0x1ba3e8
void entry_001ba38c_0x1ba38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba38c_0x1ba38c");
#endif

    ctx->pc = 0x1ba38cu;

    // 0x1ba38c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba390: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1ba390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba394: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1ba394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1ba398: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x1ba398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1ba39c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba39cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba3a0: 0x0  nop
    ctx->pc = 0x1ba3a0u;
    // NOP
    // 0x1ba3a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ba3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ba3a8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1ba3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1ba3ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba3b0: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1ba3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba3b4: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1ba3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
    // 0x1ba3b8: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x1ba3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x1ba3bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba3c0: 0x0  nop
    ctx->pc = 0x1ba3c0u;
    // NOP
    // 0x1ba3c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba3c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba3c8: 0x0  nop
    ctx->pc = 0x1ba3c8u;
    // NOP
    // 0x1ba3cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA3CCu;
    {
        const bool branch_taken_0x1ba3cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba3cc) {
            ctx->pc = 0x1BA3E8u;
            return;
        }
    }
    ctx->pc = 0x1BA3D4u;
    // 0x1ba3d4: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1ba3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1ba3d8: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1ba3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1ba3dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba3dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba3e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba3e4: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x1ba3e8u;
}
