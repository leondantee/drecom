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

// Function: entry_0024e958
// Address: 0x24e958 - 0x24ec20
void entry_0024e958_0x24e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024e958_0x24e958");
#endif

    switch (ctx->pc) {
        case 0x24e998u: goto label_24e998;
        case 0x24eab4u: goto label_24eab4;
        case 0x24eac0u: goto label_24eac0;
        case 0x24eb20u: goto label_24eb20;
        case 0x24eb2cu: goto label_24eb2c;
        case 0x24eb8cu: goto label_24eb8c;
        case 0x24eb98u: goto label_24eb98;
        case 0x24ebfcu: goto label_24ebfc;
        case 0x24ec08u: goto label_24ec08;
        default: break;
    }

    ctx->pc = 0x24e958u;

    // 0x24e958: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x24e958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24e95c: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x24E95Cu;
    {
        const bool branch_taken_0x24e95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e95c) {
            ctx->pc = 0x24E834u;
            return;
        }
    }
    ctx->pc = 0x24E964u;
    // 0x24e964: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e968: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24e96c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24e96cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e970: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e974: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24e974u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24e978: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e97c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x24e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x24e980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24e980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e984: 0x0  nop
    ctx->pc = 0x24e984u;
    // NOP
    // 0x24e988: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e98c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24e98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24e990: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24E990u;
    SET_GPR_U32(ctx, 31, 0x24E998u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24E990u, 0x24E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E998u;
label_24e998:
    // 0x24e998: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24e99c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e9a0: 0x0  nop
    ctx->pc = 0x24e9a0u;
    // NOP
    // 0x24e9a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24e9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e9a8: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x24e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x24e9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e9b0: 0x0  nop
    ctx->pc = 0x24e9b0u;
    // NOP
    // 0x24e9b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24e9b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24e9b8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24e9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e9c0: 0x0  nop
    ctx->pc = 0x24e9c0u;
    // NOP
    // 0x24e9c4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24e9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24e9c8: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x24e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x24e9cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e9d0: 0x0  nop
    ctx->pc = 0x24e9d0u;
    // NOP
    // 0x24e9d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24e9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e9d8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x24e9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e9dc: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x24e9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24e9e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e9e4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x24e9e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e9e8: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x24e9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x24e9ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e9f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e9f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e9f8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24e9fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ea00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ea04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ea0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ea10: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24ea10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ea14: 0x872825  or          $a1, $a0, $a3
    ctx->pc = 0x24ea14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x24ea18: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24ea18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ea1c: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x24ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x24ea20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24ea28: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24ea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24ea2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24ea30: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x24ea30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24ea34: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x24ea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x24ea38: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24ea38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24ea3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ea40: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ea44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ea4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ea50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ea54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ea54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ea58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ea58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ea5c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24ea5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24ea60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ea64: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ea68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ea70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ea70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ea78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ea7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ea80: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24ea80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ea88: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ea8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ea90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ea90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ea94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ea98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ea9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ea9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eaa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24eaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eaa4: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24eaa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24eaa8: 0x2404080c  addiu       $a0, $zero, 0x80C
    ctx->pc = 0x24eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x24eaac: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24EAACu;
    SET_GPR_U32(ctx, 31, 0x24EAB4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24EAACu, 0x24EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAB4u;
label_24eab4:
    // 0x24eab4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24eab4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24eab8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24EAB8u;
    SET_GPR_U32(ctx, 31, 0x24EAC0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24EAB8u, 0x24EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAC0u;
label_24eac0:
    // 0x24eac0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eac4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24eac8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24eac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24eacc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ead0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24ead0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24ead4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24ead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ead8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24eadc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24eadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eae0: 0x0  nop
    ctx->pc = 0x24eae0u;
    // NOP
    // 0x24eae4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24eae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24eae8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24eae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24eaec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eaf0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24eaf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24eaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24eaf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24eaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24eafc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24eb00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24eb04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24eb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eb08: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24eb08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eb0c: 0x24040510  addiu       $a0, $zero, 0x510
    ctx->pc = 0x24eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    // 0x24eb10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24eb10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24eb14: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24eb18: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EB18u;
    SET_GPR_U32(ctx, 31, 0x24EB20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EB18u, 0x24EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB20u;
label_24eb20:
    // 0x24eb20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24eb20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24eb24: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EB24u;
    SET_GPR_U32(ctx, 31, 0x24EB2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EB24u, 0x24EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB2Cu;
label_24eb2c:
    // 0x24eb2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eb30: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24eb34: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x24eb34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24eb38: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24eb3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24eb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24eb40: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eb44: 0x3c0742a0  lui         $a3, 0x42A0
    ctx->pc = 0x24eb44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17056 << 16));
    // 0x24eb48: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24eb48u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eb4c: 0x0  nop
    ctx->pc = 0x24eb4cu;
    // NOP
    // 0x24eb50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24eb50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24eb54: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24eb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24eb58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eb5c: 0x8c8600c0  lw          $a2, 0xC0($a0)
    ctx->pc = 0x24eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x24eb60: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x24eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24eb64: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24eb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24eb68: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24eb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24eb6c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24eb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24eb70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24eb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24eb74: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x24eb74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24eb78: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x24eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x24eb7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24eb7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24eb80: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24eb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24eb84: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EB84u;
    SET_GPR_U32(ctx, 31, 0x24EB8Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EB84u, 0x24EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB8Cu;
label_24eb8c:
    // 0x24eb8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24eb8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24eb90: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EB90u;
    SET_GPR_U32(ctx, 31, 0x24EB98u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EB90u, 0x24EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB98u;
label_24eb98:
    // 0x24eb98: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eb9c: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x24eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24eba0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x24eba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24eba4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x24eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24eba8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x24eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x24ebac: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ebb0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x24ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x24ebb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ebb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ebb8: 0x0  nop
    ctx->pc = 0x24ebb8u;
    // NOP
    // 0x24ebbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ebbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ebc0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24ebc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24ebc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ebc8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ebcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24ebccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ebd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24ebd4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x24ebd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ebd8: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x24ebd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x24ebdc: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x24ebdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x24ebe0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x24ebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x24ebe4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x24ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x24ebe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24ebe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ebec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24ebecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ebf0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x24ebf0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ebf4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EBF4u;
    SET_GPR_U32(ctx, 31, 0x24EBFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EBF4u, 0x24EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBFCu;
label_24ebfc:
    // 0x24ebfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ebfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ec00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EC00u;
    SET_GPR_U32(ctx, 31, 0x24EC08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EC00u, 0x24EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC08u;
label_24ec08:
    // 0x24ec08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24ec08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ec0c: 0x0  nop
    ctx->pc = 0x24ec0cu;
    // NOP
    // 0x24ec10: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24ec10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24ec14: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x24ec14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ec18: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x24EC18u;
    {
        const bool branch_taken_0x24ec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ec18) {
            ctx->pc = 0x24EDE0u;
            return;
        }
    }
    ctx->pc = 0x24EC20u;
}
