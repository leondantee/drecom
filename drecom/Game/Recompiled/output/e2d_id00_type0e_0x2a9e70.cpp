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

// Function: e2d_id00_type0e
// Address: 0x2a9e70 - 0x2a9f54
void e2d_id00_type0e_0x2a9e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type0e_0x2a9e70");
#endif

    switch (ctx->pc) {
        case 0x2a9ec4u: goto label_2a9ec4;
        case 0x2a9f00u: goto label_2a9f00;
        default: break;
    }

    ctx->pc = 0x2a9e70u;

    // 0x2a9e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9e74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a9e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a9e78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a9e7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9e88: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a9e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a9e8c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9e98: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a9e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a9e9c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a9ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9ea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9ea8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a9ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a9eac: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2a9eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2a9eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9eb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9eb8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a9eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a9ebc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2A9EBCu;
    SET_GPR_U32(ctx, 31, 0x2A9EC4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2A9EBCu, 0x2A9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9EC4u;
label_2a9ec4:
    // 0x2a9ec4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a9ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9ecc: 0x0  nop
    ctx->pc = 0x2a9eccu;
    // NOP
    // 0x2a9ed0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9ed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9ed4: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2a9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2a9ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9edc: 0x0  nop
    ctx->pc = 0x2a9edcu;
    // NOP
    // 0x2a9ee0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9ee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9ee8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a9ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a9eec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a9ef0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9ef4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2a9ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9ef8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9EF8u;
    SET_GPR_U32(ctx, 31, 0x2A9F00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9EF8u, 0x2A9F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F00u;
label_2a9f00:
    // 0x2a9f00: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2a9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2a9f04: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a9f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a9f08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a9f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9f0c: 0x0  nop
    ctx->pc = 0x2a9f0cu;
    // NOP
    // 0x2a9f10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9f10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9f14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9f1c: 0x0  nop
    ctx->pc = 0x2a9f1cu;
    // NOP
    // 0x2a9f20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9f24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9f28: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2a9f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2a9f2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a9f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9f30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9f34: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2a9f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9f38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a9f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9f3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9f40: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2a9f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9f44: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a9f44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9f48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a9f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a9f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9F54u;
}
