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

// Function: Set_sys_light_force
// Address: 0x176d30 - 0x176dcc
void Set_sys_light_force_0x176d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_sys_light_force_0x176d30");
#endif

    ctx->pc = 0x176d30u;

    // 0x176d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176d34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x176d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x176d38: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x176d38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x176d3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x176d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176d40: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x176d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176d44: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x176d44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176d48: 0x0  nop
    ctx->pc = 0x176d48u;
    // NOP
    // 0x176d4c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x176D4Cu;
    {
        const bool branch_taken_0x176d4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176d4c) {
            ctx->pc = 0x176D84u;
            goto label_176d84;
        }
    }
    ctx->pc = 0x176D54u;
    // 0x176d54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x176d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x176d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x176d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176d5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d60: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176d64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176d68: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176d6c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176d70: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176d78: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x176d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x176d7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x176D7Cu;
    {
        const bool branch_taken_0x176d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176d7c) {
            ctx->pc = 0x176DC0u;
            goto label_176dc0;
        }
    }
    ctx->pc = 0x176D84u;
label_176d84:
    // 0x176d84: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x176d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176d88: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x176d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176d8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x176d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x176d90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x176d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x176d94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x176d94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176d98: 0x0  nop
    ctx->pc = 0x176d98u;
    // NOP
    // 0x176d9c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x176d9cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x176da0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176da4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176dac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176db0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176db4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176db8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176dbc: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x176dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
label_176dc0:
    // 0x176dc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x176dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x176dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x176DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176DCCu;
}
