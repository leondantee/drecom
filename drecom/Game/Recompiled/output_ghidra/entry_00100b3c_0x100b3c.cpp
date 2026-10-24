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

// Function: entry_00100b3c
// Address: 0x100b3c - 0x100c3c
void entry_00100b3c_0x100b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b3c_0x100b3c");
#endif

    switch (ctx->pc) {
        case 0x100b44u: goto label_100b44;
        case 0x100b5cu: goto label_100b5c;
        case 0x100b74u: goto label_100b74;
        case 0x100b8cu: goto label_100b8c;
        case 0x100ba4u: goto label_100ba4;
        case 0x100bbcu: goto label_100bbc;
        case 0x100bd4u: goto label_100bd4;
        case 0x100becu: goto label_100bec;
        case 0x100c04u: goto label_100c04;
        case 0x100c1cu: goto label_100c1c;
        case 0x100c34u: goto label_100c34;
        default: break;
    }

    ctx->pc = 0x100b3cu;

    // 0x100b3c: 0xc046760  jal         func_119D80
    ctx->pc = 0x100B3Cu;
    SET_GPR_U32(ctx, 31, 0x100B44u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100B44u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100B44u) { return; }
    ctx->pc = 0x100B44u;
label_100b44:
    // 0x100b44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100b48: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100b4c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x100b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x100b50: 0x2484c068  addiu       $a0, $a0, -0x3F98
    ctx->pc = 0x100b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951016));
    // 0x100b54: 0xc046760  jal         func_119D80
    ctx->pc = 0x100B54u;
    SET_GPR_U32(ctx, 31, 0x100B5Cu);
    ctx->pc = 0x100B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B54u;
    // 0x100b58: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100B5Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100B5Cu) { return; }
    ctx->pc = 0x100B5Cu;
label_100b5c:
    // 0x100b5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100b60: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100b64: 0x34639030  ori         $v1, $v1, 0x9030
    ctx->pc = 0x100b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36912);
    // 0x100b68: 0x2484c078  addiu       $a0, $a0, -0x3F88
    ctx->pc = 0x100b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951032));
    // 0x100b6c: 0xc046760  jal         func_119D80
    ctx->pc = 0x100B6Cu;
    SET_GPR_U32(ctx, 31, 0x100B74u);
    ctx->pc = 0x100B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B6Cu;
    // 0x100b70: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100B74u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100B74u) { return; }
    ctx->pc = 0x100B74u;
label_100b74:
    // 0x100b74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100b78: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100b7c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x100b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x100b80: 0x2484c088  addiu       $a0, $a0, -0x3F78
    ctx->pc = 0x100b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951048));
    // 0x100b84: 0xc046760  jal         func_119D80
    ctx->pc = 0x100B84u;
    SET_GPR_U32(ctx, 31, 0x100B8Cu);
    ctx->pc = 0x100B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B84u;
    // 0x100b88: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100B8Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100B8Cu) { return; }
    ctx->pc = 0x100B8Cu;
label_100b8c:
    // 0x100b8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100b90: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100b94: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x100b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x100b98: 0x2484c098  addiu       $a0, $a0, -0x3F68
    ctx->pc = 0x100b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951064));
    // 0x100b9c: 0xc046760  jal         func_119D80
    ctx->pc = 0x100B9Cu;
    SET_GPR_U32(ctx, 31, 0x100BA4u);
    ctx->pc = 0x100BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B9Cu;
    // 0x100ba0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100BA4u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100BA4u) { return; }
    ctx->pc = 0x100BA4u;
label_100ba4:
    // 0x100ba4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100ba8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100bac: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x100bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x100bb0: 0x2484c0a8  addiu       $a0, $a0, -0x3F58
    ctx->pc = 0x100bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951080));
    // 0x100bb4: 0xc046760  jal         func_119D80
    ctx->pc = 0x100BB4u;
    SET_GPR_U32(ctx, 31, 0x100BBCu);
    ctx->pc = 0x100BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BB4u;
    // 0x100bb8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100BBCu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100BBCu) { return; }
    ctx->pc = 0x100BBCu;
label_100bbc:
    // 0x100bbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100bc0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100bc4: 0x3463a030  ori         $v1, $v1, 0xA030
    ctx->pc = 0x100bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41008);
    // 0x100bc8: 0x2484c0b8  addiu       $a0, $a0, -0x3F48
    ctx->pc = 0x100bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951096));
    // 0x100bcc: 0xc046760  jal         func_119D80
    ctx->pc = 0x100BCCu;
    SET_GPR_U32(ctx, 31, 0x100BD4u);
    ctx->pc = 0x100BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BCCu;
    // 0x100bd0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100BD4u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100BD4u) { return; }
    ctx->pc = 0x100BD4u;
label_100bd4:
    // 0x100bd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100bd8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100bdc: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x100bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x100be0: 0x2484c0c8  addiu       $a0, $a0, -0x3F38
    ctx->pc = 0x100be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951112));
    // 0x100be4: 0xc046760  jal         func_119D80
    ctx->pc = 0x100BE4u;
    SET_GPR_U32(ctx, 31, 0x100BECu);
    ctx->pc = 0x100BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BE4u;
    // 0x100be8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100BECu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100BECu) { return; }
    ctx->pc = 0x100BECu;
label_100bec:
    // 0x100bec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100bf0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100bf4: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x100bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x100bf8: 0x2484c0d8  addiu       $a0, $a0, -0x3F28
    ctx->pc = 0x100bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951128));
    // 0x100bfc: 0xc046760  jal         func_119D80
    ctx->pc = 0x100BFCu;
    SET_GPR_U32(ctx, 31, 0x100C04u);
    ctx->pc = 0x100C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BFCu;
    // 0x100c00: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100C04u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100C04u) { return; }
    ctx->pc = 0x100C04u;
label_100c04:
    // 0x100c04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100c08: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100c0c: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x100c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x100c10: 0x2484c0e8  addiu       $a0, $a0, -0x3F18
    ctx->pc = 0x100c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951144));
    // 0x100c14: 0xc046760  jal         func_119D80
    ctx->pc = 0x100C14u;
    SET_GPR_U32(ctx, 31, 0x100C1Cu);
    ctx->pc = 0x100C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C14u;
    // 0x100c18: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100C1Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100C1Cu) { return; }
    ctx->pc = 0x100C1Cu;
label_100c1c:
    // 0x100c1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100c20: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100c24: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x100c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x100c28: 0x2484c100  addiu       $a0, $a0, -0x3F00
    ctx->pc = 0x100c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    // 0x100c2c: 0xc046760  jal         func_119D80
    ctx->pc = 0x100C2Cu;
    SET_GPR_U32(ctx, 31, 0x100C34u);
    ctx->pc = 0x100C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C2Cu;
    // 0x100c30: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100C34u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100C34u) { return; }
    ctx->pc = 0x100C34u;
label_100c34:
    // 0x100c34: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x100C34u;
    {
        const bool branch_taken_0x100c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C34u;
        // 0x100c38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c34) {
            ctx->pc = 0x100CB0u;
            return;
        }
    }
    ctx->pc = 0x100C3Cu;
}
