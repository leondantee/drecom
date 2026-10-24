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

// Function: entry_0029cf78
// Address: 0x29cf78 - 0x29d004
void entry_0029cf78_0x29cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cf78_0x29cf78");
#endif

    ctx->pc = 0x29cf78u;

    // 0x29cf78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf7c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x29cf7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x29cf80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x29cf80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29cf84: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x29cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x29cf88: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x29CF88u;
    {
        const bool branch_taken_0x29cf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cf88) {
            ctx->pc = 0x29D038u;
            return;
        }
    }
    ctx->pc = 0x29CF90u;
    // 0x29cf90: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x29cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29cf94: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x29CF94u;
    {
        const bool branch_taken_0x29cf94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cf94) {
            ctx->pc = 0x29D038u;
            return;
        }
    }
    ctx->pc = 0x29CF9Cu;
    // 0x29cf9c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x29cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29cfa0: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x29CFA0u;
    {
        const bool branch_taken_0x29cfa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfa0) {
            ctx->pc = 0x29D038u;
            return;
        }
    }
    ctx->pc = 0x29CFA8u;
    // 0x29cfa8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x29cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29cfac: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x29CFACu;
    {
        const bool branch_taken_0x29cfac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfac) {
            ctx->pc = 0x29D038u;
            return;
        }
    }
    ctx->pc = 0x29CFB4u;
    // 0x29cfb4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x29cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29cfb8: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x29CFB8u;
    {
        const bool branch_taken_0x29cfb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfb8) {
            ctx->pc = 0x29D038u;
            return;
        }
    }
    ctx->pc = 0x29CFC0u;
    // 0x29cfc0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29cfc4: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x29CFC4u;
    {
        const bool branch_taken_0x29cfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfc4) {
            ctx->pc = 0x29D038u;
            return;
        }
    }
    ctx->pc = 0x29CFCCu;
    // 0x29cfcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29cfd0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x29CFD0u;
    {
        const bool branch_taken_0x29cfd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfd0) {
            ctx->pc = 0x29D038u;
            return;
        }
    }
    ctx->pc = 0x29CFD8u;
    // 0x29cfd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cfdc: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x29CFDCu;
    {
        const bool branch_taken_0x29cfdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfdc) {
            ctx->pc = 0x29D038u;
            return;
        }
    }
    ctx->pc = 0x29CFE4u;
    // 0x29cfe4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29cfe8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CFE8u;
    {
        const bool branch_taken_0x29cfe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfe8) {
            ctx->pc = 0x29D004u;
            return;
        }
    }
    ctx->pc = 0x29CFF0u;
    // 0x29cff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cff4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CFF4u;
    {
        const bool branch_taken_0x29cff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cff4) {
            ctx->pc = 0x29D004u;
            return;
        }
    }
    ctx->pc = 0x29CFFCu;
    // 0x29cffc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x29CFFCu;
    {
        const bool branch_taken_0x29cffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cffc) {
            ctx->pc = 0x29D004u;
            return;
        }
    }
    ctx->pc = 0x29D004u;
}
