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

// Function: entry_00369864
// Address: 0x369864 - 0x3698e4
void entry_00369864_0x369864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369864_0x369864");
#endif

    switch (ctx->pc) {
        case 0x36988cu: goto label_36988c;
        case 0x36989cu: goto label_36989c;
        default: break;
    }

    ctx->pc = 0x369864u;

    // 0x369864: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x369864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x369868: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x36986c: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x36986cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x369870: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x369870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x369874: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x369874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x369878: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36987c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x36987cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x369880: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x369880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369884: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x369884u;
    SET_GPR_U32(ctx, 31, 0x36988Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x369884u, 0x36988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36988Cu;
label_36988c:
    // 0x36988c: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x36988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369890: 0xc7ad00b8  lwc1        $f13, 0xB8($sp)
    ctx->pc = 0x369890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x369894: 0xc0455e6  jal         func_115798
    ctx->pc = 0x369894u;
    SET_GPR_U32(ctx, 31, 0x36989Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x369894u, 0x36989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36989Cu;
label_36989c:
    // 0x36989c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x36989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698a0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3698a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3698a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3698a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3698a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3698acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3698b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3698b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3698b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3698b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3698bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3698bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3698c0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3698c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3698c8: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x3698c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3698cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698d0: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x3698d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3698d4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3698d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698d8: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x3698d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3698dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3698dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3698e0: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x3698e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3698e4u;
}
