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

// Function: caseD_1
// Address: 0x36a338 - 0x36a3f4
void caseD_1_0x36a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x36a338");
#endif

    switch (ctx->pc) {
        case 0x36a348u: goto label_36a348;
        case 0x36a354u: goto label_36a354;
        case 0x36a368u: goto label_36a368;
        case 0x36a37cu: goto label_36a37c;
        case 0x36a3a0u: goto label_36a3a0;
        case 0x36a3ccu: goto label_36a3cc;
        default: break;
    }

    ctx->pc = 0x36a338u;

    // 0x36a338: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a33c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a33cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a340: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A340u;
    SET_GPR_U32(ctx, 31, 0x36A348u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A340u, 0x36A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A348u;
label_36a348:
    // 0x36a348: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a34c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36A34Cu;
    SET_GPR_U32(ctx, 31, 0x36A354u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A34Cu, 0x36A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A354u;
label_36a354:
    // 0x36a354: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a358: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a35c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a360: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36A360u;
    SET_GPR_U32(ctx, 31, 0x36A368u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36A368u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36A368u) { return; }
    ctx->pc = 0x36A368u;
label_36a368:
    // 0x36a368: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a36c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a370: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a374: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A374u;
    SET_GPR_U32(ctx, 31, 0x36A37Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A374u, 0x36A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A37Cu;
label_36a37c:
    // 0x36a37c: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x36a37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a384: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36a384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x36a388: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a38c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a390: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a394: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36a394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a398: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36A398u;
    SET_GPR_U32(ctx, 31, 0x36A3A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36A398u, 0x36A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3A0u;
label_36a3a0:
    // 0x36a3a0: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x36a3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a3a4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a3a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a3ac: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x36a3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
    // 0x36a3b0: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x36a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a3b4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a3b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a3bc: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x36a3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
    // 0x36a3c0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a3c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a3c4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A3C4u;
    SET_GPR_U32(ctx, 31, 0x36A3CCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A3C4u, 0x36A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3CCu;
label_36a3cc:
    // 0x36a3cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a3d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36a3d4: 0x106000d2  beqz        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x36A3D4u;
    {
        const bool branch_taken_0x36a3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a3d4) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A3DCu;
    // 0x36a3dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a3e0: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36a3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x36a3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36a3e8: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x36a3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x36a3ec: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x36A3ECu;
    {
        const bool branch_taken_0x36a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a3ec) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A3F4u;
}
