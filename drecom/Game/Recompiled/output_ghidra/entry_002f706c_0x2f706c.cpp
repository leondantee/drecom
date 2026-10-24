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

// Function: entry_002f706c
// Address: 0x2f706c - 0x2f70f4
void entry_002f706c_0x2f706c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f706c_0x2f706c");
#endif

    ctx->pc = 0x2f706cu;

    // 0x2f706c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7070: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2f7070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f7074: 0x30e40004  andi        $a0, $a3, 0x4
    ctx->pc = 0x2f7074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x2f7078: 0x10800185  beqz        $a0, . + 4 + (0x185 << 2)
    ctx->pc = 0x2F7078u;
    {
        const bool branch_taken_0x2f7078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7078) {
            ctx->pc = 0x2F7690u;
            return;
        }
    }
    ctx->pc = 0x2F7080u;
    // 0x2f7080: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7084: 0x90660101  lbu         $a2, 0x101($v1)
    ctx->pc = 0x2f7084u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
    // 0x2f7088: 0x14c00181  bnez        $a2, . + 4 + (0x181 << 2)
    ctx->pc = 0x2F7088u;
    {
        const bool branch_taken_0x2f7088 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7088) {
            ctx->pc = 0x2F7690u;
            return;
        }
    }
    ctx->pc = 0x2F7090u;
    // 0x2f7090: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f7090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7094: 0x90e80100  lbu         $t0, 0x100($a3)
    ctx->pc = 0x2f7094u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x2f7098: 0x310b00ff  andi        $t3, $t0, 0xFF
    ctx->pc = 0x2f7098u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f709c: 0x240a0063  addiu       $t2, $zero, 0x63
    ctx->pc = 0x2f709cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f70a0: 0x116a0176  beq         $t3, $t2, . + 4 + (0x176 << 2)
    ctx->pc = 0x2F70A0u;
    {
        const bool branch_taken_0x2f70a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        if (branch_taken_0x2f70a0) {
            ctx->pc = 0x2F767Cu;
            return;
        }
    }
    ctx->pc = 0x2F70A8u;
    // 0x2f70a8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2f70a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f70ac: 0x1168014d  beq         $t3, $t0, . + 4 + (0x14D << 2)
    ctx->pc = 0x2F70ACu;
    {
        const bool branch_taken_0x2f70ac = (GPR_U64(ctx, 11) == GPR_U64(ctx, 8));
        if (branch_taken_0x2f70ac) {
            ctx->pc = 0x2F75E4u;
            return;
        }
    }
    ctx->pc = 0x2F70B4u;
    // 0x2f70b4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2f70b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f70b8: 0x11690120  beq         $t3, $t1, . + 4 + (0x120 << 2)
    ctx->pc = 0x2F70B8u;
    {
        const bool branch_taken_0x2f70b8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 9));
        if (branch_taken_0x2f70b8) {
            ctx->pc = 0x2F753Cu;
            return;
        }
    }
    ctx->pc = 0x2F70C0u;
    // 0x2f70c0: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2f70c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f70c4: 0x116a00c5  beq         $t3, $t2, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2F70C4u;
    {
        const bool branch_taken_0x2f70c4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        if (branch_taken_0x2f70c4) {
            ctx->pc = 0x2F73DCu;
            return;
        }
    }
    ctx->pc = 0x2F70CCu;
    // 0x2f70cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f70d0: 0x11630084  beq         $t3, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2F70D0u;
    {
        const bool branch_taken_0x2f70d0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f70d0) {
            ctx->pc = 0x2F72E4u;
            return;
        }
    }
    ctx->pc = 0x2F70D8u;
    // 0x2f70d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f70dc: 0x11630045  beq         $t3, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2F70DCu;
    {
        const bool branch_taken_0x2f70dc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f70dc) {
            ctx->pc = 0x2F71F4u;
            return;
        }
    }
    ctx->pc = 0x2F70E4u;
    // 0x2f70e4: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F70E4u;
    {
        const bool branch_taken_0x2f70e4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f70e4) {
            ctx->pc = 0x2F70F4u;
            return;
        }
    }
    ctx->pc = 0x2F70ECu;
    // 0x2f70ec: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x2F70ECu;
    {
        const bool branch_taken_0x2f70ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f70ec) {
            ctx->pc = 0x2F7690u;
            return;
        }
    }
    ctx->pc = 0x2F70F4u;
}
