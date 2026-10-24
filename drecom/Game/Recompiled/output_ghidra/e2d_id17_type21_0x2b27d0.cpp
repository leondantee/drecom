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

// Function: e2d_id17_type21
// Address: 0x2b27d0 - 0x2b28bc
void e2d_id17_type21_0x2b27d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type21_0x2b27d0");
#endif

    switch (ctx->pc) {
        case 0x2b2860u: goto label_2b2860;
        default: break;
    }

    ctx->pc = 0x2b27d0u;

    // 0x2b27d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b27d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b27d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b27d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b27d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b27dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b27e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b27e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b27e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b27e8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b27e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b27ec: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x2b27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x2b27f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b27f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b27f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b27f8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b27f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b27fc: 0x3c024268  lui         $v0, 0x4268
    ctx->pc = 0x2b27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17000 << 16));
    // 0x2b2800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2804: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2808: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b2808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b280c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2b280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2b2810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2814: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2818: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b2818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b281c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2b281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2b2820: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2b2820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2b2824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2828: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b282c: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2b282cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2b2830: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2b2830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2b2834: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2b2834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2b2838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b283c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2840: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2b2840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2b2844: 0x3c023f6c  lui         $v0, 0x3F6C
    ctx->pc = 0x2b2844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16236 << 16));
    // 0x2b2848: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b2848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b284c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b284cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2850: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2854: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b2854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b2858: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B2858u;
    SET_GPR_U32(ctx, 31, 0x2B2860u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B2858u, 0x2B2860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2860u;
label_2b2860:
    // 0x2b2860: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2b2860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2b2864: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2868: 0x0  nop
    ctx->pc = 0x2b2868u;
    // NOP
    // 0x2b286c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b286cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2870: 0x3c034454  lui         $v1, 0x4454
    ctx->pc = 0x2b2870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17492 << 16));
    // 0x2b2874: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b2874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b2878: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b287c: 0x0  nop
    ctx->pc = 0x2b287cu;
    // NOP
    // 0x2b2880: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2884: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2888: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b288c: 0x3c033c75  lui         $v1, 0x3C75
    ctx->pc = 0x2b288cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
    // 0x2b2890: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b2890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b2894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2898: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b289c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b289cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b28a0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2b28a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b28a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b28a8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b28a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b28ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b28acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b28b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b28b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B28B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B28B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B28BCu;
}
