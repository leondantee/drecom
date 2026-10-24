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

// Function: entry_00211494
// Address: 0x211494 - 0x2116e0
void entry_00211494_0x211494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211494_0x211494");
#endif

    switch (ctx->pc) {
        case 0x2114e0u: goto label_2114e0;
        case 0x211500u: goto label_211500;
        case 0x21155cu: goto label_21155c;
        case 0x211580u: goto label_211580;
        default: break;
    }

    ctx->pc = 0x211494u;

    // 0x211494: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x211494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211498: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x211498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x21149c: 0x10800090  beqz        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x21149Cu;
    {
        const bool branch_taken_0x21149c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21149c) {
            ctx->pc = 0x2116E0u;
            return;
        }
    }
    ctx->pc = 0x2114A4u;
    // 0x2114a4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2114a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2114a8: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x2114a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2114ac: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2114acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2114b0: 0xa465127a  sh          $a1, 0x127A($v1)
    ctx->pc = 0x2114b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 5));
    // 0x2114b4: 0x3c073d4c  lui         $a3, 0x3D4C
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15692 << 16));
    // 0x2114b8: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x2114b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x2114bc: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2114bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2114c0: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2114c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2114c4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2114c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2114c8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2114c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2114cc: 0x2465a300  addiu       $a1, $v1, -0x5D00
    ctx->pc = 0x2114ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
    // 0x2114d0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2114d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2114d4: 0x2466a310  addiu       $a2, $v1, -0x5CF0
    ctx->pc = 0x2114d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x2114d8: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x2114D8u;
    SET_GPR_U32(ctx, 31, 0x2114E0u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x2114E0u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2114E0u) { return; }
    ctx->pc = 0x2114E0u;
label_2114e0:
    // 0x2114e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2114e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2114e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2114e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2114e8: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x2114e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x2114ec: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2114ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2114f0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2114f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2114f4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2114f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2114f8: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x2114F8u;
    SET_GPR_U32(ctx, 31, 0x211500u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x2114F8u, 0x211500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211500u;
label_211500:
    // 0x211500: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x211500u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x211504: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x211504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211508: 0x8487127a  lh          $a3, 0x127A($a0)
    ctx->pc = 0x211508u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x21150c: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x21150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x211510: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x211510u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x211514: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x211514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x211518: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x211518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21151c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21151cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211520: 0x0  nop
    ctx->pc = 0x211520u;
    // NOP
    // 0x211524: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211528: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x211528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x21152c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21152cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211530: 0x0  nop
    ctx->pc = 0x211530u;
    // NOP
    // 0x211534: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x211534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x211538: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x21153c: 0xe4209388  swc1        $f0, -0x6C78($at)
    ctx->pc = 0x21153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619388u, _value); } while (0); }
    // 0x211540: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211544: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211544u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x211548: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x211548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x21154c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21154cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211550: 0xc42c9388  lwc1        $f12, -0x6C78($at)
    ctx->pc = 0x211550u;
    { uint32_t bits = FAST_READ32(0x619388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x211554: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x211554u;
    SET_GPR_U32(ctx, 31, 0x21155Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x211554u, 0x21155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21155Cu;
label_21155c:
    // 0x21155c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21155cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x211560: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x211560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x211564: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x211564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x211568: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x211568u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21156c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21156cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211570: 0x8c269380  lw          $a2, -0x6C80($at)
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x619380u));
    // 0x211574: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x211574u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x211578: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x211578u;
    SET_GPR_U32(ctx, 31, 0x211580u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x211578u, 0x211580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211580u;
label_211580:
    // 0x211580: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x211580u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x211584: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x211584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
    // 0x211588: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x211588u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21158c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21158cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211590: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211590u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x211594: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x211598: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x211598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21159c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x21159cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2115a0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2115a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2115a4: 0x24c3bd00  addiu       $v1, $a2, -0x4300
    ctx->pc = 0x2115a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x2115a8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x2115a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2115ac: 0xe66c0070  swc1        $f12, 0x70($s3)
    ctx->pc = 0x2115acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
    // 0x2115b0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2115b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2115b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2115b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2115b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2115b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2115bc: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x2115bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x2115c0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x2115c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2115c4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2115c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2115c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2115c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2115cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2115ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2115d0: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x2115d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x2115d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2115d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2115d8: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x2115d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x2115dc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2115dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2115e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2115e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2115e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2115e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2115e8: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x2115e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x2115ec: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x2115ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2115f0: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2115f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2115f4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2115f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2115f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2115f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2115fc: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x2115fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x211600: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x211600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x211604: 0xe4c10078  swc1        $f1, 0x78($a2)
    ctx->pc = 0x211604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 120), bits); }
    // 0x211608: 0x3c033e48  lui         $v1, 0x3E48
    ctx->pc = 0x211608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15944 << 16));
    // 0x21160c: 0x3464c8c9  ori         $a0, $v1, 0xC8C9
    ctx->pc = 0x21160cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x211610: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x211610u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211614: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211618: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211618u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x21161c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x21161cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x211620: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x211620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x211624: 0x84900  sll         $t1, $t0, 4
    ctx->pc = 0x211624u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x211628: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x211628u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
    // 0x21162c: 0x2546bd00  addiu       $a2, $t2, -0x4300
    ctx->pc = 0x21162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294950144));
    // 0x211630: 0xc93821  addu        $a3, $a2, $t1
    ctx->pc = 0x211630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x211634: 0xe4e00080  swc1        $f0, 0x80($a3)
    ctx->pc = 0x211634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 128), bits); }
    // 0x211638: 0x3c043e48  lui         $a0, 0x3E48
    ctx->pc = 0x211638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15944 << 16));
    // 0x21163c: 0x3483c8c9  ori         $v1, $a0, 0xC8C9
    ctx->pc = 0x21163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x211640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211644: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211648: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211648u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x21164c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x211650: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x211650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x211654: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x211654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x211658: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x211658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x21165c: 0x24c6bd00  addiu       $a2, $a2, -0x4300
    ctx->pc = 0x21165cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x211660: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x211660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x211664: 0xe5200084  swc1        $f0, 0x84($t1)
    ctx->pc = 0x211664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 132), bits); }
    // 0x211668: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x211668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
    // 0x21166c: 0x348ac8c9  ori         $t2, $a0, 0xC8C9
    ctx->pc = 0x21166cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x211670: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x211670u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211674: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211678: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x211678u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x21167c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x21167cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x211680: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x211680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x211684: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x211684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x211688: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x211688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x21168c: 0x24c9bd00  addiu       $t1, $a2, -0x4300
    ctx->pc = 0x21168cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x211690: 0x1245021  addu        $t2, $t1, $a0
    ctx->pc = 0x211690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x211694: 0xe5410088  swc1        $f1, 0x88($t2)
    ctx->pc = 0x211694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 136), bits); }
    // 0x211698: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x21169c: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x21169cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x2116a0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x2116a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2116a4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2116a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2116a8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2116a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2116ac: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2116b0: 0x24c7bd00  addiu       $a3, $a2, -0x4300
    ctx->pc = 0x2116b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x2116b4: 0xe34821  addu        $t1, $a3, $v1
    ctx->pc = 0x2116b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2116b8: 0xad20007c  sw          $zero, 0x7C($t1)
    ctx->pc = 0x2116b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 124), GPR_U32(ctx, 0));
    // 0x2116bc: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x2116bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2116c0: 0x8549127a  lh          $t1, 0x127A($t2)
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4730)));
    // 0x2116c4: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x2116c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
    // 0x2116c8: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x2116c8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x2116cc: 0x2947001e  slti        $a3, $t2, 0x1E
    ctx->pc = 0x2116ccu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2116d0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2116D0u;
    {
        const bool branch_taken_0x2116d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2116d0) {
            ctx->pc = 0x2116E0u;
            return;
        }
    }
    ctx->pc = 0x2116D8u;
    // 0x2116d8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2116d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2116dc: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2116dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2116e0u;
}
