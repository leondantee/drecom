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

// Function: entry_0025c2d4
// Address: 0x25c2d4 - 0x25c388
void entry_0025c2d4_0x25c2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c2d4_0x25c2d4");
#endif

    switch (ctx->pc) {
        case 0x25c318u: goto label_25c318;
        case 0x25c32cu: goto label_25c32c;
        case 0x25c348u: goto label_25c348;
        case 0x25c35cu: goto label_25c35c;
        case 0x25c378u: goto label_25c378;
        default: break;
    }

    ctx->pc = 0x25c2d4u;

    // 0x25c2d4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c2d8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x25c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x25c2dc: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x25c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x25c2e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25c2e4: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x25c2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25c2e8: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x25c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x25c2ec: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25c2f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25c2f4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25c2f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25c2f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25c2f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25c2fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25c300: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25c300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25c304: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x25C304u;
    {
        const bool branch_taken_0x25c304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c304) {
            ctx->pc = 0x25C388u;
            return;
        }
    }
    ctx->pc = 0x25C30Cu;
    // 0x25c30c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25c310: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25C310u;
    SET_GPR_U32(ctx, 31, 0x25C318u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25C318u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C318u) { return; }
    ctx->pc = 0x25C318u;
label_25c318:
    // 0x25c318: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25c318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25c31c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25c31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25c320: 0xc60c011c  lwc1        $f12, 0x11C($s0)
    ctx->pc = 0x25c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c324: 0xc040d0e  jal         func_103438
    ctx->pc = 0x25C324u;
    SET_GPR_U32(ctx, 31, 0x25C32Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25C32Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C32Cu) { return; }
    ctx->pc = 0x25C32Cu;
label_25c32c:
    // 0x25c32c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25c32cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c330: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x25c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25c334: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25c334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c338: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25c33c: 0xc60c0120  lwc1        $f12, 0x120($s0)
    ctx->pc = 0x25c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c340: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x25C340u;
    SET_GPR_U32(ctx, 31, 0x25C348u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25C348u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C348u) { return; }
    ctx->pc = 0x25C348u;
label_25c348:
    // 0x25c348: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25c34c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25c350: 0xc60c0124  lwc1        $f12, 0x124($s0)
    ctx->pc = 0x25c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c354: 0xc040ce4  jal         func_103390
    ctx->pc = 0x25C354u;
    SET_GPR_U32(ctx, 31, 0x25C35Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25C35Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C35Cu) { return; }
    ctx->pc = 0x25C35Cu;
label_25c35c:
    // 0x25c35c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25c35cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c360: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25c360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25c364: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25c364u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25c368: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x25c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25c36c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25c36cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c370: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25C370u;
    SET_GPR_U32(ctx, 31, 0x25C378u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25C370u, 0x25C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C378u;
label_25c378:
    // 0x25c378: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25c378u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c37c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25c37cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25c380: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x25c380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x25c384: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25c384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x25c388u;
}
