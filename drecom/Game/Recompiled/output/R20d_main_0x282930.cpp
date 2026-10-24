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

// Function: R20d_main
// Address: 0x282930 - 0x282a10
void R20d_main_0x282930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R20d_main_0x282930");
#endif

    ctx->pc = 0x282930u;

    // 0x282930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282938: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28293c: 0x8c30fb3c  lw          $s0, -0x4C4($at)
    ctx->pc = 0x28293cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FB3Cu));
    // 0x282940: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x282940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282944: 0x3c033951  lui         $v1, 0x3951
    ctx->pc = 0x282944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14673 << 16));
    // 0x282948: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x282948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x28294c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28294cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282950: 0x0  nop
    ctx->pc = 0x282950u;
    // NOP
    // 0x282954: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x282954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282958: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x282958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x28295c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x28295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282960: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x282960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x282964: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x282964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x282968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x282968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28296c: 0x0  nop
    ctx->pc = 0x28296cu;
    // NOP
    // 0x282970: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x282970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282974: 0x0  nop
    ctx->pc = 0x282974u;
    // NOP
    // 0x282978: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x282978u;
    {
        const bool branch_taken_0x282978 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282978) {
            ctx->pc = 0x28299Cu;
            goto label_28299c;
        }
    }
    ctx->pc = 0x282980u;
    // 0x282980: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x282980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282984: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x282984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x282988: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x282988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28298c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28298cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282990: 0x0  nop
    ctx->pc = 0x282990u;
    // NOP
    // 0x282994: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x282994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282998: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x282998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_28299c:
    // 0x28299c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2829a0: 0x8c30fb40  lw          $s0, -0x4C0($at)
    ctx->pc = 0x2829a0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FB40u));
    // 0x2829a4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2829a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2829a8: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x2829a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x2829ac: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2829acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2829b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2829b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2829b4: 0x0  nop
    ctx->pc = 0x2829b4u;
    // NOP
    // 0x2829b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2829b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2829bc: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2829bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2829c0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2829c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2829c4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2829c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2829c8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2829c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2829cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2829ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2829d0: 0x0  nop
    ctx->pc = 0x2829d0u;
    // NOP
    // 0x2829d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2829d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2829d8: 0x0  nop
    ctx->pc = 0x2829d8u;
    // NOP
    // 0x2829dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2829DCu;
    {
        const bool branch_taken_0x2829dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2829dc) {
            ctx->pc = 0x282A00u;
            goto label_282a00;
        }
    }
    ctx->pc = 0x2829E4u;
    // 0x2829e4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2829e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2829e8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x2829e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x2829ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2829ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2829f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2829f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2829f4: 0x0  nop
    ctx->pc = 0x2829f4u;
    // NOP
    // 0x2829f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2829f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2829fc: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2829fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_282a00:
    // 0x282a00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282a04: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x282a04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x282a08: 0x3e00008  jr          $ra
    ctx->pc = 0x282A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282A10u;
}
