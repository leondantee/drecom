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

// Function: entry_00373654
// Address: 0x373654 - 0x373708
void entry_00373654_0x373654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373654_0x373654");
#endif

    switch (ctx->pc) {
        case 0x373698u: goto label_373698;
        case 0x3736acu: goto label_3736ac;
        case 0x3736c4u: goto label_3736c4;
        case 0x3736dcu: goto label_3736dc;
        case 0x3736f4u: goto label_3736f4;
        default: break;
    }

    ctx->pc = 0x373654u;

    // 0x373654: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x373654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373658: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x373658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37365c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x37365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x373660: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x373660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x373664: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x373664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x373668: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x373668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x37366c: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x37366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x373670: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x373670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x373674: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x373674u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x373678: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x373678u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x37367c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x37367cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x373680: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x373680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x373684: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x373684u;
    {
        const bool branch_taken_0x373684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373684) {
            ctx->pc = 0x373708u;
            return;
        }
    }
    ctx->pc = 0x37368Cu;
    // 0x37368c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x37368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373690: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x373690u;
    SET_GPR_U32(ctx, 31, 0x373698u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x373698u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373698u) { return; }
    ctx->pc = 0x373698u;
label_373698:
    // 0x373698: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x373698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37369c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x37369cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736a0: 0xc60c011c  lwc1        $f12, 0x11C($s0)
    ctx->pc = 0x3736a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3736a4: 0xc040d0e  jal         func_103438
    ctx->pc = 0x3736A4u;
    SET_GPR_U32(ctx, 31, 0x3736ACu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x3736ACu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3736ACu) { return; }
    ctx->pc = 0x3736ACu;
label_3736ac:
    // 0x3736ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3736acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3736b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3736b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736b4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3736b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736b8: 0xc60c0120  lwc1        $f12, 0x120($s0)
    ctx->pc = 0x3736b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3736bc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x3736BCu;
    SET_GPR_U32(ctx, 31, 0x3736C4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x3736C4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3736C4u) { return; }
    ctx->pc = 0x3736C4u;
label_3736c4:
    // 0x3736c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3736c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3736c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3736c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736cc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3736ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736d0: 0xc60c0124  lwc1        $f12, 0x124($s0)
    ctx->pc = 0x3736d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3736d4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x3736D4u;
    SET_GPR_U32(ctx, 31, 0x3736DCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x3736DCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3736DCu) { return; }
    ctx->pc = 0x3736DCu;
label_3736dc:
    // 0x3736dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3736dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3736e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3736e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3736e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3736e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3736e8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3736e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736ec: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3736ECu;
    SET_GPR_U32(ctx, 31, 0x3736F4u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3736ECu, 0x3736F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736F4u;
label_3736f4:
    // 0x3736f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3736f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3736f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3736f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3736fc: 0x3074ffbf  andi        $s4, $v1, 0xFFBF
    ctx->pc = 0x3736fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x373700: 0xa6140140  sh          $s4, 0x140($s0)
    ctx->pc = 0x373700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 20));
    // 0x373704: 0x0  nop
    ctx->pc = 0x373704u;
    // NOP
    ctx->pc = 0x373708u;
}
