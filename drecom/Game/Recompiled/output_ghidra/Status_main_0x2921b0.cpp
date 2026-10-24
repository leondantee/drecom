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

// Function: Status_main
// Address: 0x2921b0 - 0x2924e8
void Status_main_0x2921b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Status_main_0x2921b0");
#endif

    switch (ctx->pc) {
        case 0x2921d0u: goto label_2921d0;
        case 0x292214u: goto label_292214;
        case 0x29223cu: goto label_29223c;
        case 0x2922b0u: goto label_2922b0;
        case 0x2922bcu: goto label_2922bc;
        case 0x2922c8u: goto label_2922c8;
        case 0x2922e0u: goto label_2922e0;
        case 0x292304u: goto label_292304;
        case 0x292314u: goto label_292314;
        case 0x29231cu: goto label_29231c;
        case 0x292328u: goto label_292328;
        case 0x292354u: goto label_292354;
        case 0x292360u: goto label_292360;
        case 0x292388u: goto label_292388;
        case 0x292390u: goto label_292390;
        case 0x292398u: goto label_292398;
        case 0x2923a4u: goto label_2923a4;
        case 0x2923b4u: goto label_2923b4;
        case 0x2923ccu: goto label_2923cc;
        case 0x292410u: goto label_292410;
        case 0x292450u: goto label_292450;
        case 0x292488u: goto label_292488;
        case 0x2924a4u: goto label_2924a4;
        case 0x2924ccu: goto label_2924cc;
        case 0x2924d4u: goto label_2924d4;
        default: break;
    }

    ctx->pc = 0x2921b0u;

    // 0x2921b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2921b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2921b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2921b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2921b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2921b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2921bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2921bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2921c0: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x2921c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x2921c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2921c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2921c8: 0xc0674ec  jal         func_19D3B0
    ctx->pc = 0x2921C8u;
    SET_GPR_U32(ctx, 31, 0x2921D0u);
    ctx->pc = 0x19D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3B0u, 0x2921C8u, 0x2921D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921D0u;
label_2921d0:
    // 0x2921d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2921d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2921d4: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x2921d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x2921d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2921d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2921dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2921dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2921e0: 0xac226140  sw          $v0, 0x6140($at)
    ctx->pc = 0x2921e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x626140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x626140u, _value); } while (0);
    // 0x2921e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2921e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2921e8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x2921e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x2921ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2921ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2921f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2921f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2921f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2921f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2921f8: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x2921f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x2921fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2921fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292200: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292204: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292204u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292208: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x292208u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29220c: 0xc0590ec  jal         func_1643B0
    ctx->pc = 0x29220Cu;
    SET_GPR_U32(ctx, 31, 0x292214u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x29220Cu, 0x292214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292214u;
label_292214:
    // 0x292214: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x292214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292218: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292218u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29221c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x29221cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292220: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x292220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292224: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x292224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x292228: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x292228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29222c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x29222cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x292230: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x292230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x292234: 0xc059190  jal         func_164640
    ctx->pc = 0x292234u;
    SET_GPR_U32(ctx, 31, 0x29223Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x292234u, 0x29223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29223Cu;
label_29223c:
    // 0x29223c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292240: 0xa0204f10  sb          $zero, 0x4F10($at)
    ctx->pc = 0x292240u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
    // 0x292244: 0xa20065a8  sb          $zero, 0x65A8($s0)
    ctx->pc = 0x292244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26024), (uint8_t)GPR_U32(ctx, 0));
    // 0x292248: 0xa20065ab  sb          $zero, 0x65AB($s0)
    ctx->pc = 0x292248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26027), (uint8_t)GPR_U32(ctx, 0));
    // 0x29224c: 0xa20065ad  sb          $zero, 0x65AD($s0)
    ctx->pc = 0x29224cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26029), (uint8_t)GPR_U32(ctx, 0));
    // 0x292250: 0x8e02686c  lw          $v0, 0x686C($s0)
    ctx->pc = 0x292250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26732)));
    // 0x292254: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x292254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x292258: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x292258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x29225c: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x29225cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x292260: 0xae005dc0  sw          $zero, 0x5DC0($s0)
    ctx->pc = 0x292260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 0));
    // 0x292264: 0xae005dc4  sw          $zero, 0x5DC4($s0)
    ctx->pc = 0x292264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 0));
    // 0x292268: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x292268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x29226c: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x29226cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    // 0x292270: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x292270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x292274: 0xae005dd4  sw          $zero, 0x5DD4($s0)
    ctx->pc = 0x292274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 0));
    // 0x292278: 0x92026625  lbu         $v0, 0x6625($s0)
    ctx->pc = 0x292278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26149)));
    // 0x29227c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29227cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x292280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292284: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292284u;
    {
        const bool branch_taken_0x292284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292284) {
            ctx->pc = 0x2922A8u;
            goto label_2922a8;
        }
    }
    ctx->pc = 0x29228Cu;
    // 0x29228c: 0xae005dc0  sw          $zero, 0x5DC0($s0)
    ctx->pc = 0x29228cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 0));
    // 0x292290: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x292290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292294: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x292298: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x292298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x29229c: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x29229cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    // 0x2922a0: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x2922a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x2922a4: 0xae005dd4  sw          $zero, 0x5DD4($s0)
    ctx->pc = 0x2922a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 0));
label_2922a8:
    // 0x2922a8: 0xc062aa0  jal         func_18AA80
    ctx->pc = 0x2922A8u;
    SET_GPR_U32(ctx, 31, 0x2922B0u);
    ctx->pc = 0x18AA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AA80u, 0x2922A8u, 0x2922B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922B0u;
label_2922b0:
    // 0x2922b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2922b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2922b4: 0xc062b40  jal         func_18AD00
    ctx->pc = 0x2922B4u;
    SET_GPR_U32(ctx, 31, 0x2922BCu);
    ctx->pc = 0x18AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD00u, 0x2922B4u, 0x2922BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922BCu;
label_2922bc:
    // 0x2922bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2922bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2922c0: 0xc067f2c  jal         func_19FCB0
    ctx->pc = 0x2922C0u;
    SET_GPR_U32(ctx, 31, 0x2922C8u);
    ctx->pc = 0x19FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FCB0u, 0x2922C0u, 0x2922C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922C8u;
label_2922c8:
    // 0x2922c8: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x2922c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x2922cc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2922ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2922d0: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x2922d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x2922d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2922d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2922d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2922d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2922dc: 0xac22008c  sw          $v0, 0x8C($at)
    ctx->pc = 0x2922dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D008Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D008Cu, _value); } while (0);
label_2922e0:
    // 0x2922e0: 0x920265a8  lbu         $v0, 0x65A8($s0)
    ctx->pc = 0x2922e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26024)));
    // 0x2922e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2922E4u;
    {
        const bool branch_taken_0x2922e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2922e4) {
            ctx->pc = 0x29230Cu;
            goto label_29230c;
        }
    }
    ctx->pc = 0x2922ECu;
    // 0x2922ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2922ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2922f0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2922f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2922f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2922f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2922f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2922f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2922fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2922FCu;
    SET_GPR_U32(ctx, 31, 0x292304u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2922FCu, 0x292304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292304u;
label_292304:
    // 0x292304: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x292304u;
    {
        const bool branch_taken_0x292304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292304) {
            ctx->pc = 0x292330u;
            goto label_292330;
        }
    }
    ctx->pc = 0x29230Cu;
label_29230c:
    // 0x29230c: 0xc0a493c  jal         func_2924F0
    ctx->pc = 0x29230Cu;
    SET_GPR_U32(ctx, 31, 0x292314u);
    ctx->pc = 0x2924F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2924F0u, 0x29230Cu, 0x292314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292314u;
label_292314:
    // 0x292314: 0xc0a5640  jal         func_295900
    ctx->pc = 0x292314u;
    SET_GPR_U32(ctx, 31, 0x29231Cu);
    ctx->pc = 0x295900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295900u, 0x292314u, 0x29231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29231Cu;
label_29231c:
    // 0x29231c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29231cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292320: 0xc06750c  jal         func_19D430
    ctx->pc = 0x292320u;
    SET_GPR_U32(ctx, 31, 0x292328u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x292320u, 0x292328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292328u;
label_292328:
    // 0x292328: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x292328u;
    {
        const bool branch_taken_0x292328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292328) {
            ctx->pc = 0x2922E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2922e0;
        }
    }
    ctx->pc = 0x292330u;
label_292330:
    // 0x292330: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292334: 0xac20008c  sw          $zero, 0x8C($at)
    ctx->pc = 0x292334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D008Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D008Cu, _value); } while (0);
    // 0x292338: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x292338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x29233c: 0x8c22c294  lw          $v0, -0x3D6C($at)
    ctx->pc = 0x29233cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC294u));
    // 0x292340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292340u;
    {
        const bool branch_taken_0x292340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292340) {
            ctx->pc = 0x292354u;
            goto label_292354;
        }
    }
    ctx->pc = 0x292348u;
    // 0x292348: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x292348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29234c: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x29234Cu;
    SET_GPR_U32(ctx, 31, 0x292354u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x29234Cu, 0x292354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292354u;
label_292354:
    // 0x292354: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x292354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292358: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x292358u;
    SET_GPR_U32(ctx, 31, 0x292360u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x292360u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x292360u) { return; }
    ctx->pc = 0x292360u;
label_292360:
    // 0x292360: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x292360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292364: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292364u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292368: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x292368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29236c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x29236cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292370: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x292370u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x292374: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x292374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x292378: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x292378u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29237c: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x29237cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x292380: 0xc059190  jal         func_164640
    ctx->pc = 0x292380u;
    SET_GPR_U32(ctx, 31, 0x292388u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x292380u, 0x292388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292388u;
label_292388:
    // 0x292388: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x292388u;
    {
        const bool branch_taken_0x292388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292388) {
            ctx->pc = 0x2923A8u;
            goto label_2923a8;
        }
    }
    ctx->pc = 0x292390u;
label_292390:
    // 0x292390: 0xc0a493c  jal         func_2924F0
    ctx->pc = 0x292390u;
    SET_GPR_U32(ctx, 31, 0x292398u);
    ctx->pc = 0x2924F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2924F0u, 0x292390u, 0x292398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292398u;
label_292398:
    // 0x292398: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x292398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29239c: 0xc06750c  jal         func_19D430
    ctx->pc = 0x29239Cu;
    SET_GPR_U32(ctx, 31, 0x2923A4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x29239Cu, 0x2923A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923A4u;
label_2923a4:
    // 0x2923a4: 0x0  nop
    ctx->pc = 0x2923a4u;
    // NOP
label_2923a8:
    // 0x2923a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2923a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2923ac: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x2923ACu;
    SET_GPR_U32(ctx, 31, 0x2923B4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x2923ACu, 0x2923B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923B4u;
label_2923b4:
    // 0x2923b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2923b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2923b8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2923B8u;
    {
        const bool branch_taken_0x2923b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923b8) {
            ctx->pc = 0x292390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292390;
        }
    }
    ctx->pc = 0x2923C0u;
    // 0x2923c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2923c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2923c4: 0xc067f2c  jal         func_19FCB0
    ctx->pc = 0x2923C4u;
    SET_GPR_U32(ctx, 31, 0x2923CCu);
    ctx->pc = 0x19FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FCB0u, 0x2923C4u, 0x2923CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923CCu;
label_2923cc:
    // 0x2923cc: 0x92026609  lbu         $v0, 0x6609($s0)
    ctx->pc = 0x2923ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26121)));
    // 0x2923d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2923d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2923d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2923d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2923d8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2923D8u;
    {
        const bool branch_taken_0x2923d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2923d8) {
            ctx->pc = 0x29243Cu;
            goto label_29243c;
        }
    }
    ctx->pc = 0x2923E0u;
    // 0x2923e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2923e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2923e4: 0x9022efb8  lbu         $v0, -0x1048($at)
    ctx->pc = 0x2923e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEFB8u));
    // 0x2923e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2923e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2923ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2923ECu;
    {
        const bool branch_taken_0x2923ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923ec) {
            ctx->pc = 0x292410u;
            goto label_292410;
        }
    }
    ctx->pc = 0x2923F4u;
    // 0x2923f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2923f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2923f8: 0xa020efb9  sb          $zero, -0x1047($at)
    ctx->pc = 0x2923f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEFB9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEFB9u, _value); } while (0);
    // 0x2923fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2923fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292400: 0x9022efb8  lbu         $v0, -0x1048($at)
    ctx->pc = 0x292400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEFB8u));
    // 0x292404: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x292404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x292408: 0xc051004  jal         func_144010
    ctx->pc = 0x292408u;
    SET_GPR_U32(ctx, 31, 0x292410u);
    ctx->pc = 0x144010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144010u, 0x292408u, 0x292410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292410u;
label_292410:
    // 0x292410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292414: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x292414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292418: 0xa022dbc0  sb          $v0, -0x2440($at)
    ctx->pc = 0x292418u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x29241c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29241cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292420: 0xa020dbc1  sb          $zero, -0x243F($at)
    ctx->pc = 0x292420u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x292424: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x292424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292428: 0xa020dbc2  sb          $zero, -0x243E($at)
    ctx->pc = 0x292428u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x29242c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29242cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292430: 0xa020dbc3  sb          $zero, -0x243D($at)
    ctx->pc = 0x292430u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x292434: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x292434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292438: 0xac20dbc4  sw          $zero, -0x243C($at)
    ctx->pc = 0x292438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
label_29243c:
    // 0x29243c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292440: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292444: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292444u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292448: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x292448u;
    SET_GPR_U32(ctx, 31, 0x292450u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x292448u, 0x292450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292450u;
label_292450:
    // 0x292450: 0xae005dc0  sw          $zero, 0x5DC0($s0)
    ctx->pc = 0x292450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 0));
    // 0x292454: 0xae005dc4  sw          $zero, 0x5DC4($s0)
    ctx->pc = 0x292454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 0));
    // 0x292458: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x292458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x29245c: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x29245cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    // 0x292460: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x292460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x292464: 0xae005dd4  sw          $zero, 0x5DD4($s0)
    ctx->pc = 0x292464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 0));
    // 0x292468: 0xae00685c  sw          $zero, 0x685C($s0)
    ctx->pc = 0x292468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 0));
    // 0x29246c: 0xae006870  sw          $zero, 0x6870($s0)
    ctx->pc = 0x29246cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 0));
    // 0x292470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x292470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292474: 0x0  nop
    ctx->pc = 0x292474u;
    // NOP
    // 0x292478: 0xe6006620  swc1        $f0, 0x6620($s0)
    ctx->pc = 0x292478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 26144), bits); }
    // 0x29247c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x29247cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x292480: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x292480u;
    SET_GPR_U32(ctx, 31, 0x292488u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x292480u, 0x292488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292488u;
label_292488:
    // 0x292488: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x292488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29248c: 0x8c236140  lw          $v1, 0x6140($at)
    ctx->pc = 0x29248cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x626140u));
    // 0x292490: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x292490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x292494: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x292494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x292498: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x292498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x29249c: 0xc059148  jal         func_164520
    ctx->pc = 0x29249Cu;
    SET_GPR_U32(ctx, 31, 0x2924A4u);
    ctx->pc = 0x164520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164520u, 0x29249Cu, 0x2924A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924A4u;
label_2924a4:
    // 0x2924a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2924a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2924a8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x2924a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x2924ac: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x2924acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x2924b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2924b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2924b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2924b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2924b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2924b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2924bc: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x2924bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x2924c0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2924c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2924c4: 0xc0674fc  jal         func_19D3F0
    ctx->pc = 0x2924C4u;
    SET_GPR_U32(ctx, 31, 0x2924CCu);
    ctx->pc = 0x19D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3F0u, 0x2924C4u, 0x2924CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924CCu;
label_2924cc:
    // 0x2924cc: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x2924CCu;
    SET_GPR_U32(ctx, 31, 0x2924D4u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x2924CCu, 0x2924D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924D4u;
label_2924d4:
    // 0x2924d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2924d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2924d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2924d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2924dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2924dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2924e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2924E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2924E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2924E8u;
}
