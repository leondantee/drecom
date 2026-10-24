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

// Function: entry_0022ee98
// Address: 0x22ee98 - 0x22ef7c
void entry_0022ee98_0x22ee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ee98_0x22ee98");
#endif

    switch (ctx->pc) {
        case 0x22eea8u: goto label_22eea8;
        case 0x22ef40u: goto label_22ef40;
        case 0x22ef74u: goto label_22ef74;
        default: break;
    }

    ctx->pc = 0x22ee98u;

    // 0x22ee98: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22ee9c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22eea0: 0xc040c24  jal         func_103090
    ctx->pc = 0x22EEA0u;
    SET_GPR_U32(ctx, 31, 0x22EEA8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x22EEA8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22EEA8u) { return; }
    ctx->pc = 0x22EEA8u;
label_22eea8:
    // 0x22eea8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x22eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x22eeac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22eeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22eeb0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eeb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22eeb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22eeb8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22eebc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22eec0: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22eec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22eec4: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x22eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x22eec8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22eec8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22eecc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x22eeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eed0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22eed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22eed4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22eed8: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x22eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22eedc: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x22eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x22eee0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22eee4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22eee8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x22eee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22eeec: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22eef0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x22eef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x22eef4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22eef8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22eefc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22ef00: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22ef04: 0x34620020  ori         $v0, $v1, 0x20
    ctx->pc = 0x22ef04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x22ef08: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22ef0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ef0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ef10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef14: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22ef14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22ef18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef1c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x22ef1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x22ef20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22ef20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22ef24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22ef24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22ef28: 0x2444fff6  addiu       $a0, $v0, -0xA
    ctx->pc = 0x22ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x22ef2c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x22ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22ef30: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef34: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x22ef34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ef38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22EF38u;
    SET_GPR_U32(ctx, 31, 0x22EF40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22EF38u, 0x22EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF40u;
label_22ef40:
    // 0x22ef40: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x22ef40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22ef44: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x22ef44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x22ef48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22EF48u;
    {
        const bool branch_taken_0x22ef48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef48) {
            ctx->pc = 0x22EF7Cu;
            return;
        }
    }
    ctx->pc = 0x22EF50u;
    // 0x22ef50: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef54: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22ef58: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x22ef58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22ef5c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x22ef5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ef60: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x22ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x22ef64: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22ef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22ef68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ef68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22ef6c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22EF6Cu;
    SET_GPR_U32(ctx, 31, 0x22EF74u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22EF6Cu, 0x22EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF74u;
label_22ef74:
    // 0x22ef74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22EF74u;
    {
        const bool branch_taken_0x22ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef74) {
            ctx->pc = 0x22EFA0u;
            return;
        }
    }
    ctx->pc = 0x22EF7Cu;
}
