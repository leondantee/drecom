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

// Function: e2d_id00_type02
// Address: 0x2a95a0 - 0x2a9684
void e2d_id00_type02_0x2a95a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type02_0x2a95a0");
#endif

    switch (ctx->pc) {
        case 0x2a95f4u: goto label_2a95f4;
        case 0x2a9630u: goto label_2a9630;
        default: break;
    }

    ctx->pc = 0x2a95a0u;

    // 0x2a95a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a95a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a95a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a95a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a95a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a95ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a95acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a95b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a95b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a95b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a95b8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a95b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a95bc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a95c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a95c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a95c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a95c8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a95c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a95cc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a95ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a95d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a95d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a95d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a95d8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a95d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a95dc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2a95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2a95e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a95e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a95e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a95e8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a95e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a95ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2A95ECu;
    SET_GPR_U32(ctx, 31, 0x2A95F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2A95ECu, 0x2A95F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A95F4u;
label_2a95f4:
    // 0x2a95f4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a95f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a95f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a95fc: 0x0  nop
    ctx->pc = 0x2a95fcu;
    // NOP
    // 0x2a9600: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9604: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a9604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a9608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a960c: 0x0  nop
    ctx->pc = 0x2a960cu;
    // NOP
    // 0x2a9610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9618: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a9618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a961c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a9620: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9624: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2a9624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9628: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9628u;
    SET_GPR_U32(ctx, 31, 0x2A9630u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9628u, 0x2A9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9630u;
label_2a9630:
    // 0x2a9630: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2a9630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2a9634: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a9634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a9638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a9638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a963c: 0x0  nop
    ctx->pc = 0x2a963cu;
    // NOP
    // 0x2a9640: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9644: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a9644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a964c: 0x0  nop
    ctx->pc = 0x2a964cu;
    // NOP
    // 0x2a9650: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9654: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9658: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2a9658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2a965c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a965cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9660: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9664: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2a9664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9668: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a9668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a966c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9670: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2a9670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9674: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a9674u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9678: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a9678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a967c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A967Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A967Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9684u;
}
