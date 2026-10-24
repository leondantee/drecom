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

// Function: entry_001b9300
// Address: 0x1b9300 - 0x1b935c
void entry_001b9300_0x1b9300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9300_0x1b9300");
#endif

    ctx->pc = 0x1b9300u;

    // 0x1b9300: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9304: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b9304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9308: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b9308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1b930c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b9310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9314: 0x0  nop
    ctx->pc = 0x1b9314u;
    // NOP
    // 0x1b9318: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b931c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b9320: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9324: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b9324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9328: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b9328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1b932c: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x1b932cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b9330: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b9330u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9334: 0x0  nop
    ctx->pc = 0x1b9334u;
    // NOP
    // 0x1b9338: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b933c: 0x0  nop
    ctx->pc = 0x1b933cu;
    // NOP
    // 0x1b9340: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9340u;
    {
        const bool branch_taken_0x1b9340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9340) {
            ctx->pc = 0x1B935Cu;
            return;
        }
    }
    ctx->pc = 0x1B9348u;
    // 0x1b9348: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1b9348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
    // 0x1b934c: 0x34826666  ori         $v0, $a0, 0x6666
    ctx->pc = 0x1b934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x1b9350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9354: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9358: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b9358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    ctx->pc = 0x1b935cu;
}
