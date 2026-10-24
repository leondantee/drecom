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

// Function: entry_0029d820
// Address: 0x29d820 - 0x29d86c
void entry_0029d820_0x29d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d820_0x29d820");
#endif

    ctx->pc = 0x29d820u;

    // 0x29d820: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d824: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d828: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x29d828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x29d82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d830: 0x0  nop
    ctx->pc = 0x29d830u;
    // NOP
    // 0x29d834: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29d834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29d838: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29d838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29d83c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x29d83cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d840: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29d840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d844: 0x0  nop
    ctx->pc = 0x29d844u;
    // NOP
    // 0x29d848: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29D848u;
    {
        const bool branch_taken_0x29d848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d848) {
            ctx->pc = 0x29D86Cu;
            return;
        }
    }
    ctx->pc = 0x29D850u;
    // 0x29d850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d854: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d858: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x29d858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29d85c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29d860: 0xa4620048  sh          $v0, 0x48($v1)
    ctx->pc = 0x29d860u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x29d864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29D864u;
    {
        const bool branch_taken_0x29d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d864) {
            ctx->pc = 0x29D878u;
            return;
        }
    }
    ctx->pc = 0x29D86Cu;
}
