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

// Function: entry_0025c660
// Address: 0x25c660 - 0x25c718
void entry_0025c660_0x25c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c660_0x25c660");
#endif

    switch (ctx->pc) {
        case 0x25c6e4u: goto label_25c6e4;
        default: break;
    }

    ctx->pc = 0x25c660u;

    // 0x25c660: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x25c660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c664: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c668: 0xe4a009cc  swc1        $f0, 0x9CC($a1)
    ctx->pc = 0x25c668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2508), bits); }
    // 0x25c66c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c670: 0x8c440330  lw          $a0, 0x330($v0)
    ctx->pc = 0x25c670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25c674: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c678: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x25c678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x25c67c: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c680: 0x8ca20330  lw          $v0, 0x330($a1)
    ctx->pc = 0x25c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x25c684: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c688: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x25c688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x25c68c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c690: 0x8c850330  lw          $a1, 0x330($a0)
    ctx->pc = 0x25c690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x25c694: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x25c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c698: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x25c698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x25c69c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c6a0: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x25c6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c6a4: 0x8cc20330  lw          $v0, 0x330($a2)
    ctx->pc = 0x25c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 816)));
    // 0x25c6a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25c6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25c6ac: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x25c6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c6b0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c6b4: 0x8c850330  lw          $a1, 0x330($a0)
    ctx->pc = 0x25c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x25c6b8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x25c6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x25c6bc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x25c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c6c0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c6c4: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25c6c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25c6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25c6cc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c6d0: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x25c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25c6d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x25c6d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c6d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25c6d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25c6dc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25C6DCu;
    SET_GPR_U32(ctx, 31, 0x25C6E4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25C6E4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C6E4u) { return; }
    ctx->pc = 0x25C6E4u;
label_25c6e4:
    // 0x25c6e4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25c6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c6e8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25c6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25c6ec: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x25c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c6f0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25c6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25c6f4: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x25c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c6f8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25c6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x25c6fc: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c700: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c704: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x25c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x25c708: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25c708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25c70c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25c70cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25c710: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25C710u;
    SET_GPR_U32(ctx, 31, 0x25C718u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25C710u, 0x25C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C718u;
}
