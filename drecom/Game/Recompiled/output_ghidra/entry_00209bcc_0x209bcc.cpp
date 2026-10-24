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

// Function: entry_00209bcc
// Address: 0x209bcc - 0x209c70
void entry_00209bcc_0x209bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209bcc_0x209bcc");
#endif

    switch (ctx->pc) {
        case 0x209c0cu: goto label_209c0c;
        case 0x209c1cu: goto label_209c1c;
        default: break;
    }

    ctx->pc = 0x209bccu;

    // 0x209bcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209bd0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x209bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209bd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209bd8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x209bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209bdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209be0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x209be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x209be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209be8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209bec: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x209becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x209bf0: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x209bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x209bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209bf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209bfc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x209bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x209c00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209c04: 0xc05cd10  jal         func_173440
    ctx->pc = 0x209C04u;
    SET_GPR_U32(ctx, 31, 0x209C0Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x209C04u, 0x209C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C0Cu;
label_209c0c:
    // 0x209c0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209c10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x209c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x209c14: 0xc080f60  jal         func_203D80
    ctx->pc = 0x209C14u;
    SET_GPR_U32(ctx, 31, 0x209C1Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209C14u, 0x209C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C1Cu;
label_209c1c:
    // 0x209c1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209c20: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x209c20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x209c24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x209c28: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x209c28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x209c2c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x209c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x209c30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x209c30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x209c34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x209c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x209c38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x209c38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x209c3c: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x209c3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x209c40: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x209C40u;
    {
        const bool branch_taken_0x209c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c40) {
            ctx->pc = 0x209C70u;
            return;
        }
    }
    ctx->pc = 0x209C48u;
    // 0x209c48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209c4c: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x209c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209c50: 0x3c033d56  lui         $v1, 0x3D56
    ctx->pc = 0x209c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15702 << 16));
    // 0x209c54: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x209c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x209c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209c5c: 0x0  nop
    ctx->pc = 0x209c5cu;
    // NOP
    // 0x209c60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209c64: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x209c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x209c68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x209C68u;
    {
        const bool branch_taken_0x209c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c68) {
            ctx->pc = 0x209CA0u;
            return;
        }
    }
    ctx->pc = 0x209C70u;
}
