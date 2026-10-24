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

// Function: entry_00121608
// Address: 0x121608 - 0x121700
void entry_00121608_0x121608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121608_0x121608");
#endif

    ctx->pc = 0x121608u;

    // 0x121608: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12160c: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x12160cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x121610: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x121610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x121614: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x121614u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x121618: 0x48100fe  bgez        $a0, . + 4 + (0xFE << 2)
    ctx->pc = 0x121618u;
    {
        const bool branch_taken_0x121618 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x121618) {
            ctx->pc = 0x121A14u;
            return;
        }
    }
    ctx->pc = 0x121620u;
    // 0x121620: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121624: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x121624u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x121628: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x121628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12162c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x12162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x121630: 0x10c400bd  beq         $a2, $a0, . + 4 + (0xBD << 2)
    ctx->pc = 0x121630u;
    {
        const bool branch_taken_0x121630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x121630) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x121638u;
    // 0x121638: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x121638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12163c: 0x10c500ba  beq         $a2, $a1, . + 4 + (0xBA << 2)
    ctx->pc = 0x12163Cu;
    {
        const bool branch_taken_0x12163c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x12163c) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x121644u;
    // 0x121644: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x121644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x121648: 0x10c500b7  beq         $a2, $a1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x121648u;
    {
        const bool branch_taken_0x121648 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x121648) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x121650u;
    // 0x121650: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x121650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x121654: 0x10c300b4  beq         $a2, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x121654u;
    {
        const bool branch_taken_0x121654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x121654) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x12165Cu;
    // 0x12165c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x12165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x121660: 0x10c400b1  beq         $a2, $a0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x121660u;
    {
        const bool branch_taken_0x121660 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x121660) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x121668u;
    // 0x121668: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x121668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12166c: 0x10c300ae  beq         $a2, $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x12166Cu;
    {
        const bool branch_taken_0x12166c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12166c) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x121674u;
    // 0x121674: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x121674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x121678: 0x10c300ab  beq         $a2, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x121678u;
    {
        const bool branch_taken_0x121678 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x121678) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x121680u;
    // 0x121680: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x121680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x121684: 0x10c500a8  beq         $a2, $a1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x121684u;
    {
        const bool branch_taken_0x121684 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x121684) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x12168Cu;
    // 0x12168c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12168cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x121690: 0x10c400a5  beq         $a2, $a0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x121690u;
    {
        const bool branch_taken_0x121690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x121690) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x121698u;
    // 0x121698: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x121698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12169c: 0x10c300a2  beq         $a2, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x12169Cu;
    {
        const bool branch_taken_0x12169c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12169c) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x1216A4u;
    // 0x1216a4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1216a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1216a8: 0x10c3009f  beq         $a2, $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x1216A8u;
    {
        const bool branch_taken_0x1216a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1216a8) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x1216B0u;
    // 0x1216b0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1216b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1216b4: 0x10c3009c  beq         $a2, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x1216B4u;
    {
        const bool branch_taken_0x1216b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1216b4) {
            ctx->pc = 0x121928u;
            return;
        }
    }
    ctx->pc = 0x1216BCu;
    // 0x1216bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1216bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1216c0: 0x10c5005e  beq         $a2, $a1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1216C0u;
    {
        const bool branch_taken_0x1216c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1216c0) {
            ctx->pc = 0x12183Cu;
            return;
        }
    }
    ctx->pc = 0x1216C8u;
    // 0x1216c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1216c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1216cc: 0x10c4005b  beq         $a2, $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1216CCu;
    {
        const bool branch_taken_0x1216cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1216cc) {
            ctx->pc = 0x12183Cu;
            return;
        }
    }
    ctx->pc = 0x1216D4u;
    // 0x1216d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1216d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1216d8: 0x10c30058  beq         $a2, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1216D8u;
    {
        const bool branch_taken_0x1216d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1216d8) {
            ctx->pc = 0x12183Cu;
            return;
        }
    }
    ctx->pc = 0x1216E0u;
    // 0x1216e0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1216e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1216e4: 0x10c40055  beq         $a2, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1216E4u;
    {
        const bool branch_taken_0x1216e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1216e4) {
            ctx->pc = 0x12183Cu;
            return;
        }
    }
    ctx->pc = 0x1216ECu;
    // 0x1216ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1216ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1216f0: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1216F0u;
    {
        const bool branch_taken_0x1216f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1216f0) {
            ctx->pc = 0x121700u;
            return;
        }
    }
    ctx->pc = 0x1216F8u;
    // 0x1216f8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1216F8u;
    {
        const bool branch_taken_0x1216f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1216f8) {
            ctx->pc = 0x121700u;
            return;
        }
    }
    ctx->pc = 0x121700u;
}
