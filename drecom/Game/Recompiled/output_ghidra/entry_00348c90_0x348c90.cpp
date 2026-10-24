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

// Function: entry_00348c90
// Address: 0x348c90 - 0x348d0c
void entry_00348c90_0x348c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348c90_0x348c90");
#endif

    switch (ctx->pc) {
        case 0x348ca0u: goto label_348ca0;
        case 0x348cb0u: goto label_348cb0;
        case 0x348cc4u: goto label_348cc4;
        case 0x348d04u: goto label_348d04;
        default: break;
    }

    ctx->pc = 0x348c90u;

    // 0x348c90: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x348c94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348c98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x348C98u;
    SET_GPR_U32(ctx, 31, 0x348CA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x348C98u, 0x348CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CA0u;
label_348ca0:
    // 0x348ca0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348ca0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348ca4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ca8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x348CA8u;
    SET_GPR_U32(ctx, 31, 0x348CB0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x348CA8u, 0x348CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CB0u;
label_348cb0:
    // 0x348cb0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348cb4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x348cb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348cb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x348cb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348cbc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x348CBCu;
    SET_GPR_U32(ctx, 31, 0x348CC4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x348CBCu, 0x348CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CC4u;
label_348cc4:
    // 0x348cc4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x348cc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348cc8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x348cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ccc: 0x90a609db  lbu         $a2, 0x9DB($a1)
    ctx->pc = 0x348cccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
    // 0x348cd0: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x348cd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x348cd4: 0x30e80008  andi        $t0, $a3, 0x8
    ctx->pc = 0x348cd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x348cd8: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x348CD8u;
    {
        const bool branch_taken_0x348cd8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x348cd8) {
            ctx->pc = 0x348D0Cu;
            return;
        }
    }
    ctx->pc = 0x348CE0u;
    // 0x348ce0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ce4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x348ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348ce8: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x348ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x348cec: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x348cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x348cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348cf4: 0x0  nop
    ctx->pc = 0x348cf4u;
    // NOP
    // 0x348cf8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x348cf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x348cfc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x348CFCu;
    SET_GPR_U32(ctx, 31, 0x348D04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x348CFCu, 0x348D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D04u;
label_348d04:
    // 0x348d04: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x348d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x348d0cu;
}
