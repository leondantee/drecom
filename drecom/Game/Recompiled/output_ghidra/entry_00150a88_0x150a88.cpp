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

// Function: entry_00150a88
// Address: 0x150a88 - 0x150b34
void entry_00150a88_0x150a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150a88_0x150a88");
#endif

    ctx->pc = 0x150a88u;

    // 0x150a88: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x150a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x150a8c: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x150A8Cu;
    {
        const bool branch_taken_0x150a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150a8c) {
            ctx->pc = 0x150944u;
            return;
        }
    }
    ctx->pc = 0x150A94u;
    // 0x150a94: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x150a94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150a98: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x150a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x150a9c: 0x3c07fff7  lui         $a3, 0xFFF7
    ctx->pc = 0x150a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65527 << 16));
    // 0x150aa0: 0x34e6ffff  ori         $a2, $a3, 0xFFFF
    ctx->pc = 0x150aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x150aa4: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x150aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x150aa8: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x150aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x150aac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x150aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x150ab0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x150ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x150ab4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x150ab8: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x150ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x150abc: 0x10c00295  beqz        $a2, . + 4 + (0x295 << 2)
    ctx->pc = 0x150ABCu;
    {
        const bool branch_taken_0x150abc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x150abc) {
            ctx->pc = 0x151514u;
            return;
        }
    }
    ctx->pc = 0x150AC4u;
    // 0x150ac4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ac8: 0x90831576  lbu         $v1, 0x1576($a0)
    ctx->pc = 0x150ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5494)));
    // 0x150acc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x150accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x150ad0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x150ad4: 0x10a301f3  beq         $a1, $v1, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x150AD4u;
    {
        const bool branch_taken_0x150ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x150ad4) {
            ctx->pc = 0x1512A4u;
            return;
        }
    }
    ctx->pc = 0x150ADCu;
    // 0x150adc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150ae0: 0x10a201f0  beq         $a1, $v0, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x150AE0u;
    {
        const bool branch_taken_0x150ae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150ae0) {
            ctx->pc = 0x1512A4u;
            return;
        }
    }
    ctx->pc = 0x150AE8u;
    // 0x150ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150aec: 0x10a201ed  beq         $a1, $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x150AECu;
    {
        const bool branch_taken_0x150aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150aec) {
            ctx->pc = 0x1512A4u;
            return;
        }
    }
    ctx->pc = 0x150AF4u;
    // 0x150af4: 0x10a001eb  beqz        $a1, . + 4 + (0x1EB << 2)
    ctx->pc = 0x150AF4u;
    {
        const bool branch_taken_0x150af4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x150af4) {
            ctx->pc = 0x1512A4u;
            return;
        }
    }
    ctx->pc = 0x150AFCu;
    // 0x150afc: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x150afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x150b00: 0x10b00155  beq         $a1, $s0, . + 4 + (0x155 << 2)
    ctx->pc = 0x150B00u;
    {
        const bool branch_taken_0x150b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x150b00) {
            ctx->pc = 0x151058u;
            return;
        }
    }
    ctx->pc = 0x150B08u;
    // 0x150b08: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x150b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x150b0c: 0x10a40152  beq         $a1, $a0, . + 4 + (0x152 << 2)
    ctx->pc = 0x150B0Cu;
    {
        const bool branch_taken_0x150b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x150b0c) {
            ctx->pc = 0x151058u;
            return;
        }
    }
    ctx->pc = 0x150B14u;
    // 0x150b14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x150b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x150b18: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x150B18u;
    {
        const bool branch_taken_0x150b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x150b18) {
            ctx->pc = 0x150B34u;
            return;
        }
    }
    ctx->pc = 0x150B20u;
    // 0x150b20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x150b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150b24: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150B24u;
    {
        const bool branch_taken_0x150b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150b24) {
            ctx->pc = 0x150B34u;
            return;
        }
    }
    ctx->pc = 0x150B2Cu;
    // 0x150b2c: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x150B2Cu;
    {
        const bool branch_taken_0x150b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b2c) {
            ctx->pc = 0x1512A4u;
            return;
        }
    }
    ctx->pc = 0x150B34u;
}
