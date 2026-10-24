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

// Function: caseD_2
// Address: 0x29069c - 0x29071c
void caseD_2_0x29069c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x29069c");
#endif

    switch (ctx->pc) {
        case 0x2906fcu: goto label_2906fc;
        case 0x290708u: goto label_290708;
        default: break;
    }

    ctx->pc = 0x29069cu;

    // 0x29069c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x29069cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2906a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2906a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2906a4: 0x0  nop
    ctx->pc = 0x2906a4u;
    // NOP
    // 0x2906a8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2906a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2906ac: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2906acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x2906b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2906b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2906b4: 0x0  nop
    ctx->pc = 0x2906b4u;
    // NOP
    // 0x2906b8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2906b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2906bc: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x2906bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x2906c0: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x2906c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x2906c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2906c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2906c8: 0x0  nop
    ctx->pc = 0x2906c8u;
    // NOP
    // 0x2906cc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2906ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2906d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2906d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2906d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2906d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2906d8: 0x0  nop
    ctx->pc = 0x2906d8u;
    // NOP
    // 0x2906dc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2906dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2906e0: 0x24026903  addiu       $v0, $zero, 0x6903
    ctx->pc = 0x2906e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26883));
    // 0x2906e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2906e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2906e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2906e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2906ec: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2906ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2906f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2906f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2906f4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2906F4u;
    SET_GPR_U32(ctx, 31, 0x2906FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2906F4u, 0x2906FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2906FCu;
label_2906fc:
    // 0x2906fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2906fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290700: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x290700u;
    SET_GPR_U32(ctx, 31, 0x290708u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290700u, 0x290708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290708u;
label_290708:
    // 0x290708: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x290708u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29070c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29070cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290710: 0xac232988  sw          $v1, 0x2988($at)
    ctx->pc = 0x290710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622988u, _value); } while (0);
    // 0x290714: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x290714u;
    {
        const bool branch_taken_0x290714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290714) {
            ctx->pc = 0x290898u;
            return;
        }
    }
    ctx->pc = 0x29071Cu;
}
