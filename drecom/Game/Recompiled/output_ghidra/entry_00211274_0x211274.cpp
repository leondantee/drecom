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

// Function: entry_00211274
// Address: 0x211274 - 0x211494
void entry_00211274_0x211274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211274_0x211274");
#endif

    switch (ctx->pc) {
        case 0x2113b8u: goto label_2113b8;
        case 0x2113dcu: goto label_2113dc;
        case 0x211400u: goto label_211400;
        case 0x211490u: goto label_211490;
        default: break;
    }

    ctx->pc = 0x211274u;

    // 0x211274: 0x8fb20528  lw          $s2, 0x528($sp)
    ctx->pc = 0x211274u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211278: 0x86451278  lh          $a1, 0x1278($s2)
    ctx->pc = 0x211278u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4728)));
    // 0x21127c: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x21127cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x211280: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x211280u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x211284: 0x2881044c  slti        $at, $a0, 0x44C
    ctx->pc = 0x211284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1100) ? 1 : 0);
    // 0x211288: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
    ctx->pc = 0x211288u;
    {
        const bool branch_taken_0x211288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x211288) {
            ctx->pc = 0x211494u;
            return;
        }
    }
    ctx->pc = 0x211290u;
    // 0x211290: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x211290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211294: 0x84721278  lh          $s2, 0x1278($v1)
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x211298: 0x12b43c  dsll32      $s6, $s2, 16
    ctx->pc = 0x211298u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) << (32 + 16));
    // 0x21129c: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x21129cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x2112a0: 0x32c60003  andi        $a2, $s6, 0x3
    ctx->pc = 0x2112a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
    // 0x2112a4: 0x14c0007b  bnez        $a2, . + 4 + (0x7B << 2)
    ctx->pc = 0x2112A4u;
    {
        const bool branch_taken_0x2112a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2112a4) {
            ctx->pc = 0x211494u;
            return;
        }
    }
    ctx->pc = 0x2112ACu;
    // 0x2112ac: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x2112acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x2112b0: 0x24e8a600  addiu       $t0, $a3, -0x5A00
    ctx->pc = 0x2112b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944256));
    // 0x2112b4: 0x27a904d0  addiu       $t1, $sp, 0x4D0
    ctx->pc = 0x2112b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x2112b8: 0x790a0000  lq          $t2, 0x0($t0)
    ctx->pc = 0x2112b8u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x38A600u));
    // 0x2112bc: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x2112bcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
    // 0x2112c0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2112c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2112c4: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x2112c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2112c8: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x2112c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2112cc: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x2112ccu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A610u));
    // 0x2112d0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2112d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2112d4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x2112d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x2112d8: 0x2483a620  addiu       $v1, $a0, -0x59E0
    ctx->pc = 0x2112d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944288));
    // 0x2112dc: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x2112dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    // 0x2112e0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2112e0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A620u));
    // 0x2112e4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2112e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2112e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2112e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2112ec: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2112ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2112f0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2112f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2112f4: 0x3b880  sll         $s7, $v1, 2
    ctx->pc = 0x2112f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2112f8: 0x2e33821  addu        $a3, $s7, $v1
    ctx->pc = 0x2112f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2112fc: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2112fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x211300: 0x85a00  sll         $t3, $t0, 8
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x211304: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x211308: 0x8c297508  lw          $t1, 0x7508($at)
    ctx->pc = 0x211308u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x387508u));
    // 0x21130c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x21130cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x211310: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x211310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x211314: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x211314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x211318: 0x3066ff00  andi        $a2, $v1, 0xFF00
    ctx->pc = 0x211318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x21131c: 0x65202  srl         $t2, $a2, 8
    ctx->pc = 0x21131cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x211320: 0x16a4821  addu        $t1, $t3, $t2
    ctx->pc = 0x211320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x211324: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x211328: 0xac297508  sw          $t1, 0x7508($at)
    ctx->pc = 0x211328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21132c: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x21132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x211330: 0x240a0024  addiu       $t2, $zero, 0x24
    ctx->pc = 0x211330u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x211334: 0x6a001b  divu        $zero, $v1, $t2
    ctx->pc = 0x211334u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x211338: 0x0  nop
    ctx->pc = 0x211338u;
    // NOP
    // 0x21133c: 0x0  nop
    ctx->pc = 0x21133cu;
    // NOP
    // 0x211340: 0x1810  mfhi        $v1
    ctx->pc = 0x211340u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x211344: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x211344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211348: 0xa3a3051e  sb          $v1, 0x51E($sp)
    ctx->pc = 0x211348u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1310), (uint8_t)GPR_U32(ctx, 3));
    // 0x21134c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21134cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x211350: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x211350u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x211354: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x211354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x211358: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x211358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21135c: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x21135cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x211360: 0x33d000ff  andi        $s0, $fp, 0xFF
    ctx->pc = 0x211360u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x211364: 0x103a00  sll         $a3, $s0, 8
    ctx->pc = 0x211364u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x211368: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21136c: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x21136cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x211370: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x211370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x211374: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x211374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x211378: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x211378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21137c: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x21137cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x211380: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x211380u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x211384: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x211384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x211388: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x211388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21138c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x21138cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x211390: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x211390u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211394: 0x240a0024  addiu       $t2, $zero, 0x24
    ctx->pc = 0x211394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x211398: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x211398u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x21139c: 0x0  nop
    ctx->pc = 0x21139cu;
    // NOP
    // 0x2113a0: 0x0  nop
    ctx->pc = 0x2113a0u;
    // NOP
    // 0x2113a4: 0x1810  mfhi        $v1
    ctx->pc = 0x2113a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2113a8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2113a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2113ac: 0xa3a5051f  sb          $a1, 0x51F($sp)
    ctx->pc = 0x2113acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1311), (uint8_t)GPR_U32(ctx, 5));
    // 0x2113b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2113B0u;
    SET_GPR_U32(ctx, 31, 0x2113B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2113B0u, 0x2113B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113B8u;
label_2113b8:
    // 0x2113b8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2113b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2113bc: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x2113bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
    // 0x2113c0: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x2113c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2113c4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2113c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2113c8: 0x0  nop
    ctx->pc = 0x2113c8u;
    // NOP
    // 0x2113cc: 0x460d7342  mul.s       $f13, $f14, $f13
    ctx->pc = 0x2113ccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[14], ctx->f[13]);
    // 0x2113d0: 0xe7ad04f0  swc1        $f13, 0x4F0($sp)
    ctx->pc = 0x2113d0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1264), bits); }
    // 0x2113d4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2113D4u;
    SET_GPR_U32(ctx, 31, 0x2113DCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2113D4u, 0x2113DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113DCu;
label_2113dc:
    // 0x2113dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2113dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2113e0: 0x3c074409  lui         $a3, 0x4409
    ctx->pc = 0x2113e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17417 << 16));
    // 0x2113e4: 0x34e68000  ori         $a2, $a3, 0x8000
    ctx->pc = 0x2113e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x2113e8: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2113e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2113ec: 0x0  nop
    ctx->pc = 0x2113ecu;
    // NOP
    // 0x2113f0: 0x460c7302  mul.s       $f12, $f14, $f12
    ctx->pc = 0x2113f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x2113f4: 0xe7ac04f4  swc1        $f12, 0x4F4($sp)
    ctx->pc = 0x2113f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1268), bits); }
    // 0x2113f8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2113F8u;
    SET_GPR_U32(ctx, 31, 0x211400u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2113F8u, 0x211400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211400u;
label_211400:
    // 0x211400: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x211400u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x211404: 0x3c0a4409  lui         $t2, 0x4409
    ctx->pc = 0x211404u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17417 << 16));
    // 0x211408: 0x35498000  ori         $t1, $t2, 0x8000
    ctx->pc = 0x211408u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x21140c: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x21140cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x211410: 0x0  nop
    ctx->pc = 0x211410u;
    // NOP
    // 0x211414: 0x460d7002  mul.s       $f0, $f14, $f13
    ctx->pc = 0x211414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[13]);
    // 0x211418: 0xe7a004f8  swc1        $f0, 0x4F8($sp)
    ctx->pc = 0x211418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1272), bits); }
    // 0x21141c: 0x3c0b4348  lui         $t3, 0x4348
    ctx->pc = 0x21141cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17224 << 16));
    // 0x211420: 0x448b6000  mtc1        $t3, $f12
    ctx->pc = 0x211420u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x211424: 0x3c0a4348  lui         $t2, 0x4348
    ctx->pc = 0x211424u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17224 << 16));
    // 0x211428: 0x448a6800  mtc1        $t2, $f13
    ctx->pc = 0x211428u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21142c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x21142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x211430: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x211430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x211434: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x211434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x211438: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x211438u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21143c: 0xffa90010  sd          $t1, 0x10($sp)
    ctx->pc = 0x21143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 9));
    // 0x211440: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x211440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x211444: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x211444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x211448: 0x93a3051e  lbu         $v1, 0x51E($sp)
    ctx->pc = 0x211448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1310)));
    // 0x21144c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x21144cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211450: 0x93a3051f  lbu         $v1, 0x51F($sp)
    ctx->pc = 0x211450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1311)));
    // 0x211454: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x211454u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211458: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x211458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x21145c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x21145cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x211460: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x211460u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211464: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x211464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x211468: 0x27aa04d0  addiu       $t2, $sp, 0x4D0
    ctx->pc = 0x211468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x21146c: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x21146cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x211470: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x211470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211474: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x211474u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x211478: 0x71604628  paddub      $t0, $t3, $zero
    ctx->pc = 0x211478u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x21147c: 0x27a904e0  addiu       $t1, $sp, 0x4E0
    ctx->pc = 0x21147cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x211480: 0x27aa04f0  addiu       $t2, $sp, 0x4F0
    ctx->pc = 0x211480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    // 0x211484: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x211484u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211488: 0xc0bb888  jal         func_2EE220
    ctx->pc = 0x211488u;
    SET_GPR_U32(ctx, 31, 0x211490u);
    ctx->pc = 0x2EE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE220u, 0x211488u, 0x211490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211490u;
label_211490:
    // 0x211490: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x211490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x211494u;
}
