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

// Function: entry_002decb0
// Address: 0x2decb0 - 0x2ded44
void entry_002decb0_0x2decb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002decb0_0x2decb0");
#endif

    switch (ctx->pc) {
        case 0x2decc0u: goto label_2decc0;
        case 0x2decccu: goto label_2deccc;
        case 0x2decdcu: goto label_2decdc;
        case 0x2dececu: goto label_2decec;
        default: break;
    }

    ctx->pc = 0x2decb0u;

    // 0x2decb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2decb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2decb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2decb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2decb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DECB8u;
    SET_GPR_U32(ctx, 31, 0x2DECC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DECB8u, 0x2DECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECC0u;
label_2decc0:
    // 0x2decc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2decc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2decc4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DECC4u;
    SET_GPR_U32(ctx, 31, 0x2DECCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DECC4u, 0x2DECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECCCu;
label_2deccc:
    // 0x2deccc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2decccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2decd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2decd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2decd4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DECD4u;
    SET_GPR_U32(ctx, 31, 0x2DECDCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DECD4u, 0x2DECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECDCu;
label_2decdc:
    // 0x2decdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2decdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dece0: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2dece4: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x2DECE4u;
    SET_GPR_U32(ctx, 31, 0x2DECECu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x2DECE4u, 0x2DECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECECu;
label_2decec:
    // 0x2decec: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x2dececu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x2decf0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2decf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2decf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2decf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2decf8: 0x0  nop
    ctx->pc = 0x2decf8u;
    // NOP
    // 0x2decfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2decfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ded00: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ded00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2ded04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded08: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2ded08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ded0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded10: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2ded10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ded14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ded18: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2ded18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2ded1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded20: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2ded20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ded24: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ded24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ded28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ded2c: 0x0  nop
    ctx->pc = 0x2ded2cu;
    // NOP
    // 0x2ded30: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DED30u;
    {
        const bool branch_taken_0x2ded30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ded30) {
            ctx->pc = 0x2DED44u;
            return;
        }
    }
    ctx->pc = 0x2DED38u;
    // 0x2ded38: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ded38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded40: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2ded40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x2ded44u;
}
