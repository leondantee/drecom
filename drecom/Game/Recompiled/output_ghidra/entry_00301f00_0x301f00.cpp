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

// Function: entry_00301f00
// Address: 0x301f00 - 0x301fb4
void entry_00301f00_0x301f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301f00_0x301f00");
#endif

    switch (ctx->pc) {
        case 0x301f7cu: goto label_301f7c;
        default: break;
    }

    ctx->pc = 0x301f00u;

    // 0x301f00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f04: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301f08: 0x3c034509  lui         $v1, 0x4509
    ctx->pc = 0x301f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17673 << 16));
    // 0x301f0c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301f14: 0x0  nop
    ctx->pc = 0x301f14u;
    // NOP
    // 0x301f18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x301f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301f1c: 0x0  nop
    ctx->pc = 0x301f1cu;
    // NOP
    // 0x301f20: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x301F20u;
    {
        const bool branch_taken_0x301f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301f20) {
            ctx->pc = 0x301FB4u;
            return;
        }
    }
    ctx->pc = 0x301F28u;
    // 0x301f28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f2c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301f30: 0x3c03452f  lui         $v1, 0x452F
    ctx->pc = 0x301f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17711 << 16));
    // 0x301f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301f38: 0x0  nop
    ctx->pc = 0x301f38u;
    // NOP
    // 0x301f3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301f40: 0x0  nop
    ctx->pc = 0x301f40u;
    // NOP
    // 0x301f44: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301F44u;
    {
        const bool branch_taken_0x301f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301f44) {
            ctx->pc = 0x301FB4u;
            return;
        }
    }
    ctx->pc = 0x301F4Cu;
    // 0x301f4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f50: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x301f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301f54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f58: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x301f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x301f5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301f60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301f64: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x301f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301f68: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x301f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301f6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301f70: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301f74: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301F74u;
    SET_GPR_U32(ctx, 31, 0x301F7Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301F74u, 0x301F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F7Cu;
label_301f7c:
    // 0x301f7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301F7Cu;
    {
        const bool branch_taken_0x301f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301f7c) {
            ctx->pc = 0x301FB4u;
            return;
        }
    }
    ctx->pc = 0x301F84u;
    // 0x301f84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301f88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301f90: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x301f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x301f94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f98: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301f98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301f9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fa0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301fa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fa8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301fac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fb0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x301fb4u;
}
