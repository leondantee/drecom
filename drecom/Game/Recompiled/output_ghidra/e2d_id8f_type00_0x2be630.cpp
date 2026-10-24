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

// Function: e2d_id8f_type00
// Address: 0x2be630 - 0x2be6f4
void e2d_id8f_type00_0x2be630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id8f_type00_0x2be630");
#endif

    switch (ctx->pc) {
        case 0x2be690u: goto label_2be690;
        default: break;
    }

    ctx->pc = 0x2be630u;

    // 0x2be630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be634: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2be634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2be638: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2be638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2be63c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2be63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2be640: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be644: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2be644u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be648: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2be648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2be64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be650: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be654: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2be654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2be658: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2be658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2be65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be660: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be664: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2be664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2be668: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2be668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2be66c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be670: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be674: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2be674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2be678: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2be678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2be67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be680: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be684: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2be684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2be688: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BE688u;
    SET_GPR_U32(ctx, 31, 0x2BE690u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BE688u, 0x2BE690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE690u;
label_2be690:
    // 0x2be690: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2be690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2be694: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be698: 0x0  nop
    ctx->pc = 0x2be698u;
    // NOP
    // 0x2be69c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2be69cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2be6a0: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x2be6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
    // 0x2be6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be6a8: 0x0  nop
    ctx->pc = 0x2be6a8u;
    // NOP
    // 0x2be6ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be6b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2be6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be6b4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2be6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2be6b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2be6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2be6bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2be6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be6c0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2be6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2be6c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2be6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2be6c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2be6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be6cc: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2be6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be6d0: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2be6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2be6d4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2be6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2be6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be6dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2be6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be6e0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2be6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2be6e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2be6e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be6e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2be6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2be6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE6F4u;
}
