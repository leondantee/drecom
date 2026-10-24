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

// Function: entry_00340adc
// Address: 0x340adc - 0x340b98
void entry_00340adc_0x340adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340adc_0x340adc");
#endif

    ctx->pc = 0x340adcu;

    // 0x340adc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340ae0: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x340ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x340ae4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x340ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x340ae8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x340ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x340aec: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x340AECu;
    {
        const bool branch_taken_0x340aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340aec) {
            ctx->pc = 0x340C58u;
            return;
        }
    }
    ctx->pc = 0x340AF4u;
    // 0x340af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340af8: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x340AF8u;
    {
        const bool branch_taken_0x340af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340af8) {
            ctx->pc = 0x340C08u;
            return;
        }
    }
    ctx->pc = 0x340B00u;
    // 0x340b00: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x340b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x340b04: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x340B04u;
    {
        const bool branch_taken_0x340b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b04) {
            ctx->pc = 0x340BFCu;
            return;
        }
    }
    ctx->pc = 0x340B0Cu;
    // 0x340b0c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x340b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x340b10: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x340B10u;
    {
        const bool branch_taken_0x340b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b10) {
            ctx->pc = 0x340BB0u;
            return;
        }
    }
    ctx->pc = 0x340B18u;
    // 0x340b18: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x340b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x340b1c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x340B1Cu;
    {
        const bool branch_taken_0x340b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b1c) {
            ctx->pc = 0x340BA4u;
            return;
        }
    }
    ctx->pc = 0x340B24u;
    // 0x340b24: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x340b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x340b28: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x340B28u;
    {
        const bool branch_taken_0x340b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b28) {
            ctx->pc = 0x340BA4u;
            return;
        }
    }
    ctx->pc = 0x340B30u;
    // 0x340b30: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x340b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x340b34: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x340B34u;
    {
        const bool branch_taken_0x340b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b34) {
            ctx->pc = 0x340BA4u;
            return;
        }
    }
    ctx->pc = 0x340B3Cu;
    // 0x340b3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x340b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340b40: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x340B40u;
    {
        const bool branch_taken_0x340b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b40) {
            ctx->pc = 0x340BA4u;
            return;
        }
    }
    ctx->pc = 0x340B48u;
    // 0x340b48: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x340b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x340b4c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x340B4Cu;
    {
        const bool branch_taken_0x340b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b4c) {
            ctx->pc = 0x340BA4u;
            return;
        }
    }
    ctx->pc = 0x340B54u;
    // 0x340b54: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x340b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340b58: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x340B58u;
    {
        const bool branch_taken_0x340b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b58) {
            ctx->pc = 0x340BA4u;
            return;
        }
    }
    ctx->pc = 0x340B60u;
    // 0x340b60: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x340b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x340b64: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x340B64u;
    {
        const bool branch_taken_0x340b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b64) {
            ctx->pc = 0x340BA4u;
            return;
        }
    }
    ctx->pc = 0x340B6Cu;
    // 0x340b6c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x340b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x340b70: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x340B70u;
    {
        const bool branch_taken_0x340b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b70) {
            ctx->pc = 0x340B98u;
            return;
        }
    }
    ctx->pc = 0x340B78u;
    // 0x340b78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x340b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x340b7c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x340B7Cu;
    {
        const bool branch_taken_0x340b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b7c) {
            ctx->pc = 0x340B98u;
            return;
        }
    }
    ctx->pc = 0x340B84u;
    // 0x340b84: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x340b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x340b88: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x340B88u;
    {
        const bool branch_taken_0x340b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b88) {
            ctx->pc = 0x340B98u;
            return;
        }
    }
    ctx->pc = 0x340B90u;
    // 0x340b90: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x340B90u;
    {
        const bool branch_taken_0x340b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340b90) {
            ctx->pc = 0x340CE0u;
            return;
        }
    }
    ctx->pc = 0x340B98u;
}
