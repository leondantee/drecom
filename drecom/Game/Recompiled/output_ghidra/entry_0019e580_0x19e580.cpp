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

// Function: entry_0019e580
// Address: 0x19e580 - 0x19e65c
void entry_0019e580_0x19e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e580_0x19e580");
#endif

    switch (ctx->pc) {
        case 0x19e600u: goto label_19e600;
        case 0x19e654u: goto label_19e654;
        default: break;
    }

    ctx->pc = 0x19e580u;

    // 0x19e580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e584: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x19e584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x19e588: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x19e588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x19e58c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e590: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x19E590u;
    {
        const bool branch_taken_0x19e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e590) {
            ctx->pc = 0x19E8C0u;
            return;
        }
    }
    ctx->pc = 0x19E598u;
    // 0x19e598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e59c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x19e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19e5a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19e5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19e5a4: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x19E5A4u;
    {
        const bool branch_taken_0x19e5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e5a4) {
            ctx->pc = 0x19E8C0u;
            return;
        }
    }
    ctx->pc = 0x19E5ACu;
    // 0x19e5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e5b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x19e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19e5b4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x19e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x19e5b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e5bc: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x19E5BCu;
    {
        const bool branch_taken_0x19e5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5bc) {
            ctx->pc = 0x19E760u;
            return;
        }
    }
    ctx->pc = 0x19E5C4u;
    // 0x19e5c4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e5c8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e5cc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x19e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x19e5d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19e5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19e5d4: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x19E5D4u;
    {
        const bool branch_taken_0x19e5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e5d4) {
            ctx->pc = 0x19E760u;
            return;
        }
    }
    ctx->pc = 0x19E5DCu;
    // 0x19e5dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e5e0: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e5e4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x19e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x19e5e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19e5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19e5ec: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x19e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x19e5f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e5f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5f8: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19E5F8u;
    SET_GPR_U32(ctx, 31, 0x19E600u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19E5F8u, 0x19E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E600u;
label_19e600:
    // 0x19e600: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19E600u;
    {
        const bool branch_taken_0x19e600 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19e600) {
            ctx->pc = 0x19E65Cu;
            return;
        }
    }
    ctx->pc = 0x19E608u;
    // 0x19e608: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e60c: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x19e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0068u));
    // 0x19e610: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19e610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e614: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19e614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19e618: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x19e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x19e61c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e620: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e624: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x19e624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x19e628: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e62c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e630: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19e630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e634: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e638: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x19e638u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x19e63c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e640: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x19e640u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e644: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x19e644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x19e648: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x19e648u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e64c: 0xc067de8  jal         func_19F7A0
    ctx->pc = 0x19E64Cu;
    SET_GPR_U32(ctx, 31, 0x19E654u);
    ctx->pc = 0x19F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F7A0u, 0x19E64Cu, 0x19E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E654u;
label_19e654:
    // 0x19e654: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19E654u;
    {
        const bool branch_taken_0x19e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e654) {
            ctx->pc = 0x19E6CCu;
            return;
        }
    }
    ctx->pc = 0x19E65Cu;
}
