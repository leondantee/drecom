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

// Function: Get_theta_AB
// Address: 0x163c80 - 0x163d34
void Get_theta_AB_0x163c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_theta_AB_0x163c80");
#endif

    ctx->pc = 0x163c80u;

    // 0x163c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163c84: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x163c84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x163c88: 0xe7ad0008  swc1        $f13, 0x8($sp)
    ctx->pc = 0x163c88u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x163c8c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x163c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163c90: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x163c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163c98: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x163c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x163c9c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x163c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ca0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163ca4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163cac: 0x0  nop
    ctx->pc = 0x163cacu;
    // NOP
    // 0x163cb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163cb4: 0x0  nop
    ctx->pc = 0x163cb4u;
    // NOP
    // 0x163cb8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x163CB8u;
    {
        const bool branch_taken_0x163cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163cb8) {
            ctx->pc = 0x163CE0u;
            goto label_163ce0;
        }
    }
    ctx->pc = 0x163CC0u;
    // 0x163cc0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x163cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163cc4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163cc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163cd0: 0x0  nop
    ctx->pc = 0x163cd0u;
    // NOP
    // 0x163cd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163cd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x163CD8u;
    {
        const bool branch_taken_0x163cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163cd8) {
            ctx->pc = 0x163D28u;
            goto label_163d28;
        }
    }
    ctx->pc = 0x163CE0u;
label_163ce0:
    // 0x163ce0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x163ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ce4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163ce8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163cf0: 0x0  nop
    ctx->pc = 0x163cf0u;
    // NOP
    // 0x163cf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163cf8: 0x0  nop
    ctx->pc = 0x163cf8u;
    // NOP
    // 0x163cfc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163CFCu;
    {
        const bool branch_taken_0x163cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163cfc) {
            ctx->pc = 0x163D20u;
            goto label_163d20;
        }
    }
    ctx->pc = 0x163D04u;
    // 0x163d04: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163d08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163d0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163d10: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x163d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163d14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163D18u;
    {
        const bool branch_taken_0x163d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d18) {
            ctx->pc = 0x163D28u;
            goto label_163d28;
        }
    }
    ctx->pc = 0x163D20u;
label_163d20:
    // 0x163d20: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x163d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163d24: 0x0  nop
    ctx->pc = 0x163d24u;
    // NOP
label_163d28:
    // 0x163d28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x163d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x163d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x163D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163D34u;
}
