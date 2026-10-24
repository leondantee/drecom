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

// Function: entry_0017ecbc
// Address: 0x17ecbc - 0x17ed04
void entry_0017ecbc_0x17ecbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ecbc_0x17ecbc");
#endif

    switch (ctx->pc) {
        case 0x17ece0u: goto label_17ece0;
        default: break;
    }

    ctx->pc = 0x17ecbcu;

    // 0x17ecbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecc0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecc8: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x17eccc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17ecccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17ecd0: 0x8ca500a8  lw          $a1, 0xA8($a1)
    ctx->pc = 0x17ecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x17ecd4: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x17ecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x17ecd8: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17ECD8u;
    SET_GPR_U32(ctx, 31, 0x17ECE0u);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17ECD8u, 0x17ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECE0u;
label_17ece0:
    // 0x17ece0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ece0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ece4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x17ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ece8: 0xc4c1006c  lwc1        $f1, 0x6C($a2)
    ctx->pc = 0x17ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ecec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecf0: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x17ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ecf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17ecf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17ecf8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17ecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ecfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17ecfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17ed00: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ed00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x17ed04u;
}
