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

// Function: e2d_id62_type06
// Address: 0x2b99f0 - 0x2b9a9c
void e2d_id62_type06_0x2b99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type06_0x2b99f0");
#endif

    switch (ctx->pc) {
        case 0x2b9a84u: goto label_2b9a84;
        default: break;
    }

    ctx->pc = 0x2b99f0u;

    // 0x2b99f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b99f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b99f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b99f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b99f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b99f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b99fc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2b99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2b9a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9a04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9a08: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b9a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b9a0c: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x2b9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x2b9a10: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2b9a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2b9a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9a18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9a1c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b9a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b9a20: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2b9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2b9a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9a28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9a2c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b9a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b9a30: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2b9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b9a34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9a38: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b9a3c: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x2b9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x2b9a40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2b9a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2b9a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9a48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9a4c: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2b9a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2b9a50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9a54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9a58: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2b9a58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b9a5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9a60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9a64: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b9a64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b9a68: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x2b9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x2b9a6c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b9a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b9a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9a74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9a78: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2b9a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2b9a7c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B9A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B9A84u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B9A7Cu, 0x2B9A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A84u;
label_2b9a84:
    // 0x2b9a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9a88: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2b9a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2b9a8c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b9a8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9a90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b9a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9a94: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9A9Cu;
}
