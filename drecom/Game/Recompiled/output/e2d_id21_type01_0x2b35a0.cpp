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

// Function: e2d_id21_type01
// Address: 0x2b35a0 - 0x2b3684
void e2d_id21_type01_0x2b35a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id21_type01_0x2b35a0");
#endif

    switch (ctx->pc) {
        case 0x2b35b4u: goto label_2b35b4;
        case 0x2b3630u: goto label_2b3630;
        default: break;
    }

    ctx->pc = 0x2b35a0u;

    // 0x2b35a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b35a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b35a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b35a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b35a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b35a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b35ac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B35ACu;
    SET_GPR_U32(ctx, 31, 0x2B35B4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B35ACu, 0x2B35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35B4u;
label_2b35b4:
    // 0x2b35b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b35b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b35b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b35bc: 0x0  nop
    ctx->pc = 0x2b35bcu;
    // NOP
    // 0x2b35c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b35c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b35c4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2b35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2b35c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b35c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b35cc: 0x0  nop
    ctx->pc = 0x2b35ccu;
    // NOP
    // 0x2b35d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b35d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b35d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b35d8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b35d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b35dc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b35e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b35e4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2b35e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b35e8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b35ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b35ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b35f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b35f4: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b35f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b35f8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b35fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b35fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3600: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3604: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b3604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b3608: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b3608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b360c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b360cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3610: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3614: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b3614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b3618: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2b3618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2b361c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b361cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3620: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3624: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b3624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b3628: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B3628u;
    SET_GPR_U32(ctx, 31, 0x2B3630u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B3628u, 0x2B3630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3630u;
label_2b3630:
    // 0x2b3630: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2b3630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2b3634: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b3634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b3638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b363c: 0x0  nop
    ctx->pc = 0x2b363cu;
    // NOP
    // 0x2b3640: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3644: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b3644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b364c: 0x0  nop
    ctx->pc = 0x2b364cu;
    // NOP
    // 0x2b3650: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b3654: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3658: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2b3658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2b365c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3660: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3664: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b3664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3668: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b3668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b366c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3670: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b3670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3674: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b3674u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3678: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b367c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B367Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B367Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3684u;
}
