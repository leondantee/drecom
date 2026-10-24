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

// Function: entry_00226190
// Address: 0x226190 - 0x226208
void entry_00226190_0x226190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226190_0x226190");
#endif

    switch (ctx->pc) {
        case 0x2261bcu: goto label_2261bc;
        case 0x2261d8u: goto label_2261d8;
        case 0x2261f0u: goto label_2261f0;
        case 0x226204u: goto label_226204;
        default: break;
    }

    ctx->pc = 0x226190u;

    // 0x226190: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226194: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x226194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226198: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22619c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2261a0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2261a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2261a4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2261a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2261a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2261a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2261ac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2261acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2261b0: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2261b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2261b4: 0xc05c848  jal         func_172120
    ctx->pc = 0x2261B4u;
    SET_GPR_U32(ctx, 31, 0x2261BCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2261B4u, 0x2261BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261BCu;
label_2261bc:
    // 0x2261bc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2261bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2261c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2261c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2261c4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2261c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2261c8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2261c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2261cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2261ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2261d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2261D0u;
    SET_GPR_U32(ctx, 31, 0x2261D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2261D0u, 0x2261D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261D8u;
label_2261d8:
    // 0x2261d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2261d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2261dc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2261dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2261e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2261e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2261e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2261e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2261e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2261E8u;
    SET_GPR_U32(ctx, 31, 0x2261F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2261E8u, 0x2261F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261F0u;
label_2261f0:
    // 0x2261f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2261f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2261f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2261f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2261f8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2261f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2261fc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2261FCu;
    SET_GPR_U32(ctx, 31, 0x226204u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2261FCu, 0x226204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226204u;
label_226204:
    // 0x226204: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x226204u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x226208u;
}
