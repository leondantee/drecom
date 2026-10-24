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

// Function: entry_0029243c
// Address: 0x29243c - 0x2924c4
void entry_0029243c_0x29243c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029243c_0x29243c");
#endif

    switch (ctx->pc) {
        case 0x292450u: goto label_292450;
        case 0x292488u: goto label_292488;
        case 0x2924a4u: goto label_2924a4;
        default: break;
    }

    ctx->pc = 0x29243cu;

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
    ctx->pc = 0x2924c4u;
}
