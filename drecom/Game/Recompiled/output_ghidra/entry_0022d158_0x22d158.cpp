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

// Function: entry_0022d158
// Address: 0x22d158 - 0x22d224
void entry_0022d158_0x22d158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d158_0x22d158");
#endif

    switch (ctx->pc) {
        case 0x22d17cu: goto label_22d17c;
        case 0x22d200u: goto label_22d200;
        case 0x22d208u: goto label_22d208;
        default: break;
    }

    ctx->pc = 0x22d158u;

    // 0x22d158: 0xa3a00046  sb          $zero, 0x46($sp)
    ctx->pc = 0x22d158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d15c: 0xa3a00047  sb          $zero, 0x47($sp)
    ctx->pc = 0x22d15cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d164: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d168: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22d168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22d16c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d170: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d174: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22D174u;
    SET_GPR_U32(ctx, 31, 0x22D17Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22D174u, 0x22D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D17Cu;
label_22d17c:
    // 0x22d17c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x22D17Cu;
    {
        const bool branch_taken_0x22d17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d17c) {
            ctx->pc = 0x22D2DCu;
            return;
        }
    }
    ctx->pc = 0x22D184u;
    // 0x22d184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d188: 0x0  nop
    ctx->pc = 0x22d188u;
    // NOP
    // 0x22d18c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x22d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22d190: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x22d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x22d194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d198: 0x0  nop
    ctx->pc = 0x22d198u;
    // NOP
    // 0x22d19c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22d19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22d1a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d1a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d1a4: 0x0  nop
    ctx->pc = 0x22d1a4u;
    // NOP
    // 0x22d1a8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x22d1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22d1ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22d1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d1b4: 0x0  nop
    ctx->pc = 0x22d1b4u;
    // NOP
    // 0x22d1b8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22d1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x22d1bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d1c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22d1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22d1c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22d1c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22d1cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22d1d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22d1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22d1d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22d1d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22d1dc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22d1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22d1e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d1e4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22d1e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d1ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d1ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d1f0: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22d1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22d1f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22d1f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d1f8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22D1F8u;
    SET_GPR_U32(ctx, 31, 0x22D200u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22D1F8u, 0x22D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D200u;
label_22d200:
    // 0x22d200: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22D200u;
    SET_GPR_U32(ctx, 31, 0x22D208u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22D200u, 0x22D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D208u;
label_22d208:
    // 0x22d208: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D208u;
    {
        const bool branch_taken_0x22d208 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22d208) {
            ctx->pc = 0x22D224u;
            return;
        }
    }
    ctx->pc = 0x22D210u;
    // 0x22d210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d214: 0x0  nop
    ctx->pc = 0x22d214u;
    // NOP
    // 0x22d218: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22d218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22d21c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22D21Cu;
    {
        const bool branch_taken_0x22d21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d21c) {
            ctx->pc = 0x22D240u;
            return;
        }
    }
    ctx->pc = 0x22D224u;
}
