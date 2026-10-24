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

// Function: srp_id1f_type00
// Address: 0x2c2420 - 0x2c253c
void srp_id1f_type00_0x2c2420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1f_type00_0x2c2420");
#endif

    switch (ctx->pc) {
        case 0x2c2464u: goto label_2c2464;
        case 0x2c2494u: goto label_2c2494;
        case 0x2c24b4u: goto label_2c24b4;
        case 0x2c24e4u: goto label_2c24e4;
        case 0x2c2514u: goto label_2c2514;
        default: break;
    }

    ctx->pc = 0x2c2420u;

    // 0x2c2420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2424: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2428: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c242c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2430: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2434: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c2434u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2438: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c243c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2440: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2444: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2448: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c244c: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c244cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2458: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c2458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c245c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C245Cu;
    SET_GPR_U32(ctx, 31, 0x2C2464u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C245Cu, 0x2C2464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2464u;
label_2c2464:
    // 0x2c2464: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c2464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c2468: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c2468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c246c: 0x0  nop
    ctx->pc = 0x2c246cu;
    // NOP
    // 0x2c2470: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2474: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2c2474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2c2478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c247c: 0x0  nop
    ctx->pc = 0x2c247cu;
    // NOP
    // 0x2c2480: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2488: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c2488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c248c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C248Cu;
    SET_GPR_U32(ctx, 31, 0x2C2494u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C248Cu, 0x2C2494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2494u;
label_2c2494:
    // 0x2c2494: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2c2494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2c2498: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c2498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c249c: 0x0  nop
    ctx->pc = 0x2c249cu;
    // NOP
    // 0x2c24a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c24a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c24a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c24a8: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c24a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c24ac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C24ACu;
    SET_GPR_U32(ctx, 31, 0x2C24B4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C24ACu, 0x2C24B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C24B4u;
label_2c24b4:
    // 0x2c24b4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c24b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c24b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c24bc: 0x0  nop
    ctx->pc = 0x2c24bcu;
    // NOP
    // 0x2c24c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c24c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c24c4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c24c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c24c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c24cc: 0x0  nop
    ctx->pc = 0x2c24ccu;
    // NOP
    // 0x2c24d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c24d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c24d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c24d8: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c24d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c24dc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C24DCu;
    SET_GPR_U32(ctx, 31, 0x2C24E4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C24DCu, 0x2C24E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C24E4u;
label_2c24e4:
    // 0x2c24e4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c24e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c24e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c24ec: 0x0  nop
    ctx->pc = 0x2c24ecu;
    // NOP
    // 0x2c24f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c24f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c24f4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2c24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2c24f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c24f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c24fc: 0x0  nop
    ctx->pc = 0x2c24fcu;
    // NOP
    // 0x2c2500: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2504: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2508: 0xe44002f8  swc1        $f0, 0x2F8($v0)
    ctx->pc = 0x2c2508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 760), bits); }
    // 0x2c250c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C250Cu;
    SET_GPR_U32(ctx, 31, 0x2C2514u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C250Cu, 0x2C2514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2514u;
label_2c2514:
    // 0x2c2514: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x2c2514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x2c2518: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c251c: 0x0  nop
    ctx->pc = 0x2c251cu;
    // NOP
    // 0x2c2520: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c2520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c2524: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2528: 0xe4600304  swc1        $f0, 0x304($v1)
    ctx->pc = 0x2c2528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x2c252c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c252cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2530: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c2530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c2534: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C253Cu;
}
