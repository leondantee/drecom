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

// Function: entry_0025d070
// Address: 0x25d070 - 0x25d128
void entry_0025d070_0x25d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d070_0x25d070");
#endif

    switch (ctx->pc) {
        case 0x25d0b4u: goto label_25d0b4;
        case 0x25d0ccu: goto label_25d0cc;
        case 0x25d0e4u: goto label_25d0e4;
        case 0x25d0fcu: goto label_25d0fc;
        case 0x25d114u: goto label_25d114;
        default: break;
    }

    ctx->pc = 0x25d070u;

    // 0x25d070: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25d070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25d074: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x25d074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x25d078: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x25d078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x25d07c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25d080: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25d080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25d084: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x25d084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25d088: 0x8cb002d0  lw          $s0, 0x2D0($a1)
    ctx->pc = 0x25d088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25d08c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x25d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25d090: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25d090u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25d094: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25d094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25d098: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25d098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25d09c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25d09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25d0a0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x25D0A0u;
    {
        const bool branch_taken_0x25d0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d0a0) {
            ctx->pc = 0x25D128u;
            return;
        }
    }
    ctx->pc = 0x25D0A8u;
    // 0x25d0a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d0ac: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25D0ACu;
    SET_GPR_U32(ctx, 31, 0x25D0B4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25D0B4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D0B4u) { return; }
    ctx->pc = 0x25D0B4u;
label_25d0b4:
    // 0x25d0b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d0b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d0b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d0bc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d0c0: 0xc60c011c  lwc1        $f12, 0x11C($s0)
    ctx->pc = 0x25d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d0c4: 0xc040d0e  jal         func_103438
    ctx->pc = 0x25D0C4u;
    SET_GPR_U32(ctx, 31, 0x25D0CCu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25D0CCu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D0CCu) { return; }
    ctx->pc = 0x25D0CCu;
label_25d0cc:
    // 0x25d0cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d0ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d0d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d0d4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d0d8: 0xc60c0120  lwc1        $f12, 0x120($s0)
    ctx->pc = 0x25d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d0dc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x25D0DCu;
    SET_GPR_U32(ctx, 31, 0x25D0E4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25D0E4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D0E4u) { return; }
    ctx->pc = 0x25D0E4u;
label_25d0e4:
    // 0x25d0e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d0e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d0e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d0ec: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d0f0: 0xc60c0124  lwc1        $f12, 0x124($s0)
    ctx->pc = 0x25d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d0f4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x25D0F4u;
    SET_GPR_U32(ctx, 31, 0x25D0FCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25D0FCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D0FCu) { return; }
    ctx->pc = 0x25D0FCu;
label_25d0fc:
    // 0x25d0fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d0fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d100: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25d100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25d104: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25d104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25d108: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x25d108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d10c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25D10Cu;
    SET_GPR_U32(ctx, 31, 0x25D114u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25D10Cu, 0x25D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D114u;
label_25d114:
    // 0x25d114: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d114u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d118: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25d118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25d11c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x25d11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x25d120: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25d120u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25d124: 0x0  nop
    ctx->pc = 0x25d124u;
    // NOP
    ctx->pc = 0x25d128u;
}
