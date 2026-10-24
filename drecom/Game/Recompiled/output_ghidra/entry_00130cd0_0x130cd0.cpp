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

// Function: entry_00130cd0
// Address: 0x130cd0 - 0x130d48
void entry_00130cd0_0x130cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130cd0_0x130cd0");
#endif

    switch (ctx->pc) {
        case 0x130cf0u: goto label_130cf0;
        case 0x130d1cu: goto label_130d1c;
        default: break;
    }

    ctx->pc = 0x130cd0u;

    // 0x130cd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130cd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130cd8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x130cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x130cdc: 0x2406054e  addiu       $a2, $zero, 0x54E
    ctx->pc = 0x130cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1358));
    // 0x130ce0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130ce4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x130ce8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x130CE8u;
    SET_GPR_U32(ctx, 31, 0x130CF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x130CE8u, 0x130CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CF0u;
label_130cf0:
    // 0x130cf0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x130cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130cf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130cf8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x130cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x130cfc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x130cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x130d00: 0xa6020092  sh          $v0, 0x92($s0)
    ctx->pc = 0x130d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x130d04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d0c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x130d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130d10: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x130d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130d14: 0xc058f20  jal         func_163C80
    ctx->pc = 0x130D14u;
    SET_GPR_U32(ctx, 31, 0x130D1Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x130D14u, 0x130D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D1Cu;
label_130d1c:
    // 0x130d1c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x130d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x130d20: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d28: 0x0  nop
    ctx->pc = 0x130d28u;
    // NOP
    // 0x130d2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130d30: 0x0  nop
    ctx->pc = 0x130d30u;
    // NOP
    // 0x130d34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x130D34u;
    {
        const bool branch_taken_0x130d34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130d34) {
            ctx->pc = 0x130D48u;
            return;
        }
    }
    ctx->pc = 0x130D3Cu;
    // 0x130d3c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x130d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130d40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x130d44: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x130d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x130d48u;
}
