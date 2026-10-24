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

// Function: Om8bSetEffLight
// Address: 0x33f7f0 - 0x33f934
void Om8bSetEffLight_0x33f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8bSetEffLight_0x33f7f0");
#endif

    switch (ctx->pc) {
        case 0x33f858u: goto label_33f858;
        case 0x33f860u: goto label_33f860;
        case 0x33f87cu: goto label_33f87c;
        case 0x33f898u: goto label_33f898;
        case 0x33f8b4u: goto label_33f8b4;
        case 0x33f908u: goto label_33f908;
        default: break;
    }

    ctx->pc = 0x33f7f0u;

    // 0x33f7f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33f7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33f7f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33f7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33f7f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f7fc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x33f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x33f800: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x33f800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x33f804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33f804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f808: 0x0  nop
    ctx->pc = 0x33f808u;
    // NOP
    // 0x33f80c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x33f80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33f810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33f810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f814: 0x0  nop
    ctx->pc = 0x33f814u;
    // NOP
    // 0x33f818: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x33f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x33f81c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33f81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f820: 0x0  nop
    ctx->pc = 0x33f820u;
    // NOP
    // 0x33f824: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x33f824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33f828: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33f828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x33f82c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33f82cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f830: 0x0  nop
    ctx->pc = 0x33f830u;
    // NOP
    // 0x33f834: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x33f834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x33f838: 0x3c033d8f  lui         $v1, 0x3D8F
    ctx->pc = 0x33f838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15759 << 16));
    // 0x33f83c: 0x34635c29  ori         $v1, $v1, 0x5C29
    ctx->pc = 0x33f83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23593);
    // 0x33f840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33f840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f844: 0x0  nop
    ctx->pc = 0x33f844u;
    // NOP
    // 0x33f848: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x33f848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33f84c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33f84cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33f850: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x33F850u;
    {
        const bool branch_taken_0x33f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f850) {
            ctx->pc = 0x33F910u;
            goto label_33f910;
        }
    }
    ctx->pc = 0x33F858u;
label_33f858:
    // 0x33f858: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33F858u;
    SET_GPR_U32(ctx, 31, 0x33F860u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33F858u, 0x33F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F860u;
label_33f860:
    // 0x33f860: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x33f860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x33f864: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33f864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33f868: 0x0  nop
    ctx->pc = 0x33f868u;
    // NOP
    // 0x33f86c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33f86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33f870: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33f870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33f874: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33F874u;
    SET_GPR_U32(ctx, 31, 0x33F87Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33F874u, 0x33F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F87Cu;
label_33f87c:
    // 0x33f87c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x33f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x33f880: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33f880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33f884: 0x0  nop
    ctx->pc = 0x33f884u;
    // NOP
    // 0x33f888: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33f888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33f88c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33f88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33f890: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x33F890u;
    SET_GPR_U32(ctx, 31, 0x33F898u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x33F890u, 0x33F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F898u;
label_33f898:
    // 0x33f898: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x33f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x33f89c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33f89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33f8a0: 0x0  nop
    ctx->pc = 0x33f8a0u;
    // NOP
    // 0x33f8a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33f8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33f8a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x33f8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33f8ac: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x33F8ACu;
    SET_GPR_U32(ctx, 31, 0x33F8B4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x33F8ACu, 0x33F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F8B4u;
label_33f8b4:
    // 0x33f8b4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x33f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x33f8b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33f8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33f8bc: 0x0  nop
    ctx->pc = 0x33f8bcu;
    // NOP
    // 0x33f8c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33f8c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33f8c4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x33f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x33f8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33f8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f8cc: 0x0  nop
    ctx->pc = 0x33f8ccu;
    // NOP
    // 0x33f8d0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x33f8d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33f8d4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x33f8d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33f8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33f8dc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x33f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x33f8e0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x33f8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x33f8e4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x33f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x33f8e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x33f8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x33f8ec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x33f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f8f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33f8f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33f8f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33f8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33f8f8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x33f8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33f8fc: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x33f8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33f900: 0xc0866ac  jal         func_219AB0
    ctx->pc = 0x33F900u;
    SET_GPR_U32(ctx, 31, 0x33F908u);
    ctx->pc = 0x219AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AB0u, 0x33F900u, 0x33F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F908u;
label_33f908:
    // 0x33f908: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33f908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33f90c: 0x0  nop
    ctx->pc = 0x33f90cu;
    // NOP
label_33f910:
    // 0x33f910: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f914: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x33f914u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33f918: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x33F918u;
    {
        const bool branch_taken_0x33f918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f918) {
            ctx->pc = 0x33F858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f858;
        }
    }
    ctx->pc = 0x33F920u;
    // 0x33f920: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33f920u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f928: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x33f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F934u;
}
