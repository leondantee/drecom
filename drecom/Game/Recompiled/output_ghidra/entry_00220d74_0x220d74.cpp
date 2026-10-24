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

// Function: entry_00220d74
// Address: 0x220d74 - 0x220ed0
void entry_00220d74_0x220d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220d74_0x220d74");
#endif

    switch (ctx->pc) {
        case 0x220dd4u: goto label_220dd4;
        case 0x220de0u: goto label_220de0;
        case 0x220e40u: goto label_220e40;
        case 0x220e4cu: goto label_220e4c;
        case 0x220e88u: goto label_220e88;
        case 0x220e94u: goto label_220e94;
        default: break;
    }

    ctx->pc = 0x220d74u;

    // 0x220d74: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x220d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x220d78: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x220d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x220d7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x220d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x220d80: 0x1460008e  bnez        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x220D80u;
    {
        const bool branch_taken_0x220d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220d80) {
            ctx->pc = 0x220FBCu;
            return;
        }
    }
    ctx->pc = 0x220D88u;
    // 0x220d88: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220d8c: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x220d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220d90: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x220d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x220d94: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220d98: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x220d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220d9c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x220d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x220da0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220da4: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x220da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220da8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x220da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x220dac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x220dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x220db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220db4: 0x0  nop
    ctx->pc = 0x220db4u;
    // NOP
    // 0x220db8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x220db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x220dbc: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x220dc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220dc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220dc4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x220dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x220dc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220dc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220dcc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x220DCCu;
    SET_GPR_U32(ctx, 31, 0x220DD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220DCCu, 0x220DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DD4u;
label_220dd4:
    // 0x220dd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220dd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220dd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220DD8u;
    SET_GPR_U32(ctx, 31, 0x220DE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220DD8u, 0x220DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DE0u;
label_220de0:
    // 0x220de0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220de0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220de4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220de8: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x220de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220dec: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x220decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x220df0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220df4: 0xc4801208  lwc1        $f0, 0x1208($a0)
    ctx->pc = 0x220df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220df8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x220df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x220dfc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x220dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x220e00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x220e00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220e04: 0x0  nop
    ctx->pc = 0x220e04u;
    // NOP
    // 0x220e08: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x220e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x220e0c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220e10: 0xc4a11204  lwc1        $f1, 0x1204($a1)
    ctx->pc = 0x220e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220e14: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x220e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x220e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220e1c: 0x0  nop
    ctx->pc = 0x220e1cu;
    // NOP
    // 0x220e20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220e24: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x220e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x220e28: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x220e2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220e30: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x220e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x220e34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220e34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220e38: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x220E38u;
    SET_GPR_U32(ctx, 31, 0x220E40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220E38u, 0x220E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E40u;
label_220e40:
    // 0x220e40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220e40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220e44: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220E44u;
    SET_GPR_U32(ctx, 31, 0x220E4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220E44u, 0x220E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E4Cu;
label_220e4c:
    // 0x220e4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220e4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220e50: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220e54: 0xc4611204  lwc1        $f1, 0x1204($v1)
    ctx->pc = 0x220e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220e58: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x220e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x220e5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x220e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220e60: 0x0  nop
    ctx->pc = 0x220e60u;
    // NOP
    // 0x220e64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x220e64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x220e68: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x220e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x220e6c: 0x2406170e  addiu       $a2, $zero, 0x170E
    ctx->pc = 0x220e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x220e70: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x220e70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x220e74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220e78: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x220e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x220e7c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220e7cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220e80: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x220E80u;
    SET_GPR_U32(ctx, 31, 0x220E88u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220E80u, 0x220E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E88u;
label_220e88:
    // 0x220e88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220e8c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220E8Cu;
    SET_GPR_U32(ctx, 31, 0x220E94u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220E8Cu, 0x220E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E94u;
label_220e94:
    // 0x220e94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220e94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220e98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x220e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220e9c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220ea0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x220ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x220ea4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x220ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220ea8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220eac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x220eacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x220eb0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220eb4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x220eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x220eb8: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220ebc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x220ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x220ec0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220ec4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x220ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x220ec8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x220EC8u;
    {
        const bool branch_taken_0x220ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220ec8) {
            ctx->pc = 0x220FBCu;
            return;
        }
    }
    ctx->pc = 0x220ED0u;
}
