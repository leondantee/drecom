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

// Function: entry_0019c960
// Address: 0x19c960 - 0x19c9e8
void entry_0019c960_0x19c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c960_0x19c960");
#endif

    switch (ctx->pc) {
        case 0x19c988u: goto label_19c988;
        default: break;
    }

    ctx->pc = 0x19c960u;

label_19c960:
    // 0x19c960: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
label_19c964:
    if (ctx->pc == 0x19C964u) {
        ctx->pc = 0x19C968u;
        goto label_19c968;
    }
    ctx->pc = 0x19C960u;
    {
        const bool branch_taken_0x19c960 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c960) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C968u;
label_19c968:
    // 0x19c968: 0x26040088  addiu       $a0, $s0, 0x88
    ctx->pc = 0x19c968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_19c96c:
    // 0x19c96c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19c970:
    // 0x19c970: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19c970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_19c974:
    // 0x19c974: 0x24427470  addiu       $v0, $v0, 0x7470
    ctx->pc = 0x19c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
label_19c978:
    // 0x19c978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19c97c:
    // 0x19c97c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c980:
    // 0x19c980: 0x40f809  jalr        $v0
label_19c984:
    if (ctx->pc == 0x19C984u) {
        ctx->pc = 0x19C988u;
        goto label_19c988;
    }
    ctx->pc = 0x19C980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C988u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C980u, 0x19C988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C988u;
label_19c988:
    // 0x19c988: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_19c98c:
    if (ctx->pc == 0x19C98Cu) {
        ctx->pc = 0x19C990u;
        goto label_19c990;
    }
    ctx->pc = 0x19C988u;
    {
        const bool branch_taken_0x19c988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c988) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C990u;
label_19c990:
    // 0x19c990: 0x3264001f  andi        $a0, $s3, 0x1F
    ctx->pc = 0x19c990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
label_19c994:
    // 0x19c994: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19c994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19c998:
    // 0x19c998: 0x832806  srlv        $a1, $v1, $a0
    ctx->pc = 0x19c998u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_19c99c:
    // 0x19c99c: 0x131942  srl         $v1, $s3, 5
    ctx->pc = 0x19c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
label_19c9a0:
    // 0x19c9a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c9a4:
    // 0x19c9a4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_19c9a8:
    // 0x19c9a8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x19c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_19c9ac:
    // 0x19c9ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19c9b0:
    // 0x19c9b0: 0x8c8319dc  lw          $v1, 0x19DC($a0)
    ctx->pc = 0x19c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6620)));
label_19c9b4:
    // 0x19c9b4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x19c9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_19c9b8:
    // 0x19c9b8: 0xac8319dc  sw          $v1, 0x19DC($a0)
    ctx->pc = 0x19c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6620), GPR_U32(ctx, 3));
label_19c9bc:
    // 0x19c9bc: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
label_19c9c0:
    // 0x19c9c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c9c4:
    // 0x19c9c4: 0x30630050  andi        $v1, $v1, 0x50
    ctx->pc = 0x19c9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)80);
label_19c9c8:
    // 0x19c9c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_19c9cc:
    if (ctx->pc == 0x19C9CCu) {
        ctx->pc = 0x19C9D0u;
        goto label_19c9d0;
    }
    ctx->pc = 0x19C9C8u;
    {
        const bool branch_taken_0x19c9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c9c8) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C9D0u;
label_19c9d0:
    // 0x19c9d0: 0x92030081  lbu         $v1, 0x81($s0)
    ctx->pc = 0x19c9d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
label_19c9d4:
    // 0x19c9d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19c9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c9d8:
    // 0x19c9d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c9dc:
    // 0x19c9dc: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_19c9e0:
    if (ctx->pc == 0x19C9E0u) {
        ctx->pc = 0x19C9E4u;
        goto label_19c9e4;
    }
    ctx->pc = 0x19C9DCu;
    {
        const bool branch_taken_0x19c9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19c9dc) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C9E4u;
label_19c9e4:
    // 0x19c9e4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x19c9e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19c9e8u;
}
