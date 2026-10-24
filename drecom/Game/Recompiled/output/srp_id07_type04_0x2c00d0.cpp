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

// Function: srp_id07_type04
// Address: 0x2c00d0 - 0x2c01fc
void srp_id07_type04_0x2c00d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id07_type04_0x2c00d0");
#endif

    switch (ctx->pc) {
        case 0x2c00ecu: goto label_2c00ec;
        case 0x2c0124u: goto label_2c0124;
        case 0x2c0154u: goto label_2c0154;
        case 0x2c0174u: goto label_2c0174;
        case 0x2c01a4u: goto label_2c01a4;
        default: break;
    }

    ctx->pc = 0x2c00d0u;

    // 0x2c00d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c00d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c00d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c00d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c00d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c00dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c00e0: 0x244402d0  addiu       $a0, $v0, 0x2D0
    ctx->pc = 0x2c00e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2c00e4: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2C00E4u;
    SET_GPR_U32(ctx, 31, 0x2C00ECu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2C00E4u, 0x2C00ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00ECu;
label_2c00ec:
    // 0x2c00ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c00f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c00f4: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c00f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c00f8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c00fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0100: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c0100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0104: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c0104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0108: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c010c: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c010cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0118: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c0118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c011c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C011Cu;
    SET_GPR_U32(ctx, 31, 0x2C0124u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C011Cu, 0x2C0124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0124u;
label_2c0124:
    // 0x2c0124: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c0124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c0128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c0128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c012c: 0x0  nop
    ctx->pc = 0x2c012cu;
    // NOP
    // 0x2c0130: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0134: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c0134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c0138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c013c: 0x0  nop
    ctx->pc = 0x2c013cu;
    // NOP
    // 0x2c0140: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0148: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c0148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c014c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C014Cu;
    SET_GPR_U32(ctx, 31, 0x2C0154u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C014Cu, 0x2C0154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0154u;
label_2c0154:
    // 0x2c0154: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c0154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c0158: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c0158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c015c: 0x0  nop
    ctx->pc = 0x2c015cu;
    // NOP
    // 0x2c0160: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c0160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0164: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0168: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c0168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c016c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C016Cu;
    SET_GPR_U32(ctx, 31, 0x2C0174u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C016Cu, 0x2C0174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0174u;
label_2c0174:
    // 0x2c0174: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c0174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c0178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c0178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c017c: 0x0  nop
    ctx->pc = 0x2c017cu;
    // NOP
    // 0x2c0180: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0184: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c0184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c0188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c018c: 0x0  nop
    ctx->pc = 0x2c018cu;
    // NOP
    // 0x2c0190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0194: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0198: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c0198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c019c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C019Cu;
    SET_GPR_U32(ctx, 31, 0x2C01A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C019Cu, 0x2C01A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01A4u;
label_2c01a4:
    // 0x2c01a4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c01a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c01a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c01ac: 0x0  nop
    ctx->pc = 0x2c01acu;
    // NOP
    // 0x2c01b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c01b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c01b4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c01b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c01b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c01bc: 0x0  nop
    ctx->pc = 0x2c01bcu;
    // NOP
    // 0x2c01c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c01c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c01c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c01c8: 0xe46002f8  swc1        $f0, 0x2F8($v1)
    ctx->pc = 0x2c01c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 760), bits); }
    // 0x2c01cc: 0x3c03bfb3  lui         $v1, 0xBFB3
    ctx->pc = 0x2c01ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49075 << 16));
    // 0x2c01d0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2c01d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2c01d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c01d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c01d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c01d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c01dc: 0xe4600304  swc1        $f0, 0x304($v1)
    ctx->pc = 0x2c01dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x2c01e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c01e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c01e8: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c01e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c01ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c01ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c01f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c01f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c01f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C01F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C01F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C01FCu;
}
