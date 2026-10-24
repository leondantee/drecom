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

// Function: entry_001b59cc
// Address: 0x1b59cc - 0x1b5a80
void entry_001b59cc_0x1b59cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b59cc_0x1b59cc");
#endif

    switch (ctx->pc) {
        case 0x1b59f4u: goto label_1b59f4;
        case 0x1b5a18u: goto label_1b5a18;
        case 0x1b5a34u: goto label_1b5a34;
        case 0x1b5a48u: goto label_1b5a48;
        case 0x1b5a58u: goto label_1b5a58;
        default: break;
    }

    ctx->pc = 0x1b59ccu;

    // 0x1b59cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b59ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b59d0: 0x8c241a64  lw          $a0, 0x1A64($at)
    ctx->pc = 0x1b59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b59d4: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x1b59d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x1b59d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b59d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b59dc: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1b59dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b59e0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b59e4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b59e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b59e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b59e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b59ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B59ECu;
    SET_GPR_U32(ctx, 31, 0x1B59F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B59ECu, 0x1B59F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59F4u;
label_1b59f4:
    // 0x1b59f4: 0x3c083e49  lui         $t0, 0x3E49
    ctx->pc = 0x1b59f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15945 << 16));
    // 0x1b59f8: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x1b59f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
    // 0x1b59fc: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x1b59fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b5a00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a04: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a08: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1b5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b5a0c: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x1b5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b5a10: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1B5A10u;
    SET_GPR_U32(ctx, 31, 0x1B5A18u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B5A10u, 0x1B5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A18u;
label_1b5a18:
    // 0x1b5a18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a1c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b5a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1b5a20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a28: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1b5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b5a2c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1B5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A34u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B5A2Cu, 0x1B5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A34u;
label_1b5a34:
    // 0x1b5a34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b5a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b5a38: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b5a3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b5a40: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B5A40u;
    SET_GPR_U32(ctx, 31, 0x1B5A48u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B5A40u, 0x1B5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A48u;
label_1b5a48:
    // 0x1b5a48: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5a48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b5a4c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b5a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b5a50: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B5A50u;
    SET_GPR_U32(ctx, 31, 0x1B5A58u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B5A50u, 0x1B5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A58u;
label_1b5a58:
    // 0x1b5a58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a5c: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1b5a5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b5a60: 0x1080049f  beqz        $a0, . + 4 + (0x49F << 2)
    ctx->pc = 0x1B5A60u;
    {
        const bool branch_taken_0x1b5a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a60) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B5A68u;
    // 0x1b5a68: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a6c: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1b5a6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b5a70: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b5a74: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1b5a74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b5a78: 0x10000499  b           . + 4 + (0x499 << 2)
    ctx->pc = 0x1B5A78u;
    {
        const bool branch_taken_0x1b5a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a78) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B5A80u;
}
