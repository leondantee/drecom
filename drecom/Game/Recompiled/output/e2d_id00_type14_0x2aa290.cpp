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

// Function: e2d_id00_type14
// Address: 0x2aa290 - 0x2aa348
void e2d_id00_type14_0x2aa290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type14_0x2aa290");
#endif

    switch (ctx->pc) {
        case 0x2aa300u: goto label_2aa300;
        default: break;
    }

    ctx->pc = 0x2aa290u;

    // 0x2aa290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa294: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aa294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aa298: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aa298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aa29c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2aa29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2aa2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa2a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa2a8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2aa2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2aa2ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2aa2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aa2b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa2b4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2aa2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa2b8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2aa2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2aa2bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa2c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa2c4: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aa2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aa2c8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2aa2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2aa2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa2d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa2d4: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aa2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aa2d8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2aa2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2aa2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa2e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa2e4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aa2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aa2e8: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2aa2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x2aa2ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa2f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa2f4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aa2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aa2f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AA2F8u;
    SET_GPR_U32(ctx, 31, 0x2AA300u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AA2F8u, 0x2AA300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA300u;
label_2aa300:
    // 0x2aa300: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2aa300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2aa304: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2aa304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2aa308: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aa308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa30c: 0x0  nop
    ctx->pc = 0x2aa30cu;
    // NOP
    // 0x2aa310: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa310u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa314: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2aa314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa31c: 0x0  nop
    ctx->pc = 0x2aa31cu;
    // NOP
    // 0x2aa320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa324: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa328: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2aa328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2aa32c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aa32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa330: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa334: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2aa334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa338: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aa338u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa33c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa33cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa340: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA348u;
}
