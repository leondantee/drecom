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

// Function: ectrl05_init00_t01
// Address: 0x24db80 - 0x24e4b8
void ectrl05_init00_t01_0x24db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl05_init00_t01_0x24db80");
#endif

    switch (ctx->pc) {
        case 0x24dbd4u: goto label_24dbd4;
        case 0x24dbe0u: goto label_24dbe0;
        case 0x24dbfcu: goto label_24dbfc;
        case 0x24dc50u: goto label_24dc50;
        case 0x24dd30u: goto label_24dd30;
        case 0x24dd3cu: goto label_24dd3c;
        case 0x24ddbcu: goto label_24ddbc;
        case 0x24deccu: goto label_24decc;
        case 0x24ded8u: goto label_24ded8;
        case 0x24df38u: goto label_24df38;
        case 0x24df44u: goto label_24df44;
        case 0x24dfa4u: goto label_24dfa4;
        case 0x24dfb0u: goto label_24dfb0;
        case 0x24e010u: goto label_24e010;
        case 0x24e01cu: goto label_24e01c;
        case 0x24e034u: goto label_24e034;
        case 0x24e03cu: goto label_24e03c;
        case 0x24e058u: goto label_24e058;
        case 0x24e1c8u: goto label_24e1c8;
        case 0x24e1d4u: goto label_24e1d4;
        case 0x24e308u: goto label_24e308;
        case 0x24e314u: goto label_24e314;
        case 0x24e37cu: goto label_24e37c;
        case 0x24e388u: goto label_24e388;
        case 0x24e3d4u: goto label_24e3d4;
        case 0x24e3e0u: goto label_24e3e0;
        case 0x24e42cu: goto label_24e42c;
        case 0x24e438u: goto label_24e438;
        case 0x24e484u: goto label_24e484;
        case 0x24e490u: goto label_24e490;
        default: break;
    }

    ctx->pc = 0x24db80u;

    // 0x24db80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24db84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24db84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24db88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24db8c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x24db8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x24db90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24db94: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x24db94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24db98: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24db98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x24db9c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24db9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dba0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dba4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24dba8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24dba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24dbac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24dbacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24dbb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dbb4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24dbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24dbb8: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24dbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dbbc: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24dbbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24dbc0: 0x24041e02  addiu       $a0, $zero, 0x1E02
    ctx->pc = 0x24dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x24dbc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24dbc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24dbc8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24dbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24dbcc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DBCCu;
    SET_GPR_U32(ctx, 31, 0x24DBD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DBCCu, 0x24DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DBD4u;
label_24dbd4:
    // 0x24dbd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24dbd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24dbd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DBD8u;
    SET_GPR_U32(ctx, 31, 0x24DBE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DBD8u, 0x24DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DBE0u;
label_24dbe0:
    // 0x24dbe0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24dbe0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24dbe4: 0x3c04c396  lui         $a0, 0xC396
    ctx->pc = 0x24dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50070 << 16));
    // 0x24dbe8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24dbe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dbec: 0x0  nop
    ctx->pc = 0x24dbecu;
    // NOP
    // 0x24dbf0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24dbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24dbf4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24DBF4u;
    SET_GPR_U32(ctx, 31, 0x24DBFCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24DBF4u, 0x24DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DBFCu;
label_24dbfc:
    // 0x24dbfc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24dc00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24dc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24dc04: 0x0  nop
    ctx->pc = 0x24dc04u;
    // NOP
    // 0x24dc08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24dc08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24dc0c: 0x3c03c4a2  lui         $v1, 0xC4A2
    ctx->pc = 0x24dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50338 << 16));
    // 0x24dc10: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x24dc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x24dc14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24dc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dc18: 0x0  nop
    ctx->pc = 0x24dc18u;
    // NOP
    // 0x24dc1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24dc1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24dc20: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24dc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24dc24: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24dc28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24dc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dc2c: 0x0  nop
    ctx->pc = 0x24dc2cu;
    // NOP
    // 0x24dc30: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24dc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24dc34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24dc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dc3c: 0x0  nop
    ctx->pc = 0x24dc3cu;
    // NOP
    // 0x24dc40: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x24dc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x24dc44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x24dc44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24dc48: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x24DC48u;
    {
        const bool branch_taken_0x24dc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dc48) {
            ctx->pc = 0x24DD70u;
            goto label_24dd70;
        }
    }
    ctx->pc = 0x24DC50u;
label_24dc50:
    // 0x24dc50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dc54: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24dc58: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24dc58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dc5c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24dc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24dc60: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24dc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dc64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24dc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24dc68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dc6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24dc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24dc70: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24dc70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dc74: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24dc78: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24dc78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dc7c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24dc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24dc80: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24dc80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dc84: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24dc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24dc88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dc8c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x24dc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x24dc90: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x24dc90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x24dc94: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x24dc94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dc98: 0x8d2300c4  lw          $v1, 0xC4($t1)
    ctx->pc = 0x24dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x24dc9c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24dc9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dca0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24dca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24dca4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24dca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dca8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24dca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24dcac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dcb0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x24dcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24dcb4: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x24dcb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dcb8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24dcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dcbc: 0x8ce300c4  lw          $v1, 0xC4($a3)
    ctx->pc = 0x24dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x24dcc0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24dcc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dcc4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24dcc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24dcc8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24dcc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dccc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24dcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24dcd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dcd4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x24dcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24dcd8: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x24dcd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x24dcdc: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24dcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dce0: 0x8ce400c0  lw          $a0, 0xC0($a3)
    ctx->pc = 0x24dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x24dce4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x24dce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24dce8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24dcec: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24dcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dcf0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24dcf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dcf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24dcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24dcfc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24dcfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24dd00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dd04: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24dd08: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24dd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24dd0c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24dd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24dd10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24dd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dd14: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24dd18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24dd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24dd1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24dd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24dd20: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x24dd20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x24dd24: 0x2404080e  addiu       $a0, $zero, 0x80E
    ctx->pc = 0x24dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2062));
    // 0x24dd28: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24DD28u;
    SET_GPR_U32(ctx, 31, 0x24DD30u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24DD28u, 0x24DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD30u;
label_24dd30:
    // 0x24dd30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24dd30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24dd34: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24DD34u;
    SET_GPR_U32(ctx, 31, 0x24DD3Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24DD34u, 0x24DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD3Cu;
label_24dd3c:
    // 0x24dd3c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x24dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dd40: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x24dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x24dd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd48: 0x0  nop
    ctx->pc = 0x24dd48u;
    // NOP
    // 0x24dd4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24dd4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24dd50: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24dd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24dd54: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x24dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dd58: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24dd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd60: 0x0  nop
    ctx->pc = 0x24dd60u;
    // NOP
    // 0x24dd64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24dd64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24dd68: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24dd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24dd6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24dd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24dd70:
    // 0x24dd70: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x24dd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24dd74: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x24DD74u;
    {
        const bool branch_taken_0x24dd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dd74) {
            ctx->pc = 0x24DC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dc50;
        }
    }
    ctx->pc = 0x24DD7Cu;
    // 0x24dd7c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dd80: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x24dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24dd84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24dd84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dd88: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24dd8c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24dd90: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dd94: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x24dd94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
    // 0x24dd98: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24dd98u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd9c: 0x0  nop
    ctx->pc = 0x24dd9cu;
    // NOP
    // 0x24dda0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24dda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24dda4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24dda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24dda8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24dda8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ddac: 0x0  nop
    ctx->pc = 0x24ddacu;
    // NOP
    // 0x24ddb0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24ddb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24ddb4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24DDB4u;
    SET_GPR_U32(ctx, 31, 0x24DDBCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24DDB4u, 0x24DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDBCu;
label_24ddbc:
    // 0x24ddbc: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x24ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x24ddc0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x24ddc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ddc4: 0x0  nop
    ctx->pc = 0x24ddc4u;
    // NOP
    // 0x24ddc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24ddc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ddcc: 0x3c06c4af  lui         $a2, 0xC4AF
    ctx->pc = 0x24ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50351 << 16));
    // 0x24ddd0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x24ddd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ddd4: 0x0  nop
    ctx->pc = 0x24ddd4u;
    // NOP
    // 0x24ddd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ddd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24dddc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24dddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24dde0: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x24dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x24dde4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dde8: 0x0  nop
    ctx->pc = 0x24dde8u;
    // NOP
    // 0x24ddec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24ddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24ddf0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ddf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ddf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ddf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ddf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ddfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24de00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24de04: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x24de04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24de08: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x24de08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24de0c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24de0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de10: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24de14: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24de14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de18: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x24de18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x24de1c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24de1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de20: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x24de20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x24de24: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x24de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x24de28: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x24de28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x24de2c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x24de2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24de30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24de34: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24de34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24de38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24de38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24de3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24de40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24de40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24de44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24de48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24de48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24de4c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24de4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24de50: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x24de50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24de54: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24de54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24de58: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x24de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x24de5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de60: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24de64: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24de64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de68: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24de68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24de6c: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x24de6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24de70: 0x461824  and         $v1, $v0, $a2
    ctx->pc = 0x24de70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x24de74: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x24de74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x24de78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24de7c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24de80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24de80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24de84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24de88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24de88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24de8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24de90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24de94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24de94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24de98: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24de98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dea0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24dea4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24dea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24dea8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24deac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24deb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24deb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24deb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24deb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24debc: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24debcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24dec0: 0x2404080d  addiu       $a0, $zero, 0x80D
    ctx->pc = 0x24dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x24dec4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24DEC4u;
    SET_GPR_U32(ctx, 31, 0x24DECCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24DEC4u, 0x24DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DECCu;
label_24decc:
    // 0x24decc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24deccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ded0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24DED0u;
    SET_GPR_U32(ctx, 31, 0x24DED8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24DED0u, 0x24DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DED8u;
label_24ded8:
    // 0x24ded8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dedc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24dee0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24dee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dee4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24dee8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24dee8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24deec: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24def0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24def4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24def4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24def8: 0x0  nop
    ctx->pc = 0x24def8u;
    // NOP
    // 0x24defc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24defcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24df00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24df00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24df04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24df08: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24df0c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24df0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24df10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24df10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24df14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24df18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24df18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24df1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24df1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24df20: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24df20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24df24: 0x2404050a  addiu       $a0, $zero, 0x50A
    ctx->pc = 0x24df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x24df28: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24df28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24df2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24df2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24df30: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DF30u;
    SET_GPR_U32(ctx, 31, 0x24DF38u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DF30u, 0x24DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF38u;
label_24df38:
    // 0x24df38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24df38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24df3c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DF3Cu;
    SET_GPR_U32(ctx, 31, 0x24DF44u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DF3Cu, 0x24DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF44u;
label_24df44:
    // 0x24df44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24df44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24df48: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24df48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24df4c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24df4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24df50: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24df54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24df54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24df58: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24df5c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24df60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24df60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24df64: 0x0  nop
    ctx->pc = 0x24df64u;
    // NOP
    // 0x24df68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24df68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24df6c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24df6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24df70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24df74: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24df78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24df78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24df7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24df7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24df80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24df80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24df84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24df88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24df8c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24df8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24df90: 0x2404050f  addiu       $a0, $zero, 0x50F
    ctx->pc = 0x24df90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x24df94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24df94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24df98: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24df98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24df9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DF9Cu;
    SET_GPR_U32(ctx, 31, 0x24DFA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DF9Cu, 0x24DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DFA4u;
label_24dfa4:
    // 0x24dfa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24dfa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24dfa8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DFA8u;
    SET_GPR_U32(ctx, 31, 0x24DFB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DFA8u, 0x24DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DFB0u;
label_24dfb0:
    // 0x24dfb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dfb4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24dfb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24dfb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dfbc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24dfc0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24dfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24dfc4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dfc8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x24dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x24dfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dfd0: 0x0  nop
    ctx->pc = 0x24dfd0u;
    // NOP
    // 0x24dfd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24dfd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24dfd8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24dfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24dfdc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dfe0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24dfe4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24dfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24dfe8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24dfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24dfec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24dfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dff0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24dff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24dff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24dff8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24dff8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24dffc: 0x2404050f  addiu       $a0, $zero, 0x50F
    ctx->pc = 0x24dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x24e000: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e004: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e008: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E008u;
    SET_GPR_U32(ctx, 31, 0x24E010u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E008u, 0x24E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E010u;
label_24e010:
    // 0x24e010: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e010u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e014: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E014u;
    SET_GPR_U32(ctx, 31, 0x24E01Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E014u, 0x24E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E01Cu;
label_24e01c:
    // 0x24e01c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e01cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e020: 0x0  nop
    ctx->pc = 0x24e020u;
    // NOP
    // 0x24e024: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24e024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24e028: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x24e028u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e02c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x24E02Cu;
    {
        const bool branch_taken_0x24e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e02c) {
            ctx->pc = 0x24E1E8u;
            goto label_24e1e8;
        }
    }
    ctx->pc = 0x24E034u;
label_24e034:
    // 0x24e034: 0xc067654  jal         func_19D950
    ctx->pc = 0x24E034u;
    SET_GPR_U32(ctx, 31, 0x24E03Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24E034u, 0x24E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E03Cu;
label_24e03c:
    // 0x24e03c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24e040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e044: 0x0  nop
    ctx->pc = 0x24e044u;
    // NOP
    // 0x24e048: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24e048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e04c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24e04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24e050: 0xc067654  jal         func_19D950
    ctx->pc = 0x24E050u;
    SET_GPR_U32(ctx, 31, 0x24E058u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24E050u, 0x24E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E058u;
label_24e058:
    // 0x24e058: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24e05c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e060: 0x0  nop
    ctx->pc = 0x24e060u;
    // NOP
    // 0x24e064: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24e064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e068: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x24e068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24e06c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e070: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24e074: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24e074u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e078: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e07c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24e080: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e084: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e088: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e08c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24e08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24e090: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e094: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e098: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e09c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24e09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24e0a0: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x24e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x24e0a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e0a8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e0ac: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x24e0acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e0b0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x24e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x24e0b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e0b8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e0bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24e0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e0c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x24e0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24e0c4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24e0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24e0c8: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x24e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x24e0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e0d0: 0x0  nop
    ctx->pc = 0x24e0d0u;
    // NOP
    // 0x24e0d4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24e0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24e0d8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24e0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e0e0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24e0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e0e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e0e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24e0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e0ec: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e0f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e0f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e0f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e0fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e104: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e108: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e10c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24e110: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e114: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e118: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e11c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e120: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e124: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e128: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24e128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e12c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e130: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24e134: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e138: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e13c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e140: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e144: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e148: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e14c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e150: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e154: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24e158: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e15c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e160: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e164: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e168: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e16c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e170: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24e170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e174: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e178: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e17c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e180: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e184: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e188: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e18c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e190: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e194: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e198: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e19c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e1a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e1a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e1a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e1ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e1b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e1b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e1b8: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24e1b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e1bc: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x24e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x24e1c0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24E1C0u;
    SET_GPR_U32(ctx, 31, 0x24E1C8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24E1C0u, 0x24E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1C8u;
label_24e1c8:
    // 0x24e1c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e1c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e1cc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24E1CCu;
    SET_GPR_U32(ctx, 31, 0x24E1D4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24E1CCu, 0x24E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1D4u;
label_24e1d4:
    // 0x24e1d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24e1d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e1dc: 0x0  nop
    ctx->pc = 0x24e1dcu;
    // NOP
    // 0x24e1e0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24e1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24e1e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24e1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24e1e8:
    // 0x24e1e8: 0x2e060002  sltiu       $a2, $s0, 0x2
    ctx->pc = 0x24e1e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24e1ec: 0x14c0ff91  bnez        $a2, . + 4 + (-0x6F << 2)
    ctx->pc = 0x24E1ECu;
    {
        const bool branch_taken_0x24e1ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e1ec) {
            ctx->pc = 0x24E034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e034;
        }
    }
    ctx->pc = 0x24E1F4u;
    // 0x24e1f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e1f8: 0x0  nop
    ctx->pc = 0x24e1f8u;
    // NOP
    // 0x24e1fc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24e1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24e200: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x24e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x24e204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e208: 0x0  nop
    ctx->pc = 0x24e208u;
    // NOP
    // 0x24e20c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24e20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24e210: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x24e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x24e214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e218: 0x0  nop
    ctx->pc = 0x24e218u;
    // NOP
    // 0x24e21c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24e21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e220: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24e220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e224: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x24e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24e228: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e22c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e230: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e234: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x24e234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x24e238: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x24e238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x24e23c: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x24e23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24e240: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x24e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24e244: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24e244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24e248: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24e248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24e24c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e250: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e254: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e258: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e25c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e260: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24e260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24e264: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e268: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x24e268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24e26c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24e26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24e270: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e274: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e278: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e27c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e280: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24e280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e284: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24e284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24e288: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e28c: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x24e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24e290: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x24e290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x24e294: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e298: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e29c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e2a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e2a4: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x24e2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e2a8: 0xc54825  or          $t1, $a2, $a1
    ctx->pc = 0x24e2a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x24e2ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e2b0: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x24e2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24e2b4: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x24e2b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24e2b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e2bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e2c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e2c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e2c8: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x24e2c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e2cc: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x24e2ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x24e2d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e2d4: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x24e2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24e2d8: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x24e2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24e2dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e2e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e2e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e2e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e2ec: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x24e2ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e2f0: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x24e2f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x24e2f4: 0x24040601  addiu       $a0, $zero, 0x601
    ctx->pc = 0x24e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1537));
    // 0x24e2f8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24e2f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e2fc: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x24e2fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24e300: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24E300u;
    SET_GPR_U32(ctx, 31, 0x24E308u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24E300u, 0x24E308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E308u;
label_24e308:
    // 0x24e308: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e30c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24E30Cu;
    SET_GPR_U32(ctx, 31, 0x24E314u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24E30Cu, 0x24E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E314u;
label_24e314:
    // 0x24e314: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24e314u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e318: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e31c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24e320: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24e320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e324: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x24e324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e328: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x24e328u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x24e32c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24e32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e330: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24e330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24e334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e338: 0x0  nop
    ctx->pc = 0x24e338u;
    // NOP
    // 0x24e33c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e33cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e340: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24e340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24e344: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e348: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24e348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e34c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24e34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24e350: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e354: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e358: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e35c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e360: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24e360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e364: 0x24040416  addiu       $a0, $zero, 0x416
    ctx->pc = 0x24e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    // 0x24e368: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e368u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e36c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e370: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24e370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e374: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E374u;
    SET_GPR_U32(ctx, 31, 0x24E37Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E374u, 0x24E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E37Cu;
label_24e37c:
    // 0x24e37c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e37cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e380: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E380u;
    SET_GPR_U32(ctx, 31, 0x24E388u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E380u, 0x24E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E388u;
label_24e388:
    // 0x24e388: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e38c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24e390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e394: 0x0  nop
    ctx->pc = 0x24e394u;
    // NOP
    // 0x24e398: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e39c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24e39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24e3a0: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x24e3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e3a4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x24e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x24e3a8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e3ac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e3b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e3b4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24e3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24e3b8: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24e3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e3bc: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24e3bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e3c0: 0x24040417  addiu       $a0, $zero, 0x417
    ctx->pc = 0x24e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x24e3c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e3c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e3c8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e3cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E3CCu;
    SET_GPR_U32(ctx, 31, 0x24E3D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E3CCu, 0x24E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E3D4u;
label_24e3d4:
    // 0x24e3d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e3d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e3d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E3D8u;
    SET_GPR_U32(ctx, 31, 0x24E3E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E3D8u, 0x24E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E3E0u;
label_24e3e0:
    // 0x24e3e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24e3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e3e4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24e3e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24e3e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e3ec: 0x0  nop
    ctx->pc = 0x24e3ecu;
    // NOP
    // 0x24e3f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e3f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e3f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24e3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24e3f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e3fc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e400: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e404: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e408: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e40c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24e40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24e410: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24e410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e414: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24e414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e418: 0x24040417  addiu       $a0, $zero, 0x417
    ctx->pc = 0x24e418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x24e41c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e41cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e420: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e424: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E424u;
    SET_GPR_U32(ctx, 31, 0x24E42Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E424u, 0x24E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E42Cu;
label_24e42c:
    // 0x24e42c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e42cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e430: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E430u;
    SET_GPR_U32(ctx, 31, 0x24E438u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E430u, 0x24E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E438u;
label_24e438:
    // 0x24e438: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24e438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e43c: 0x3c0542f0  lui         $a1, 0x42F0
    ctx->pc = 0x24e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17136 << 16));
    // 0x24e440: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24e440u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e444: 0x0  nop
    ctx->pc = 0x24e444u;
    // NOP
    // 0x24e448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e44c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24e44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24e450: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e454: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e458: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e45c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e460: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e464: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e468: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e46c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24e46cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e470: 0x24040415  addiu       $a0, $zero, 0x415
    ctx->pc = 0x24e470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    // 0x24e474: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e474u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e478: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e47c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E47Cu;
    SET_GPR_U32(ctx, 31, 0x24E484u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E47Cu, 0x24E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E484u;
label_24e484:
    // 0x24e484: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e488: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E488u;
    SET_GPR_U32(ctx, 31, 0x24E490u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E488u, 0x24E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E490u;
label_24e490:
    // 0x24e490: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e494: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e498: 0x38660010  xori        $a2, $v1, 0x10
    ctx->pc = 0x24e498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x24e49c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e4a0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x24e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x24e4a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24e4a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24e4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e4ac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24e4acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24e4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24E4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E4B8u;
}
