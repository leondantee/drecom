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

// Function: entry_00308e5c
// Address: 0x308e5c - 0x308ef4
void entry_00308e5c_0x308e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308e5c_0x308e5c");
#endif

    switch (ctx->pc) {
        case 0x308eb4u: goto label_308eb4;
        default: break;
    }

    ctx->pc = 0x308e5cu;

    // 0x308e5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e60: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x308e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308e64: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x308e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x308e68: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x308e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x308e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308e70: 0x0  nop
    ctx->pc = 0x308e70u;
    // NOP
    // 0x308e74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x308e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308e78: 0x0  nop
    ctx->pc = 0x308e78u;
    // NOP
    // 0x308e7c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x308E7Cu;
    {
        const bool branch_taken_0x308e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308e7c) {
            ctx->pc = 0x308EF4u;
            return;
        }
    }
    ctx->pc = 0x308E84u;
    // 0x308e84: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x308e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x308e88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x308e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x308e8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308e90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e94: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x308e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x308e98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e9c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x308e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x308ea0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x308ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308ea4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x308ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x308ea8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x308ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x308eac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x308EACu;
    SET_GPR_U32(ctx, 31, 0x308EB4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x308EACu, 0x308EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308EB4u;
label_308eb4:
    // 0x308eb4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x308EB4u;
    {
        const bool branch_taken_0x308eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308eb4) {
            ctx->pc = 0x308F84u;
            return;
        }
    }
    ctx->pc = 0x308EBCu;
    // 0x308ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308ec0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ec4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x308ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x308ec8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x308ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308ecc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ed0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x308ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x308ed4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ed8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x308ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308edc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ee0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x308ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308ee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ee8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x308eec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x308EECu;
    {
        const bool branch_taken_0x308eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308eec) {
            ctx->pc = 0x308F84u;
            return;
        }
    }
    ctx->pc = 0x308EF4u;
}
