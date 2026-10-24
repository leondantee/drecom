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

// Function: caseD_5
// Address: 0x20bc04 - 0x20bd88
void caseD_5_0x20bc04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x20bc04");
#endif

    switch (ctx->pc) {
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd78u: goto label_20bd78;
        default: break;
    }

    ctx->pc = 0x20bc04u;

    // 0x20bc04: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x20bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x20bc08: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x20bc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x20bc0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20bc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20bc10: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc14: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc18: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x20bc1c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x20bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20bc20: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20bc24: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x20bc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20bc28: 0xc05c848  jal         func_172120
    ctx->pc = 0x20BC28u;
    SET_GPR_U32(ctx, 31, 0x20BC30u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20BC28u, 0x20BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC30u;
label_20bc30:
    // 0x20bc30: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc34: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x20bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bc38: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20bc38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20bc3c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x20BC3Cu;
    SET_GPR_U32(ctx, 31, 0x20BC44u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20BC3Cu, 0x20BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC44u;
label_20bc44:
    // 0x20bc44: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc48: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20bc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20bc4c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20bc50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20bc54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20BC54u;
    SET_GPR_U32(ctx, 31, 0x20BC5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20BC54u, 0x20BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC5Cu;
label_20bc5c:
    // 0x20bc5c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc60: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20BC60u;
    SET_GPR_U32(ctx, 31, 0x20BC68u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20BC60u, 0x20BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC68u;
label_20bc68:
    // 0x20bc68: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20bc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20bc70: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20BC70u;
    SET_GPR_U32(ctx, 31, 0x20BC78u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20BC70u, 0x20BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC78u;
label_20bc78:
    // 0x20bc78: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc7c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20BC7Cu;
    SET_GPR_U32(ctx, 31, 0x20BC84u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20BC7Cu, 0x20BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC84u;
label_20bc84:
    // 0x20bc84: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc88: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x20bc88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x20bc8c: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x20BC8Cu;
    {
        const bool branch_taken_0x20bc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc8c) {
            ctx->pc = 0x20BD88u;
            return;
        }
    }
    ctx->pc = 0x20BC94u;
    // 0x20bc94: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bc98: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x20bc98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x20bc9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20bca0: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x20bca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x20bca4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20bca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20bca8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20bca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20bcac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20bcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20bcb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20bcb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20bcb4: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x20bcb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x20bcb8: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x20BCB8u;
    {
        const bool branch_taken_0x20bcb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bcb8) {
            ctx->pc = 0x20BD88u;
            return;
        }
    }
    ctx->pc = 0x20BCC0u;
    // 0x20bcc0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bcc4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20bcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20bcc8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20bccc: 0x2444a2c0  addiu       $a0, $v0, -0x5D40
    ctx->pc = 0x20bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
    // 0x20bcd0: 0xc0bba18  jal         func_2EE860
    ctx->pc = 0x20BCD0u;
    SET_GPR_U32(ctx, 31, 0x20BCD8u);
    ctx->pc = 0x2EE860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE860u, 0x20BCD0u, 0x20BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCD8u;
label_20bcd8:
    // 0x20bcd8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x20bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20bcdc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x20BCDCu;
    SET_GPR_U32(ctx, 31, 0x20BCE4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x20BCE4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20BCE4u) { return; }
    ctx->pc = 0x20BCE4u;
label_20bce4:
    // 0x20bce4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x20bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20bce8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20bcec: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x20bcecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x20bcf0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20bcf4: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x20bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
    // 0x20bcf8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20bcf8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A2C0u));
    // 0x20bcfc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20bd00: 0x244292f0  addiu       $v0, $v0, -0x6D10
    ctx->pc = 0x20bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x20bd04: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20bd04u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192F0u, _value); } while (0);
    // 0x20bd08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20bd0c: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x20bd0cu;
    { uint32_t bits = FAST_READ32(0x6192F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bd10: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x20bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x20bd14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bd14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bd18: 0x0  nop
    ctx->pc = 0x20bd18u;
    // NOP
    // 0x20bd1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20bd20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20bd24: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x20bd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x20bd28: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x20bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x20bd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bd30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20bd34: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x20bd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x20bd38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20bd3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20bd40: 0xa4229304  sh          $v0, -0x6CFC($at)
    ctx->pc = 0x20bd40u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x20bd44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20bd48: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x20bd48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x20bd4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20bd50: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x20bd50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x20bd54: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bd58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20bd5c: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x20bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x20bd60: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x20BD60u;
    SET_GPR_U32(ctx, 31, 0x20BD68u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x20BD60u, 0x20BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD68u;
label_20bd68:
    // 0x20bd68: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20bd6c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20bd70: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20BD70u;
    SET_GPR_U32(ctx, 31, 0x20BD78u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20BD70u, 0x20BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD78u;
label_20bd78:
    // 0x20bd78: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x20bd7c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20bd80: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20BD80u;
    SET_GPR_U32(ctx, 31, 0x20BD88u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20BD80u, 0x20BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD88u;
}
