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

// Function: Plw01_atk03_atk
// Address: 0x1c0460 - 0x1c06d0
void Plw01_atk03_atk_0x1c0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk03_atk_0x1c0460");
#endif

    switch (ctx->pc) {
        case 0x1c04e0u: goto label_1c04e0;
        case 0x1c04f8u: goto label_1c04f8;
        case 0x1c0520u: goto label_1c0520;
        case 0x1c0538u: goto label_1c0538;
        case 0x1c0590u: goto label_1c0590;
        case 0x1c059cu: goto label_1c059c;
        case 0x1c05b0u: goto label_1c05b0;
        case 0x1c05bcu: goto label_1c05bc;
        case 0x1c0634u: goto label_1c0634;
        default: break;
    }

    ctx->pc = 0x1c0460u;

    // 0x1c0460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0464: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c0464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c0468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c046c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c046cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c0470: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c0470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c0474: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c0474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c0478: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c0478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c047c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c047cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c0480: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0484: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c0484u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c0488: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c048c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c048cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0490: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c0490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0498: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C0498u;
    {
        const bool branch_taken_0x1c0498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0498) {
            ctx->pc = 0x1C0554u;
            goto label_1c0554;
        }
    }
    ctx->pc = 0x1C04A0u;
    // 0x1c04a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C04A0u;
    {
        const bool branch_taken_0x1c04a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c04a0) {
            ctx->pc = 0x1C04B0u;
            goto label_1c04b0;
        }
    }
    ctx->pc = 0x1C04A8u;
    // 0x1c04a8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1C04A8u;
    {
        const bool branch_taken_0x1c04a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c04a8) {
            ctx->pc = 0x1C06BCu;
            goto label_1c06bc;
        }
    }
    ctx->pc = 0x1C04B0u;
label_1c04b0:
    // 0x1c04b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c04b4: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c04b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c04b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C04B8u;
    {
        const bool branch_taken_0x1c04b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c04b8) {
            ctx->pc = 0x1C0500u;
            goto label_1c0500;
        }
    }
    ctx->pc = 0x1C04C0u;
    // 0x1c04c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c04c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c04c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c04c8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c04c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c04cc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1c04ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c04d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c04d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c04d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c04d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c04d8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C04D8u;
    SET_GPR_U32(ctx, 31, 0x1C04E0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C04D8u, 0x1C04E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04E0u;
label_1c04e0:
    // 0x1c04e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c04e4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c04e8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1c04e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c04ec: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1c04ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c04f0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C04F0u;
    SET_GPR_U32(ctx, 31, 0x1C04F8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C04F0u, 0x1C04F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04F8u;
label_1c04f8:
    // 0x1c04f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C04F8u;
    {
        const bool branch_taken_0x1c04f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c04f8) {
            ctx->pc = 0x1C0538u;
            goto label_1c0538;
        }
    }
    ctx->pc = 0x1C0500u;
label_1c0500:
    // 0x1c0500: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0504: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0508: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c050c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1c050cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c0510: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0514: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0518: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0518u;
    SET_GPR_U32(ctx, 31, 0x1C0520u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0518u, 0x1C0520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0520u;
label_1c0520:
    // 0x1c0520: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0524: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c0524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0528: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1c0528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c052c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c0530: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C0530u;
    SET_GPR_U32(ctx, 31, 0x1C0538u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C0530u, 0x1C0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0538u;
label_1c0538:
    // 0x1c0538: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c0538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c053c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0540: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c0540u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c0544: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0548: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c054c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0550: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c0554:
    // 0x1c0554: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0558: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c0558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c055c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c055cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0560: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1c0560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1c0564: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0564u;
    {
        const bool branch_taken_0x1c0564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0564) {
            ctx->pc = 0x1C0580u;
            goto label_1c0580;
        }
    }
    ctx->pc = 0x1C056Cu;
    // 0x1c056c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c056cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c0570: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c0570u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c0574: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c0574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c0578: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c0578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c057c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c057cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c0580:
    // 0x1c0580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0588: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0588u;
    SET_GPR_U32(ctx, 31, 0x1C0590u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0588u, 0x1C0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0590u;
label_1c0590:
    // 0x1c0590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0594: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0594u;
    SET_GPR_U32(ctx, 31, 0x1C059Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0594u, 0x1C059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C059Cu;
label_1c059c:
    // 0x1c059c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c059cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c05a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c05a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c05a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c05a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c05a8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C05A8u;
    SET_GPR_U32(ctx, 31, 0x1C05B0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C05A8u, 0x1C05B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05B0u;
label_1c05b0:
    // 0x1c05b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c05b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c05b4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C05B4u;
    SET_GPR_U32(ctx, 31, 0x1C05BCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C05B4u, 0x1C05BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05BCu;
label_1c05bc:
    // 0x1c05bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c05bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c05c0: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c05c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c05c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c05c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c05c8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c05c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c05cc: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C05CCu;
    {
        const bool branch_taken_0x1c05cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c05cc) {
            ctx->pc = 0x1C063Cu;
            goto label_1c063c;
        }
    }
    ctx->pc = 0x1C05D4u;
    // 0x1c05d4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c05d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c05d8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c05d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c05dc: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C05DCu;
    {
        const bool branch_taken_0x1c05dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c05dc) {
            ctx->pc = 0x1C063Cu;
            goto label_1c063c;
        }
    }
    ctx->pc = 0x1C05E4u;
    // 0x1c05e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c05e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c05ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c05f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c05f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c05f4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C05F4u;
    {
        const bool branch_taken_0x1c05f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c05f4) {
            ctx->pc = 0x1C063Cu;
            goto label_1c063c;
        }
    }
    ctx->pc = 0x1C05FCu;
    // 0x1c05fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0600: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c0600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c0604: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0604u;
    {
        const bool branch_taken_0x1c0604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0604) {
            ctx->pc = 0x1C061Cu;
            goto label_1c061c;
        }
    }
    ctx->pc = 0x1C060Cu;
    // 0x1c060c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0610: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1c0610u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0614u;
    {
        const bool branch_taken_0x1c0614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0614) {
            ctx->pc = 0x1C0628u;
            goto label_1c0628;
        }
    }
    ctx->pc = 0x1C061Cu;
label_1c061c:
    // 0x1c061c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0624: 0xa04313f9  sb          $v1, 0x13F9($v0)
    ctx->pc = 0x1c0624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 3));
label_1c0628:
    // 0x1c0628: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c062c: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x1C062Cu;
    SET_GPR_U32(ctx, 31, 0x1C0634u);
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x1C062Cu, 0x1C0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0634u;
label_1c0634:
    // 0x1c0634: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C0634u;
    {
        const bool branch_taken_0x1c0634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0634) {
            ctx->pc = 0x1C06BCu;
            goto label_1c06bc;
        }
    }
    ctx->pc = 0x1C063Cu;
label_1c063c:
    // 0x1c063c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0640: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c0640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c0644: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C0644u;
    {
        const bool branch_taken_0x1c0644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0644) {
            ctx->pc = 0x1C06BCu;
            goto label_1c06bc;
        }
    }
    ctx->pc = 0x1C064Cu;
    // 0x1c064c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0650: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1c0650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1c0654: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0654u;
    {
        const bool branch_taken_0x1c0654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0654) {
            ctx->pc = 0x1C066Cu;
            goto label_1c066c;
        }
    }
    ctx->pc = 0x1C065Cu;
    // 0x1c065c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0660: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1c0660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0664: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0664u;
    {
        const bool branch_taken_0x1c0664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0664) {
            ctx->pc = 0x1C0678u;
            goto label_1c0678;
        }
    }
    ctx->pc = 0x1C066Cu;
label_1c066c:
    // 0x1c066c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c066cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0674: 0xa06413f9  sb          $a0, 0x13F9($v1)
    ctx->pc = 0x1c0674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 4));
label_1c0678:
    // 0x1c0678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c067c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0680: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0684: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0688: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c0688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c068c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c068cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0690: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0690u;
    {
        const bool branch_taken_0x1c0690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0690) {
            ctx->pc = 0x1C06A8u;
            goto label_1c06a8;
        }
    }
    ctx->pc = 0x1C0698u;
    // 0x1c0698: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c069c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c069cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c06a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C06A0u;
    {
        const bool branch_taken_0x1c06a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c06a0) {
            ctx->pc = 0x1C06B4u;
            goto label_1c06b4;
        }
    }
    ctx->pc = 0x1C06A8u;
label_1c06a8:
    // 0x1c06a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c06ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c06acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c06b0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c06b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c06b4:
    // 0x1c06b4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C06B4u;
    {
        const bool branch_taken_0x1c06b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c06b4) {
            ctx->pc = 0x1C06BCu;
            goto label_1c06bc;
        }
    }
    ctx->pc = 0x1C06BCu;
label_1c06bc:
    // 0x1c06bc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c06bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c06c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c06c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c06c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c06c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c06c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C06C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C06C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C06D0u;
}
