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

// Function: caseD_5
// Address: 0x290820 - 0x290898
void caseD_5_0x290820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x290820");
#endif

    switch (ctx->pc) {
        case 0x290884u: goto label_290884;
        case 0x290890u: goto label_290890;
        default: break;
    }

    ctx->pc = 0x290820u;

    // 0x290820: 0x3c0242b2  lui         $v0, 0x42B2
    ctx->pc = 0x290820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17074 << 16));
    // 0x290824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290828: 0x0  nop
    ctx->pc = 0x290828u;
    // NOP
    // 0x29082c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x29082cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x290830: 0x3c024357  lui         $v0, 0x4357
    ctx->pc = 0x290830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17239 << 16));
    // 0x290834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290838: 0x0  nop
    ctx->pc = 0x290838u;
    // NOP
    // 0x29083c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x29083cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x290840: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x290840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x290844: 0x3457ff00  ori         $s7, $v0, 0xFF00
    ctx->pc = 0x290844u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x290848: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x290848u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29084c: 0x0  nop
    ctx->pc = 0x29084cu;
    // NOP
    // 0x290850: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x290850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x290854: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x290854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x290858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29085c: 0x0  nop
    ctx->pc = 0x29085cu;
    // NOP
    // 0x290860: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x290860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x290864: 0x24026906  addiu       $v0, $zero, 0x6906
    ctx->pc = 0x290864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26886));
    // 0x290868: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290868u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29086c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29086cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x290870: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x290870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x290874: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x290874u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290878: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x290878u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29087c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x29087Cu;
    SET_GPR_U32(ctx, 31, 0x290884u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x29087Cu, 0x290884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290884u;
label_290884:
    // 0x290884: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290888: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x290888u;
    SET_GPR_U32(ctx, 31, 0x290890u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290888u, 0x290890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290890u;
label_290890:
    // 0x290890: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290894: 0xac222988  sw          $v0, 0x2988($at)
    ctx->pc = 0x290894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622988u, _value); } while (0);
    ctx->pc = 0x290898u;
}
