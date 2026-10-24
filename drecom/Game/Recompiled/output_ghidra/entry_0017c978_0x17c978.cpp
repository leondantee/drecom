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

// Function: entry_0017c978
// Address: 0x17c978 - 0x17cab4
void entry_0017c978_0x17c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c978_0x17c978");
#endif

    switch (ctx->pc) {
        case 0x17c9d0u: goto label_17c9d0;
        case 0x17ca04u: goto label_17ca04;
        case 0x17ca18u: goto label_17ca18;
        case 0x17ca84u: goto label_17ca84;
        case 0x17ca98u: goto label_17ca98;
        default: break;
    }

    ctx->pc = 0x17c978u;

    // 0x17c978: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c97c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c980: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x17c980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17c984: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x17c984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c988: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x17C988u;
    {
        const bool branch_taken_0x17c988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c988) {
            ctx->pc = 0x17C734u;
            return;
        }
    }
    ctx->pc = 0x17C990u;
    // 0x17c990: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c994: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17c994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c998: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17c99c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c9a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c9a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c9a4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c9a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c9ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c9b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c9b4: 0x0  nop
    ctx->pc = 0x17c9b4u;
    // NOP
    // 0x17c9b8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17c9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17c9bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17c9c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c9c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c9c8: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C9C8u;
    SET_GPR_U32(ctx, 31, 0x17C9D0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C9D0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C9D0u) { return; }
    ctx->pc = 0x17C9D0u;
label_17c9d0:
    // 0x17c9d0: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x17c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c9d4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x17c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c9d8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c9d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c9dc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x17c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c9e0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c9e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c9e8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c9e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c9ec: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17c9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c9f0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c9f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c9f8: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c9f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c9fc: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C9FCu;
    SET_GPR_U32(ctx, 31, 0x17CA04u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C9FCu, 0x17CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA04u;
label_17ca04:
    // 0x17ca04: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17ca04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17ca08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ca0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17ca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ca10: 0xc040c24  jal         func_103090
    ctx->pc = 0x17CA10u;
    SET_GPR_U32(ctx, 31, 0x17CA18u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17CA18u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17CA18u) { return; }
    ctx->pc = 0x17CA18u;
label_17ca18:
    // 0x17ca18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17ca1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ca1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ca20: 0x0  nop
    ctx->pc = 0x17ca20u;
    // NOP
    // 0x17ca24: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17ca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17ca28: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x17CA28u;
    {
        const bool branch_taken_0x17ca28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ca28) {
            ctx->pc = 0x17CACCu;
            return;
        }
    }
    ctx->pc = 0x17CA30u;
    // 0x17ca30: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17ca30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ca34: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x17ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17ca38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17ca3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17ca40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ca40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ca44: 0x0  nop
    ctx->pc = 0x17ca44u;
    // NOP
    // 0x17ca48: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x17ca48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17ca4c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x17ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ca50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ca54: 0x0  nop
    ctx->pc = 0x17ca54u;
    // NOP
    // 0x17ca58: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x17CA58u;
    {
        const bool branch_taken_0x17ca58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ca58) {
            ctx->pc = 0x17CAB4u;
            return;
        }
    }
    ctx->pc = 0x17CA60u;
    // 0x17ca60: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x17ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ca64: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x17ca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17ca68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17ca6c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17ca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x17ca70: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x17ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ca74: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ca78: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x17ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ca7c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17CA7Cu;
    SET_GPR_U32(ctx, 31, 0x17CA84u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17CA84u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17CA84u) { return; }
    ctx->pc = 0x17CA84u;
label_17ca84:
    // 0x17ca84: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x17ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ca88: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x17ca88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ca8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17ca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ca90: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17CA90u;
    SET_GPR_U32(ctx, 31, 0x17CA98u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17CA98u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17CA98u) { return; }
    ctx->pc = 0x17CA98u;
label_17ca98:
    // 0x17ca98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17ca9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ca9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17caa0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17caa4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x17caa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x17caa8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17caa8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17caac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17CAACu;
    {
        const bool branch_taken_0x17caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17caac) {
            ctx->pc = 0x17CADCu;
            return;
        }
    }
    ctx->pc = 0x17CAB4u;
}
