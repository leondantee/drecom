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

// Function: entry_0036a7d4
// Address: 0x36a7d4 - 0x36a890
void entry_0036a7d4_0x36a7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a7d4_0x36a7d4");
#endif

    switch (ctx->pc) {
        case 0x36a7e4u: goto label_36a7e4;
        case 0x36a7f0u: goto label_36a7f0;
        case 0x36a804u: goto label_36a804;
        case 0x36a818u: goto label_36a818;
        case 0x36a83cu: goto label_36a83c;
        case 0x36a868u: goto label_36a868;
        default: break;
    }

    ctx->pc = 0x36a7d4u;

    // 0x36a7d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a7d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a7d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a7dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A7DCu;
    SET_GPR_U32(ctx, 31, 0x36A7E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A7DCu, 0x36A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7E4u;
label_36a7e4:
    // 0x36a7e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a7e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36A7E8u;
    SET_GPR_U32(ctx, 31, 0x36A7F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A7E8u, 0x36A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7F0u;
label_36a7f0:
    // 0x36a7f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a7f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a7f8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a7fc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36A7FCu;
    SET_GPR_U32(ctx, 31, 0x36A804u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36A804u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36A804u) { return; }
    ctx->pc = 0x36A804u;
label_36a804:
    // 0x36a804: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a808: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a80c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a810: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A810u;
    SET_GPR_U32(ctx, 31, 0x36A818u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A810u, 0x36A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A818u;
label_36a818:
    // 0x36a818: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x36a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a81c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a820: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36a820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x36a824: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a828: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a82c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a830: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36a830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a834: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36A834u;
    SET_GPR_U32(ctx, 31, 0x36A83Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36A834u, 0x36A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A83Cu;
label_36a83c:
    // 0x36a83c: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x36a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a840: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a844: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a848: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x36a848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
    // 0x36a84c: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x36a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a850: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a854: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a858: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x36a858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
    // 0x36a85c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a85cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a860: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A860u;
    SET_GPR_U32(ctx, 31, 0x36A868u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A860u, 0x36A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A868u;
label_36a868:
    // 0x36a868: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a86c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36a870: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x36A870u;
    {
        const bool branch_taken_0x36a870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a870) {
            ctx->pc = 0x36A950u;
            return;
        }
    }
    ctx->pc = 0x36A878u;
    // 0x36a878: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a87c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36a87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x36a880: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36a884: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x36a884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x36a888: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x36A888u;
    {
        const bool branch_taken_0x36a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a888) {
            ctx->pc = 0x36A950u;
            return;
        }
    }
    ctx->pc = 0x36A890u;
}
