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

// Function: caseD_4
// Address: 0x1468fc - 0x146984
void caseD_4_0x1468fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1468fc");
#endif

    switch (ctx->pc) {
        case 0x146930u: goto label_146930;
        case 0x146970u: goto label_146970;
        default: break;
    }

    ctx->pc = 0x1468fcu;

    // 0x1468fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1468fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146900: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x146900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146904: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146908: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x146908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14690c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14690cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x146910: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x146910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x146914: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146918: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x146918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14691c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146920: 0xc4601b54  lwc1        $f0, 0x1B54($v1)
    ctx->pc = 0x146920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146924: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x146924u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146928: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x146928u;
    SET_GPR_U32(ctx, 31, 0x146930u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x146928u, 0x146930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146930u;
label_146930:
    // 0x146930: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146934: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x146934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x146938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14693c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146940: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x146940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x146944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146948: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14694c: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x14694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x146950: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146954: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146958: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x146958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x14695c: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x14695cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x146960: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146964: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146968: 0xc0965d0  jal         func_259740
    ctx->pc = 0x146968u;
    SET_GPR_U32(ctx, 31, 0x146970u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146968u, 0x146970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146970u;
label_146970:
    // 0x146970: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146970u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146974: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146978: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x146978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14697c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x14697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146980: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x146980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x146984u;
}
