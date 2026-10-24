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

// Function: entry_0027a4a0
// Address: 0x27a4a0 - 0x27a624
void entry_0027a4a0_0x27a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a4a0_0x27a4a0");
#endif

    switch (ctx->pc) {
        case 0x27a4a8u: goto label_27a4a8;
        case 0x27a4e8u: goto label_27a4e8;
        case 0x27a4f8u: goto label_27a4f8;
        case 0x27a5a8u: goto label_27a5a8;
        case 0x27a5bcu: goto label_27a5bc;
        case 0x27a5d0u: goto label_27a5d0;
        case 0x27a610u: goto label_27a610;
        case 0x27a61cu: goto label_27a61c;
        default: break;
    }

    ctx->pc = 0x27a4a0u;

    // 0x27a4a0: 0xc09ec58  jal         func_27B160
    ctx->pc = 0x27A4A0u;
    SET_GPR_U32(ctx, 31, 0x27A4A8u);
    ctx->pc = 0x27B160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B160u, 0x27A4A0u, 0x27A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4A8u;
label_27a4a8:
    // 0x27a4a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a4ac: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27a4b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27a4b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27a4b8: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x27A4B8u;
    {
        const bool branch_taken_0x27a4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a4b8) {
            ctx->pc = 0x27A624u;
            return;
        }
    }
    ctx->pc = 0x27A4C0u;
    // 0x27a4c0: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x27a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x27a4c4: 0xa2220062  sb          $v0, 0x62($s1)
    ctx->pc = 0x27a4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 98), (uint8_t)GPR_U32(ctx, 2));
    // 0x27a4c8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x27a4c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27a4cc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x27a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x27a4d0: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x27a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27a4d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a4d8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27a4dc: 0x2445b350  addiu       $a1, $v0, -0x4CB0
    ctx->pc = 0x27a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947664));
    // 0x27a4e0: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27A4E0u;
    SET_GPR_U32(ctx, 31, 0x27A4E8u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27A4E0u, 0x27A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4E8u;
label_27a4e8:
    // 0x27a4e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27a4e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a4ec: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x27a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27a4f0: 0xc099794  jal         func_265E50
    ctx->pc = 0x27A4F0u;
    SET_GPR_U32(ctx, 31, 0x27A4F8u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x27A4F0u, 0x27A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4F8u;
label_27a4f8:
    // 0x27a4f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x27a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x27a4fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27a500: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x27a500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27a504: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27a504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27a508: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x27a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x27a50c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a510: 0x8c501390  lw          $s0, 0x1390($v0)
    ctx->pc = 0x27a510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x27a514: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x27a514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x27a518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a51c: 0x0  nop
    ctx->pc = 0x27a51cu;
    // NOP
    // 0x27a520: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x27a520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x27a524: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27a528: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x27a528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x27a52c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27a530: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27a530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27a534: 0x3c0245c7  lui         $v0, 0x45C7
    ctx->pc = 0x27a534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17863 << 16));
    // 0x27a538: 0x34425800  ori         $v0, $v0, 0x5800
    ctx->pc = 0x27a538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22528);
    // 0x27a53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a540: 0x0  nop
    ctx->pc = 0x27a540u;
    // NOP
    // 0x27a544: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x27a544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x27a548: 0x3c024544  lui         $v0, 0x4544
    ctx->pc = 0x27a548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17732 << 16));
    // 0x27a54c: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x27a54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x27a550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a554: 0x0  nop
    ctx->pc = 0x27a554u;
    // NOP
    // 0x27a558: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27a558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27a55c: 0x3c02c5e1  lui         $v0, 0xC5E1
    ctx->pc = 0x27a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50657 << 16));
    // 0x27a560: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x27a560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x27a564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a568: 0x0  nop
    ctx->pc = 0x27a568u;
    // NOP
    // 0x27a56c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x27a56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x27a570: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x27a570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x27a574: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27a574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27a578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a57c: 0x0  nop
    ctx->pc = 0x27a57cu;
    // NOP
    // 0x27a580: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x27a580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x27a584: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x27a584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x27a588: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x27a58c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27a58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a590: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27a590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27a594: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27a594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27a598: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x27a598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27a59c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27a59cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27a5a0: 0xc077e50  jal         func_1DF940
    ctx->pc = 0x27A5A0u;
    SET_GPR_U32(ctx, 31, 0x27A5A8u);
    ctx->pc = 0x1DF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF940u, 0x27A5A0u, 0x27A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5A8u;
label_27a5a8:
    // 0x27a5a8: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x27a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x27a5ac: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x27a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x27a5b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27a5b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a5b4: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x27A5B4u;
    SET_GPR_U32(ctx, 31, 0x27A5BCu);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x27A5B4u, 0x27A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5BCu;
label_27a5bc:
    // 0x27a5bc: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x27a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x27a5c0: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x27a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x27a5c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27a5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a5c8: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x27A5C8u;
    SET_GPR_U32(ctx, 31, 0x27A5D0u);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x27A5C8u, 0x27A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5D0u;
label_27a5d0:
    // 0x27a5d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27a5d4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27a5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27a5d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27a5dc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27a5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a5e4: 0x0  nop
    ctx->pc = 0x27a5e4u;
    // NOP
    // 0x27a5e8: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x27a5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x27a5ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27a5f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a5f4: 0x0  nop
    ctx->pc = 0x27a5f4u;
    // NOP
    // 0x27a5f8: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x27a5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x27a5fc: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x27a5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x27a600: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27a600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27a604: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x27a604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27a608: 0xc077e1c  jal         func_1DF870
    ctx->pc = 0x27A608u;
    SET_GPR_U32(ctx, 31, 0x27A610u);
    ctx->pc = 0x1DF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF870u, 0x27A608u, 0x27A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A610u;
label_27a610:
    // 0x27a610: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27a610u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27a614: 0xc075da8  jal         func_1D76A0
    ctx->pc = 0x27A614u;
    SET_GPR_U32(ctx, 31, 0x27A61Cu);
    ctx->pc = 0x1D76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D76A0u, 0x27A614u, 0x27A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A61Cu;
label_27a61c:
    // 0x27a61c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27A61Cu;
    {
        const bool branch_taken_0x27a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a61c) {
            ctx->pc = 0x27A630u;
            return;
        }
    }
    ctx->pc = 0x27A624u;
}
