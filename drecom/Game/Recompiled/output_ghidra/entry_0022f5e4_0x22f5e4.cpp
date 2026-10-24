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

// Function: entry_0022f5e4
// Address: 0x22f5e4 - 0x22f6b0
void entry_0022f5e4_0x22f5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f5e4_0x22f5e4");
#endif

    switch (ctx->pc) {
        case 0x22f604u: goto label_22f604;
        case 0x22f68cu: goto label_22f68c;
        case 0x22f694u: goto label_22f694;
        default: break;
    }

    ctx->pc = 0x22f5e4u;

    // 0x22f5e4: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x22f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x22f5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f5ec: 0x0  nop
    ctx->pc = 0x22f5ecu;
    // NOP
    // 0x22f5f0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x22f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22f5f4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f5f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22f5fc: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22F5FCu;
    SET_GPR_U32(ctx, 31, 0x22F604u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22F5FCu, 0x22F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F604u;
label_22f604:
    // 0x22f604: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x22F604u;
    {
        const bool branch_taken_0x22f604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f604) {
            ctx->pc = 0x22F764u;
            return;
        }
    }
    ctx->pc = 0x22F60Cu;
    // 0x22f60c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f610: 0x0  nop
    ctx->pc = 0x22f610u;
    // NOP
    // 0x22f614: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22f614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22f618: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x22f618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x22f61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f620: 0x0  nop
    ctx->pc = 0x22f620u;
    // NOP
    // 0x22f624: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22f628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f62c: 0x0  nop
    ctx->pc = 0x22f62cu;
    // NOP
    // 0x22f630: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x22f630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22f634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22f634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22f638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f63c: 0x0  nop
    ctx->pc = 0x22f63cu;
    // NOP
    // 0x22f640: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x22f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x22f644: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f648: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x22f648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22f64c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22f64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22f650: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22f650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f654: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22f654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22f658: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22f658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22f65c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f660: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22f660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f664: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22f664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22f668: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f66c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x22f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22f670: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x22f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f674: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22f674u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22f678: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f678u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f67c: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x22f67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x22f680: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22f680u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f684: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22F684u;
    SET_GPR_U32(ctx, 31, 0x22F68Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22F684u, 0x22F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F68Cu;
label_22f68c:
    // 0x22f68c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F68Cu;
    SET_GPR_U32(ctx, 31, 0x22F694u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F68Cu, 0x22F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F694u;
label_22f694:
    // 0x22f694: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F694u;
    {
        const bool branch_taken_0x22f694 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22f694) {
            ctx->pc = 0x22F6B0u;
            return;
        }
    }
    ctx->pc = 0x22F69Cu;
    // 0x22f69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f6a0: 0x0  nop
    ctx->pc = 0x22f6a0u;
    // NOP
    // 0x22f6a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22f6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f6a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22F6A8u;
    {
        const bool branch_taken_0x22f6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6a8) {
            ctx->pc = 0x22F6CCu;
            return;
        }
    }
    ctx->pc = 0x22F6B0u;
}
