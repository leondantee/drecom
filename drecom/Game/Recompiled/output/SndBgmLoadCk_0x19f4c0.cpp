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

// Function: SndBgmLoadCk
// Address: 0x19f4c0 - 0x19f670
void SndBgmLoadCk_0x19f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndBgmLoadCk_0x19f4c0");
#endif

    switch (ctx->pc) {
        case 0x19f550u: goto label_19f550;
        case 0x19f598u: goto label_19f598;
        case 0x19f5dcu: goto label_19f5dc;
        case 0x19f64cu: goto label_19f64c;
        default: break;
    }

    ctx->pc = 0x19f4c0u;

    // 0x19f4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f4c4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x19f4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x19f4c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19f4cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f4d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f4d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f4d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19f4d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f4dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f4e0: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x19f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0068u));
    // 0x19f4e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f4e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19f4ec: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x19f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x19f4f0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f4f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f4f8: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x19f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x19f4fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f500: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f508: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f50c: 0x30527f7f  andi        $s2, $v0, 0x7F7F
    ctx->pc = 0x19f50cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32639);
    // 0x19f510: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f514: 0x8c220074  lw          $v0, 0x74($at)
    ctx->pc = 0x19f514u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0074u));
    // 0x19f518: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19f518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f51c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19f520: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x19f520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x19f524: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f528: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f52c: 0x8c220078  lw          $v0, 0x78($at)
    ctx->pc = 0x19f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0078u));
    // 0x19f530: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f534: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f53c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f540: 0x30537f7f  andi        $s3, $v0, 0x7F7F
    ctx->pc = 0x19f540u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32639);
    // 0x19f544: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x19f544u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f548: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19F548u;
    {
        const bool branch_taken_0x19f548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f548) {
            ctx->pc = 0x19F5C0u;
            goto label_19f5c0;
        }
    }
    ctx->pc = 0x19F550u;
label_19f550:
    // 0x19f550: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f554: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f558: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19f55c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19f55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f560: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f564: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19F564u;
    {
        const bool branch_taken_0x19f564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f564) {
            ctx->pc = 0x19F598u;
            goto label_19f598;
        }
    }
    ctx->pc = 0x19F56Cu;
    // 0x19f56c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x19f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19f570: 0x521006  srlv        $v0, $s2, $v0
    ctx->pc = 0x19f570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x19f574: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19f574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f578: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x19f578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19f57c: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x19f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x19f580: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f584: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F584u;
    {
        const bool branch_taken_0x19f584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f584) {
            ctx->pc = 0x19F598u;
            goto label_19f598;
        }
    }
    ctx->pc = 0x19F58Cu;
    // 0x19f58c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19f58cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19f590: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x19F590u;
    SET_GPR_U32(ctx, 31, 0x19F598u);
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x19F590u, 0x19F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F598u;
label_19f598:
    // 0x19f598: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f59c: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f5a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19f5a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19f5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f5a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19f5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f5ac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x19f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19f5b0: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x19f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x19f5b4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x19f5b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x19f5b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19f5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19f5bc: 0x0  nop
    ctx->pc = 0x19f5bcu;
    // NOP
label_19f5c0:
    // 0x19f5c0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x19f5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f5c4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x19F5C4u;
    {
        const bool branch_taken_0x19f5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f5c4) {
            ctx->pc = 0x19F550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f550;
        }
    }
    ctx->pc = 0x19F5CCu;
    // 0x19f5cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f5d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f5d4: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19F5D4u;
    SET_GPR_U32(ctx, 31, 0x19F5DCu);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19F5D4u, 0x19F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5DCu;
label_19f5dc:
    // 0x19f5dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19F5DCu;
    {
        const bool branch_taken_0x19f5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5dc) {
            ctx->pc = 0x19F640u;
            goto label_19f640;
        }
    }
    ctx->pc = 0x19F5E4u;
    // 0x19f5e4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f5e8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f5ec: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19f5f0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19f5f4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x19f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x19f5f8: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19f5fc: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19f600: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19f600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19f604: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x19f604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19f608: 0x0  nop
    ctx->pc = 0x19f608u;
    // NOP
    // 0x19f60c: 0x1010  mfhi        $v0
    ctx->pc = 0x19f60cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19f610: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19f614: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x19f614u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x19f618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f61c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x19f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19f620: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f624: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f628: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x19f628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x19f62c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f630: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19f634: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x19f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x19f638: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19f638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19f63c: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x19f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_19f640:
    // 0x19f640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f644: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x19F644u;
    SET_GPR_U32(ctx, 31, 0x19F64Cu);
    ctx->pc = 0x33A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A090u, 0x19F644u, 0x19F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F64Cu;
label_19f64c:
    // 0x19f64c: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x19f64cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19f650: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x19f650u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f65c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f664: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19f664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19f668: 0x3e00008  jr          $ra
    ctx->pc = 0x19F668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F670u;
}
