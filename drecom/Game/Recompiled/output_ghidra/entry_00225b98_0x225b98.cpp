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

// Function: entry_00225b98
// Address: 0x225b98 - 0x225cdc
void entry_00225b98_0x225b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225b98_0x225b98");
#endif

    ctx->pc = 0x225b98u;

    // 0x225b98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225b9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ba0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x225ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x225ba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ba8: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x225ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x225bac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225bb0: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x225bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x225bb4: 0x3c03c100  lui         $v1, 0xC100
    ctx->pc = 0x225bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49408 << 16));
    // 0x225bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225bbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225bc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225bc4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x225bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x225bc8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x225bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x225bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225bd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225bd4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225bd8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x225bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x225bdc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x225bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x225be0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225be4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225be8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225bec: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x225becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x225bf0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x225bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x225bf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225bf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225bfc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x225bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225c00: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x225c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x225c04: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x225c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x225c08: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x225c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x225c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225c10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225c18: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x225c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x225c1c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x225c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x225c20: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x225c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x225c24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225c24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225c28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225c30: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x225c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x225c34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225c3c: 0x946500aa  lhu         $a1, 0xAA($v1)
    ctx->pc = 0x225c3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x225c40: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x225c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x225c44: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x225c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x225c48: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x225C48u;
    {
        const bool branch_taken_0x225c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225c48) {
            ctx->pc = 0x225CDCu;
            return;
        }
    }
    ctx->pc = 0x225C50u;
    // 0x225c50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c54: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225c58: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x225c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x225c5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225c60: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x225c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225c68: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x225c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x225c6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225c74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x225c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x225c78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225c7c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x225c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225c84: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x225c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x225c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c8c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x225c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225c90: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x225c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x225c94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x225c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225c98: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x225c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225ca0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x225ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x225ca4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x225ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ca8: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x225ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x225cac: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x225cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x225cb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225cb4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x225cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225cb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225cbc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x225cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x225cc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225cc4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x225cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x225cc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x225cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x225ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225cd0: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x225cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225cd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225cd8: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x225cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    ctx->pc = 0x225cdcu;
}
