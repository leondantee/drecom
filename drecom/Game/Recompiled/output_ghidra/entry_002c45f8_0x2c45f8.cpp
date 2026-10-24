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

// Function: entry_002c45f8
// Address: 0x2c45f8 - 0x2c4658
void entry_002c45f8_0x2c45f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c45f8_0x2c45f8");
#endif

    ctx->pc = 0x2c45f8u;

    // 0x2c45f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c45fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4600: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x2c4600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4604: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4608: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c460c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c4610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c4614: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c4614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c4618: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c461c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4620: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c4620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4624: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4628: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c462c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4630: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c4630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4634: 0x0  nop
    ctx->pc = 0x2c4634u;
    // NOP
    // 0x2c4638: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4638u;
    {
        const bool branch_taken_0x2c4638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4638) {
            ctx->pc = 0x2C4658u;
            return;
        }
    }
    ctx->pc = 0x2C4640u;
    // 0x2c4640: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4644: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4648: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c4648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c464c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4650: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4654: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c4654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    ctx->pc = 0x2c4658u;
}
