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

// Function: entry_001b7498
// Address: 0x1b7498 - 0x1b74f4
void entry_001b7498_0x1b7498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7498_0x1b7498");
#endif

    ctx->pc = 0x1b7498u;

    // 0x1b7498: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b749c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b74a0: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x1b74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x1b74a4: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x1b74a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1b74a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b74a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b74ac: 0x0  nop
    ctx->pc = 0x1b74acu;
    // NOP
    // 0x1b74b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b74b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b74b4: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b74b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1b74b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b74bc: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b74bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b74c0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1b74c4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b74c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1b74c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b74c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b74cc: 0x0  nop
    ctx->pc = 0x1b74ccu;
    // NOP
    // 0x1b74d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b74d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b74d4: 0x0  nop
    ctx->pc = 0x1b74d4u;
    // NOP
    // 0x1b74d8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B74D8u;
    {
        const bool branch_taken_0x1b74d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b74d8) {
            ctx->pc = 0x1B74F4u;
            return;
        }
    }
    ctx->pc = 0x1B74E0u;
    // 0x1b74e0: 0x3c103fa6  lui         $s0, 0x3FA6
    ctx->pc = 0x1b74e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16294 << 16));
    // 0x1b74e4: 0x36036666  ori         $v1, $s0, 0x6666
    ctx->pc = 0x1b74e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)26214);
    // 0x1b74e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b74e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b74ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b74f0: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b74f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x1b74f4u;
}
