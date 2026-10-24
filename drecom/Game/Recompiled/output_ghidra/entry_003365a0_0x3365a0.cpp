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

// Function: entry_003365a0
// Address: 0x3365a0 - 0x336690
void entry_003365a0_0x3365a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003365a0_0x3365a0");
#endif

    switch (ctx->pc) {
        case 0x3365b4u: goto label_3365b4;
        case 0x336600u: goto label_336600;
        case 0x336628u: goto label_336628;
        case 0x336660u: goto label_336660;
        case 0x336670u: goto label_336670;
        default: break;
    }

    ctx->pc = 0x3365a0u;

    // 0x3365a0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x3365a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3365a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3365a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3365a8: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x3365a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x3365ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3365ACu;
    SET_GPR_U32(ctx, 31, 0x3365B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3365ACu, 0x3365B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3365B4u;
label_3365b4:
    // 0x3365b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3365b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3365b8: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x3365b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x3365bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3365bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3365c0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x3365c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3365c4: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3365C4u;
    {
        const bool branch_taken_0x3365c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3365c4) {
            ctx->pc = 0x3366A4u;
            return;
        }
    }
    ctx->pc = 0x3365CCu;
    // 0x3365cc: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x3365ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x3365d0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3365d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3365d4: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3365d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3365d8: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x3365d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3365dc: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3365dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3365e0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x3365e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3365e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3365e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3365e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3365e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3365ec: 0x2452663e  addiu       $s2, $v0, 0x663E
    ctx->pc = 0x3365ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x3365f0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3365f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3365f4: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x3365f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3365f8: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x3365F8u;
    SET_GPR_U32(ctx, 31, 0x336600u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x3365F8u, 0x336600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336600u;
label_336600:
    // 0x336600: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x336600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x336604: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336608: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x336608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x33660c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x33660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x336610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x336610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x336614: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x336614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x336618: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x336618u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33661c: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x33661cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x336620: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x336620u;
    SET_GPR_U32(ctx, 31, 0x336628u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x336620u, 0x336628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336628u;
label_336628:
    // 0x336628: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x336628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33662c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x336630: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x336630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x336634: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x336634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x336638: 0x8c4219ec  lw          $v0, 0x19EC($v0)
    ctx->pc = 0x336638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6636)));
    // 0x33663c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33663cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x336640: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x336640u;
    {
        const bool branch_taken_0x336640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336640) {
            ctx->pc = 0x336690u;
            return;
        }
    }
    ctx->pc = 0x336648u;
    // 0x336648: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x336648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33664c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x33664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x336650: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x336650u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336654: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336654u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336658: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x336658u;
    SET_GPR_U32(ctx, 31, 0x336660u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x336658u, 0x336660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336660u;
label_336660:
    // 0x336660: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x336660u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336664: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x336664u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x336668: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x336668u;
    SET_GPR_U32(ctx, 31, 0x336670u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x336668u, 0x336670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336670u;
label_336670:
    // 0x336670: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x336670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x336674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x336678: 0xac251a8c  sw          $a1, 0x1A8C($at)
    ctx->pc = 0x336678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A8Cu, _value); } while (0);
    // 0x33667c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336680: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x336680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x336684: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x336684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x336688: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336688u;
    {
        const bool branch_taken_0x336688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336688) {
            ctx->pc = 0x3366A4u;
            return;
        }
    }
    ctx->pc = 0x336690u;
}
