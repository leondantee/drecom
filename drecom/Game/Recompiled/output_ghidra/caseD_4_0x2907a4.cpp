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

// Function: caseD_4
// Address: 0x2907a4 - 0x290820
void caseD_4_0x2907a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2907a4");
#endif

    switch (ctx->pc) {
        case 0x290804u: goto label_290804;
        case 0x290810u: goto label_290810;
        default: break;
    }

    ctx->pc = 0x2907a4u;

    // 0x2907a4: 0x3c024342  lui         $v0, 0x4342
    ctx->pc = 0x2907a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17218 << 16));
    // 0x2907a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2907a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2907ac: 0x0  nop
    ctx->pc = 0x2907acu;
    // NOP
    // 0x2907b0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2907b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2907b4: 0x3c03429c  lui         $v1, 0x429C
    ctx->pc = 0x2907b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17052 << 16));
    // 0x2907b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2907b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2907bc: 0x0  nop
    ctx->pc = 0x2907bcu;
    // NOP
    // 0x2907c0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2907c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2907c4: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x2907c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x2907c8: 0x3462ff00  ori         $v0, $v1, 0xFF00
    ctx->pc = 0x2907c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2907cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2907ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2907d0: 0x0  nop
    ctx->pc = 0x2907d0u;
    // NOP
    // 0x2907d4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2907d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2907d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2907d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2907dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2907dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2907e0: 0x0  nop
    ctx->pc = 0x2907e0u;
    // NOP
    // 0x2907e4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2907e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2907e8: 0x24026905  addiu       $v0, $zero, 0x6905
    ctx->pc = 0x2907e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26885));
    // 0x2907ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2907ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2907f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2907f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2907f4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2907f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2907f8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2907f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2907fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2907FCu;
    SET_GPR_U32(ctx, 31, 0x290804u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2907FCu, 0x290804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290804u;
label_290804:
    // 0x290804: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290808: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x290808u;
    SET_GPR_U32(ctx, 31, 0x290810u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290808u, 0x290810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290810u;
label_290810:
    // 0x290810: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290814: 0xac222988  sw          $v0, 0x2988($at)
    ctx->pc = 0x290814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622988u, _value); } while (0);
    // 0x290818: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x290818u;
    {
        const bool branch_taken_0x290818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290818) {
            ctx->pc = 0x290898u;
            return;
        }
    }
    ctx->pc = 0x290820u;
}
