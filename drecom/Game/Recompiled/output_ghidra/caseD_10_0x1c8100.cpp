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

// Function: caseD_10
// Address: 0x1c8100 - 0x1c819c
void caseD_10_0x1c8100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x1c8100");
#endif

    switch (ctx->pc) {
        case 0x1c8120u: goto label_1c8120;
        case 0x1c812cu: goto label_1c812c;
        case 0x1c8178u: goto label_1c8178;
        default: break;
    }

    ctx->pc = 0x1c8100u;

    // 0x1c8100: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8104: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8108: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c8108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c810c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c810cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c8110: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c8110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8114: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c8114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c8118: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C8118u;
    SET_GPR_U32(ctx, 31, 0x1C8120u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C8118u, 0x1C8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8120u;
label_1c8120:
    // 0x1c8120: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8120u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8124: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1C8124u;
    SET_GPR_U32(ctx, 31, 0x1C812Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C8124u, 0x1C812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C812Cu;
label_1c812c:
    // 0x1c812c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c812cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8130: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1c8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c8134: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1c8134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1c8138: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1c8138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c813c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1c813cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1c8140: 0x24659230  addiu       $a1, $v1, -0x6DD0
    ctx->pc = 0x1c8140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939184));
    // 0x1c8144: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c8144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c8148: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1c8148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c814c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1c814cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1c8150: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1c8150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1c8154: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1c8154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1c8158: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c8158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c815c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8160: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1c8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1c8164: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c8164u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c8168: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1c8168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1c816c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c816cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8170: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C8170u;
    SET_GPR_U32(ctx, 31, 0x1C8178u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C8170u, 0x1C8178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8178u;
label_1c8178:
    // 0x1c8178: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8178u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c817c: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x1c817cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
    // 0x1c8180: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c8180u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8184: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c8184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8188: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1c8188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x1c818c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8190: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1c8190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1c8194: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1c8194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c8198: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x1c8198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1c819cu;
}
