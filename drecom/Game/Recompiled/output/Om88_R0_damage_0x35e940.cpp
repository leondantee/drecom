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

// Function: Om88_R0_damage
// Address: 0x35e940 - 0x35e99c
void Om88_R0_damage_0x35e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om88_R0_damage_0x35e940");
#endif

    switch (ctx->pc) {
        case 0x35e940u: goto label_35e940;
        case 0x35e944u: goto label_35e944;
        case 0x35e948u: goto label_35e948;
        case 0x35e94cu: goto label_35e94c;
        case 0x35e950u: goto label_35e950;
        case 0x35e954u: goto label_35e954;
        case 0x35e958u: goto label_35e958;
        case 0x35e95cu: goto label_35e95c;
        case 0x35e960u: goto label_35e960;
        case 0x35e964u: goto label_35e964;
        case 0x35e968u: goto label_35e968;
        case 0x35e96cu: goto label_35e96c;
        case 0x35e970u: goto label_35e970;
        case 0x35e974u: goto label_35e974;
        case 0x35e978u: goto label_35e978;
        case 0x35e97cu: goto label_35e97c;
        case 0x35e980u: goto label_35e980;
        case 0x35e984u: goto label_35e984;
        case 0x35e988u: goto label_35e988;
        case 0x35e98cu: goto label_35e98c;
        case 0x35e990u: goto label_35e990;
        case 0x35e994u: goto label_35e994;
        case 0x35e998u: goto label_35e998;
        default: break;
    }

    ctx->pc = 0x35e940u;

label_35e940:
    // 0x35e940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35e944:
    // 0x35e944: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35e944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35e948:
    // 0x35e948: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35e948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35e94c:
    // 0x35e94c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35e950:
    // 0x35e950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35e954:
    // 0x35e954: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35e954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35e958:
    // 0x35e958: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35e958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35e95c:
    // 0x35e95c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35e960:
    // 0x35e960: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35e960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35e964:
    // 0x35e964: 0x2442aab8  addiu       $v0, $v0, -0x5548
    ctx->pc = 0x35e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945464));
label_35e968:
    // 0x35e968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35e96c:
    // 0x35e96c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35e970:
    // 0x35e970: 0x40f809  jalr        $v0
label_35e974:
    if (ctx->pc == 0x35E974u) {
        ctx->pc = 0x35E978u;
        goto label_35e978;
    }
    ctx->pc = 0x35E970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35E978u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E970u, 0x35E978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35E978u;
label_35e978:
    // 0x35e978: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35e978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35e97c:
    // 0x35e97c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35e980:
    // 0x35e980: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x35e980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_35e984:
    // 0x35e984: 0xc079140  jal         func_1E4500
label_35e988:
    if (ctx->pc == 0x35E988u) {
        ctx->pc = 0x35E98Cu;
        goto label_35e98c;
    }
    ctx->pc = 0x35E984u;
    SET_GPR_U32(ctx, 31, 0x35E98Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x35E984u, 0x35E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E98Cu;
label_35e98c:
    // 0x35e98c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35e98cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35e990:
    // 0x35e990: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35e994:
    // 0x35e994: 0x3e00008  jr          $ra
label_35e998:
    if (ctx->pc == 0x35E998u) {
        ctx->pc = 0x35E99Cu;
        goto label_fallthrough_0x35e994;
    }
    ctx->pc = 0x35E994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35e994:
    ctx->pc = 0x35E99Cu;
}
