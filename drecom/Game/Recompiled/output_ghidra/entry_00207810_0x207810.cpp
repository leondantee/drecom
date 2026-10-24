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

// Function: entry_00207810
// Address: 0x207810 - 0x207870
void entry_00207810_0x207810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207810_0x207810");
#endif

    ctx->pc = 0x207810u;

    // 0x207810: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207814: 0xc4a10184  lwc1        $f1, 0x184($a1)
    ctx->pc = 0x207814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20781c: 0x0  nop
    ctx->pc = 0x20781cu;
    // NOP
    // 0x207820: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207824: 0x0  nop
    ctx->pc = 0x207824u;
    // NOP
    // 0x207828: 0x45000079  bc1f        . + 4 + (0x79 << 2)
    ctx->pc = 0x207828u;
    {
        const bool branch_taken_0x207828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207828) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x207830u;
    // 0x207830: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x207830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x207834: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x207834u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207838: 0x3c07458c  lui         $a3, 0x458C
    ctx->pc = 0x207838u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17804 << 16));
    // 0x20783c: 0x34e6a000  ori         $a2, $a3, 0xA000
    ctx->pc = 0x20783cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)40960);
    // 0x207840: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x207840u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207844: 0x0  nop
    ctx->pc = 0x207844u;
    // NOP
    // 0x207848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20784c: 0x0  nop
    ctx->pc = 0x20784cu;
    // NOP
    // 0x207850: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x207850u;
    {
        const bool branch_taken_0x207850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207850) {
            ctx->pc = 0x207870u;
            return;
        }
    }
    ctx->pc = 0x207858u;
    // 0x207858: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x207858u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20785c: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x20785cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x207860: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x207860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x207864: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x207864u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x207868: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x207868u;
    {
        const bool branch_taken_0x207868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207868) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x207870u;
}
