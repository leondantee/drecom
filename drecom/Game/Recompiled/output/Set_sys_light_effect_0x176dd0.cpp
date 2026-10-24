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

// Function: Set_sys_light_effect
// Address: 0x176dd0 - 0x176e6c
void Set_sys_light_effect_0x176dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_sys_light_effect_0x176dd0");
#endif

    ctx->pc = 0x176dd0u;

    // 0x176dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176dd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x176dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x176dd8: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x176dd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x176ddc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x176ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176de0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x176de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176de4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x176de4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176de8: 0x0  nop
    ctx->pc = 0x176de8u;
    // NOP
    // 0x176dec: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x176DECu;
    {
        const bool branch_taken_0x176dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176dec) {
            ctx->pc = 0x176E24u;
            goto label_176e24;
        }
    }
    ctx->pc = 0x176DF4u;
    // 0x176df4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x176df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x176df8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x176df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176dfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176e00: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176e04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176e08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176e0c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176e10: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176e18: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x176e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x176e1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x176E1Cu;
    {
        const bool branch_taken_0x176e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e1c) {
            ctx->pc = 0x176E60u;
            goto label_176e60;
        }
    }
    ctx->pc = 0x176E24u;
label_176e24:
    // 0x176e24: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x176e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176e28: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x176e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176e2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x176e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x176e30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x176e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x176e34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x176e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176e38: 0x0  nop
    ctx->pc = 0x176e38u;
    // NOP
    // 0x176e3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x176e3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x176e40: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176e44: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176e48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176e4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176e50: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176e54: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176e58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176e5c: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x176e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_176e60:
    // 0x176e60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x176e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x176e64: 0x3e00008  jr          $ra
    ctx->pc = 0x176E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176E6Cu;
}
