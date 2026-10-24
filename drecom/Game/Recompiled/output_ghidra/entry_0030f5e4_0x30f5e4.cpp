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

// Function: entry_0030f5e4
// Address: 0x30f5e4 - 0x30f698
void entry_0030f5e4_0x30f5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f5e4_0x30f5e4");
#endif

    ctx->pc = 0x30f5e4u;

    // 0x30f5e4: 0x8fa60298  lw          $a2, 0x298($sp)
    ctx->pc = 0x30f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f5e8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x30f5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30f5ec: 0x2272004  sllv        $a0, $a3, $s1
    ctx->pc = 0x30f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x30f5f0: 0x8cc61338  lw          $a2, 0x1338($a2)
    ctx->pc = 0x30f5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4920)));
    // 0x30f5f4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x30f5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x30f5f8: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30F5F8u;
    {
        const bool branch_taken_0x30f5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f5f8) {
            ctx->pc = 0x30F698u;
            return;
        }
    }
    ctx->pc = 0x30F600u;
    // 0x30f600: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30f600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30f604: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f608: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x30f608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x30f60c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f610: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f614: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x30f614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30f618: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30f61c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f620: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f624: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x30f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30f628: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30f628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f62c: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x30f62cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x30f630: 0x24e60028  addiu       $a2, $a3, 0x28
    ctx->pc = 0x30f630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x30f634: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x30f634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x30f638: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x30f638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x30f63c: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x30f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x30f640: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x30f640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x30f644: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x30f644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x30f648: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x30f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x30f64c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x30f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x30f650: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x30f650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x30f654: 0x2c810011  sltiu       $at, $a0, 0x11
    ctx->pc = 0x30f654u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x30f658: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x30F658u;
    {
        const bool branch_taken_0x30f658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f658) {
            ctx->pc = 0x30F698u;
            return;
        }
    }
    ctx->pc = 0x30F660u;
    // 0x30f660: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x30f660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x30f664: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x30f664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x30f668: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x30f668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30f66c: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x30f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x30f670: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30f674: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x30f674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x30f678: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x30f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30f67c: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x30f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x30f680: 0x603827  not         $a3, $v1
    ctx->pc = 0x30f680u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x30f684: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f688: 0x8c861338  lw          $a2, 0x1338($a0)
    ctx->pc = 0x30f688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f68c: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x30f68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x30f690: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x30f690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x30f694: 0x0  nop
    ctx->pc = 0x30f694u;
    // NOP
    ctx->pc = 0x30f698u;
}
