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

// Function: entry_00164af0
// Address: 0x164af0 - 0x164b70
void entry_00164af0_0x164af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164af0_0x164af0");
#endif

    switch (ctx->pc) {
        case 0x164b30u: goto label_164b30;
        case 0x164b40u: goto label_164b40;
        default: break;
    }

    ctx->pc = 0x164af0u;

    // 0x164af0: 0x26100058  addiu       $s0, $s0, 0x58
    ctx->pc = 0x164af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x164af4: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x164af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x164af8: 0x1440ff34  bnez        $v0, . + 4 + (-0xCC << 2)
    ctx->pc = 0x164AF8u;
    {
        const bool branch_taken_0x164af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164af8) {
            ctx->pc = 0x1647CCu;
            return;
        }
    }
    ctx->pc = 0x164B00u;
    // 0x164b00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x164b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x164b04: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x164b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x164b08: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x164b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x164b0c: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x164b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x164b10: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x164b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x164b14: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x164b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x164b18: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x164b18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x164b1c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164b20: 0x24445460  addiu       $a0, $v0, 0x5460
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x164b24: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x164b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x164b28: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x164B28u;
    SET_GPR_U32(ctx, 31, 0x164B30u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x164B28u, 0x164B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B30u;
label_164b30:
    // 0x164b30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164b34: 0x24445460  addiu       $a0, $v0, 0x5460
    ctx->pc = 0x164b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x164b38: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x164B38u;
    SET_GPR_U32(ctx, 31, 0x164B40u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x164B38u, 0x164B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B40u;
label_164b40:
    // 0x164b40: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x164b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164b44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x164b44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x164b48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x164b48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164b4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x164b4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164b50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164b50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164b54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x164b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164b64: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x164b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x164b68: 0x3e00008  jr          $ra
    ctx->pc = 0x164B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164B70u;
}
