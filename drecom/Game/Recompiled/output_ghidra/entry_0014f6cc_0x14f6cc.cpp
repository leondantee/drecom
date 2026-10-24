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

// Function: entry_0014f6cc
// Address: 0x14f6cc - 0x14f718
void entry_0014f6cc_0x14f6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f6cc_0x14f6cc");
#endif

    switch (ctx->pc) {
        case 0x14f6d8u: goto label_14f6d8;
        case 0x14f6e4u: goto label_14f6e4;
        default: break;
    }

    ctx->pc = 0x14f6ccu;

    // 0x14f6cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14f6ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14f6d0: 0xc097a5c  jal         func_25E970
    ctx->pc = 0x14F6D0u;
    SET_GPR_U32(ctx, 31, 0x14F6D8u);
    ctx->pc = 0x25E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E970u, 0x14F6D0u, 0x14F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6D8u;
label_14f6d8:
    // 0x14f6d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14f6d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14f6dc: 0xc05c04c  jal         func_170130
    ctx->pc = 0x14F6DCu;
    SET_GPR_U32(ctx, 31, 0x14F6E4u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x14F6DCu, 0x14F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6E4u;
label_14f6e4:
    // 0x14f6e4: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f6e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
    // 0x14f6e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f6ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f6f0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14F6F0u;
    {
        const bool branch_taken_0x14f6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f6f0) {
            ctx->pc = 0x14F740u;
            return;
        }
    }
    ctx->pc = 0x14F6F8u;
    // 0x14f6f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f6fc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14F6FCu;
    {
        const bool branch_taken_0x14f6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f6fc) {
            ctx->pc = 0x14F72Cu;
            return;
        }
    }
    ctx->pc = 0x14F704u;
    // 0x14f704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f708: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F708u;
    {
        const bool branch_taken_0x14f708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f708) {
            ctx->pc = 0x14F718u;
            return;
        }
    }
    ctx->pc = 0x14F710u;
    // 0x14f710: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14F710u;
    {
        const bool branch_taken_0x14f710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f710) {
            ctx->pc = 0x14F74Cu;
            return;
        }
    }
    ctx->pc = 0x14F718u;
}
