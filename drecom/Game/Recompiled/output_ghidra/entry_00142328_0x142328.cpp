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

// Function: entry_00142328
// Address: 0x142328 - 0x14236c
void entry_00142328_0x142328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142328_0x142328");
#endif

    switch (ctx->pc) {
        case 0x142344u: goto label_142344;
        case 0x142364u: goto label_142364;
        default: break;
    }

    ctx->pc = 0x142328u;

    // 0x142328: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x14232c: 0x9022cc95  lbu         $v0, -0x336B($at)
    ctx->pc = 0x14232cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x47CC95u));
    // 0x142330: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x142330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x142334: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x142334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x142338: 0x2444cc60  addiu       $a0, $v0, -0x33A0
    ctx->pc = 0x142338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x14233c: 0xc05d4a0  jal         func_175280
    ctx->pc = 0x14233Cu;
    SET_GPR_U32(ctx, 31, 0x142344u);
    ctx->pc = 0x175280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175280u, 0x14233Cu, 0x142344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142344u;
label_142344:
    // 0x142344: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142348: 0xdc23cc80  ld          $v1, -0x3380($at)
    ctx->pc = 0x142348u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47CC80u));
    // 0x14234c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142350: 0x8c220b94  lw          $v0, 0xB94($at)
    ctx->pc = 0x142350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0B94u));
    // 0x142354: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x142354u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x142358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14235c: 0xc06750c  jal         func_19D430
    ctx->pc = 0x14235Cu;
    SET_GPR_U32(ctx, 31, 0x142364u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x14235Cu, 0x142364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142364u;
label_142364:
    // 0x142364: 0x1000ff20  b           . + 4 + (-0xE0 << 2)
    ctx->pc = 0x142364u;
    {
        const bool branch_taken_0x142364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142364) {
            ctx->pc = 0x141FE8u;
            return;
        }
    }
    ctx->pc = 0x14236Cu;
}
