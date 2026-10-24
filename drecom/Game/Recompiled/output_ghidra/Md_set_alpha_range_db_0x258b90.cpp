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

// Function: Md_set_alpha_range_db
// Address: 0x258b90 - 0x258c04
void Md_set_alpha_range_db_0x258b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_alpha_range_db_0x258b90");
#endif

    ctx->pc = 0x258b90u;

    // 0x258b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x258b9c: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x258b9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x258ba0: 0xe7ad0020  swc1        $f13, 0x20($sp)
    ctx->pc = 0x258ba0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x258ba4: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x258ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x258ba8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x258ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258bac: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x258bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258bb0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x258bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258bb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258bb8: 0x8c700064  lw          $s0, 0x64($v1)
    ctx->pc = 0x258bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x258bbc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x258bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258bc0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x258bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258bc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x258bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x258bc8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x258bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x258bcc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x258bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258bd0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x258bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258bd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x258bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x258bd8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x258bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x258bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x258bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258be0: 0x0  nop
    ctx->pc = 0x258be0u;
    // NOP
    // 0x258be4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x258be4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x258be8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x258be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x258bec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x258becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258bf0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x258bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x258bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258bf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x258BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258C04u;
}
