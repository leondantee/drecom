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

// Function: entry_002fd568
// Address: 0x2fd568 - 0x2fd6d4
void entry_002fd568_0x2fd568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fd568_0x2fd568");
#endif

    switch (ctx->pc) {
        case 0x2fd5b4u: goto label_2fd5b4;
        case 0x2fd5dcu: goto label_2fd5dc;
        case 0x2fd5fcu: goto label_2fd5fc;
        case 0x2fd65cu: goto label_2fd65c;
        case 0x2fd688u: goto label_2fd688;
        case 0x2fd6a8u: goto label_2fd6a8;
        default: break;
    }

    ctx->pc = 0x2fd568u;

    // 0x2fd568: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2fd568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd56c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fd570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fd570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fd574: 0x14830057  bne         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2FD574u;
    {
        const bool branch_taken_0x2fd574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fd574) {
            ctx->pc = 0x2FD6D4u;
            return;
        }
    }
    ctx->pc = 0x2FD57Cu;
    // 0x2fd57c: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x2fd57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd580: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd580u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd584: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fd584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fd588: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fd588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fd58c: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x2fd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fd590: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd590u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd594: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd598: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd598u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd59c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2fd59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2fd5a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fd5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd5a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5ac: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD5ACu;
    SET_GPR_U32(ctx, 31, 0x2FD5B4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD5B4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD5B4u) { return; }
    ctx->pc = 0x2FD5B4u;
label_2fd5b4:
    // 0x2fd5b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fd5b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd5b8: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x2fd5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd5bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd5bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd5c0: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x2fd5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fd5c4: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fd5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fd5c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5cc: 0x24651600  addiu       $a1, $v1, 0x1600
    ctx->pc = 0x2fd5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fd5d0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2fd5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5d4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD5D4u;
    SET_GPR_U32(ctx, 31, 0x2FD5DCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD5D4u, 0x2FD5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5DCu;
label_2fd5dc:
    // 0x2fd5dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd5dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd5e0: 0x3c033eaa  lui         $v1, 0x3EAA
    ctx->pc = 0x2fd5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
    // 0x2fd5e4: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x2fd5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x2fd5e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fd5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd5ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5f4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD5F4u;
    SET_GPR_U32(ctx, 31, 0x2FD5FCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD5FCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD5FCu) { return; }
    ctx->pc = 0x2FD5FCu;
label_2fd5fc:
    // 0x2fd5fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fd5fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd600: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd608: 0x0  nop
    ctx->pc = 0x2fd608u;
    // NOP
    // 0x2fd60c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd610: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd614: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd614u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd618: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2fd618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fd61c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2fd61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd620: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd620u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd624: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd628: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd628u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd62c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd630: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd634: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x2fd634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd638: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2fd638u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd63c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd640: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x2fd640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x2fd644: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2fd644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2fd648: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fd648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd64c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd650: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd654: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD654u;
    SET_GPR_U32(ctx, 31, 0x2FD65Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD65Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD65Cu) { return; }
    ctx->pc = 0x2FD65Cu;
label_2fd65c:
    // 0x2fd65c: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd660: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd664: 0x229c0  sll         $a1, $v0, 7
    ctx->pc = 0x2fd664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd668: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x2fd668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2fd66c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd670: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd670u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd674: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd678: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fd678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd67c: 0x24661610  addiu       $a2, $v1, 0x1610
    ctx->pc = 0x2fd67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fd680: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD680u;
    SET_GPR_U32(ctx, 31, 0x2FD688u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD680u, 0x2FD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD688u;
label_2fd688:
    // 0x2fd688: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fd688u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd68c: 0x3c133eaa  lui         $s3, 0x3EAA
    ctx->pc = 0x2fd68cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16042 << 16));
    // 0x2fd690: 0x3663aaab  ori         $v1, $s3, 0xAAAB
    ctx->pc = 0x2fd690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)43691);
    // 0x2fd694: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fd694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd698: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd69c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd6a0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD6A0u;
    SET_GPR_U32(ctx, 31, 0x2FD6A8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD6A8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD6A8u) { return; }
    ctx->pc = 0x2FD6A8u;
label_2fd6a8:
    // 0x2fd6a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fd6a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd6ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd6b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd6b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd6b4: 0x0  nop
    ctx->pc = 0x2fd6b4u;
    // NOP
    // 0x2fd6b8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd6bc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd6c0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd6c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd6c4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fd6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd6c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd6cc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd6d0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x2fd6d4u;
}
