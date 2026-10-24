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

// Function: entry_001a2958
// Address: 0x1a2958 - 0x1a29b0
void entry_001a2958_0x1a2958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2958_0x1a2958");
#endif

    switch (ctx->pc) {
        case 0x1a2990u: goto label_1a2990;
        case 0x1a29a8u: goto label_1a29a8;
        default: break;
    }

    ctx->pc = 0x1a2958u;

    // 0x1a2958: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x1a2958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1a295c: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x1a295cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1a2960: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1a2960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1a2964: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2968: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a296c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a296cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2970: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1a2970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a2974: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a297c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2980: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2984: 0x24650088  addiu       $a1, $v1, 0x88
    ctx->pc = 0x1a2984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x1a2988: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2988u;
    SET_GPR_U32(ctx, 31, 0x1A2990u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2988u, 0x1A2990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2990u;
label_1a2990:
    // 0x1a2990: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2994: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2998: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a299c: 0x246500b4  addiu       $a1, $v1, 0xB4
    ctx->pc = 0x1a299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1a29a0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A29A0u;
    SET_GPR_U32(ctx, 31, 0x1A29A8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A29A0u, 0x1A29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29A8u;
label_1a29a8:
    // 0x1a29a8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1A29A8u;
    {
        const bool branch_taken_0x1a29a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a29a8) {
            ctx->pc = 0x1A2A90u;
            return;
        }
    }
    ctx->pc = 0x1A29B0u;
}
