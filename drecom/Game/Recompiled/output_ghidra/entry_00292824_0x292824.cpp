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

// Function: entry_00292824
// Address: 0x292824 - 0x292904
void entry_00292824_0x292824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292824_0x292824");
#endif

    switch (ctx->pc) {
        case 0x292834u: goto label_292834;
        case 0x292840u: goto label_292840;
        case 0x29284cu: goto label_29284c;
        case 0x292868u: goto label_292868;
        case 0x292874u: goto label_292874;
        case 0x292880u: goto label_292880;
        case 0x292894u: goto label_292894;
        case 0x2928c4u: goto label_2928c4;
        case 0x2928ccu: goto label_2928cc;
        case 0x2928d4u: goto label_2928d4;
        case 0x2928dcu: goto label_2928dc;
        case 0x2928e4u: goto label_2928e4;
        default: break;
    }

    ctx->pc = 0x292824u;

    // 0x292824: 0x240400a2  addiu       $a0, $zero, 0xA2
    ctx->pc = 0x292824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x292828: 0x26050328  addiu       $a1, $s0, 0x328
    ctx->pc = 0x292828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 808));
    // 0x29282c: 0xc0a4a44  jal         func_292910
    ctx->pc = 0x29282Cu;
    SET_GPR_U32(ctx, 31, 0x292834u);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x29282Cu, 0x292834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292834u;
label_292834:
    // 0x292834: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x292834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x292838: 0xc0d7594  jal         func_35D650
    ctx->pc = 0x292838u;
    SET_GPR_U32(ctx, 31, 0x292840u);
    ctx->pc = 0x35D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D650u, 0x292838u, 0x292840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292840u;
label_292840:
    // 0x292840: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x292840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x292844: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x292844u;
    SET_GPR_U32(ctx, 31, 0x29284Cu);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x292844u, 0x29284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29284Cu;
label_29284c:
    // 0x29284c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x29284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x292850: 0x240400b9  addiu       $a0, $zero, 0xB9
    ctx->pc = 0x292850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x292854: 0x24061400  addiu       $a2, $zero, 0x1400
    ctx->pc = 0x292854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x292858: 0x2407008e  addiu       $a3, $zero, 0x8E
    ctx->pc = 0x292858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x29285c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x29285cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292860: 0xc05e858  jal         func_17A160
    ctx->pc = 0x292860u;
    SET_GPR_U32(ctx, 31, 0x292868u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x292860u, 0x292868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292868u;
label_292868:
    // 0x292868: 0x240400b9  addiu       $a0, $zero, 0xB9
    ctx->pc = 0x292868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x29286c: 0xc05e964  jal         func_17A590
    ctx->pc = 0x29286Cu;
    SET_GPR_U32(ctx, 31, 0x292874u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x29286Cu, 0x292874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292874u;
label_292874:
    // 0x292874: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x292874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x292878: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x292878u;
    SET_GPR_U32(ctx, 31, 0x292880u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x292878u, 0x292880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292880u;
label_292880:
    // 0x292880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292884: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x292884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x292888: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x292888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29288c: 0xc06aeb0  jal         func_1ABAC0
    ctx->pc = 0x29288Cu;
    SET_GPR_U32(ctx, 31, 0x292894u);
    ctx->pc = 0x1ABAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABAC0u, 0x29288Cu, 0x292894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292894u;
label_292894:
    // 0x292894: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292898: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x292898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x29289c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x29289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2928a0: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x2928a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2928a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2928a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2928a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2928a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2928ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2928acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2928b0: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x2928b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
    // 0x2928b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2928b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2928b8: 0x24444000  addiu       $a0, $v0, 0x4000
    ctx->pc = 0x2928b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x2928bc: 0xc095ebc  jal         func_257AF0
    ctx->pc = 0x2928BCu;
    SET_GPR_U32(ctx, 31, 0x2928C4u);
    ctx->pc = 0x257AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257AF0u, 0x2928BCu, 0x2928C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928C4u;
label_2928c4:
    // 0x2928c4: 0xc063958  jal         func_18E560
    ctx->pc = 0x2928C4u;
    SET_GPR_U32(ctx, 31, 0x2928CCu);
    ctx->pc = 0x18E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E560u, 0x2928C4u, 0x2928CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928CCu;
label_2928cc:
    // 0x2928cc: 0xc063a74  jal         func_18E9D0
    ctx->pc = 0x2928CCu;
    SET_GPR_U32(ctx, 31, 0x2928D4u);
    ctx->pc = 0x18E9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9D0u, 0x2928CCu, 0x2928D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928D4u;
label_2928d4:
    // 0x2928d4: 0xc0a3c28  jal         func_28F0A0
    ctx->pc = 0x2928D4u;
    SET_GPR_U32(ctx, 31, 0x2928DCu);
    ctx->pc = 0x28F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F0A0u, 0x2928D4u, 0x2928DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928DCu;
label_2928dc:
    // 0x2928dc: 0xc0a3d28  jal         func_28F4A0
    ctx->pc = 0x2928DCu;
    SET_GPR_U32(ctx, 31, 0x2928E4u);
    ctx->pc = 0x28F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F4A0u, 0x2928DCu, 0x2928E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928E4u;
label_2928e4:
    // 0x2928e4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2928e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2928e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2928e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2928ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2928ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2928f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2928f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2928f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2928f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2928f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2928fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2928FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2928FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292904u;
}
