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

// Function: entry_00201ef8
// Address: 0x201ef8 - 0x201fb4
void entry_00201ef8_0x201ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201ef8_0x201ef8");
#endif

    switch (ctx->pc) {
        case 0x201f5cu: goto label_201f5c;
        case 0x201f94u: goto label_201f94;
        default: break;
    }

    ctx->pc = 0x201ef8u;

    // 0x201ef8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x201ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x201efc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201f00: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201f00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201f04: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x201f04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x201f08: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201f0c: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201f10: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x201f10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x201f14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201f18: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x201f18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201f1c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x201f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x201f20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x201f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201f24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x201f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x201f28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x201f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201f2c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x201f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x201f30: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201f34: 0x24420ad0  addiu       $v0, $v0, 0xAD0
    ctx->pc = 0x201f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
    // 0x201f38: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x201f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201f3c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201f40: 0x8c250ab8  lw          $a1, 0xAB8($at)
    ctx->pc = 0x201f40u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201f44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201f48: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x201f48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201f4c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x201f4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201f50: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x201f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x201f54: 0xc04f054  jal         func_13C150
    ctx->pc = 0x201F54u;
    SET_GPR_U32(ctx, 31, 0x201F5Cu);
    ctx->pc = 0x13C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C150u, 0x201F54u, 0x201F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201F5Cu;
label_201f5c:
    // 0x201f5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x201f60: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x201f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x201f64: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x201f64u;
    SET_GPR_S32(ctx, 19, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x201f68: 0x2723023  subu        $a2, $s3, $s2
    ctx->pc = 0x201f68u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x201f6c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x201f70: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x201f74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201f78: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x201f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
    // 0x201f7c: 0x34420a13  ori         $v0, $v0, 0xA13
    ctx->pc = 0x201f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2579);
    // 0x201f80: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x201f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201f84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x201f88: 0x24450d90  addiu       $a1, $v0, 0xD90
    ctx->pc = 0x201f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
    // 0x201f8c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201F8Cu;
    SET_GPR_U32(ctx, 31, 0x201F94u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201F8Cu, 0x201F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201F94u;
label_201f94:
    // 0x201f94: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x201f94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201f98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201f98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201f9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201fa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201fa8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x201fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x201fac: 0x3e00008  jr          $ra
    ctx->pc = 0x201FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201FB4u;
}
