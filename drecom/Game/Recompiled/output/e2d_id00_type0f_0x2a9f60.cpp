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

// Function: e2d_id00_type0f
// Address: 0x2a9f60 - 0x2aa038
void e2d_id00_type0f_0x2a9f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type0f_0x2a9f60");
#endif

    switch (ctx->pc) {
        case 0x2a9f74u: goto label_2a9f74;
        case 0x2a9ff0u: goto label_2a9ff0;
        default: break;
    }

    ctx->pc = 0x2a9f60u;

    // 0x2a9f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9f64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a9f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a9f68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a9f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a9f6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2A9F6Cu;
    SET_GPR_U32(ctx, 31, 0x2A9F74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2A9F6Cu, 0x2A9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F74u;
label_2a9f74:
    // 0x2a9f74: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2a9f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9f7c: 0x0  nop
    ctx->pc = 0x2a9f7cu;
    // NOP
    // 0x2a9f80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9f84: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2a9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2a9f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9f8c: 0x0  nop
    ctx->pc = 0x2a9f8cu;
    // NOP
    // 0x2a9f90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9f94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9f98: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a9f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a9f9c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a9f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a9fa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9fa4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2a9fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9fa8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9fb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9fb4: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a9fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a9fb8: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2a9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2a9fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9fc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9fc4: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a9fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a9fc8: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2a9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2a9fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9fd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9fd4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a9fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a9fd8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2a9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2a9fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9fe0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9fe4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a9fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a9fe8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9FE8u;
    SET_GPR_U32(ctx, 31, 0x2A9FF0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9FE8u, 0x2A9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FF0u;
label_2a9ff0:
    // 0x2a9ff0: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2a9ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2a9ff4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a9ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a9ff8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a9ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9ffc: 0x0  nop
    ctx->pc = 0x2a9ffcu;
    // NOP
    // 0x2aa000: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa004: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2aa004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa00c: 0x0  nop
    ctx->pc = 0x2aa00cu;
    // NOP
    // 0x2aa010: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa014: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa018: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2aa018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2aa01c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aa01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa020: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa024: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2aa024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa028: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aa028u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa02c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa02cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa030: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA038u;
}
