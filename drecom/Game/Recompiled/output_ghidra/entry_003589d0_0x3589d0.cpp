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

// Function: entry_003589d0
// Address: 0x3589d0 - 0x358a50
void entry_003589d0_0x3589d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003589d0_0x3589d0");
#endif

    switch (ctx->pc) {
        case 0x3589ecu: goto label_3589ec;
        case 0x3589f8u: goto label_3589f8;
        default: break;
    }

    ctx->pc = 0x3589d0u;

    // 0x3589d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3589d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3589d4: 0x24044a00  addiu       $a0, $zero, 0x4A00
    ctx->pc = 0x3589d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18944));
    // 0x3589d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3589d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3589dc: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x3589dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3589e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3589e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3589e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3589E4u;
    SET_GPR_U32(ctx, 31, 0x3589ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3589E4u, 0x3589ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589ECu;
label_3589ec:
    // 0x3589ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3589ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3589f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3589F0u;
    SET_GPR_U32(ctx, 31, 0x3589F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3589F0u, 0x3589F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589F8u;
label_3589f8:
    // 0x3589f8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3589f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3589fc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3589fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358a00: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358a04: 0x12030012  beq         $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x358A04u;
    {
        const bool branch_taken_0x358a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358a04) {
            ctx->pc = 0x358A50u;
            return;
        }
    }
    ctx->pc = 0x358A0Cu;
    // 0x358a0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x358a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358a10: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x358a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358a14: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x358a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x358a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358a1c: 0x0  nop
    ctx->pc = 0x358a1cu;
    // NOP
    // 0x358a20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x358a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x358a24: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x358a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x358a28: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x358a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x358a2c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x358a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x358a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358a34: 0x0  nop
    ctx->pc = 0x358a34u;
    // NOP
    // 0x358a38: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x358a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x358a3c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x358a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x358a40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x358a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x358a44: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x358a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358a48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x358a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x358a4c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x358a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x358a50u;
}
