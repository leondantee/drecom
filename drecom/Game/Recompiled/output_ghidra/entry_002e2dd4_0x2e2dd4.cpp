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

// Function: entry_002e2dd4
// Address: 0x2e2dd4 - 0x2e2e58
void entry_002e2dd4_0x2e2dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2dd4_0x2e2dd4");
#endif

    ctx->pc = 0x2e2dd4u;

    // 0x2e2dd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2dd8: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x2e2dd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x2e2ddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2de0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2e2de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2de4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2de8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2e2de8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2e2dec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2e2decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e2df0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2e2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2e2df4: 0x108300bb  beq         $a0, $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x2E2DF4u;
    {
        const bool branch_taken_0x2e2df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2df4) {
            ctx->pc = 0x2E30E4u;
            return;
        }
    }
    ctx->pc = 0x2E2DFCu;
    // 0x2e2dfc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2e2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e2e00: 0x108300b8  beq         $a0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2E2E00u;
    {
        const bool branch_taken_0x2e2e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e00) {
            ctx->pc = 0x2E30E4u;
            return;
        }
    }
    ctx->pc = 0x2E2E08u;
    // 0x2e2e08: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e2e0c: 0x108300b5  beq         $a0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2E2E0Cu;
    {
        const bool branch_taken_0x2e2e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e0c) {
            ctx->pc = 0x2E30E4u;
            return;
        }
    }
    ctx->pc = 0x2E2E14u;
    // 0x2e2e14: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2e2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e2e18: 0x108300b2  beq         $a0, $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2E2E18u;
    {
        const bool branch_taken_0x2e2e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e18) {
            ctx->pc = 0x2E30E4u;
            return;
        }
    }
    ctx->pc = 0x2E2E20u;
    // 0x2e2e20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2e24: 0x108300af  beq         $a0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x2E2E24u;
    {
        const bool branch_taken_0x2e2e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e24) {
            ctx->pc = 0x2E30E4u;
            return;
        }
    }
    ctx->pc = 0x2E2E2Cu;
    // 0x2e2e2c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e2e30: 0x1083005c  beq         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2E2E30u;
    {
        const bool branch_taken_0x2e2e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e30) {
            ctx->pc = 0x2E2FA4u;
            return;
        }
    }
    ctx->pc = 0x2E2E38u;
    // 0x2e2e38: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2e2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2e2e3c: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2E2E3Cu;
    {
        const bool branch_taken_0x2e2e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e3c) {
            ctx->pc = 0x2E2FA4u;
            return;
        }
    }
    ctx->pc = 0x2E2E44u;
    // 0x2e2e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2e48: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2E48u;
    {
        const bool branch_taken_0x2e2e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e48) {
            ctx->pc = 0x2E2E58u;
            return;
        }
    }
    ctx->pc = 0x2E2E50u;
    // 0x2e2e50: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2E2E50u;
    {
        const bool branch_taken_0x2e2e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e50) {
            ctx->pc = 0x2E30E4u;
            return;
        }
    }
    ctx->pc = 0x2E2E58u;
}
