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

// Function: entry_0034622c
// Address: 0x34622c - 0x346334
void entry_0034622c_0x34622c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034622c_0x34622c");
#endif

    switch (ctx->pc) {
        case 0x346258u: goto label_346258;
        case 0x346274u: goto label_346274;
        case 0x34628cu: goto label_34628c;
        case 0x34629cu: goto label_34629c;
        case 0x3462b0u: goto label_3462b0;
        case 0x3462c0u: goto label_3462c0;
        case 0x346300u: goto label_346300;
        default: break;
    }

    ctx->pc = 0x34622cu;

    // 0x34622c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346230: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x346230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346234: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x346234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x346238: 0x34627750  ori         $v0, $v1, 0x7750
    ctx->pc = 0x346238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x34623c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34623cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x346240: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x346240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x346244: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x346244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x346248: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x346248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34624c: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x34624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x346250: 0xc05c848  jal         func_172120
    ctx->pc = 0x346250u;
    SET_GPR_U32(ctx, 31, 0x346258u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x346250u, 0x346258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346258u;
label_346258:
    // 0x346258: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x346258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x34625c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346260: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x346260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346264: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x346264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346268: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x346268u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34626c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34626Cu;
    SET_GPR_U32(ctx, 31, 0x346274u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34626Cu, 0x346274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346274u;
label_346274:
    // 0x346274: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346278: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x346278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x34627c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346280: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346284: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x346284u;
    SET_GPR_U32(ctx, 31, 0x34628Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x346284u, 0x34628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34628Cu;
label_34628c:
    // 0x34628c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34628cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x346290: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346294: 0xc05cd10  jal         func_173440
    ctx->pc = 0x346294u;
    SET_GPR_U32(ctx, 31, 0x34629Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x346294u, 0x34629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34629Cu;
label_34629c:
    // 0x34629c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34629cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3462a0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3462a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3462a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3462a8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3462A8u;
    SET_GPR_U32(ctx, 31, 0x3462B0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3462A8u, 0x3462B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462B0u;
label_3462b0:
    // 0x3462b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3462b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3462b4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3462b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3462B8u;
    SET_GPR_U32(ctx, 31, 0x3462C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3462B8u, 0x3462C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462C0u;
label_3462c0:
    // 0x3462c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3462c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3462c4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3462c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462c8: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x3462c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3462cc: 0x10a001b3  beqz        $a1, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x3462CCu;
    {
        const bool branch_taken_0x3462cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3462cc) {
            ctx->pc = 0x34699Cu;
            return;
        }
    }
    ctx->pc = 0x3462D4u;
    // 0x3462d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3462d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3462d8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3462d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3462dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3462e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3462e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462e4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3462e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462e8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3462e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3462ec: 0x24060a0b  addiu       $a2, $zero, 0xA0B
    ctx->pc = 0x3462ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x3462f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3462f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3462f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3462f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3462f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3462F8u;
    SET_GPR_U32(ctx, 31, 0x346300u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3462F8u, 0x346300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346300u;
label_346300:
    // 0x346300: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x346300u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x346304: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x346304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x346308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34630c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346310: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346314: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x346314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x346318: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x346318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34631c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34631cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346320: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346324: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346328: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x346328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34632c: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x34632Cu;
    {
        const bool branch_taken_0x34632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34632c) {
            ctx->pc = 0x34699Cu;
            return;
        }
    }
    ctx->pc = 0x346334u;
}
