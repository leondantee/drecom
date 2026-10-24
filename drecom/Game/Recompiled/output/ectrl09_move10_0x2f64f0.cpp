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

// Function: ectrl09_move10
// Address: 0x2f64f0 - 0x2f67ac
void ectrl09_move10_0x2f64f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl09_move10_0x2f64f0");
#endif

    switch (ctx->pc) {
        case 0x2f6568u: goto label_2f6568;
        case 0x2f6614u: goto label_2f6614;
        case 0x2f662cu: goto label_2f662c;
        case 0x2f6654u: goto label_2f6654;
        case 0x2f6670u: goto label_2f6670;
        case 0x2f668cu: goto label_2f668c;
        case 0x2f66dcu: goto label_2f66dc;
        case 0x2f66f4u: goto label_2f66f4;
        case 0x2f677cu: goto label_2f677c;
        case 0x2f6790u: goto label_2f6790;
        default: break;
    }

    ctx->pc = 0x2f64f0u;

    // 0x2f64f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f64f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f64f4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2f64f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2f64f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f64f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f64fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f64fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f6500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6504: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2f6504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2f6508: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f6508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f650c: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f650cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f6510: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f6510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f6514: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f6514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6518: 0xa423f1ac  sh          $v1, -0xE54($at)
    ctx->pc = 0x2f6518u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF1ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EF1ACu, _value); } while (0);
    // 0x2f651c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f6520: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f6520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f6524: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2f6524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2f6528: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F6528u;
    {
        const bool branch_taken_0x2f6528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6528) {
            ctx->pc = 0x2F6568u;
            goto label_2f6568;
        }
    }
    ctx->pc = 0x2F6530u;
    // 0x2f6530: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f6530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6534: 0x8422f1ac  lh          $v0, -0xE54($at)
    ctx->pc = 0x2f6534u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f6538: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2f6538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2f653c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2f653cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2f6540: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2f6540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f6544: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x2f6544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f6548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f654c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2f654cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2f6550: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2f6550u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2f6554: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f6554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f6558: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f6558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f655c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f655cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6560: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2F6560u;
    SET_GPR_U32(ctx, 31, 0x2F6568u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2F6560u, 0x2F6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6568u;
label_2f6568:
    // 0x2f6568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f656c: 0x94630100  lhu         $v1, 0x100($v1)
    ctx->pc = 0x2f656cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f6570: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2f6570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f6574: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2f6574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f6578: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x2f6578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x2f657c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2f657cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2f6580: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2f6580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f6584: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2f6584u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2f6588: 0x0  nop
    ctx->pc = 0x2f6588u;
    // NOP
    // 0x2f658c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f658cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f6590: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f6590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f6594: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2f6594u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f6598: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2f6598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f659c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f659cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f65a0: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f65a0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f65a4: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2f65a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2f65a8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2f65a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2f65ac: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2f65acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f65b0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x2f65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x2f65b4: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2f65b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2f65b8: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2f65b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f65bc: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2f65bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2f65c0: 0x0  nop
    ctx->pc = 0x2f65c0u;
    // NOP
    // 0x2f65c4: 0x1810  mfhi        $v1
    ctx->pc = 0x2f65c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f65c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f65c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f65cc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2f65ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f65d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f65d4: 0xc38823  subu        $s1, $a2, $v1
    ctx->pc = 0x2f65d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f65d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f65d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f65dc: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f65dcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f65e0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2f65e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2f65e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2f65e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2f65e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f65ec: 0x94630100  lhu         $v1, 0x100($v1)
    ctx->pc = 0x2f65ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f65f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f65f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f65f4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2f65f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f65f8: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x2F65F8u;
    {
        const bool branch_taken_0x2f65f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f65f8) {
            ctx->pc = 0x2F6720u;
            goto label_2f6720;
        }
    }
    ctx->pc = 0x2F6600u;
    // 0x2f6600: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F6600u;
    {
        const bool branch_taken_0x2f6600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6600) {
            ctx->pc = 0x2F6720u;
            goto label_2f6720;
        }
    }
    ctx->pc = 0x2F6608u;
    // 0x2f6608: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f6608u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f660c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2F660Cu;
    {
        const bool branch_taken_0x2f660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f660c) {
            ctx->pc = 0x2F6710u;
            goto label_2f6710;
        }
    }
    ctx->pc = 0x2F6614u;
label_2f6614:
    // 0x2f6614: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2f6614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f6618: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2f6618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f661c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2f661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f6620: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2f6620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6624: 0xc06553c  jal         func_1954F0
    ctx->pc = 0x2F6624u;
    SET_GPR_U32(ctx, 31, 0x2F662Cu);
    ctx->pc = 0x1954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954F0u, 0x2F6624u, 0x2F662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F662Cu;
label_2f662c:
    // 0x2f662c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f662cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6630: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f6630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f6634: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f6634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f6638: 0x12030030  beq         $s0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2F6638u;
    {
        const bool branch_taken_0x2f6638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6638) {
            ctx->pc = 0x2F66FCu;
            goto label_2f66fc;
        }
    }
    ctx->pc = 0x2F6640u;
    // 0x2f6640: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x2f6640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x2f6644: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x2f6644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x2f6648: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x2f6648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x2f664c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F664Cu;
    SET_GPR_U32(ctx, 31, 0x2F6654u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F664Cu, 0x2F6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6654u;
label_2f6654:
    // 0x2f6654: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f6654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f665c: 0x0  nop
    ctx->pc = 0x2f665cu;
    // NOP
    // 0x2f6660: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6664: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f6664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f6668: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6668u;
    SET_GPR_U32(ctx, 31, 0x2F6670u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6668u, 0x2F6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6670u;
label_2f6670:
    // 0x2f6670: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f6670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6678: 0x0  nop
    ctx->pc = 0x2f6678u;
    // NOP
    // 0x2f667c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f667cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6680: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f6680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f6684: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6684u;
    SET_GPR_U32(ctx, 31, 0x2F668Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6684u, 0x2F668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F668Cu;
label_2f668c:
    // 0x2f668c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6694: 0x0  nop
    ctx->pc = 0x2f6694u;
    // NOP
    // 0x2f6698: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f669c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f66a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f66a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f66a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f66a8: 0x0  nop
    ctx->pc = 0x2f66a8u;
    // NOP
    // 0x2f66ac: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x2f66acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2f66b0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f66b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f66b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f66b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f66b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f66bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f66bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f66c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f66c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f66c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f66c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f66c8: 0x260700b0  addiu       $a3, $s0, 0xB0
    ctx->pc = 0x2f66c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2f66cc: 0x26080050  addiu       $t0, $s0, 0x50
    ctx->pc = 0x2f66ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2f66d0: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x2f66d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2f66d4: 0xc0c474c  jal         func_311D30
    ctx->pc = 0x2F66D4u;
    SET_GPR_U32(ctx, 31, 0x2F66DCu);
    ctx->pc = 0x311D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311D30u, 0x2F66D4u, 0x2F66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66DCu;
label_2f66dc:
    // 0x2f66dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f66e0: 0x12230009  beq         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F66E0u;
    {
        const bool branch_taken_0x2f66e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f66e0) {
            ctx->pc = 0x2F6708u;
            goto label_2f6708;
        }
    }
    ctx->pc = 0x2F66E8u;
    // 0x2f66e8: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2f66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2f66ec: 0xc0c4948  jal         func_312520
    ctx->pc = 0x2F66ECu;
    SET_GPR_U32(ctx, 31, 0x2F66F4u);
    ctx->pc = 0x312520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312520u, 0x2F66ECu, 0x2F66F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66F4u;
label_2f66f4:
    // 0x2f66f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F66F4u;
    {
        const bool branch_taken_0x2f66f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f66f4) {
            ctx->pc = 0x2F6708u;
            goto label_2f6708;
        }
    }
    ctx->pc = 0x2F66FCu;
label_2f66fc:
    // 0x2f66fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f66fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6700: 0xa420f1ac  sh          $zero, -0xE54($at)
    ctx->pc = 0x2f6700u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF1ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EF1ACu, _value); } while (0);
    // 0x2f6704: 0x0  nop
    ctx->pc = 0x2f6704u;
    // NOP
label_2f6708:
    // 0x2f6708: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f6708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f670c: 0x0  nop
    ctx->pc = 0x2f670cu;
    // NOP
label_2f6710:
    // 0x2f6710: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x2f6710u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f6714: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2F6714u;
    {
        const bool branch_taken_0x2f6714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6714) {
            ctx->pc = 0x2F6614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6614;
        }
    }
    ctx->pc = 0x2F671Cu;
    // 0x2f671c: 0x0  nop
    ctx->pc = 0x2f671cu;
    // NOP
label_2f6720:
    // 0x2f6720: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f6720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6724: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f6724u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f6728: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f6728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f672c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f672cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f6730: 0xa4640100  sh          $a0, 0x100($v1)
    ctx->pc = 0x2f6730u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 4));
    // 0x2f6734: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f6734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6738: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f6738u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f673c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2f673cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2f6740: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2f6740u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2f6744: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F6744u;
    {
        const bool branch_taken_0x2f6744 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2f6744) {
            ctx->pc = 0x2F6790u;
            goto label_2f6790;
        }
    }
    ctx->pc = 0x2F674Cu;
    // 0x2f674c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6750: 0xa420f1ac  sh          $zero, -0xE54($at)
    ctx->pc = 0x2f6750u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF1ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EF1ACu, _value); } while (0);
    // 0x2f6754: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f6754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f6758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f6758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f675c: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x2f675cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x2f6760: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f6760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f6764: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f6764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f6768: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2f6768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f676c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6770: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2f6770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6774: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2F6774u;
    SET_GPR_U32(ctx, 31, 0x2F677Cu);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2F6774u, 0x2F677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F677Cu;
label_2f677c:
    // 0x2f677c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2f677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f6780: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2f6780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f6784: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2f6784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6788: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2F6788u;
    SET_GPR_U32(ctx, 31, 0x2F6790u);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2F6788u, 0x2F6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6790u;
label_2f6790:
    // 0x2f6790: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2f6790u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f6798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f679c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f679cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f67a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2f67a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f67a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F67A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F67A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F67ACu;
}
