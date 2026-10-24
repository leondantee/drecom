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

// Function: entry_0024a478
// Address: 0x24a478 - 0x24a580
void entry_0024a478_0x24a478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a478_0x24a478");
#endif

    switch (ctx->pc) {
        case 0x24a4e8u: goto label_24a4e8;
        case 0x24a4fcu: goto label_24a4fc;
        case 0x24a510u: goto label_24a510;
        case 0x24a538u: goto label_24a538;
        default: break;
    }

    ctx->pc = 0x24a478u;

    // 0x24a478: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x24a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a47c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24a47cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24a480: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x24a480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x24a484: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a488: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24a488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24a48c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24a48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24a490: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24a490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24a494: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24a494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24a498: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24a498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24a49c: 0xa3a824  and         $s5, $a1, $v1
    ctx->pc = 0x24a49cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x24a4a0: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x24a4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
    // 0x24a4a4: 0x34a30006  ori         $v1, $a1, 0x6
    ctx->pc = 0x24a4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x24a4a8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x24a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x24a4ac: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x24a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x24a4b0: 0x24a5b420  addiu       $a1, $a1, -0x4BE0
    ctx->pc = 0x24a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947872));
    // 0x24a4b4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x24a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x24a4b8: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x24a4b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x24a4bc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x24a4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x24a4c0: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x24a4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x24a4c4: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x24a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a4c8: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x24a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x24a4cc: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x24a4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x24a4d0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a4d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24a4d4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x24a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x24a4d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a4d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a4dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24a4dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a4e0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x24A4E0u;
    SET_GPR_U32(ctx, 31, 0x24A4E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x24A4E0u, 0x24A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4E8u;
label_24a4e8:
    // 0x24a4e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a4e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a4ec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x24a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x24a4f0: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x24a4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x24a4f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x24A4F4u;
    SET_GPR_U32(ctx, 31, 0x24A4FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x24A4F4u, 0x24A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4FCu;
label_24a4fc:
    // 0x24a4fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a4fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a500: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x24a500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x24a504: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x24a504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x24a508: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x24A508u;
    SET_GPR_U32(ctx, 31, 0x24A510u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x24A508u, 0x24A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A510u;
label_24a510:
    // 0x24a510: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a510u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a514: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x24a514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x24a518: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x24a518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x24a51c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24a51cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a520: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a524: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x24a524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x24a528: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x24a528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x24a52c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a52cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a530: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24A530u;
    SET_GPR_U32(ctx, 31, 0x24A538u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A530u, 0x24A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A538u;
label_24a538:
    // 0x24a538: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a538u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a53c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x24a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24a540: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a544: 0xa464002c  sh          $a0, 0x2C($v1)
    ctx->pc = 0x24a544u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x24a548: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a54c: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x24a54cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x24a550: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x24a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x24a554: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x24a554u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x24a558: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a55c: 0x8464002a  lh          $a0, 0x2A($v1)
    ctx->pc = 0x24a55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x24a560: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x24a560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x24a564: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x24a564u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x24a568: 0x1ca00005  bgtz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A568u;
    {
        const bool branch_taken_0x24a568 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x24a568) {
            ctx->pc = 0x24A580u;
            return;
        }
    }
    ctx->pc = 0x24A570u;
    // 0x24a570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a574: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a578: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x24a578u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x24a57c: 0x0  nop
    ctx->pc = 0x24a57cu;
    // NOP
    ctx->pc = 0x24a580u;
}
