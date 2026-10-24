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

// Function: entry_0030266c
// Address: 0x30266c - 0x30272c
void entry_0030266c_0x30266c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030266c_0x30266c");
#endif

    switch (ctx->pc) {
        case 0x302698u: goto label_302698;
        case 0x3026acu: goto label_3026ac;
        case 0x3026c4u: goto label_3026c4;
        case 0x3026d0u: goto label_3026d0;
        case 0x3026e0u: goto label_3026e0;
        case 0x3026ecu: goto label_3026ec;
        default: break;
    }

    ctx->pc = 0x30266cu;

    // 0x30266c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x30266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x302670: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x302670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x302674: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302678: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30267c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302680: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302684: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x302684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x302688: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30268c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x30268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x302690: 0xc05c848  jal         func_172120
    ctx->pc = 0x302690u;
    SET_GPR_U32(ctx, 31, 0x302698u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x302690u, 0x302698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302698u;
label_302698:
    // 0x302698: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30269c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3026a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3026a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3026a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3026A4u;
    SET_GPR_U32(ctx, 31, 0x3026ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3026A4u, 0x3026ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026ACu;
label_3026ac:
    // 0x3026ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3026acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026b0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3026b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3026b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3026b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3026b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3026bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3026BCu;
    SET_GPR_U32(ctx, 31, 0x3026C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3026BCu, 0x3026C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026C4u;
label_3026c4:
    // 0x3026c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3026c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3026C8u;
    SET_GPR_U32(ctx, 31, 0x3026D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3026C8u, 0x3026D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026D0u;
label_3026d0:
    // 0x3026d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3026d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3026d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3026d8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3026D8u;
    SET_GPR_U32(ctx, 31, 0x3026E0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3026D8u, 0x3026E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026E0u;
label_3026e0:
    // 0x3026e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3026e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026e4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3026E4u;
    SET_GPR_U32(ctx, 31, 0x3026ECu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3026E4u, 0x3026ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026ECu;
label_3026ec:
    // 0x3026ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3026ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026f0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3026f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3026f4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3026F4u;
    {
        const bool branch_taken_0x3026f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3026f4) {
            ctx->pc = 0x30272Cu;
            return;
        }
    }
    ctx->pc = 0x3026FCu;
    // 0x3026fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3026fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302700: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302704: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302708: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x302708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30270c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302710: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302714: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302718: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30271c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302720: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302724: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302728: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30272cu;
}
