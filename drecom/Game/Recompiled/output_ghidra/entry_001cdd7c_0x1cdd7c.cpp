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

// Function: entry_001cdd7c
// Address: 0x1cdd7c - 0x1cde54
void entry_001cdd7c_0x1cdd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdd7c_0x1cdd7c");
#endif

    switch (ctx->pc) {
        case 0x1cdd8cu: goto label_1cdd8c;
        case 0x1cdd98u: goto label_1cdd98;
        case 0x1cddb4u: goto label_1cddb4;
        case 0x1cddc0u: goto label_1cddc0;
        case 0x1cddf4u: goto label_1cddf4;
        case 0x1cde10u: goto label_1cde10;
        case 0x1cde34u: goto label_1cde34;
        default: break;
    }

    ctx->pc = 0x1cdd7cu;

    // 0x1cdd7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cdd80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdd84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CDD84u;
    SET_GPR_U32(ctx, 31, 0x1CDD8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CDD84u, 0x1CDD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD8Cu;
label_1cdd8c:
    // 0x1cdd8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd90: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CDD90u;
    SET_GPR_U32(ctx, 31, 0x1CDD98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CDD90u, 0x1CDD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD98u;
label_1cdd98:
    // 0x1cdd98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cdd98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cdd9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cdd9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdda0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdda4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cdda4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cdda8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cdda8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cddac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CDDACu;
    SET_GPR_U32(ctx, 31, 0x1CDDB4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CDDACu, 0x1CDDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDB4u;
label_1cddb4:
    // 0x1cddb4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cddb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cddb8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CDDB8u;
    SET_GPR_U32(ctx, 31, 0x1CDDC0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CDDB8u, 0x1CDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDC0u;
label_1cddc0:
    // 0x1cddc0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cddc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cddc4: 0x90e309df  lbu         $v1, 0x9DF($a3)
    ctx->pc = 0x1cddc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2527)));
    // 0x1cddc8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1cddc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cddcc: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1cddccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1cddd0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1CDDD0u;
    {
        const bool branch_taken_0x1cddd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cddd0) {
            ctx->pc = 0x1CDF40u;
            return;
        }
    }
    ctx->pc = 0x1CDDD8u;
    // 0x1cddd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdddc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cdddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdde0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cdde0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdde4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cdde4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdde8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cdde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cddec: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CDDECu;
    SET_GPR_U32(ctx, 31, 0x1CDDF4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CDDECu, 0x1CDDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDF4u;
label_1cddf4:
    // 0x1cddf4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cddf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cddf8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1cddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cddfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde00: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x1cde00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cde04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1cde04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cde08: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CDE08u;
    SET_GPR_U32(ctx, 31, 0x1CDE10u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CDE08u, 0x1CDE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE10u;
label_1cde10:
    // 0x1cde10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cde10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cde14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde18: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1cde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cde1c: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x1cde1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cde20: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cde20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cde24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cde24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cde28: 0x24479218  addiu       $a3, $v0, -0x6DE8
    ctx->pc = 0x1cde28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939160));
    // 0x1cde2c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CDE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE34u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CDE2Cu, 0x1CDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE34u;
label_1cde34:
    // 0x1cde34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDE34u;
    {
        const bool branch_taken_0x1cde34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cde34) {
            ctx->pc = 0x1CDE54u;
            return;
        }
    }
    ctx->pc = 0x1CDE3Cu;
    // 0x1cde3c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cde3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cde40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cde40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde44: 0xa4651278  sh          $a1, 0x1278($v1)
    ctx->pc = 0x1cde44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1cde48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cde48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cde4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cde4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cde50: 0xac251a68  sw          $a1, 0x1A68($at)
    ctx->pc = 0x1cde50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1cde54u;
}
