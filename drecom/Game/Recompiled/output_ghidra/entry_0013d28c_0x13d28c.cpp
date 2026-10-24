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

// Function: entry_0013d28c
// Address: 0x13d28c - 0x13d320
void entry_0013d28c_0x13d28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d28c_0x13d28c");
#endif

    switch (ctx->pc) {
        case 0x13d2a8u: goto label_13d2a8;
        case 0x13d30cu: goto label_13d30c;
        default: break;
    }

    ctx->pc = 0x13d28cu;

    // 0x13d28c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x13d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d290: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d294: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x13d294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x13d298: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x13d298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d29c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x13d29cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13d2a0: 0xc04f504  jal         func_13D410
    ctx->pc = 0x13D2A0u;
    SET_GPR_U32(ctx, 31, 0x13D2A8u);
    ctx->pc = 0x13D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D410u, 0x13D2A0u, 0x13D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2A8u;
label_13d2a8:
    // 0x13d2a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x13d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x13d2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d2b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2b4: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x13d2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x13d2b8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x13d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x13d2bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d2c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2c4: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x13d2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x13d2c8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x13d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x13d2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d2d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2d4: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x13d2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x13d2d8: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x13d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x13d2dc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2e0: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x13d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x13d2e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d2e8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x13d2ec: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13d2f0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x13d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d2f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2f8: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x13d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x13d2fc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x13d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d300: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x13d300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13d304: 0xc04f504  jal         func_13D410
    ctx->pc = 0x13D304u;
    SET_GPR_U32(ctx, 31, 0x13D30Cu);
    ctx->pc = 0x13D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D410u, 0x13D304u, 0x13D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D30Cu;
label_13d30c:
    // 0x13d30c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d310: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x13d314: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13d318: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x13d318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13d31c: 0x0  nop
    ctx->pc = 0x13d31cu;
    // NOP
    ctx->pc = 0x13d320u;
}
