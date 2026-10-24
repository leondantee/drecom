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

// Function: entry_00265718
// Address: 0x265718 - 0x265764
void entry_00265718_0x265718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265718_0x265718");
#endif

    switch (ctx->pc) {
        case 0x26575cu: goto label_26575c;
        default: break;
    }

    ctx->pc = 0x265718u;

    // 0x265718: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x265718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26571c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x265720: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x265720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x265724: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x265724u;
    {
        const bool branch_taken_0x265724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265724) {
            ctx->pc = 0x2657C0u;
            return;
        }
    }
    ctx->pc = 0x26572Cu;
    // 0x26572c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x265730: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x265730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x265734: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x265734u;
    {
        const bool branch_taken_0x265734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265734) {
            ctx->pc = 0x2657B0u;
            return;
        }
    }
    ctx->pc = 0x26573Cu;
    // 0x26573c: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x26573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265740: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x265740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x265744: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x265744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265748u;
    {
        const bool branch_taken_0x265748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265748) {
            ctx->pc = 0x265764u;
            return;
        }
    }
    ctx->pc = 0x265750u;
    // 0x265750: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265750u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265754: 0xc0d8554  jal         func_361550
    ctx->pc = 0x265754u;
    SET_GPR_U32(ctx, 31, 0x26575Cu);
    ctx->pc = 0x361550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361550u, 0x265754u, 0x26575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26575Cu;
label_26575c:
    // 0x26575c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26575Cu;
    {
        const bool branch_taken_0x26575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26575c) {
            ctx->pc = 0x2657C0u;
            return;
        }
    }
    ctx->pc = 0x265764u;
}
