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

// Function: entry_002a2458
// Address: 0x2a2458 - 0x2a275c
void entry_002a2458_0x2a2458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2458_0x2a2458");
#endif

    switch (ctx->pc) {
        case 0x2a2464u: goto label_2a2464;
        case 0x2a2474u: goto label_2a2474;
        case 0x2a2484u: goto label_2a2484;
        case 0x2a24acu: goto label_2a24ac;
        case 0x2a2504u: goto label_2a2504;
        case 0x2a253cu: goto label_2a253c;
        case 0x2a2554u: goto label_2a2554;
        case 0x2a2564u: goto label_2a2564;
        case 0x2a2604u: goto label_2a2604;
        case 0x2a2630u: goto label_2a2630;
        case 0x2a264cu: goto label_2a264c;
        case 0x2a2668u: goto label_2a2668;
        case 0x2a2678u: goto label_2a2678;
        case 0x2a2690u: goto label_2a2690;
        case 0x2a269cu: goto label_2a269c;
        case 0x2a26f4u: goto label_2a26f4;
        case 0x2a2700u: goto label_2a2700;
        case 0x2a2748u: goto label_2a2748;
        case 0x2a2754u: goto label_2a2754;
        default: break;
    }

    ctx->pc = 0x2a2458u;

    // 0x2a2458: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a245c: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A245Cu;
    SET_GPR_U32(ctx, 31, 0x2A2464u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A245Cu, 0x2A2464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2464u;
label_2a2464:
    // 0x2a2464: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2468: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2468u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a246c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A246Cu;
    SET_GPR_U32(ctx, 31, 0x2A2474u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A246Cu, 0x2A2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2474u;
label_2a2474:
    // 0x2a2474: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a2474u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2478: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a247c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A247Cu;
    SET_GPR_U32(ctx, 31, 0x2A2484u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A247Cu, 0x2A2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2484u;
label_2a2484:
    // 0x2a2484: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2488: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x2a2488u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2a248c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2a248cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a2490: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2a2490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2a2494: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2A2494u;
    {
        const bool branch_taken_0x2a2494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2494) {
            ctx->pc = 0x2A275Cu;
            return;
        }
    }
    ctx->pc = 0x2A249Cu;
    // 0x2a249c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a249cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a24a0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a24a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a24a4: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x2A24A4u;
    SET_GPR_U32(ctx, 31, 0x2A24ACu);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x2A24A4u, 0x2A24ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24ACu;
label_2a24ac:
    // 0x2a24ac: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2a24acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a24b0: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x2a24b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2a24b4: 0x14e000a9  bnez        $a3, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2A24B4u;
    {
        const bool branch_taken_0x2a24b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a24b4) {
            ctx->pc = 0x2A275Cu;
            return;
        }
    }
    ctx->pc = 0x2A24BCu;
    // 0x2a24bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2a24c0: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x2a24c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2a24c4: 0x146000a5  bnez        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2A24C4u;
    {
        const bool branch_taken_0x2a24c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a24c4) {
            ctx->pc = 0x2A275Cu;
            return;
        }
    }
    ctx->pc = 0x2A24CCu;
    // 0x2a24cc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a24d0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2a24d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a24d4: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x2a24d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x2a24d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a24d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a24dc: 0x0  nop
    ctx->pc = 0x2a24dcu;
    // NOP
    // 0x2a24e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a24e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a24e4: 0x0  nop
    ctx->pc = 0x2a24e4u;
    // NOP
    // 0x2a24e8: 0x4500009c  bc1f        . + 4 + (0x9C << 2)
    ctx->pc = 0x2A24E8u;
    {
        const bool branch_taken_0x2a24e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a24e8) {
            ctx->pc = 0x2A275Cu;
            return;
        }
    }
    ctx->pc = 0x2A24F0u;
    // 0x2a24f0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a24f4: 0x2465dbc0  addiu       $a1, $v1, -0x2440
    ctx->pc = 0x2a24f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2a24f8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a24fc: 0xc05cd90  jal         func_173640
    ctx->pc = 0x2A24FCu;
    SET_GPR_U32(ctx, 31, 0x2A2504u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x2A24FCu, 0x2A2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2504u;
label_2a2504:
    // 0x2a2504: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a2504u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2508: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x2A2508u;
    {
        const bool branch_taken_0x2a2508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2508) {
            ctx->pc = 0x2A275Cu;
            return;
        }
    }
    ctx->pc = 0x2A2510u;
    // 0x2a2510: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2514: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a2514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2518: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x2a2518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x2a251c: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x2a251cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x2a2520: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a2520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2524: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a2528: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2a2528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a252c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a252cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a2530: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a2530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a2534: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2A2534u;
    SET_GPR_U32(ctx, 31, 0x2A253Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2A2534u, 0x2A253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A253Cu;
label_2a253c:
    // 0x2a253c: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2A253Cu;
    {
        const bool branch_taken_0x2a253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a253c) {
            ctx->pc = 0x2A275Cu;
            return;
        }
    }
    ctx->pc = 0x2A2544u;
    // 0x2a2544: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2a2544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2a2548: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2a2548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2a254c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2A254Cu;
    SET_GPR_U32(ctx, 31, 0x2A2554u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2A254Cu, 0x2A2554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2554u;
label_2a2554:
    // 0x2a2554: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x2a2554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x2a2558: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x2a2558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x2a255c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2A255Cu;
    SET_GPR_U32(ctx, 31, 0x2A2564u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2A255Cu, 0x2A2564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2564u;
label_2a2564:
    // 0x2a2564: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2568: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x2a2568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2a256c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2570: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a2570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a2574: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2a2574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2a2578: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x2a2578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x2a257c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2580: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2a2580u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2588: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a2588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a258c: 0xa022edae  sb          $v0, -0x1252($at)
    ctx->pc = 0x2a258cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAEu, _value); } while (0);
    // 0x2a2590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2594: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a2594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a2598: 0xa022edaf  sb          $v0, -0x1251($at)
    ctx->pc = 0x2a2598u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAFu, _value); } while (0);
    // 0x2a259c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a259cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25a0: 0xa420edb4  sh          $zero, -0x124C($at)
    ctx->pc = 0x2a25a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB4u, _value); } while (0);
    // 0x2a25a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25a8: 0xa420edb2  sh          $zero, -0x124E($at)
    ctx->pc = 0x2a25a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB2u, _value); } while (0);
    // 0x2a25ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a25acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a25b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25b4: 0xa422edb6  sh          $v0, -0x124A($at)
    ctx->pc = 0x2a25b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB6u, _value); } while (0);
    // 0x2a25b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25bc: 0xa020edb0  sb          $zero, -0x1250($at)
    ctx->pc = 0x2a25bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDB0u, _value); } while (0);
    // 0x2a25c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a25c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25c8: 0xac22edd0  sw          $v0, -0x1230($at)
    ctx->pc = 0x2a25c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEDD0u, _value); } while (0);
    // 0x2a25cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a25d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25d4: 0xa022ec68  sb          $v0, -0x1398($at)
    ctx->pc = 0x2a25d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    // 0x2a25d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a25dc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a25e0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a25e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a25e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a25e8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a25e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a25ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a25ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a25f0: 0x24060823  addiu       $a2, $zero, 0x823
    ctx->pc = 0x2a25f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2083));
    // 0x2a25f4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2a25f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a25f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a25fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A25FCu;
    SET_GPR_U32(ctx, 31, 0x2A2604u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A25FCu, 0x2A2604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2604u;
label_2a2604:
    // 0x2a2604: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2608: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a260c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2a260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2a2610: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a2610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a2614: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a2614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2618: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a261c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2620: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2624: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2628: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2628u;
    SET_GPR_U32(ctx, 31, 0x2A2630u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2628u, 0x2A2630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2630u;
label_2a2630:
    // 0x2a2630: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a2630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a2634: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2638: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a2638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a263c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2640: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2640u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2644: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2644u;
    SET_GPR_U32(ctx, 31, 0x2A264Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2644u, 0x2A264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A264Cu;
label_2a264c:
    // 0x2a264c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2650: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a2650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a2654: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2658: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a265c: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x2a265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x2a2660: 0xc096c60  jal         func_25B180
    ctx->pc = 0x2A2660u;
    SET_GPR_U32(ctx, 31, 0x2A2668u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x2A2660u, 0x2A2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2668u;
label_2a2668:
    // 0x2a2668: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x2a2668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x2a266c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a2670: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2A2670u;
    SET_GPR_U32(ctx, 31, 0x2A2678u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2A2678u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A2678u) { return; }
    ctx->pc = 0x2A2678u;
label_2a2678:
    // 0x2a2678: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a267c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2680: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x2a2680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x2a2684: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2a2684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a2688: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2A2688u;
    SET_GPR_U32(ctx, 31, 0x2A2690u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2A2690u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A2690u) { return; }
    ctx->pc = 0x2A2690u;
label_2a2690:
    // 0x2a2690: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a2690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a2694: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A2694u;
    SET_GPR_U32(ctx, 31, 0x2A269Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A2694u, 0x2A269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A269Cu;
label_2a269c:
    // 0x2a269c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a26a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a26a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a26a4: 0x0  nop
    ctx->pc = 0x2a26a4u;
    // NOP
    // 0x2a26a8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a26a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a26ac: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2a26acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2a26b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a26b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a26b4: 0x0  nop
    ctx->pc = 0x2a26b4u;
    // NOP
    // 0x2a26b8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a26b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a26bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a26c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a26c4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a26c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a26c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a26cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a26ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a26d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a26d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a26d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a26d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a26d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a26d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a26dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a26dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a26e0: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a26e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a26e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a26e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a26e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a26ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A26ECu;
    SET_GPR_U32(ctx, 31, 0x2A26F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A26ECu, 0x2A26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26F4u;
label_2a26f4:
    // 0x2a26f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a26f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a26f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A26F8u;
    SET_GPR_U32(ctx, 31, 0x2A2700u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A26F8u, 0x2A2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2700u;
label_2a2700:
    // 0x2a2700: 0x3c02c28c  lui         $v0, 0xC28C
    ctx->pc = 0x2a2700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
    // 0x2a2704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2708: 0x0  nop
    ctx->pc = 0x2a2708u;
    // NOP
    // 0x2a270c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a2710: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2714: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a2718: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a2718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a271c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a271cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2720: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a2720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a2724: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a2724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a2728: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a2728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a272c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a2730: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a2730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2734: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a2734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a2738: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2738u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a273c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a273cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a2740: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A2740u;
    SET_GPR_U32(ctx, 31, 0x2A2748u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A2740u, 0x2A2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2748u;
label_2a2748:
    // 0x2a2748: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a2748u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a274c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A274Cu;
    SET_GPR_U32(ctx, 31, 0x2A2754u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A274Cu, 0x2A2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2754u;
label_2a2754:
    // 0x2a2754: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x2A2754u;
    {
        const bool branch_taken_0x2a2754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2754) {
            ctx->pc = 0x2A2B84u;
            return;
        }
    }
    ctx->pc = 0x2A275Cu;
}
