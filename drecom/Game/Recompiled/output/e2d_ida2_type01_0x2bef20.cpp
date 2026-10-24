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

// Function: e2d_ida2_type01
// Address: 0x2bef20 - 0x2bf00c
void e2d_ida2_type01_0x2bef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_ida2_type01_0x2bef20");
#endif

    switch (ctx->pc) {
        case 0x2befb4u: goto label_2befb4;
        default: break;
    }

    ctx->pc = 0x2bef20u;

    // 0x2bef20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bef24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bef28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bef28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bef2c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bef30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bef30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bef34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bef38: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bef38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bef3c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bef40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bef40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bef44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bef48: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bef48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bef4c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bef50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bef50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bef54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bef58: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bef58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bef5c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2bef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2bef60: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2bef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2bef64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bef64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bef68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bef6c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2bef6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2bef70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bef74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bef78: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2bef78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bef7c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bef80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bef80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bef84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bef88: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2bef88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2bef8c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bef90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bef90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bef94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bef98: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2bef98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2bef9c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2befa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2befa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2befa4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2befa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2befa8: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2befa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2befac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BEFACu;
    SET_GPR_U32(ctx, 31, 0x2BEFB4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BEFACu, 0x2BEFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFB4u;
label_2befb4:
    // 0x2befb4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2befb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2befb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2befb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2befbc: 0x0  nop
    ctx->pc = 0x2befbcu;
    // NOP
    // 0x2befc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2befc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2befc4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2befc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2befc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2befc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2befcc: 0x0  nop
    ctx->pc = 0x2befccu;
    // NOP
    // 0x2befd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2befd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2befd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2befd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2befd8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2befd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2befdc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2befdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2befe0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2befe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2befe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2befe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2befe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2befe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2befec: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2befecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2beff0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2beff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2beff4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2beff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2beff8: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2beff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2beffc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2beffcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf000: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf004: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF00Cu;
}
