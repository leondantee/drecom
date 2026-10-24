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

// Function: entry_002c4728
// Address: 0x2c4728 - 0x2c4788
void entry_002c4728_0x2c4728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4728_0x2c4728");
#endif

    ctx->pc = 0x2c4728u;

    // 0x2c4728: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c472c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4730: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x2c4730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4734: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4738: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c473c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c4740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c4744: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c4744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2c4748: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c474c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4750: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2c4750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4754: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4758: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c475c: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c4760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4764: 0x0  nop
    ctx->pc = 0x2c4764u;
    // NOP
    // 0x2c4768: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4768u;
    {
        const bool branch_taken_0x2c4768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4768) {
            ctx->pc = 0x2C4788u;
            return;
        }
    }
    ctx->pc = 0x2C4770u;
    // 0x2c4770: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4774: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4778: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c4778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c477c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4780: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4784: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c4784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    ctx->pc = 0x2c4788u;
}
