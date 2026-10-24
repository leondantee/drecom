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

// Function: entry_0029c01c
// Address: 0x29c01c - 0x29c078
void entry_0029c01c_0x29c01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c01c_0x29c01c");
#endif

    ctx->pc = 0x29c01cu;

    // 0x29c01c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c020: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c024: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c028: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x29c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c02c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c030: 0x0  nop
    ctx->pc = 0x29c030u;
    // NOP
    // 0x29c034: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x29C034u;
    {
        const bool branch_taken_0x29c034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c034) {
            ctx->pc = 0x29C144u;
            return;
        }
    }
    ctx->pc = 0x29C03Cu;
    // 0x29c03c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x29c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c044: 0x0  nop
    ctx->pc = 0x29c044u;
    // NOP
    // 0x29c048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c04c: 0x0  nop
    ctx->pc = 0x29c04cu;
    // NOP
    // 0x29c050: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x29C050u;
    {
        const bool branch_taken_0x29c050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c050) {
            ctx->pc = 0x29C144u;
            return;
        }
    }
    ctx->pc = 0x29C058u;
    // 0x29c058: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c05c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C05Cu;
    {
        const bool branch_taken_0x29c05c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29c05c) {
            ctx->pc = 0x29C078u;
            return;
        }
    }
    ctx->pc = 0x29C064u;
    // 0x29c064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c068: 0x0  nop
    ctx->pc = 0x29c068u;
    // NOP
    // 0x29c06c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C070u;
    {
        const bool branch_taken_0x29c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c070) {
            ctx->pc = 0x29C094u;
            return;
        }
    }
    ctx->pc = 0x29C078u;
}
