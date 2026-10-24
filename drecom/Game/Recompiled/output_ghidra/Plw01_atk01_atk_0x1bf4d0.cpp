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

// Function: Plw01_atk01_atk
// Address: 0x1bf4d0 - 0x1bf750
void Plw01_atk01_atk_0x1bf4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk01_atk_0x1bf4d0");
#endif

    switch (ctx->pc) {
        case 0x1bf558u: goto label_1bf558;
        case 0x1bf570u: goto label_1bf570;
        case 0x1bf59cu: goto label_1bf59c;
        case 0x1bf5b4u: goto label_1bf5b4;
        case 0x1bf60cu: goto label_1bf60c;
        case 0x1bf618u: goto label_1bf618;
        case 0x1bf62cu: goto label_1bf62c;
        case 0x1bf638u: goto label_1bf638;
        case 0x1bf6b0u: goto label_1bf6b0;
        default: break;
    }

    ctx->pc = 0x1bf4d0u;

    // 0x1bf4d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bf4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bf4d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1bf4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1bf4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf4e0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bf4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bf4e4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bf4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bf4e8: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bf4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bf4ec: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1bf4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1bf4f0: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1bf4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1bf4f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf4f8: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1bf4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1bf4fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf500: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bf500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf504: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bf504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bf508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf50c: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BF50Cu;
    {
        const bool branch_taken_0x1bf50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf50c) {
            ctx->pc = 0x1BF5D0u;
            goto label_1bf5d0;
        }
    }
    ctx->pc = 0x1BF514u;
    // 0x1bf514: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF514u;
    {
        const bool branch_taken_0x1bf514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf514) {
            ctx->pc = 0x1BF524u;
            goto label_1bf524;
        }
    }
    ctx->pc = 0x1BF51Cu;
    // 0x1bf51c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1BF51Cu;
    {
        const bool branch_taken_0x1bf51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf51c) {
            ctx->pc = 0x1BF738u;
            goto label_1bf738;
        }
    }
    ctx->pc = 0x1BF524u;
label_1bf524:
    // 0x1bf524: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf528: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1bf528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1bf52c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BF52Cu;
    {
        const bool branch_taken_0x1bf52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf52c) {
            ctx->pc = 0x1BF578u;
            goto label_1bf578;
        }
    }
    ctx->pc = 0x1BF534u;
    // 0x1bf534: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x1bf534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1bf538: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf53c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf540: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf544: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1bf544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1bf548: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf54c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf550: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF550u;
    SET_GPR_U32(ctx, 31, 0x1BF558u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF550u, 0x1BF558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF558u;
label_1bf558:
    // 0x1bf558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf55c: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bf55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf560: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1bf560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1bf564: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1bf564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bf568: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BF568u;
    SET_GPR_U32(ctx, 31, 0x1BF570u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BF568u, 0x1BF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF570u;
label_1bf570:
    // 0x1bf570: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BF570u;
    {
        const bool branch_taken_0x1bf570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf570) {
            ctx->pc = 0x1BF5B4u;
            goto label_1bf5b4;
        }
    }
    ctx->pc = 0x1BF578u;
label_1bf578:
    // 0x1bf578: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1bf578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf57c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf580: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf584: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf588: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bf588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf58c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf590: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf594: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF594u;
    SET_GPR_U32(ctx, 31, 0x1BF59Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF594u, 0x1BF59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF59Cu;
label_1bf59c:
    // 0x1bf59c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf5a0: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bf5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf5a4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1bf5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1bf5a8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1bf5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bf5ac: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BF5ACu;
    SET_GPR_U32(ctx, 31, 0x1BF5B4u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BF5ACu, 0x1BF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5B4u;
label_1bf5b4:
    // 0x1bf5b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bf5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bf5b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf5bc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1bf5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bf5c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf5c4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf5c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf5c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf5cc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bf5d0:
    // 0x1bf5d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf5d4: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1bf5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1bf5d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bf5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bf5dc: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1bf5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1bf5e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF5E0u;
    {
        const bool branch_taken_0x1bf5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf5e0) {
            ctx->pc = 0x1BF5FCu;
            goto label_1bf5fc;
        }
    }
    ctx->pc = 0x1BF5E8u;
    // 0x1bf5e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bf5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bf5ec: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1bf5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bf5f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bf5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bf5f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bf5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bf5f8: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bf5f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1bf5fc:
    // 0x1bf5fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf604: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BF604u;
    SET_GPR_U32(ctx, 31, 0x1BF60Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BF604u, 0x1BF60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF60Cu;
label_1bf60c:
    // 0x1bf60c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf610: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BF610u;
    SET_GPR_U32(ctx, 31, 0x1BF618u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BF610u, 0x1BF618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF618u;
label_1bf618:
    // 0x1bf618: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bf618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf61c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf620: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf620u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf624: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BF624u;
    SET_GPR_U32(ctx, 31, 0x1BF62Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BF624u, 0x1BF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF62Cu;
label_1bf62c:
    // 0x1bf62c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf630: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BF630u;
    SET_GPR_U32(ctx, 31, 0x1BF638u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BF630u, 0x1BF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF638u;
label_1bf638:
    // 0x1bf638: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf63c: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1bf63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1bf640: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bf640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bf644: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bf644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bf648: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BF648u;
    {
        const bool branch_taken_0x1bf648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf648) {
            ctx->pc = 0x1BF6B8u;
            goto label_1bf6b8;
        }
    }
    ctx->pc = 0x1BF650u;
    // 0x1bf650: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1bf650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bf654: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1bf654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1bf658: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BF658u;
    {
        const bool branch_taken_0x1bf658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf658) {
            ctx->pc = 0x1BF6B8u;
            goto label_1bf6b8;
        }
    }
    ctx->pc = 0x1BF660u;
    // 0x1bf660: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf664: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf668: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bf668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bf66c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf670: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BF670u;
    {
        const bool branch_taken_0x1bf670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf670) {
            ctx->pc = 0x1BF6B8u;
            goto label_1bf6b8;
        }
    }
    ctx->pc = 0x1BF678u;
    // 0x1bf678: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf67c: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1bf67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1bf680: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF680u;
    {
        const bool branch_taken_0x1bf680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf680) {
            ctx->pc = 0x1BF698u;
            goto label_1bf698;
        }
    }
    ctx->pc = 0x1BF688u;
    // 0x1bf688: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf68c: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1bf68cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF690u;
    {
        const bool branch_taken_0x1bf690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf690) {
            ctx->pc = 0x1BF6A4u;
            goto label_1bf6a4;
        }
    }
    ctx->pc = 0x1BF698u;
label_1bf698:
    // 0x1bf698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf69c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6a0: 0xa04313f9  sb          $v1, 0x13F9($v0)
    ctx->pc = 0x1bf6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 3));
label_1bf6a4:
    // 0x1bf6a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6a8: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x1BF6A8u;
    SET_GPR_U32(ctx, 31, 0x1BF6B0u);
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x1BF6A8u, 0x1BF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6B0u;
label_1bf6b0:
    // 0x1bf6b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BF6B0u;
    {
        const bool branch_taken_0x1bf6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6b0) {
            ctx->pc = 0x1BF738u;
            goto label_1bf738;
        }
    }
    ctx->pc = 0x1BF6B8u;
label_1bf6b8:
    // 0x1bf6b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6bc: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1bf6bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1bf6c0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BF6C0u;
    {
        const bool branch_taken_0x1bf6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6c0) {
            ctx->pc = 0x1BF738u;
            goto label_1bf738;
        }
    }
    ctx->pc = 0x1BF6C8u;
    // 0x1bf6c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6cc: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1bf6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1bf6d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF6D0u;
    {
        const bool branch_taken_0x1bf6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6d0) {
            ctx->pc = 0x1BF6E8u;
            goto label_1bf6e8;
        }
    }
    ctx->pc = 0x1BF6D8u;
    // 0x1bf6d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6dc: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1bf6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf6e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF6E0u;
    {
        const bool branch_taken_0x1bf6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6e0) {
            ctx->pc = 0x1BF6F4u;
            goto label_1bf6f4;
        }
    }
    ctx->pc = 0x1BF6E8u;
label_1bf6e8:
    // 0x1bf6e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf6ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6f0: 0xa06413f9  sb          $a0, 0x13F9($v1)
    ctx->pc = 0x1bf6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 4));
label_1bf6f4:
    // 0x1bf6f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf6f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6fc: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf704: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1bf704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1bf708: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bf708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bf70c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF70Cu;
    {
        const bool branch_taken_0x1bf70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf70c) {
            ctx->pc = 0x1BF724u;
            goto label_1bf724;
        }
    }
    ctx->pc = 0x1BF714u;
    // 0x1bf714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf718: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bf718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf71c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF71Cu;
    {
        const bool branch_taken_0x1bf71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf71c) {
            ctx->pc = 0x1BF730u;
            goto label_1bf730;
        }
    }
    ctx->pc = 0x1BF724u;
label_1bf724:
    // 0x1bf724: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf728: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf72c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bf730:
    // 0x1bf730: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1BF730u;
    {
        const bool branch_taken_0x1bf730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf730) {
            ctx->pc = 0x1BF738u;
            goto label_1bf738;
        }
    }
    ctx->pc = 0x1BF738u;
label_1bf738:
    // 0x1bf738: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1bf738u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf73c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf744: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bf744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bf748: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF750u;
}
