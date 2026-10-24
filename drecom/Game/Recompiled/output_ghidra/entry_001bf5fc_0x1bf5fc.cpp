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

// Function: entry_001bf5fc
// Address: 0x1bf5fc - 0x1bf698
void entry_001bf5fc_0x1bf5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf5fc_0x1bf5fc");
#endif

    switch (ctx->pc) {
        case 0x1bf60cu: goto label_1bf60c;
        case 0x1bf618u: goto label_1bf618;
        case 0x1bf62cu: goto label_1bf62c;
        case 0x1bf638u: goto label_1bf638;
        default: break;
    }

    ctx->pc = 0x1bf5fcu;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1BF698u;
}
