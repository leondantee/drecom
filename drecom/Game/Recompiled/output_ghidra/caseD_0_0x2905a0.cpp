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

// Function: caseD_0
// Address: 0x2905a0 - 0x29061c
void caseD_0_0x2905a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2905a0");
#endif

    switch (ctx->pc) {
        case 0x290600u: goto label_290600;
        case 0x29060cu: goto label_29060c;
        default: break;
    }

    ctx->pc = 0x2905a0u;

    // 0x2905a0: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x2905a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
    // 0x2905a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2905a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2905a8: 0x0  nop
    ctx->pc = 0x2905a8u;
    // NOP
    // 0x2905ac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2905acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2905b0: 0x3c034359  lui         $v1, 0x4359
    ctx->pc = 0x2905b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17241 << 16));
    // 0x2905b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2905b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2905b8: 0x0  nop
    ctx->pc = 0x2905b8u;
    // NOP
    // 0x2905bc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2905bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2905c0: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x2905c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x2905c4: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x2905c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x2905c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2905c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2905cc: 0x0  nop
    ctx->pc = 0x2905ccu;
    // NOP
    // 0x2905d0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2905d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2905d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2905d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2905d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2905d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2905dc: 0x0  nop
    ctx->pc = 0x2905dcu;
    // NOP
    // 0x2905e0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2905e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2905e4: 0x24026a03  addiu       $v0, $zero, 0x6A03
    ctx->pc = 0x2905e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27139));
    // 0x2905e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2905e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2905ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2905ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2905f0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2905f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2905f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2905f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2905f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2905F8u;
    SET_GPR_U32(ctx, 31, 0x290600u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2905F8u, 0x290600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290600u;
label_290600:
    // 0x290600: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290604: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x290604u;
    SET_GPR_U32(ctx, 31, 0x29060Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290604u, 0x29060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29060Cu;
label_29060c:
    // 0x29060c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290610: 0xac222988  sw          $v0, 0x2988($at)
    ctx->pc = 0x290610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622988u, _value); } while (0);
    // 0x290614: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x290614u;
    {
        const bool branch_taken_0x290614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290614) {
            ctx->pc = 0x290898u;
            return;
        }
    }
    ctx->pc = 0x29061Cu;
}
