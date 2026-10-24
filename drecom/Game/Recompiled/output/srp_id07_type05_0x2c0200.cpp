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

// Function: srp_id07_type05
// Address: 0x2c0200 - 0x2c032c
void srp_id07_type05_0x2c0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id07_type05_0x2c0200");
#endif

    switch (ctx->pc) {
        case 0x2c021cu: goto label_2c021c;
        case 0x2c0254u: goto label_2c0254;
        case 0x2c0284u: goto label_2c0284;
        case 0x2c02a4u: goto label_2c02a4;
        case 0x2c02d4u: goto label_2c02d4;
        default: break;
    }

    ctx->pc = 0x2c0200u;

    // 0x2c0200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0204: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c0204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c0208: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c0208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c020c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0210: 0x244402d0  addiu       $a0, $v0, 0x2D0
    ctx->pc = 0x2c0210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2c0214: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2C0214u;
    SET_GPR_U32(ctx, 31, 0x2C021Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2C0214u, 0x2C021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C021Cu;
label_2c021c:
    // 0x2c021c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0220: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0224: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c0224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0228: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c0228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c022c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0230: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c0230u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0234: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c0234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0238: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c023c: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c023cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0248: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c0248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c024c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C024Cu;
    SET_GPR_U32(ctx, 31, 0x2C0254u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C024Cu, 0x2C0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0254u;
label_2c0254:
    // 0x2c0254: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c0254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c0258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c0258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c025c: 0x0  nop
    ctx->pc = 0x2c025cu;
    // NOP
    // 0x2c0260: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0264: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c0264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c0268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c026c: 0x0  nop
    ctx->pc = 0x2c026cu;
    // NOP
    // 0x2c0270: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0274: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0278: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c0278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c027c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C027Cu;
    SET_GPR_U32(ctx, 31, 0x2C0284u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C027Cu, 0x2C0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0284u;
label_2c0284:
    // 0x2c0284: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c0284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c0288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c0288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c028c: 0x0  nop
    ctx->pc = 0x2c028cu;
    // NOP
    // 0x2c0290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c0290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0298: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c0298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c029c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C029Cu;
    SET_GPR_U32(ctx, 31, 0x2C02A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C029Cu, 0x2C02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02A4u;
label_2c02a4:
    // 0x2c02a4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c02a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c02a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c02ac: 0x0  nop
    ctx->pc = 0x2c02acu;
    // NOP
    // 0x2c02b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c02b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c02b4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c02b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c02b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c02bc: 0x0  nop
    ctx->pc = 0x2c02bcu;
    // NOP
    // 0x2c02c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c02c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c02c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c02c8: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c02c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c02cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C02CCu;
    SET_GPR_U32(ctx, 31, 0x2C02D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C02CCu, 0x2C02D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02D4u;
label_2c02d4:
    // 0x2c02d4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2c02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2c02d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c02d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c02dc: 0x0  nop
    ctx->pc = 0x2c02dcu;
    // NOP
    // 0x2c02e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c02e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c02e4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2c02e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2c02e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c02e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c02ec: 0x0  nop
    ctx->pc = 0x2c02ecu;
    // NOP
    // 0x2c02f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c02f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c02f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c02f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c02f8: 0xe46002f8  swc1        $f0, 0x2F8($v1)
    ctx->pc = 0x2c02f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 760), bits); }
    // 0x2c02fc: 0x3c03bfb3  lui         $v1, 0xBFB3
    ctx->pc = 0x2c02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49075 << 16));
    // 0x2c0300: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2c0300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2c0304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c030c: 0xe4600304  swc1        $f0, 0x304($v1)
    ctx->pc = 0x2c030cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x2c0310: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0314: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0318: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c0318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c031c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c031cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0320: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c0320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c0324: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C032Cu;
}
