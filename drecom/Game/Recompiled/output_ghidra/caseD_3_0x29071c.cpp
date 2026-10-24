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

// Function: caseD_3
// Address: 0x29071c - 0x2907a4
void caseD_3_0x29071c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x29071c");
#endif

    switch (ctx->pc) {
        case 0x290780u: goto label_290780;
        case 0x290790u: goto label_290790;
        default: break;
    }

    ctx->pc = 0x29071cu;

    // 0x29071c: 0x3c03434d  lui         $v1, 0x434D
    ctx->pc = 0x29071cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17229 << 16));
    // 0x290720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290724: 0x0  nop
    ctx->pc = 0x290724u;
    // NOP
    // 0x290728: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x290728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x29072c: 0x3c0242a6  lui         $v0, 0x42A6
    ctx->pc = 0x29072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17062 << 16));
    // 0x290730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290734: 0x0  nop
    ctx->pc = 0x290734u;
    // NOP
    // 0x290738: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x290738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x29073c: 0x3c06477f  lui         $a2, 0x477F
    ctx->pc = 0x29073cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18303 << 16));
    // 0x290740: 0x34c2ff00  ori         $v0, $a2, 0xFF00
    ctx->pc = 0x290740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    // 0x290744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290748: 0x0  nop
    ctx->pc = 0x290748u;
    // NOP
    // 0x29074c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29074cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x290750: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x290750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x290754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290758: 0x0  nop
    ctx->pc = 0x290758u;
    // NOP
    // 0x29075c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x29075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x290760: 0x24026904  addiu       $v0, $zero, 0x6904
    ctx->pc = 0x290760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26884));
    // 0x290764: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290764u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290768: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x290768u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29076c: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x29076cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x290770: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x290770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x290774: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x290774u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x290778: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x290778u;
    SET_GPR_U32(ctx, 31, 0x290780u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x290778u, 0x290780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290780u;
label_290780:
    // 0x290780: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x290780u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290784: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x290784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x290788: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x290788u;
    SET_GPR_U32(ctx, 31, 0x290790u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290788u, 0x290790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290790u;
label_290790:
    // 0x290790: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x290790u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290794: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290798: 0xac3e2988  sw          $fp, 0x2988($at)
    ctx->pc = 0x290798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x622988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622988u, _value); } while (0);
    // 0x29079c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x29079Cu;
    {
        const bool branch_taken_0x29079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29079c) {
            ctx->pc = 0x290898u;
            return;
        }
    }
    ctx->pc = 0x2907A4u;
}
