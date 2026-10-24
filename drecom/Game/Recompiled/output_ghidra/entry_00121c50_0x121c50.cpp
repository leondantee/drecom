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

// Function: entry_00121c50
// Address: 0x121c50 - 0x121d30
void entry_00121c50_0x121c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121c50_0x121c50");
#endif

    ctx->pc = 0x121c50u;

    // 0x121c50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121c54: 0x946411f6  lhu         $a0, 0x11F6($v1)
    ctx->pc = 0x121c54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x121c58: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x121c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x121c5c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x121c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x121c60: 0x10660417  beq         $v1, $a2, . + 4 + (0x417 << 2)
    ctx->pc = 0x121C60u;
    {
        const bool branch_taken_0x121c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x121c60) {
            ctx->pc = 0x122CC0u;
            return;
        }
    }
    ctx->pc = 0x121C68u;
    // 0x121c68: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x121c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x121c6c: 0x10640307  beq         $v1, $a0, . + 4 + (0x307 << 2)
    ctx->pc = 0x121C6Cu;
    {
        const bool branch_taken_0x121c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121c6c) {
            ctx->pc = 0x12288Cu;
            return;
        }
    }
    ctx->pc = 0x121C74u;
    // 0x121c74: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x121c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121c78: 0x10650304  beq         $v1, $a1, . + 4 + (0x304 << 2)
    ctx->pc = 0x121C78u;
    {
        const bool branch_taken_0x121c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121c78) {
            ctx->pc = 0x12288Cu;
            return;
        }
    }
    ctx->pc = 0x121C80u;
    // 0x121c80: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x121c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x121c84: 0x106401fd  beq         $v1, $a0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x121C84u;
    {
        const bool branch_taken_0x121c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121c84) {
            ctx->pc = 0x12247Cu;
            return;
        }
    }
    ctx->pc = 0x121C8Cu;
    // 0x121c8c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x121c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x121c90: 0x106601fa  beq         $v1, $a2, . + 4 + (0x1FA << 2)
    ctx->pc = 0x121C90u;
    {
        const bool branch_taken_0x121c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x121c90) {
            ctx->pc = 0x12247Cu;
            return;
        }
    }
    ctx->pc = 0x121C98u;
    // 0x121c98: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x121c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x121c9c: 0x106501f7  beq         $v1, $a1, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x121C9Cu;
    {
        const bool branch_taken_0x121c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121c9c) {
            ctx->pc = 0x12247Cu;
            return;
        }
    }
    ctx->pc = 0x121CA4u;
    // 0x121ca4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x121ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x121ca8: 0x106401f4  beq         $v1, $a0, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x121CA8u;
    {
        const bool branch_taken_0x121ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121ca8) {
            ctx->pc = 0x12247Cu;
            return;
        }
    }
    ctx->pc = 0x121CB0u;
    // 0x121cb0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x121cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x121cb4: 0x106401f1  beq         $v1, $a0, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x121CB4u;
    {
        const bool branch_taken_0x121cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121cb4) {
            ctx->pc = 0x12247Cu;
            return;
        }
    }
    ctx->pc = 0x121CBCu;
    // 0x121cbc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x121cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x121cc0: 0x106501ee  beq         $v1, $a1, . + 4 + (0x1EE << 2)
    ctx->pc = 0x121CC0u;
    {
        const bool branch_taken_0x121cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121cc0) {
            ctx->pc = 0x12247Cu;
            return;
        }
    }
    ctx->pc = 0x121CC8u;
    // 0x121cc8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x121cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x121ccc: 0x10620131  beq         $v1, $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x121CCCu;
    {
        const bool branch_taken_0x121ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x121ccc) {
            ctx->pc = 0x122194u;
            return;
        }
    }
    ctx->pc = 0x121CD4u;
    // 0x121cd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x121cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x121cd8: 0x1062012e  beq         $v1, $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x121CD8u;
    {
        const bool branch_taken_0x121cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x121cd8) {
            ctx->pc = 0x122194u;
            return;
        }
    }
    ctx->pc = 0x121CE0u;
    // 0x121ce0: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x121ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x121ce4: 0x1066012b  beq         $v1, $a2, . + 4 + (0x12B << 2)
    ctx->pc = 0x121CE4u;
    {
        const bool branch_taken_0x121ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x121ce4) {
            ctx->pc = 0x122194u;
            return;
        }
    }
    ctx->pc = 0x121CECu;
    // 0x121cec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x121cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x121cf0: 0x106500cd  beq         $v1, $a1, . + 4 + (0xCD << 2)
    ctx->pc = 0x121CF0u;
    {
        const bool branch_taken_0x121cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121cf0) {
            ctx->pc = 0x122028u;
            return;
        }
    }
    ctx->pc = 0x121CF8u;
    // 0x121cf8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x121cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x121cfc: 0x106400ca  beq         $v1, $a0, . + 4 + (0xCA << 2)
    ctx->pc = 0x121CFCu;
    {
        const bool branch_taken_0x121cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121cfc) {
            ctx->pc = 0x122028u;
            return;
        }
    }
    ctx->pc = 0x121D04u;
    // 0x121d04: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x121d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x121d08: 0x10640059  beq         $v1, $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x121D08u;
    {
        const bool branch_taken_0x121d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121d08) {
            ctx->pc = 0x121E70u;
            return;
        }
    }
    ctx->pc = 0x121D10u;
    // 0x121d10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x121d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121d14: 0x10650056  beq         $v1, $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x121D14u;
    {
        const bool branch_taken_0x121d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121d14) {
            ctx->pc = 0x121E70u;
            return;
        }
    }
    ctx->pc = 0x121D1Cu;
    // 0x121d1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121d20: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121D20u;
    {
        const bool branch_taken_0x121d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121d20) {
            ctx->pc = 0x121D30u;
            return;
        }
    }
    ctx->pc = 0x121D28u;
    // 0x121d28: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x121D28u;
    {
        const bool branch_taken_0x121d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d28) {
            ctx->pc = 0x121D30u;
            return;
        }
    }
    ctx->pc = 0x121D30u;
}
