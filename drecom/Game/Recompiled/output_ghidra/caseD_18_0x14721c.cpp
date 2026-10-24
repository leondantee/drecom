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

// Function: caseD_18
// Address: 0x14721c - 0x147290
void caseD_18_0x14721c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x14721c");
#endif

    switch (ctx->pc) {
        case 0x147240u: goto label_147240;
        default: break;
    }

    ctx->pc = 0x14721cu;

    // 0x14721c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147224: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147228: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x147228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x14722c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x14722cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x147230: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147234: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147238: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147238u;
    SET_GPR_U32(ctx, 31, 0x147240u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147238u, 0x147240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147240u;
label_147240:
    // 0x147240: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147244: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147248: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x147248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14724c: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x14724cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
    // 0x147250: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x147250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x147254: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x147254u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147258: 0x0  nop
    ctx->pc = 0x147258u;
    // NOP
    // 0x14725c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14725cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147260: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x147260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x147264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x147264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147268: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14726c: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x14726cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x147270: 0x3c114040  lui         $s1, 0x4040
    ctx->pc = 0x147270u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16448 << 16));
    // 0x147274: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x147274u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147278: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14727c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x14727cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x147280: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147284: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x147288: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14728c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14728cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x147290u;
}
