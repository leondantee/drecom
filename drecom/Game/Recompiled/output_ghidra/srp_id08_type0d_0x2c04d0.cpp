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

// Function: srp_id08_type0d
// Address: 0x2c04d0 - 0x2c0594
void srp_id08_type0d_0x2c04d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id08_type0d_0x2c04d0");
#endif

    switch (ctx->pc) {
        case 0x2c055cu: goto label_2c055c;
        default: break;
    }

    ctx->pc = 0x2c04d0u;

    // 0x2c04d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c04d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c04d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c04d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c04d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c04dc: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2c04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2c04e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c04e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c04e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c04e8: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c04e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c04ec: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2c04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2c04f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c04f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c04f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c04f8: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c04f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c04fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0504: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0508: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c0508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c050c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2c050cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2c0510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0514: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0518: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c0518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c051c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2c051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x2c0520: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2c0520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2c0524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0528: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c052c: 0xe44002ec  swc1        $f0, 0x2EC($v0)
    ctx->pc = 0x2c052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 748), bits); }
    // 0x2c0530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0534: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0538: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c0538u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c053c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0544: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c0544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c054c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0550: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c0550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0554: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C0554u;
    SET_GPR_U32(ctx, 31, 0x2C055Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C0554u, 0x2C055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C055Cu;
label_2c055c:
    // 0x2c055c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c055cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c0560: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c0560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0564: 0x0  nop
    ctx->pc = 0x2c0564u;
    // NOP
    // 0x2c0568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c056c: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x2c056cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x2c0570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0574: 0x0  nop
    ctx->pc = 0x2c0574u;
    // NOP
    // 0x2c0578: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c057c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0580: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c0580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c0584: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c0584u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0588: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c0588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c058c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C058Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C058Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0594u;
}
