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

// Function: e2d_id61_type06
// Address: 0x2b9170 - 0x2b921c
void e2d_id61_type06_0x2b9170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type06_0x2b9170");
#endif

    switch (ctx->pc) {
        case 0x2b9204u: goto label_2b9204;
        default: break;
    }

    ctx->pc = 0x2b9170u;

    // 0x2b9170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9174: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b9174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b9178: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b9178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b917c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2b917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2b9180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9188: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b9188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b918c: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x2b918cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x2b9190: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2b9190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2b9194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9198: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b919c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b919cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b91a0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2b91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x2b91a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b91a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b91a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b91ac: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b91acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b91b0: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2b91b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b91b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b91b8: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b91b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b91bc: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x2b91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x2b91c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2b91c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2b91c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b91c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b91c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b91cc: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2b91ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2b91d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b91d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b91d8: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2b91d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b91dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b91e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b91e4: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b91e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b91e8: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x2b91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
    // 0x2b91ec: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b91ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b91f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b91f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b91f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b91f8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2b91f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2b91fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B91FCu;
    SET_GPR_U32(ctx, 31, 0x2B9204u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B91FCu, 0x2B9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9204u;
label_2b9204:
    // 0x2b9204: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9208: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2b9208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2b920c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b920cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9210: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b9210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9214: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B921Cu;
}
