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
// Address: 0x12ff20 - 0x12fff8
void caseD_1_0x12ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x12ff20");
#endif

    switch (ctx->pc) {
        case 0x12ff4cu: goto label_12ff4c;
        case 0x12ff68u: goto label_12ff68;
        case 0x12ff80u: goto label_12ff80;
        case 0x12ff90u: goto label_12ff90;
        case 0x12ffa0u: goto label_12ffa0;
        case 0x12ffb4u: goto label_12ffb4;
        case 0x12ffc4u: goto label_12ffc4;
        case 0x12ffd0u: goto label_12ffd0;
        default: break;
    }

    ctx->pc = 0x12ff20u;

    // 0x12ff20: 0x3c073cc9  lui         $a3, 0x3CC9
    ctx->pc = 0x12ff20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15561 << 16));
    // 0x12ff24: 0x34e20fdb  ori         $v0, $a3, 0xFDB
    ctx->pc = 0x12ff24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4059);
    // 0x12ff28: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12ff28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12ff2c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ff30: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x12ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ff34: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ff38: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12ff3c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x12ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ff40: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x12ff40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x12ff44: 0xc05c848  jal         func_172120
    ctx->pc = 0x12FF44u;
    SET_GPR_U32(ctx, 31, 0x12FF4Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12FF44u, 0x12FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF4Cu;
label_12ff4c:
    // 0x12ff4c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x12ff4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x12ff50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ff54: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12ff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ff58: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x12ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ff5c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12ff5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12ff60: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12FF60u;
    SET_GPR_U32(ctx, 31, 0x12FF68u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12FF60u, 0x12FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF68u;
label_12ff68:
    // 0x12ff68: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ff6c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12ff6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12ff70: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ff74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12ff74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ff78: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12FF78u;
    SET_GPR_U32(ctx, 31, 0x12FF80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12FF78u, 0x12FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF80u;
label_12ff80:
    // 0x12ff80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ff84: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x12ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x12ff88: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12FF88u;
    SET_GPR_U32(ctx, 31, 0x12FF90u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12FF88u, 0x12FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF90u;
label_12ff90:
    // 0x12ff90: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ff94: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x12ff94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x12ff98: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12FF98u;
    SET_GPR_U32(ctx, 31, 0x12FFA0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12FF98u, 0x12FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFA0u;
label_12ffa0:
    // 0x12ffa0: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x12ffa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ffa4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12ffa8: 0x24e50120  addiu       $a1, $a3, 0x120
    ctx->pc = 0x12ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x12ffac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12FFACu;
    SET_GPR_U32(ctx, 31, 0x12FFB4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12FFB4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12FFB4u) { return; }
    ctx->pc = 0x12FFB4u;
label_12ffb4:
    // 0x12ffb4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ffb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12ffb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ffbc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12FFBCu;
    SET_GPR_U32(ctx, 31, 0x12FFC4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12FFBCu, 0x12FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFC4u;
label_12ffc4:
    // 0x12ffc4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ffc8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12FFC8u;
    SET_GPR_U32(ctx, 31, 0x12FFD0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12FFC8u, 0x12FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFD0u;
label_12ffd0:
    // 0x12ffd0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ffd4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12ffd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12ffd8: 0x106001a7  beqz        $v1, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x12FFD8u;
    {
        const bool branch_taken_0x12ffd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ffd8) {
            ctx->pc = 0x130678u;
            return;
        }
    }
    ctx->pc = 0x12FFE0u;
    // 0x12ffe0: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x12ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ffe4: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x12ffe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x12ffe8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12ffec: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x12ffecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12fff0: 0x100001a1  b           . + 4 + (0x1A1 << 2)
    ctx->pc = 0x12FFF0u;
    {
        const bool branch_taken_0x12fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fff0) {
            ctx->pc = 0x130678u;
            return;
        }
    }
    ctx->pc = 0x12FFF8u;
}
