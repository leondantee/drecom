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

// Function: entry_00207430
// Address: 0x207430 - 0x207474
void entry_00207430_0x207430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207430_0x207430");
#endif

    ctx->pc = 0x207430u;

    // 0x207430: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207434: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x207434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207438: 0x3c03465a  lui         $v1, 0x465A
    ctx->pc = 0x207438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18010 << 16));
    // 0x20743c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x20743cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x207440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x207440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207444: 0x0  nop
    ctx->pc = 0x207444u;
    // NOP
    // 0x207448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x207448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20744c: 0x0  nop
    ctx->pc = 0x20744cu;
    // NOP
    // 0x207450: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x207450u;
    {
        const bool branch_taken_0x207450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207450) {
            ctx->pc = 0x207474u;
            return;
        }
    }
    ctx->pc = 0x207458u;
    // 0x207458: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20745c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x20745cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x207460: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x207460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x207464: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x207464u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x207468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20746c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207470: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x207470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x207474u;
}
