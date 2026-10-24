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

// Function: entry_00308ef4
// Address: 0x308ef4 - 0x308f84
void entry_00308ef4_0x308ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308ef4_0x308ef4");
#endif

    switch (ctx->pc) {
        case 0x308f4cu: goto label_308f4c;
        default: break;
    }

    ctx->pc = 0x308ef4u;

    // 0x308ef4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ef8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x308ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308efc: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x308efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x308f00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x308f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x308f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308f08: 0x0  nop
    ctx->pc = 0x308f08u;
    // NOP
    // 0x308f0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x308f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308f10: 0x0  nop
    ctx->pc = 0x308f10u;
    // NOP
    // 0x308f14: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x308F14u;
    {
        const bool branch_taken_0x308f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308f14) {
            ctx->pc = 0x308F84u;
            return;
        }
    }
    ctx->pc = 0x308F1Cu;
    // 0x308f1c: 0x3c023ea0  lui         $v0, 0x3EA0
    ctx->pc = 0x308f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16032 << 16));
    // 0x308f20: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x308f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x308f24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308f28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f2c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x308f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x308f30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f34: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x308f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x308f38: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x308f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308f3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x308f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x308f40: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x308f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x308f44: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x308F44u;
    SET_GPR_U32(ctx, 31, 0x308F4Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x308F44u, 0x308F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F4Cu;
label_308f4c:
    // 0x308f4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x308F4Cu;
    {
        const bool branch_taken_0x308f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308f4c) {
            ctx->pc = 0x308F84u;
            return;
        }
    }
    ctx->pc = 0x308F54u;
    // 0x308f54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f5c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x308f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x308f60: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x308f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x308f64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f68: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x308f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x308f6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f70: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x308f70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308f74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f78: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x308f78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308f7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x308f84u;
}
