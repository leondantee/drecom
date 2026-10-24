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

// Function: entry_00305e60
// Address: 0x305e60 - 0x305f44
void entry_00305e60_0x305e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305e60_0x305e60");
#endif

    switch (ctx->pc) {
        case 0x305e8cu: goto label_305e8c;
        case 0x305ea0u: goto label_305ea0;
        case 0x305ec8u: goto label_305ec8;
        case 0x305edcu: goto label_305edc;
        case 0x305ef0u: goto label_305ef0;
        case 0x305f00u: goto label_305f00;
        default: break;
    }

    ctx->pc = 0x305e60u;

    // 0x305e60: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e64: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x305e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e68: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x305e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x305e6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x305e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x305e70: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x305e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x305e74: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x305e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x305e78: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x305e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x305e7c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x305e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x305e80: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x305e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x305e84: 0xc05c848  jal         func_172120
    ctx->pc = 0x305E84u;
    SET_GPR_U32(ctx, 31, 0x305E8Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x305E84u, 0x305E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E8Cu;
label_305e8c:
    // 0x305e8c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e90: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x305e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305e94: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x305e94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x305e98: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x305E98u;
    SET_GPR_U32(ctx, 31, 0x305EA0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x305E98u, 0x305EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EA0u;
label_305ea0:
    // 0x305ea0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ea4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x305ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x305ea8: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x305ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305eac: 0x86031278  lh          $v1, 0x1278($s0)
    ctx->pc = 0x305eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x305eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x305eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x305eb4: 0xa6031278  sh          $v1, 0x1278($s0)
    ctx->pc = 0x305eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x305eb8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ebc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305ebcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305ec0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305EC0u;
    SET_GPR_U32(ctx, 31, 0x305EC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305EC0u, 0x305EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EC8u;
label_305ec8:
    // 0x305ec8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305ec8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305ecc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ed0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x305ed0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x305ed4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305ED4u;
    SET_GPR_U32(ctx, 31, 0x305EDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305ED4u, 0x305EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EDCu;
label_305edc:
    // 0x305edc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305edcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305ee0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ee4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305ee8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305EE8u;
    SET_GPR_U32(ctx, 31, 0x305EF0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305EE8u, 0x305EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EF0u;
label_305ef0:
    // 0x305ef0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305ef0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305ef4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ef8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305EF8u;
    SET_GPR_U32(ctx, 31, 0x305F00u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305EF8u, 0x305F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F00u;
label_305f00:
    // 0x305f00: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305f00u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305f04: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305f0c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305F0Cu;
    {
        const bool branch_taken_0x305f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f0c) {
            ctx->pc = 0x305F44u;
            return;
        }
    }
    ctx->pc = 0x305F14u;
    // 0x305f14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x305f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305f18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f1c: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x305f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x305f20: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x305f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x305f24: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f28: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x305f28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x305f2c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x305f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305f34: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305f3c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x305f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x305f44u;
}
