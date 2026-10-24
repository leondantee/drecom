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

// Function: e2d_id50_type00
// Address: 0x2b6600 - 0x2b6700
void e2d_id50_type00_0x2b6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id50_type00_0x2b6600");
#endif

    switch (ctx->pc) {
        case 0x2b6668u: goto label_2b6668;
        default: break;
    }

    ctx->pc = 0x2b6600u;

    // 0x2b6600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6604: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b6604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b6608: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b6608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b660c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b660cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6618: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b6618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b661c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6624: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6628: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b6628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b662c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6634: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6638: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b6638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b663c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b663cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6644: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6648: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b6648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b664c: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x2b664cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x2b6650: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b6650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b6654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6658: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b665c: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2b665cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2b6660: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B6660u;
    SET_GPR_U32(ctx, 31, 0x2B6668u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B6660u, 0x2B6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6668u;
label_2b6668:
    // 0x2b6668: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b6668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b666c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b666cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6670: 0x0  nop
    ctx->pc = 0x2b6670u;
    // NOP
    // 0x2b6674: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b6674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6678: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2b6678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2b667c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b667cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6680: 0x0  nop
    ctx->pc = 0x2b6680u;
    // NOP
    // 0x2b6684: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b6684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b6688: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b668c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b668cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6690: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b6690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b6694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6698: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b669c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b66a0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b66a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b66a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b66a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b66a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b66ac: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b66acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b66b0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b66b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b66b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b66b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b66b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b66bc: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b66bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b66c0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b66c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b66c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b66c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b66cc: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b66ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b66d0: 0x3c03bfcc  lui         $v1, 0xBFCC
    ctx->pc = 0x2b66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49100 << 16));
    // 0x2b66d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b66d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b66d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b66d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b66dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b66e0: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b66e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b66e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b66e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b66e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b66ec: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b66ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b66f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b66f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b66f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b66f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b66f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B66F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B66F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6700u;
}
