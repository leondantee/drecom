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

// Function: entry_001637d8
// Address: 0x1637d8 - 0x1638e8
void entry_001637d8_0x1637d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001637d8_0x1637d8");
#endif

    switch (ctx->pc) {
        case 0x163830u: goto label_163830;
        case 0x16387cu: goto label_16387c;
        case 0x163890u: goto label_163890;
        case 0x16389cu: goto label_16389c;
        case 0x1638b8u: goto label_1638b8;
        case 0x1638d8u: goto label_1638d8;
        case 0x1638e4u: goto label_1638e4;
        default: break;
    }

    ctx->pc = 0x1637d8u;

    // 0x1637d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1637d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1637dc: 0x0  nop
    ctx->pc = 0x1637dcu;
    // NOP
    // 0x1637e0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1637e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1637e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1637e8: 0xc4204f30  lwc1        $f0, 0x4F30($at)
    ctx->pc = 0x1637e8u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1637ec: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1637ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1637f0: 0x3c02c4d4  lui         $v0, 0xC4D4
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50388 << 16));
    // 0x1637f4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1637f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1637f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1637f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1637fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163800: 0xc4204f38  lwc1        $f0, 0x4F38($at)
    ctx->pc = 0x163800u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163804: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163808: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x163808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x16380c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163814: 0x0  nop
    ctx->pc = 0x163814u;
    // NOP
    // 0x163818: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x163818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x16381c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163820: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x163820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163824: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x163824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163828: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x163828u;
    SET_GPR_U32(ctx, 31, 0x163830u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x163830u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163830u) { return; }
    ctx->pc = 0x163830u;
label_163830:
    // 0x163830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163834: 0x0  nop
    ctx->pc = 0x163834u;
    // NOP
    // 0x163838: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x163838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x16383c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16383cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163840: 0x0  nop
    ctx->pc = 0x163840u;
    // NOP
    // 0x163844: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x163844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x163848: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x163848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x16384c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16384cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163850: 0x0  nop
    ctx->pc = 0x163850u;
    // NOP
    // 0x163854: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x163854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x163858: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16385c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163860: 0x0  nop
    ctx->pc = 0x163860u;
    // NOP
    // 0x163864: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x163864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x163868: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x163868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16386c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163870: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x163870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x163874: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x163874u;
    SET_GPR_U32(ctx, 31, 0x16387Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x16387Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16387Cu) { return; }
    ctx->pc = 0x16387Cu;
label_16387c:
    // 0x16387c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163880: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x163880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163884: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x163884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x163888: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x163888u;
    SET_GPR_U32(ctx, 31, 0x163890u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x163888u, 0x163890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163890u;
label_163890:
    // 0x163890: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163894: 0xc067588  jal         func_19D620
    ctx->pc = 0x163894u;
    SET_GPR_U32(ctx, 31, 0x16389Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x163894u, 0x16389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16389Cu;
label_16389c:
    // 0x16389c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x16389cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1638a0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1638a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1638a4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1638a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1638a8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1638a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1638ac: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x1638acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1638b0: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x1638B0u;
    SET_GPR_U32(ctx, 31, 0x1638B8u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x1638B0u, 0x1638B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638B8u;
label_1638b8:
    // 0x1638b8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1638b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1638bc: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1638BCu;
    {
        const bool branch_taken_0x1638bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1638bc) {
            ctx->pc = 0x1638E8u;
            return;
        }
    }
    ctx->pc = 0x1638C4u;
    // 0x1638c4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1638c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1638c8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1638c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1638cc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1638ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1638d0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1638D0u;
    SET_GPR_U32(ctx, 31, 0x1638D8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1638D0u, 0x1638D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638D8u;
label_1638d8:
    // 0x1638d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1638d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1638dc: 0xc067588  jal         func_19D620
    ctx->pc = 0x1638DCu;
    SET_GPR_U32(ctx, 31, 0x1638E4u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1638DCu, 0x1638E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638E4u;
label_1638e4:
    // 0x1638e4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1638e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->pc = 0x1638e8u;
}
