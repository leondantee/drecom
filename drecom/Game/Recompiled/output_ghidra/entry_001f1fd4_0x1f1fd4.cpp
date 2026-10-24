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

// Function: entry_001f1fd4
// Address: 0x1f1fd4 - 0x1f20fc
void entry_001f1fd4_0x1f1fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1fd4_0x1f1fd4");
#endif

    switch (ctx->pc) {
        case 0x1f2058u: goto label_1f2058;
        case 0x1f20d8u: goto label_1f20d8;
        case 0x1f20e0u: goto label_1f20e0;
        default: break;
    }

    ctx->pc = 0x1f1fd4u;

    // 0x1f1fd4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fd8: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1f1fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1f1fdc: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x1F1FDCu;
    {
        const bool branch_taken_0x1f1fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1fdc) {
            ctx->pc = 0x1F239Cu;
            return;
        }
    }
    ctx->pc = 0x1F1FE4u;
    // 0x1f1fe4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fe8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f1fec: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x1f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f1ff0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1f1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1f1ff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1ff8: 0x0  nop
    ctx->pc = 0x1f1ff8u;
    // NOP
    // 0x1f1ffc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f1ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f2000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2004: 0x0  nop
    ctx->pc = 0x1f2004u;
    // NOP
    // 0x1f2008: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f2008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f200c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f200cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2010: 0x0  nop
    ctx->pc = 0x1f2010u;
    // NOP
    // 0x1f2014: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f2014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f2018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f2018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f201c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f201cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2020: 0x0  nop
    ctx->pc = 0x1f2020u;
    // NOP
    // 0x1f2024: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f2024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1f2028: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f2028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f202c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f202cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2030: 0x0  nop
    ctx->pc = 0x1f2030u;
    // NOP
    // 0x1f2034: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1f2034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f2038: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f203c: 0xa7a20084  sh          $v0, 0x84($sp)
    ctx->pc = 0x1f203cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f2040: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x1f2040u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2044: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x1f2044u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2048: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f2048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f204c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1f204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f2050: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F2050u;
    SET_GPR_U32(ctx, 31, 0x1F2058u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F2050u, 0x1F2058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2058u;
label_1f2058:
    // 0x1f2058: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F2058u;
    {
        const bool branch_taken_0x1f2058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2058) {
            ctx->pc = 0x1F21C4u;
            return;
        }
    }
    ctx->pc = 0x1F2060u;
    // 0x1f2060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2064: 0x0  nop
    ctx->pc = 0x1f2064u;
    // NOP
    // 0x1f2068: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f2068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f206c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f206cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2070: 0x0  nop
    ctx->pc = 0x1f2070u;
    // NOP
    // 0x1f2074: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f2078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f207c: 0x0  nop
    ctx->pc = 0x1f207cu;
    // NOP
    // 0x1f2080: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f2080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f2084: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f2084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f208c: 0x0  nop
    ctx->pc = 0x1f208cu;
    // NOP
    // 0x1f2090: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f2090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1f2094: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2098: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f2098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f209c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f209cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f20a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f20a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f20a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f20a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f20a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f20a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f20ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f20acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f20b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f20b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f20b4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f20b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f20b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f20bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f20c0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f20c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f20c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f20c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f20c8: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f20c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f20cc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f20ccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f20d0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F20D0u;
    SET_GPR_U32(ctx, 31, 0x1F20D8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F20D0u, 0x1F20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20D8u;
label_1f20d8:
    // 0x1f20d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F20D8u;
    SET_GPR_U32(ctx, 31, 0x1F20E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F20D8u, 0x1F20E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20E0u;
label_1f20e0:
    // 0x1f20e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F20E0u;
    {
        const bool branch_taken_0x1f20e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f20e0) {
            ctx->pc = 0x1F20FCu;
            return;
        }
    }
    ctx->pc = 0x1F20E8u;
    // 0x1f20e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f20e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f20ec: 0x0  nop
    ctx->pc = 0x1f20ecu;
    // NOP
    // 0x1f20f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f20f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f20f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F20F4u;
    {
        const bool branch_taken_0x1f20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f20f4) {
            ctx->pc = 0x1F2118u;
            return;
        }
    }
    ctx->pc = 0x1F20FCu;
}
