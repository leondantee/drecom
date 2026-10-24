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

// Function: entry_0026ffcc
// Address: 0x26ffcc - 0x27001c
void entry_0026ffcc_0x26ffcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ffcc_0x26ffcc");
#endif

    ctx->pc = 0x26ffccu;

    // 0x26ffcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ffd0: 0xc4811b58  lwc1        $f1, 0x1B58($a0)
    ctx->pc = 0x26ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ffd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26ffd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ffd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ffdc: 0x0  nop
    ctx->pc = 0x26ffdcu;
    // NOP
    // 0x26ffe0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ffe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ffe4: 0xe4801b58  swc1        $f0, 0x1B58($a0)
    ctx->pc = 0x26ffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7000), bits); }
    // 0x26ffe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ffec: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x26ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fff0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26fff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26fff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fff8: 0x0  nop
    ctx->pc = 0x26fff8u;
    // NOP
    // 0x26fffc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26fffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270000: 0x0  nop
    ctx->pc = 0x270000u;
    // NOP
    // 0x270004: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x270004u;
    {
        const bool branch_taken_0x270004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270004) {
            ctx->pc = 0x27001Cu;
            return;
        }
    }
    ctx->pc = 0x27000Cu;
    // 0x27000c: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x27000cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x270010: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x270010u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270014: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x270014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270018: 0xe4c01b58  swc1        $f0, 0x1B58($a2)
    ctx->pc = 0x270018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 7000), bits); }
    ctx->pc = 0x27001cu;
}
