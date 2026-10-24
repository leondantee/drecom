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

// Function: entry_003411a8
// Address: 0x3411a8 - 0x3412cc
void entry_003411a8_0x3411a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003411a8_0x3411a8");
#endif

    switch (ctx->pc) {
        case 0x3411f4u: goto label_3411f4;
        case 0x341200u: goto label_341200;
        case 0x341234u: goto label_341234;
        case 0x341244u: goto label_341244;
        case 0x341274u: goto label_341274;
        case 0x341280u: goto label_341280;
        case 0x3412b4u: goto label_3412b4;
        case 0x3412c0u: goto label_3412c0;
        default: break;
    }

    ctx->pc = 0x3411a8u;

    // 0x3411a8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3411a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3411ac: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x3411acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3411b0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3411b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3411b4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3411b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3411b8: 0xc4801204  lwc1        $f0, 0x1204($a0)
    ctx->pc = 0x3411b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3411bc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3411bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3411c0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3411c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3411c4: 0xc4c01208  lwc1        $f0, 0x1208($a2)
    ctx->pc = 0x3411c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3411c8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3411c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3411cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3411ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3411d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3411d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3411d4: 0x0  nop
    ctx->pc = 0x3411d4u;
    // NOP
    // 0x3411d8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3411d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3411dc: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x3411dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3411e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3411e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3411e4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3411e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3411e8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3411e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3411ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3411ECu;
    SET_GPR_U32(ctx, 31, 0x3411F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3411ECu, 0x3411F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3411F4u;
label_3411f4:
    // 0x3411f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3411f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3411f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3411F8u;
    SET_GPR_U32(ctx, 31, 0x341200u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3411F8u, 0x341200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341200u;
label_341200:
    // 0x341200: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341200u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341204: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x341204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341208: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x341208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x34120c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34120cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341210: 0x0  nop
    ctx->pc = 0x341210u;
    // NOP
    // 0x341214: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x341214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341218: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x341218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x34121c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341220: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341224: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x341224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x341228: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341228u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34122c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34122Cu;
    SET_GPR_U32(ctx, 31, 0x341234u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34122Cu, 0x341234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341234u;
label_341234:
    // 0x341234: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341234u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341238: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x341238u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34123c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x34123Cu;
    SET_GPR_U32(ctx, 31, 0x341244u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x34123Cu, 0x341244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341244u;
label_341244:
    // 0x341244: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x341244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341248: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x341248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x34124c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34124cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341250: 0x0  nop
    ctx->pc = 0x341250u;
    // NOP
    // 0x341254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341258: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x341258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x34125c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34125cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341260: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341264: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x341264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x341268: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341268u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34126c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34126Cu;
    SET_GPR_U32(ctx, 31, 0x341274u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34126Cu, 0x341274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341274u;
label_341274:
    // 0x341274: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x341274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341278: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x341278u;
    SET_GPR_U32(ctx, 31, 0x341280u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x341278u, 0x341280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341280u;
label_341280:
    // 0x341280: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341280u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341284: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x341284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341288: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x341288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34128c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34128cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341290: 0x0  nop
    ctx->pc = 0x341290u;
    // NOP
    // 0x341294: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341298: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x341298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x34129c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3412a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3412a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3412a4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3412a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3412a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3412a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3412ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3412ACu;
    SET_GPR_U32(ctx, 31, 0x3412B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3412ACu, 0x3412B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3412B4u;
label_3412b4:
    // 0x3412b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3412b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3412b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3412B8u;
    SET_GPR_U32(ctx, 31, 0x3412C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3412B8u, 0x3412C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3412C0u;
label_3412c0:
    // 0x3412c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3412c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3412c4: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x3412C4u;
    {
        const bool branch_taken_0x3412c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3412c4) {
            ctx->pc = 0x341524u;
            return;
        }
    }
    ctx->pc = 0x3412CCu;
}
