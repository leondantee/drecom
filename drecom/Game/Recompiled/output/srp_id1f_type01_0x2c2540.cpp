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

// Function: srp_id1f_type01
// Address: 0x2c2540 - 0x2c2638
void srp_id1f_type01_0x2c2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1f_type01_0x2c2540");
#endif

    switch (ctx->pc) {
        case 0x2c2584u: goto label_2c2584;
        case 0x2c25b4u: goto label_2c25b4;
        case 0x2c25e0u: goto label_2c25e0;
        case 0x2c2610u: goto label_2c2610;
        default: break;
    }

    ctx->pc = 0x2c2540u;

    // 0x2c2540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2544: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2548: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c254c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c254cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2550: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2554: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c2554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2558: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c255c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2560: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2560u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2564: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2568: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c256c: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c256cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2574: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2578: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c2578u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c257c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C257Cu;
    SET_GPR_U32(ctx, 31, 0x2C2584u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C257Cu, 0x2C2584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2584u;
label_2c2584:
    // 0x2c2584: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c2584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c2588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c2588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c258c: 0x0  nop
    ctx->pc = 0x2c258cu;
    // NOP
    // 0x2c2590: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2594: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2c2594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2c2598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c259c: 0x0  nop
    ctx->pc = 0x2c259cu;
    // NOP
    // 0x2c25a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c25a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c25a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c25a8: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c25a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c25ac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C25ACu;
    SET_GPR_U32(ctx, 31, 0x2C25B4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C25ACu, 0x2C25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25B4u;
label_2c25b4:
    // 0x2c25b4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2c25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2c25b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c25b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c25bc: 0x0  nop
    ctx->pc = 0x2c25bcu;
    // NOP
    // 0x2c25c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c25c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c25c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c25c8: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c25c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c25cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c25ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c25d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c25d4: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c25d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c25d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C25D8u;
    SET_GPR_U32(ctx, 31, 0x2C25E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C25D8u, 0x2C25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25E0u;
label_2c25e0:
    // 0x2c25e0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c25e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c25e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c25e8: 0x0  nop
    ctx->pc = 0x2c25e8u;
    // NOP
    // 0x2c25ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c25ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c25f0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2c25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2c25f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c25f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c25f8: 0x0  nop
    ctx->pc = 0x2c25f8u;
    // NOP
    // 0x2c25fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c25fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2600: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2604: 0xe44002f8  swc1        $f0, 0x2F8($v0)
    ctx->pc = 0x2c2604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 760), bits); }
    // 0x2c2608: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C2608u;
    SET_GPR_U32(ctx, 31, 0x2C2610u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C2608u, 0x2C2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2610u;
label_2c2610:
    // 0x2c2610: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x2c2610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x2c2614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2618: 0x0  nop
    ctx->pc = 0x2c2618u;
    // NOP
    // 0x2c261c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c261cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c2620: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2624: 0xe4600304  swc1        $f0, 0x304($v1)
    ctx->pc = 0x2c2624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x2c2628: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c2628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c262c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c262cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c2630: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2638u;
}
