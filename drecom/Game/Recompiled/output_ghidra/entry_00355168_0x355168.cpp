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

// Function: entry_00355168
// Address: 0x355168 - 0x3551a0
void entry_00355168_0x355168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355168_0x355168");
#endif

    ctx->pc = 0x355168u;

    // 0x355168: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35516c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x35516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355170: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x355170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355174: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355178: 0x0  nop
    ctx->pc = 0x355178u;
    // NOP
    // 0x35517c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x35517Cu;
    {
        const bool branch_taken_0x35517c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35517c) {
            ctx->pc = 0x3551A0u;
            return;
        }
    }
    ctx->pc = 0x355184u;
    // 0x355184: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355188: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x355188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35518c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x35518cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x355190: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355194: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x355194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355198: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x355198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x35519c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35519cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x3551a0u;
}
