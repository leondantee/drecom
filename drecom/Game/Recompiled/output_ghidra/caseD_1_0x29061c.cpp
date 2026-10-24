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

// Function: caseD_1
// Address: 0x29061c - 0x29069c
void caseD_1_0x29061c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x29061c");
#endif

    switch (ctx->pc) {
        case 0x290680u: goto label_290680;
        case 0x29068cu: goto label_29068c;
        default: break;
    }

    ctx->pc = 0x29061cu;

    // 0x29061c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x29061cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x290620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290624: 0x0  nop
    ctx->pc = 0x290624u;
    // NOP
    // 0x290628: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x290628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x29062c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x29062cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x290630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290634: 0x0  nop
    ctx->pc = 0x290634u;
    // NOP
    // 0x290638: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x290638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x29063c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x29063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x290640: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x290640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x290644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290648: 0x0  nop
    ctx->pc = 0x290648u;
    // NOP
    // 0x29064c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x290650: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x290650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x290654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290658: 0x0  nop
    ctx->pc = 0x290658u;
    // NOP
    // 0x29065c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x29065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x290660: 0x24036a04  addiu       $v1, $zero, 0x6A04
    ctx->pc = 0x290660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27140));
    // 0x290664: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x290664u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x290668: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x290668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29066c: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x29066cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x290670: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x290670u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x290674: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x290674u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x290678: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x290678u;
    SET_GPR_U32(ctx, 31, 0x290680u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x290678u, 0x290680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290680u;
label_290680:
    // 0x290680: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290680u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290684: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x290684u;
    SET_GPR_U32(ctx, 31, 0x29068Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290684u, 0x29068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29068Cu;
label_29068c:
    // 0x29068c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29068cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290690: 0xac222988  sw          $v0, 0x2988($at)
    ctx->pc = 0x290690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622988u, _value); } while (0);
    // 0x290694: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x290694u;
    {
        const bool branch_taken_0x290694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290694) {
            ctx->pc = 0x290898u;
            return;
        }
    }
    ctx->pc = 0x29069Cu;
}
