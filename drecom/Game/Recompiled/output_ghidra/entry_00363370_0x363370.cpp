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

// Function: entry_00363370
// Address: 0x363370 - 0x363454
void entry_00363370_0x363370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363370_0x363370");
#endif

    ctx->pc = 0x363370u;

    // 0x363370: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363374: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x363374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x363378: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36337c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x36337cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x363380: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363384: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x363384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x363388: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x363388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36338c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x36338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x363390: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x363390u;
    {
        const bool branch_taken_0x363390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363390) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x363398u;
    // 0x363398: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x363398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36339c: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x36339Cu;
    {
        const bool branch_taken_0x36339c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36339c) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x3633A4u;
    // 0x3633a4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3633a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3633a8: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3633A8u;
    {
        const bool branch_taken_0x3633a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633a8) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x3633B0u;
    // 0x3633b0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3633b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3633b4: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3633B4u;
    {
        const bool branch_taken_0x3633b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633b4) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x3633BCu;
    // 0x3633bc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3633bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3633c0: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3633C0u;
    {
        const bool branch_taken_0x3633c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633c0) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x3633C8u;
    // 0x3633c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3633c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3633cc: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3633CCu;
    {
        const bool branch_taken_0x3633cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633cc) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x3633D4u;
    // 0x3633d4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3633d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3633d8: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3633D8u;
    {
        const bool branch_taken_0x3633d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633d8) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x3633E0u;
    // 0x3633e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3633e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3633e4: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3633E4u;
    {
        const bool branch_taken_0x3633e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633e4) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x3633ECu;
    // 0x3633ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3633ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3633f0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3633F0u;
    {
        const bool branch_taken_0x3633f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633f0) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x3633F8u;
    // 0x3633f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3633fc: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3633FCu;
    {
        const bool branch_taken_0x3633fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633fc) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x363404u;
    // 0x363404: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x363404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x363408: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x363408u;
    {
        const bool branch_taken_0x363408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363408) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x363410u;
    // 0x363410: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x363410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x363414: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x363414u;
    {
        const bool branch_taken_0x363414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363414) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x36341Cu;
    // 0x36341c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x36341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x363420: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x363420u;
    {
        const bool branch_taken_0x363420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363420) {
            ctx->pc = 0x36347Cu;
            return;
        }
    }
    ctx->pc = 0x363428u;
    // 0x363428: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x363428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x36342c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x36342Cu;
    {
        const bool branch_taken_0x36342c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36342c) {
            ctx->pc = 0x363464u;
            return;
        }
    }
    ctx->pc = 0x363434u;
    // 0x363434: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x363434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x363438: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x363438u;
    {
        const bool branch_taken_0x363438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363438) {
            ctx->pc = 0x363464u;
            return;
        }
    }
    ctx->pc = 0x363440u;
    // 0x363440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363444: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363444u;
    {
        const bool branch_taken_0x363444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363444) {
            ctx->pc = 0x363454u;
            return;
        }
    }
    ctx->pc = 0x36344Cu;
    // 0x36344c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36344Cu;
    {
        const bool branch_taken_0x36344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36344c) {
            ctx->pc = 0x363464u;
            return;
        }
    }
    ctx->pc = 0x363454u;
}
