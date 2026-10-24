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

// Function: entry_002e6f88
// Address: 0x2e6f88 - 0x2e7070
void entry_002e6f88_0x2e6f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6f88_0x2e6f88");
#endif

    switch (ctx->pc) {
        case 0x2e6facu: goto label_2e6fac;
        case 0x2e6fc4u: goto label_2e6fc4;
        case 0x2e6fd4u: goto label_2e6fd4;
        case 0x2e6fe8u: goto label_2e6fe8;
        case 0x2e7004u: goto label_2e7004;
        default: break;
    }

    ctx->pc = 0x2e6f88u;

    // 0x2e6f88: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6f8c: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2e6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6f90: 0x3c053e49  lui         $a1, 0x3E49
    ctx->pc = 0x2e6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15945 << 16));
    // 0x2e6f94: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x2e6f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x2e6f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e6f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6f9c: 0x0  nop
    ctx->pc = 0x2e6f9cu;
    // NOP
    // 0x2e6fa0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2e6fa0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e6fa4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E6FA4u;
    SET_GPR_U32(ctx, 31, 0x2E6FACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E6FA4u, 0x2E6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FACu;
label_2e6fac:
    // 0x2e6fac: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6fb0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2e6fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2e6fb4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6fb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6fbc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E6FBCu;
    SET_GPR_U32(ctx, 31, 0x2E6FC4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E6FBCu, 0x2E6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FC4u;
label_2e6fc4:
    // 0x2e6fc4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e6fc4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e6fc8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6fcc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E6FCCu;
    SET_GPR_U32(ctx, 31, 0x2E6FD4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E6FCCu, 0x2E6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FD4u;
label_2e6fd4:
    // 0x2e6fd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e6fd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e6fd8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6fdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e6fe0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E6FE0u;
    SET_GPR_U32(ctx, 31, 0x2E6FE8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E6FE0u, 0x2E6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FE8u;
label_2e6fe8:
    // 0x2e6fe8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e6fe8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e6fec: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2e6fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6ff0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6ff4: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x2e6ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2e6ff8: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x2e6ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2e6ffc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E6FFCu;
    SET_GPR_U32(ctx, 31, 0x2E7004u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E6FFCu, 0x2E7004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7004u;
label_2e7004:
    // 0x2e7004: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e7004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2e7008: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e700c: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7010: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7014: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x2e7014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7018: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e7018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e701c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x2e701cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x2e7020: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7024: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2e7024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7028: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e7028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e702c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e702cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7030: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e7030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7034: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7038: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e7038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e703c: 0x0  nop
    ctx->pc = 0x2e703cu;
    // NOP
    // 0x2e7040: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2E7040u;
    {
        const bool branch_taken_0x2e7040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7040) {
            ctx->pc = 0x2E7070u;
            return;
        }
    }
    ctx->pc = 0x2E7048u;
    // 0x2e7048: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e7048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e704c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e704cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7050: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e7050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7054: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7058: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e705c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e705cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2e7060: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7064: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e7064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e7068: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e706c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e706cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e7070u;
}
