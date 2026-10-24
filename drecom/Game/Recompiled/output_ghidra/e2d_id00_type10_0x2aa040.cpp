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

// Function: e2d_id00_type10
// Address: 0x2aa040 - 0x2aa11c
void e2d_id00_type10_0x2aa040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type10_0x2aa040");
#endif

    switch (ctx->pc) {
        case 0x2aa054u: goto label_2aa054;
        case 0x2aa0d0u: goto label_2aa0d0;
        default: break;
    }

    ctx->pc = 0x2aa040u;

    // 0x2aa040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa044: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aa044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aa048: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aa048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aa04c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2AA04Cu;
    SET_GPR_U32(ctx, 31, 0x2AA054u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2AA04Cu, 0x2AA054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA054u;
label_2aa054:
    // 0x2aa054: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2aa054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2aa058: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aa058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa05c: 0x0  nop
    ctx->pc = 0x2aa05cu;
    // NOP
    // 0x2aa060: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa064: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2aa064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2aa068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa06c: 0x0  nop
    ctx->pc = 0x2aa06cu;
    // NOP
    // 0x2aa070: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa074: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa078: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2aa078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2aa07c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2aa07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aa080: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa084: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2aa084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa088: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa08c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa094: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aa094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aa098: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2aa098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2aa09c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa0a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa0a4: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aa0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aa0a8: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2aa0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2aa0ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa0b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa0b4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aa0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aa0b8: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x2aa0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x2aa0bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa0c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa0c4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aa0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aa0c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AA0C8u;
    SET_GPR_U32(ctx, 31, 0x2AA0D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AA0C8u, 0x2AA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA0D0u;
label_2aa0d0:
    // 0x2aa0d0: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2aa0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2aa0d4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2aa0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2aa0d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aa0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa0dc: 0x0  nop
    ctx->pc = 0x2aa0dcu;
    // NOP
    // 0x2aa0e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa0e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa0e4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x2aa0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x2aa0e8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2aa0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2aa0ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa0f0: 0x0  nop
    ctx->pc = 0x2aa0f0u;
    // NOP
    // 0x2aa0f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa0f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa0f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa0fc: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2aa0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2aa100: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aa100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa108: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2aa108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa10c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aa10cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa110: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa114: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA11Cu;
}
