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

// Function: entry_0022aaf4
// Address: 0x22aaf4 - 0x22ac40
void entry_0022aaf4_0x22aaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022aaf4_0x22aaf4");
#endif

    switch (ctx->pc) {
        case 0x22ab14u: goto label_22ab14;
        case 0x22ab44u: goto label_22ab44;
        default: break;
    }

    ctx->pc = 0x22aaf4u;

    // 0x22aaf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aaf8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22aafc: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x22aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x22ab00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ab00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab04: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab08: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ab08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22ab0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22AB0Cu;
    SET_GPR_U32(ctx, 31, 0x22AB14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22AB0Cu, 0x22AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB14u;
label_22ab14:
    // 0x22ab14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22ab14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22ab18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22ab18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22ab1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22ab1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22ab20: 0x2463001a  addiu       $v1, $v1, 0x1A
    ctx->pc = 0x22ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
    // 0x22ab24: 0x34662d00  ori         $a2, $v1, 0x2D00
    ctx->pc = 0x22ab24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11520);
    // 0x22ab28: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab2c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab30: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x22ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x22ab34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ab34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ab38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ab3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22AB3Cu;
    SET_GPR_U32(ctx, 31, 0x22AB44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22AB3Cu, 0x22AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB44u;
label_22ab44:
    // 0x22ab44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22ab44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22ab48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ab48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab4c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab50: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22ab54: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x22ab54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x22ab58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ab58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab5c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab60: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ab64: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x22ab64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x22ab68: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x22ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x22ab6c: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x22ab6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x22ab70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22ab70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab74: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ab7c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x22ab7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x22ab80: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x22ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
    // 0x22ab84: 0x3485999a  ori         $a1, $a0, 0x999A
    ctx->pc = 0x22ab84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x22ab88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22ab88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab8c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ab94: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x22ab94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x22ab98: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab9c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22aba0: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x22aba0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x22aba4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x22aba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22aba8: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x22aba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x22abac: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x22ABACu;
    {
        const bool branch_taken_0x22abac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abac) {
            ctx->pc = 0x22AC40u;
            return;
        }
    }
    ctx->pc = 0x22ABB4u;
    // 0x22abb4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22abb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22abbc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x22abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x22abc0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22abc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22abc4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x22abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22abc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22abc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22abcc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x22abccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x22abd0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22abd4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22abd8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22abdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22abdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22abe0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x22abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22abe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22abe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22abe8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x22abe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x22abec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22abecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22abf0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22abf4: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x22abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x22abf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22abf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22abfc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x22abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ac00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ac00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ac04: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x22ac04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x22ac08: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ac0c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ac10: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x22ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x22ac14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ac14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ac18: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x22ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ac1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ac1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ac20: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x22ac20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x22ac24: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ac28: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ac2c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22ac30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ac30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ac34: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x22ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ac38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ac38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ac3c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x22ac3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    ctx->pc = 0x22ac40u;
}
