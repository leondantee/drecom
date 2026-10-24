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

// Function: entry_00302f04
// Address: 0x302f04 - 0x302fb8
void entry_00302f04_0x302f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302f04_0x302f04");
#endif

    switch (ctx->pc) {
        case 0x302f80u: goto label_302f80;
        default: break;
    }

    ctx->pc = 0x302f04u;

    // 0x302f04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f08: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302f0c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x302f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x302f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302f14: 0x0  nop
    ctx->pc = 0x302f14u;
    // NOP
    // 0x302f18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x302f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302f1c: 0x0  nop
    ctx->pc = 0x302f1cu;
    // NOP
    // 0x302f20: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x302F20u;
    {
        const bool branch_taken_0x302f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302f20) {
            ctx->pc = 0x302FB8u;
            return;
        }
    }
    ctx->pc = 0x302F28u;
    // 0x302f28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f2c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302f30: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x302f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x302f34: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x302f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x302f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302f3c: 0x0  nop
    ctx->pc = 0x302f3cu;
    // NOP
    // 0x302f40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302f44: 0x0  nop
    ctx->pc = 0x302f44u;
    // NOP
    // 0x302f48: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x302F48u;
    {
        const bool branch_taken_0x302f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302f48) {
            ctx->pc = 0x302FB8u;
            return;
        }
    }
    ctx->pc = 0x302F50u;
    // 0x302f50: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x302f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x302f54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302f58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302f5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f60: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x302f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302f64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f68: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x302f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x302f6c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x302f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302f70: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302f74: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x302f78: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302F78u;
    SET_GPR_U32(ctx, 31, 0x302F80u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302F78u, 0x302F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F80u;
label_302f80:
    // 0x302f80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302F80u;
    {
        const bool branch_taken_0x302f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302f80) {
            ctx->pc = 0x302FB8u;
            return;
        }
    }
    ctx->pc = 0x302F88u;
    // 0x302f88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302f8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302f94: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x302f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x302f98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f9c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302fa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fa4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302fa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302facu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302fb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x302fb8u;
}
