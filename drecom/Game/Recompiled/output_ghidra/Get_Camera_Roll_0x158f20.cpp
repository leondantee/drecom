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

// Function: Get_Camera_Roll
// Address: 0x158f20 - 0x158ff8
void Get_Camera_Roll_0x158f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_Camera_Roll_0x158f20");
#endif

    switch (ctx->pc) {
        case 0x158f38u: goto label_158f38;
        case 0x158f64u: goto label_158f64;
        case 0x158f78u: goto label_158f78;
        case 0x158fc4u: goto label_158fc4;
        case 0x158fd8u: goto label_158fd8;
        case 0x158fe8u: goto label_158fe8;
        default: break;
    }

    ctx->pc = 0x158f20u;

    // 0x158f20: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x158f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x158f24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x158f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x158f28: 0xafa40248  sw          $a0, 0x248($sp)
    ctx->pc = 0x158f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 4));
    // 0x158f2c: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x158f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x158f30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x158f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158f34: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x158f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_158f38:
    // 0x158f38: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x158f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158f3c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x158f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x158f40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x158f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x158f44: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x158f44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x158f48: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x158f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x158f4c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x158F4Cu;
    {
        const bool branch_taken_0x158f4c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x158f4c) {
            ctx->pc = 0x158F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158f38;
        }
    }
    ctx->pc = 0x158F54u;
    // 0x158f54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x158f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158f58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x158f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158f5c: 0xc056400  jal         func_159000
    ctx->pc = 0x158F5Cu;
    SET_GPR_U32(ctx, 31, 0x158F64u);
    ctx->pc = 0x159000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159000u, 0x158F5Cu, 0x158F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F64u;
label_158f64:
    // 0x158f64: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x158f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x158f68: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x158f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x158f6c: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x158f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x158f70: 0xc040c44  jal         func_103110
    ctx->pc = 0x158F70u;
    SET_GPR_U32(ctx, 31, 0x158F78u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x158F78u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x158F78u) { return; }
    ctx->pc = 0x158F78u;
label_158f78:
    // 0x158f78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x158f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x158f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158f80: 0x0  nop
    ctx->pc = 0x158f80u;
    // NOP
    // 0x158f84: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x158f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x158f88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158f8c: 0x0  nop
    ctx->pc = 0x158f8cu;
    // NOP
    // 0x158f90: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x158f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x158f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158f98: 0x0  nop
    ctx->pc = 0x158f98u;
    // NOP
    // 0x158f9c: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x158f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x158fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x158fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x158fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158fa8: 0x0  nop
    ctx->pc = 0x158fa8u;
    // NOP
    // 0x158fac: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x158facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x158fb0: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x158fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x158fb4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x158fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x158fb8: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x158fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x158fbc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x158FBCu;
    SET_GPR_U32(ctx, 31, 0x158FC4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x158FC4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x158FC4u) { return; }
    ctx->pc = 0x158FC4u;
label_158fc4:
    // 0x158fc4: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x158fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x158fc8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x158fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x158fcc: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x158fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x158fd0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x158FD0u;
    SET_GPR_U32(ctx, 31, 0x158FD8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x158FD8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x158FD8u) { return; }
    ctx->pc = 0x158FD8u;
label_158fd8:
    // 0x158fd8: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x158fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x158fdc: 0xc7ad0230  lwc1        $f13, 0x230($sp)
    ctx->pc = 0x158fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x158fe0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x158FE0u;
    SET_GPR_U32(ctx, 31, 0x158FE8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x158FE0u, 0x158FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FE8u;
label_158fe8:
    // 0x158fe8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x158fe8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158fec: 0x27bd0250  addiu       $sp, $sp, 0x250
    ctx->pc = 0x158fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x158ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x158FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158FF8u;
}
