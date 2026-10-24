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

// Function: entry_003116c0
// Address: 0x3116c0 - 0x311798
void entry_003116c0_0x3116c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003116c0_0x3116c0");
#endif

    switch (ctx->pc) {
        case 0x3116fcu: goto label_3116fc;
        case 0x311718u: goto label_311718;
        case 0x311734u: goto label_311734;
        case 0x311794u: goto label_311794;
        default: break;
    }

    ctx->pc = 0x3116c0u;

    // 0x3116c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3116c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3116c4: 0x0  nop
    ctx->pc = 0x3116c4u;
    // NOP
    // 0x3116c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3116c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3116cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3116ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3116d0: 0x0  nop
    ctx->pc = 0x3116d0u;
    // NOP
    // 0x3116d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3116d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3116d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3116d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3116dc: 0x0  nop
    ctx->pc = 0x3116dcu;
    // NOP
    // 0x3116e0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3116e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3116e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3116e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3116e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3116e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3116ec: 0x0  nop
    ctx->pc = 0x3116ecu;
    // NOP
    // 0x3116f0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3116f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3116f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3116F4u;
    SET_GPR_U32(ctx, 31, 0x3116FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3116F4u, 0x3116FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116FCu;
label_3116fc:
    // 0x3116fc: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x3116fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x311700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311704: 0x0  nop
    ctx->pc = 0x311704u;
    // NOP
    // 0x311708: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31170c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31170cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x311710: 0xc06765c  jal         func_19D970
    ctx->pc = 0x311710u;
    SET_GPR_U32(ctx, 31, 0x311718u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x311710u, 0x311718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311718u;
label_311718:
    // 0x311718: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x311718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x31171c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31171cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311720: 0x0  nop
    ctx->pc = 0x311720u;
    // NOP
    // 0x311724: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311728: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x311728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31172c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x31172Cu;
    SET_GPR_U32(ctx, 31, 0x311734u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x31172Cu, 0x311734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311734u;
label_311734:
    // 0x311734: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x311734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x311738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31173c: 0x0  nop
    ctx->pc = 0x31173cu;
    // NOP
    // 0x311740: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311744: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x311744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x311748: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x311748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x31174c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x311750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311754: 0x0  nop
    ctx->pc = 0x311754u;
    // NOP
    // 0x311758: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x311758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x31175c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x31175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x311760: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x311760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x311764: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x311764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x311768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x311768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31176c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x31176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x311770: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x311770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x311774: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x311774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311778: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x311778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x31177c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x31177cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x311780: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x311780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311784: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x311784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x311788: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x311788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31178c: 0xc086584  jal         func_219610
    ctx->pc = 0x31178Cu;
    SET_GPR_U32(ctx, 31, 0x311794u);
    ctx->pc = 0x219610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219610u, 0x31178Cu, 0x311794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311794u;
label_311794:
    // 0x311794: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x311798u;
}
