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

// Function: entry_0017ce98
// Address: 0x17ce98 - 0x17cf00
void entry_0017ce98_0x17ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ce98_0x17ce98");
#endif

    switch (ctx->pc) {
        case 0x17cebcu: goto label_17cebc;
        default: break;
    }

    ctx->pc = 0x17ce98u;

    // 0x17ce98: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x17ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17ce9c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x17ce9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17cea0: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17cea4: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x17cea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17cea8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x17cea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17ceac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17ceb0: 0x2445ec50  addiu       $a1, $v0, -0x13B0
    ctx->pc = 0x17ceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962256));
    // 0x17ceb4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17CEB4u;
    SET_GPR_U32(ctx, 31, 0x17CEBCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17CEB4u, 0x17CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CEBCu;
label_17cebc:
    // 0x17cebc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cec0: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17cec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17cec4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x17cec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17cec8: 0x30821000  andi        $v0, $a0, 0x1000
    ctx->pc = 0x17cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x17cecc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17CECCu;
    {
        const bool branch_taken_0x17cecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cecc) {
            ctx->pc = 0x17CF2Cu;
            return;
        }
    }
    ctx->pc = 0x17CED4u;
    // 0x17ced4: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x17ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x17ced8: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x17ced8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17cedc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17cedcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cee0: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17cee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cee4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CEE4u;
    {
        const bool branch_taken_0x17cee4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17cee4) {
            ctx->pc = 0x17CF00u;
            return;
        }
    }
    ctx->pc = 0x17CEECu;
    // 0x17ceec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ceecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cef0: 0x0  nop
    ctx->pc = 0x17cef0u;
    // NOP
    // 0x17cef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cef8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17CEF8u;
    {
        const bool branch_taken_0x17cef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cef8) {
            ctx->pc = 0x17CF1Cu;
            return;
        }
    }
    ctx->pc = 0x17CF00u;
}
