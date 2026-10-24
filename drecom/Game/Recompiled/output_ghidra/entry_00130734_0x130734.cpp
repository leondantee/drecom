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

// Function: entry_00130734
// Address: 0x130734 - 0x1307b8
void entry_00130734_0x130734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130734_0x130734");
#endif

    switch (ctx->pc) {
        case 0x130754u: goto label_130754;
        case 0x13078cu: goto label_13078c;
        default: break;
    }

    ctx->pc = 0x130734u;

    // 0x130734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130738: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13073c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x13073cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x130740: 0x2406054d  addiu       $a2, $zero, 0x54D
    ctx->pc = 0x130740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
    // 0x130744: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130748: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13074c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x13074Cu;
    SET_GPR_U32(ctx, 31, 0x130754u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13074Cu, 0x130754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130754u;
label_130754:
    // 0x130754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130758: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x130758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x13075c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130760: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x130760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x130764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130768: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x130768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13076c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x13076Cu;
    {
        const bool branch_taken_0x13076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13076c) {
            ctx->pc = 0x130828u;
            return;
        }
    }
    ctx->pc = 0x130774u;
    // 0x130774: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130778: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13077c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x13077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130780: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x130780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130784: 0xc058f20  jal         func_163C80
    ctx->pc = 0x130784u;
    SET_GPR_U32(ctx, 31, 0x13078Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x130784u, 0x13078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13078Cu;
label_13078c:
    // 0x13078c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13078cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x130790: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130798: 0x0  nop
    ctx->pc = 0x130798u;
    // NOP
    // 0x13079c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13079cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1307a0: 0x0  nop
    ctx->pc = 0x1307a0u;
    // NOP
    // 0x1307a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1307A4u;
    {
        const bool branch_taken_0x1307a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1307a4) {
            ctx->pc = 0x1307B8u;
            return;
        }
    }
    ctx->pc = 0x1307ACu;
    // 0x1307ac: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1307acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1307b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1307b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1307b4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1307b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x1307b8u;
}
