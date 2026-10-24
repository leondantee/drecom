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

// Function: entry_00274bc0
// Address: 0x274bc0 - 0x274cd8
void entry_00274bc0_0x274bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274bc0_0x274bc0");
#endif

    switch (ctx->pc) {
        case 0x274bc8u: goto label_274bc8;
        case 0x274bfcu: goto label_274bfc;
        case 0x274c08u: goto label_274c08;
        case 0x274ca0u: goto label_274ca0;
        case 0x274cc0u: goto label_274cc0;
        default: break;
    }

    ctx->pc = 0x274bc0u;

    // 0x274bc0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x274BC0u;
    SET_GPR_U32(ctx, 31, 0x274BC8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x274BC0u, 0x274BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BC8u;
label_274bc8:
    // 0x274bc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x274bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x274bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274bd0: 0x0  nop
    ctx->pc = 0x274bd0u;
    // NOP
    // 0x274bd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274bd8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274bdc: 0xe420d2cc  swc1        $f0, -0x2D34($at)
    ctx->pc = 0x274bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2CCu, _value); } while (0); }
    // 0x274be0: 0x24042c26  addiu       $a0, $zero, 0x2C26
    ctx->pc = 0x274be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11302));
    // 0x274be4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x274be4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274be8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x274be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x274bec: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x274becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x274bf0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x274bf0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274bf4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x274BF4u;
    SET_GPR_U32(ctx, 31, 0x274BFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x274BF4u, 0x274BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BFCu;
label_274bfc:
    // 0x274bfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x274bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274c00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x274C00u;
    SET_GPR_U32(ctx, 31, 0x274C08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x274C00u, 0x274C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C08u;
label_274c08:
    // 0x274c08: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x274c08u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274c0c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x274c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x274c10: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x274c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x274c14: 0x12630030  beq         $s3, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x274C14u;
    {
        const bool branch_taken_0x274c14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x274c14) {
            ctx->pc = 0x274CD8u;
            return;
        }
    }
    ctx->pc = 0x274C1Cu;
    // 0x274c1c: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x274c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x274c20: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x274c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x274c24: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x274c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x274c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c2c: 0x0  nop
    ctx->pc = 0x274c2cu;
    // NOP
    // 0x274c30: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x274c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x274c34: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x274c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x274c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c3c: 0x0  nop
    ctx->pc = 0x274c3cu;
    // NOP
    // 0x274c40: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x274c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x274c44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x274c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x274c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c4c: 0x0  nop
    ctx->pc = 0x274c4cu;
    // NOP
    // 0x274c50: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x274c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x274c54: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x274c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x274c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c5c: 0x0  nop
    ctx->pc = 0x274c5cu;
    // NOP
    // 0x274c60: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x274c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x274c64: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x274c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x274c68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x274c68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c6c: 0x0  nop
    ctx->pc = 0x274c6cu;
    // NOP
    // 0x274c70: 0xe6600064  swc1        $f0, 0x64($s3)
    ctx->pc = 0x274c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
    // 0x274c74: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x274c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x274c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c7c: 0x0  nop
    ctx->pc = 0x274c7cu;
    // NOP
    // 0x274c80: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x274c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x274c84: 0x3c02bfae  lui         $v0, 0xBFAE
    ctx->pc = 0x274c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49070 << 16));
    // 0x274c88: 0x34435727  ori         $v1, $v0, 0x5727
    ctx->pc = 0x274c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22311);
    // 0x274c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c90: 0x0  nop
    ctx->pc = 0x274c90u;
    // NOP
    // 0x274c94: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x274c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x274c98: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274C98u;
    SET_GPR_U32(ctx, 31, 0x274CA0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274C98u, 0x274CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CA0u;
label_274ca0:
    // 0x274ca0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x274ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x274ca4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x274ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x274ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274cac: 0x0  nop
    ctx->pc = 0x274cacu;
    // NOP
    // 0x274cb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274cb4: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x274cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x274cb8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274CB8u;
    SET_GPR_U32(ctx, 31, 0x274CC0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274CB8u, 0x274CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CC0u;
label_274cc0:
    // 0x274cc0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x274cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x274cc4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x274cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x274cc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274ccc: 0x0  nop
    ctx->pc = 0x274cccu;
    // NOP
    // 0x274cd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274cd4: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x274cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    ctx->pc = 0x274cd8u;
}
