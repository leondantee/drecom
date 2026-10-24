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

// Function: entry_002385ec
// Address: 0x2385ec - 0x238674
void entry_002385ec_0x2385ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002385ec_0x2385ec");
#endif

    ctx->pc = 0x2385ecu;

    // 0x2385ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2385f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2385f4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2385f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2385f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2385fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238600: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x238600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238608: 0x0  nop
    ctx->pc = 0x238608u;
    // NOP
    // 0x23860c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x23860Cu;
    {
        const bool branch_taken_0x23860c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23860c) {
            ctx->pc = 0x238674u;
            return;
        }
    }
    ctx->pc = 0x238614u;
    // 0x238614: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238618: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23861c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x23861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238620: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238624: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238628: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x238628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23862c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23862cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x238630: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x238630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x238634: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238638: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23863c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x23863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238640: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238644: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238648: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x238648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23864c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23864cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238650: 0x0  nop
    ctx->pc = 0x238650u;
    // NOP
    // 0x238654: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x238654u;
    {
        const bool branch_taken_0x238654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238654) {
            ctx->pc = 0x238674u;
            return;
        }
    }
    ctx->pc = 0x23865Cu;
    // 0x23865c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238660: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238664: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x238664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238668: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23866c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238670: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x238670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x238674u;
}
