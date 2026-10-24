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

// Function: entry_002f7690
// Address: 0x2f7690 - 0x2f7718
void entry_002f7690_0x2f7690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7690_0x2f7690");
#endif

    ctx->pc = 0x2f7690u;

    // 0x2f7690: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7694: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2f7694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f7698: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x2f7698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2f769c: 0x10800194  beqz        $a0, . + 4 + (0x194 << 2)
    ctx->pc = 0x2F769Cu;
    {
        const bool branch_taken_0x2f769c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f769c) {
            ctx->pc = 0x2F7CF0u;
            return;
        }
    }
    ctx->pc = 0x2F76A4u;
    // 0x2f76a4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f76a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f76a8: 0x90a60101  lbu         $a2, 0x101($a1)
    ctx->pc = 0x2f76a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 257)));
    // 0x2f76ac: 0x14c00190  bnez        $a2, . + 4 + (0x190 << 2)
    ctx->pc = 0x2F76ACu;
    {
        const bool branch_taken_0x2f76ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f76ac) {
            ctx->pc = 0x2F7CF0u;
            return;
        }
    }
    ctx->pc = 0x2F76B4u;
    // 0x2f76b4: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f76b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f76b8: 0x90e80100  lbu         $t0, 0x100($a3)
    ctx->pc = 0x2f76b8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x2f76bc: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x2f76bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f76c0: 0x240a0063  addiu       $t2, $zero, 0x63
    ctx->pc = 0x2f76c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f76c4: 0x112a0185  beq         $t1, $t2, . + 4 + (0x185 << 2)
    ctx->pc = 0x2F76C4u;
    {
        const bool branch_taken_0x2f76c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x2f76c4) {
            ctx->pc = 0x2F7CDCu;
            return;
        }
    }
    ctx->pc = 0x2F76CCu;
    // 0x2f76cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f76d0: 0x11230159  beq         $t1, $v1, . + 4 + (0x159 << 2)
    ctx->pc = 0x2F76D0u;
    {
        const bool branch_taken_0x2f76d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f76d0) {
            ctx->pc = 0x2F7C38u;
            return;
        }
    }
    ctx->pc = 0x2F76D8u;
    // 0x2f76d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2f76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f76dc: 0x1124012b  beq         $t1, $a0, . + 4 + (0x12B << 2)
    ctx->pc = 0x2F76DCu;
    {
        const bool branch_taken_0x2f76dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f76dc) {
            ctx->pc = 0x2F7B8Cu;
            return;
        }
    }
    ctx->pc = 0x2F76E4u;
    // 0x2f76e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f76e8: 0x112300d1  beq         $t1, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x2F76E8u;
    {
        const bool branch_taken_0x2f76e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f76e8) {
            ctx->pc = 0x2F7A30u;
            return;
        }
    }
    ctx->pc = 0x2F76F0u;
    // 0x2f76f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f76f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f76f4: 0x11250087  beq         $t1, $a1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2F76F4u;
    {
        const bool branch_taken_0x2f76f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f76f4) {
            ctx->pc = 0x2F7914u;
            return;
        }
    }
    ctx->pc = 0x2F76FCu;
    // 0x2f76fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7700: 0x11230047  beq         $t1, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F7700u;
    {
        const bool branch_taken_0x2f7700 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f7700) {
            ctx->pc = 0x2F7820u;
            return;
        }
    }
    ctx->pc = 0x2F7708u;
    // 0x2f7708: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7708u;
    {
        const bool branch_taken_0x2f7708 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7708) {
            ctx->pc = 0x2F7718u;
            return;
        }
    }
    ctx->pc = 0x2F7710u;
    // 0x2f7710: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x2F7710u;
    {
        const bool branch_taken_0x2f7710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7710) {
            ctx->pc = 0x2F7CF0u;
            return;
        }
    }
    ctx->pc = 0x2F7718u;
}
