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

// Function: eff2d_07_type3_move
// Address: 0x21f930 - 0x21f9dc
void eff2d_07_type3_move_0x21f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_07_type3_move_0x21f930");
#endif

    switch (ctx->pc) {
        case 0x21f960u: goto label_21f960;
        case 0x21f96cu: goto label_21f96c;
        case 0x21f980u: goto label_21f980;
        default: break;
    }

    ctx->pc = 0x21f930u;

    // 0x21f930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f934: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x21f934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21f938: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x21f938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x21f93c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x21f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f940: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x21f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f944: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x21f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f948: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x21f948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f94c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21f94cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21f950: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x21f950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x21f954: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x21f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f958: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x21F958u;
    SET_GPR_U32(ctx, 31, 0x21F960u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x21F958u, 0x21F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F960u;
label_21f960:
    // 0x21f960: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21f960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21f964: 0xc0451d6  jal         func_114758
    ctx->pc = 0x21F964u;
    SET_GPR_U32(ctx, 31, 0x21F96Cu);
    ctx->pc = 0x114758u;
    {
        ctx->pc = 0x21F96Cu;
        ps2_stubs::fabs(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F96Cu) { return; }
    ctx->pc = 0x21F96Cu;
label_21f96c:
    // 0x21f96c: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x21f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x21f970: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x21f970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21f974: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21f974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21f978: 0xc040050  jal         func_100140
    ctx->pc = 0x21F978u;
    SET_GPR_U32(ctx, 31, 0x21F980u);
    ctx->pc = 0x100140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100140u, 0x21F978u, 0x21F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F980u;
label_21f980:
    // 0x21f980: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21F980u;
    {
        const bool branch_taken_0x21f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f980) {
            ctx->pc = 0x21F9B0u;
            goto label_21f9b0;
        }
    }
    ctx->pc = 0x21F988u;
    // 0x21f988: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x21f988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f98c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x21f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f990: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x21f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f994: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f998: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x21f998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f99c: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x21f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f9a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21f9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21f9a4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x21f9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x21f9a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21F9A8u;
    {
        const bool branch_taken_0x21f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f9a8) {
            ctx->pc = 0x21F9CCu;
            goto label_21f9cc;
        }
    }
    ctx->pc = 0x21F9B0u;
label_21f9b0:
    // 0x21f9b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x21f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f9b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f9b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x21f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f9bc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x21f9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x21f9c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x21f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f9c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x21f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f9c8: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x21f9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
label_21f9cc:
    // 0x21f9cc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21f9ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f9d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x21f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21f9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21F9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F9DCu;
}
