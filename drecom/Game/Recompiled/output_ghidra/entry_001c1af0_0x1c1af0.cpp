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

// Function: entry_001c1af0
// Address: 0x1c1af0 - 0x1c1b84
void entry_001c1af0_0x1c1af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1af0_0x1c1af0");
#endif

    switch (ctx->pc) {
        case 0x1c1afcu: goto label_1c1afc;
        case 0x1c1b0cu: goto label_1c1b0c;
        case 0x1c1b54u: goto label_1c1b54;
        default: break;
    }

    ctx->pc = 0x1c1af0u;

label_1c1af0:
    // 0x1c1af0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1af4:
    // 0x1c1af4: 0xc058aa4  jal         func_162A90
label_1c1af8:
    if (ctx->pc == 0x1C1AF8u) {
        ctx->pc = 0x1C1AFCu;
        goto label_1c1afc;
    }
    ctx->pc = 0x1C1AF4u;
    SET_GPR_U32(ctx, 31, 0x1C1AFCu);
    ctx->pc = 0x162A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A90u, 0x1C1AF4u, 0x1C1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AFCu;
label_1c1afc:
    // 0x1c1afc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b00:
    // 0x1c1b00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c1b00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1c1b04:
    // 0x1c1b04: 0xc0572a4  jal         func_15CA90
label_1c1b08:
    if (ctx->pc == 0x1C1B08u) {
        ctx->pc = 0x1C1B0Cu;
        goto label_1c1b0c;
    }
    ctx->pc = 0x1C1B04u;
    SET_GPR_U32(ctx, 31, 0x1C1B0Cu);
    ctx->pc = 0x15CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CA90u, 0x1C1B04u, 0x1C1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B0Cu;
label_1c1b0c:
    // 0x1c1b0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b10:
    // 0x1c1b10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b14:
    // 0x1c1b14: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c1b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c1b18:
    // 0x1c1b18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c1b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c1b1c:
    // 0x1c1b1c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c1b20:
    // 0x1c1b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1b24:
    // 0x1c1b24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c1b28:
    // 0x1c1b28: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c1b2c:
    // 0x1c1b2c: 0x244290c0  addiu       $v0, $v0, -0x6F40
    ctx->pc = 0x1c1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938816));
label_1c1b30:
    // 0x1c1b30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1b34:
    // 0x1c1b34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b38:
    // 0x1c1b38: 0x9042156d  lbu         $v0, 0x156D($v0)
    ctx->pc = 0x1c1b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5485)));
label_1c1b3c:
    // 0x1c1b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c1b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c1b40:
    // 0x1c1b40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c1b44:
    // 0x1c1b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1b48:
    // 0x1c1b48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c1b4c:
    // 0x1c1b4c: 0x40f809  jalr        $v0
label_1c1b50:
    if (ctx->pc == 0x1C1B50u) {
        ctx->pc = 0x1C1B54u;
        goto label_1c1b54;
    }
    ctx->pc = 0x1C1B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1B54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1B4Cu, 0x1C1B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1B54u;
label_1c1b54:
    // 0x1c1b54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b58:
    // 0x1c1b58: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c1b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1b5c:
    // 0x1c1b5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b60:
    // 0x1c1b60: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c1b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c1b64:
    // 0x1c1b64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b68:
    // 0x1c1b68: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1c1b6c:
    // 0x1c1b6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c1b70:
    if (ctx->pc == 0x1C1B70u) {
        ctx->pc = 0x1C1B74u;
        goto label_1c1b74;
    }
    ctx->pc = 0x1C1B6Cu;
    {
        const bool branch_taken_0x1c1b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b6c) {
            ctx->pc = 0x1C1B84u;
            return;
        }
    }
    ctx->pc = 0x1C1B74u;
label_1c1b74:
    // 0x1c1b74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b78:
    // 0x1c1b78: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_1c1b7c:
    // 0x1c1b7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c1b80:
    // 0x1c1b80: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1c1b80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c1b84u;
}
