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

// Function: entry_001ba790
// Address: 0x1ba790 - 0x1ba7ec
void entry_001ba790_0x1ba790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba790_0x1ba790");
#endif

    ctx->pc = 0x1ba790u;

    // 0x1ba790: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba794: 0xc4c11b50  lwc1        $f1, 0x1B50($a2)
    ctx->pc = 0x1ba794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba798: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1ba798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1ba79c: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x1ba79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1ba7a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ba7a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba7a4: 0x0  nop
    ctx->pc = 0x1ba7a4u;
    // NOP
    // 0x1ba7a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ba7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ba7ac: 0xe4c01b50  swc1        $f0, 0x1B50($a2)
    ctx->pc = 0x1ba7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 6992), bits); }
    // 0x1ba7b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba7b4: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1ba7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7b8: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1ba7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
    // 0x1ba7bc: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x1ba7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x1ba7c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba7c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba7c4: 0x0  nop
    ctx->pc = 0x1ba7c4u;
    // NOP
    // 0x1ba7c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba7cc: 0x0  nop
    ctx->pc = 0x1ba7ccu;
    // NOP
    // 0x1ba7d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA7D0u;
    {
        const bool branch_taken_0x1ba7d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba7d0) {
            ctx->pc = 0x1BA7ECu;
            return;
        }
    }
    ctx->pc = 0x1BA7D8u;
    // 0x1ba7d8: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1ba7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1ba7dc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1ba7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1ba7e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba7e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba7e8: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x1ba7ecu;
}
