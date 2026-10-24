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

// Function: entry_00171300
// Address: 0x171300 - 0x171398
void entry_00171300_0x171300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171300_0x171300");
#endif

    switch (ctx->pc) {
        case 0x171368u: goto label_171368;
        default: break;
    }

    ctx->pc = 0x171300u;

    // 0x171300: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171304: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x171304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x171308: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17130c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x17130cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171310: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171314: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x171314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171318: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17131c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x17131cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x171320: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x171320u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171324: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x171324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171328: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x171328u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17132c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171330: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x171330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171334: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x171334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171338: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x171338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17133c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x17133cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x171340: 0x24c2bd00  addiu       $v0, $a2, -0x4300
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x171344: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x171344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x171348: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x171348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17134c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x17134cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x171350: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x171350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171354: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x171354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x171358: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x171358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17135c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x17135cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171360: 0xc05da44  jal         func_176910
    ctx->pc = 0x171360u;
    SET_GPR_U32(ctx, 31, 0x171368u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x171360u, 0x171368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171368u;
label_171368:
    // 0x171368: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x171368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x17136c: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x17136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171370: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171378: 0x0  nop
    ctx->pc = 0x171378u;
    // NOP
    // 0x17137c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17137Cu;
    {
        const bool branch_taken_0x17137c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17137c) {
            ctx->pc = 0x171398u;
            return;
        }
    }
    ctx->pc = 0x171384u;
    // 0x171384: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171388: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x171388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x17138c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171390: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x171390u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171394: 0x0  nop
    ctx->pc = 0x171394u;
    // NOP
    ctx->pc = 0x171398u;
}
