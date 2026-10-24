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

// Function: Get_Dist
// Address: 0x17deb0 - 0x17df64
void Get_Dist_0x17deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_Dist_0x17deb0");
#endif

    switch (ctx->pc) {
        case 0x17df54u: goto label_17df54;
        default: break;
    }

    ctx->pc = 0x17deb0u;

    // 0x17deb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17deb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17deb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x17deb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x17deb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17debc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17debcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x17dec0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dec4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dec8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17decc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ded0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x17ded0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17ded4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ded8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17ded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dedc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17dee0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17dee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17dee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17dee8: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x17dee8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17deec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17def0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17def0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17def4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17def8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17def8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17defc: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x17defcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17df00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17df04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17df08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17df0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17df0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17df10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17df10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17df14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17df14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17df18: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x17df18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17df1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17df20: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x17df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17df24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17df28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17df2c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x17df2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17df30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17df34: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x17df34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17df38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17df3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17df40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17df40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17df44: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17df44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17df48: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x17df48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17df4c: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17DF4Cu;
    SET_GPR_U32(ctx, 31, 0x17DF54u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17DF4Cu, 0x17DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF54u;
label_17df54:
    // 0x17df54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x17df54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17df58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17df5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DF64u;
}
