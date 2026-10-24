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

// Function: entry_0035fd68
// Address: 0x35fd68 - 0x35fe4c
void entry_0035fd68_0x35fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035fd68_0x35fd68");
#endif

    ctx->pc = 0x35fd68u;

    // 0x35fd68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd6c: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x35fd6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x35fd70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd74: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x35fd74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fd78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd7c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x35fd7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x35fd80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x35fd80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35fd84: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x35fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x35fd88: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x35FD88u;
    {
        const bool branch_taken_0x35fd88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd88) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FD90u;
    // 0x35fd90: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x35fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x35fd94: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x35FD94u;
    {
        const bool branch_taken_0x35fd94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd94) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FD9Cu;
    // 0x35fd9c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x35fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x35fda0: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x35FDA0u;
    {
        const bool branch_taken_0x35fda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fda0) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FDA8u;
    // 0x35fda8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x35fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x35fdac: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x35FDACu;
    {
        const bool branch_taken_0x35fdac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdac) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FDB4u;
    // 0x35fdb4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x35fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x35fdb8: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x35FDB8u;
    {
        const bool branch_taken_0x35fdb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdb8) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FDC0u;
    // 0x35fdc0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x35fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35fdc4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x35FDC4u;
    {
        const bool branch_taken_0x35fdc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdc4) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FDCCu;
    // 0x35fdcc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x35fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35fdd0: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x35FDD0u;
    {
        const bool branch_taken_0x35fdd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdd0) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FDD8u;
    // 0x35fdd8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x35fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35fddc: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x35FDDCu;
    {
        const bool branch_taken_0x35fddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fddc) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FDE4u;
    // 0x35fde4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35fde8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x35FDE8u;
    {
        const bool branch_taken_0x35fde8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fde8) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FDF0u;
    // 0x35fdf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fdf4: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x35FDF4u;
    {
        const bool branch_taken_0x35fdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdf4) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FDFCu;
    // 0x35fdfc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x35fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x35fe00: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x35FE00u;
    {
        const bool branch_taken_0x35fe00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe00) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FE08u;
    // 0x35fe08: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x35fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x35fe0c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x35FE0Cu;
    {
        const bool branch_taken_0x35fe0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe0c) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FE14u;
    // 0x35fe14: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x35fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35fe18: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x35FE18u;
    {
        const bool branch_taken_0x35fe18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe18) {
            ctx->pc = 0x35FE80u;
            return;
        }
    }
    ctx->pc = 0x35FE20u;
    // 0x35fe20: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x35fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x35fe24: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35FE24u;
    {
        const bool branch_taken_0x35fe24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe24) {
            ctx->pc = 0x35FE4Cu;
            return;
        }
    }
    ctx->pc = 0x35FE2Cu;
    // 0x35fe2c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x35fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35fe30: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35FE30u;
    {
        const bool branch_taken_0x35fe30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe30) {
            ctx->pc = 0x35FE4Cu;
            return;
        }
    }
    ctx->pc = 0x35FE38u;
    // 0x35fe38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fe3c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35FE3Cu;
    {
        const bool branch_taken_0x35fe3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe3c) {
            ctx->pc = 0x35FE4Cu;
            return;
        }
    }
    ctx->pc = 0x35FE44u;
    // 0x35fe44: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x35FE44u;
    {
        const bool branch_taken_0x35fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe44) {
            ctx->pc = 0x35FE4Cu;
            return;
        }
    }
    ctx->pc = 0x35FE4Cu;
}
