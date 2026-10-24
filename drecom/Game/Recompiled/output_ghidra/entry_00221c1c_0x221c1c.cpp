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

// Function: entry_00221c1c
// Address: 0x221c1c - 0x221cd8
void entry_00221c1c_0x221c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221c1c_0x221c1c");
#endif

    ctx->pc = 0x221c1cu;

    // 0x221c1c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221c20: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x221c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x221c24: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x221c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x221c28: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x221c28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x221c2c: 0x4c00044  bltz        $a2, . + 4 + (0x44 << 2)
    ctx->pc = 0x221C2Cu;
    {
        const bool branch_taken_0x221c2c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x221c2c) {
            ctx->pc = 0x221D40u;
            return;
        }
    }
    ctx->pc = 0x221C34u;
    // 0x221c34: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221c38: 0x948311f6  lhu         $v1, 0x11F6($a0)
    ctx->pc = 0x221c38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
    // 0x221c3c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x221c3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x221c40: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x221c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x221c44: 0x10e30031  beq         $a3, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x221C44u;
    {
        const bool branch_taken_0x221c44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221c44) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221C4Cu;
    // 0x221c4c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x221c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x221c50: 0x10e4002e  beq         $a3, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x221C50u;
    {
        const bool branch_taken_0x221c50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x221c50) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221C58u;
    // 0x221c58: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x221c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x221c5c: 0x10e6002b  beq         $a3, $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x221C5Cu;
    {
        const bool branch_taken_0x221c5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x221c5c) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221C64u;
    // 0x221c64: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x221c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x221c68: 0x10e40028  beq         $a3, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x221C68u;
    {
        const bool branch_taken_0x221c68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x221c68) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221C70u;
    // 0x221c70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x221c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x221c74: 0x10e30025  beq         $a3, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x221C74u;
    {
        const bool branch_taken_0x221c74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221c74) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221C7Cu;
    // 0x221c7c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x221c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x221c80: 0x10e50022  beq         $a3, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x221C80u;
    {
        const bool branch_taken_0x221c80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x221c80) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221C88u;
    // 0x221c88: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x221c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x221c8c: 0x10e3001f  beq         $a3, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x221C8Cu;
    {
        const bool branch_taken_0x221c8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221c8c) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221C94u;
    // 0x221c94: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x221c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x221c98: 0x10e4001c  beq         $a3, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x221C98u;
    {
        const bool branch_taken_0x221c98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x221c98) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221CA0u;
    // 0x221ca0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x221ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x221ca4: 0x10e30019  beq         $a3, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x221CA4u;
    {
        const bool branch_taken_0x221ca4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221ca4) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221CACu;
    // 0x221cac: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x221cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x221cb0: 0x10e30016  beq         $a3, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x221CB0u;
    {
        const bool branch_taken_0x221cb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221cb0) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221CB8u;
    // 0x221cb8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x221cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221cbc: 0x10e30013  beq         $a3, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x221CBCu;
    {
        const bool branch_taken_0x221cbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221cbc) {
            ctx->pc = 0x221D0Cu;
            return;
        }
    }
    ctx->pc = 0x221CC4u;
    // 0x221cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x221cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221cc8: 0x10e50003  beq         $a3, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x221CC8u;
    {
        const bool branch_taken_0x221cc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x221cc8) {
            ctx->pc = 0x221CD8u;
            return;
        }
    }
    ctx->pc = 0x221CD0u;
    // 0x221cd0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x221CD0u;
    {
        const bool branch_taken_0x221cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221cd0) {
            ctx->pc = 0x221CD8u;
            return;
        }
    }
    ctx->pc = 0x221CD8u;
}
