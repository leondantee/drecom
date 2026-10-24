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

// Function: entry_0035fcb4
// Address: 0x35fcb4 - 0x35fd34
void entry_0035fcb4_0x35fcb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035fcb4_0x35fcb4");
#endif

    ctx->pc = 0x35fcb4u;

    // 0x35fcb4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fcb8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x35fcb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x35fcbc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35fcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35fcc0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35fcc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35fcc4: 0x4610028  bgez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x35FCC4u;
    {
        const bool branch_taken_0x35fcc4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x35fcc4) {
            ctx->pc = 0x35FD68u;
            return;
        }
    }
    ctx->pc = 0x35FCCCu;
    // 0x35fccc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fcd0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x35fcd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x35fcd4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x35fcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35fcd8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x35fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35fcdc: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x35FCDCu;
    {
        const bool branch_taken_0x35fcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fcdc) {
            ctx->pc = 0x35FD34u;
            return;
        }
    }
    ctx->pc = 0x35FCE4u;
    // 0x35fce4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x35fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x35fce8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x35FCE8u;
    {
        const bool branch_taken_0x35fce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fce8) {
            ctx->pc = 0x35FD34u;
            return;
        }
    }
    ctx->pc = 0x35FCF0u;
    // 0x35fcf0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x35fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x35fcf4: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x35FCF4u;
    {
        const bool branch_taken_0x35fcf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fcf4) {
            ctx->pc = 0x35FD34u;
            return;
        }
    }
    ctx->pc = 0x35FCFCu;
    // 0x35fcfc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x35fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35fd00: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35FD00u;
    {
        const bool branch_taken_0x35fd00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd00) {
            ctx->pc = 0x35FD34u;
            return;
        }
    }
    ctx->pc = 0x35FD08u;
    // 0x35fd08: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x35fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x35fd0c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35FD0Cu;
    {
        const bool branch_taken_0x35fd0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd0c) {
            ctx->pc = 0x35FD34u;
            return;
        }
    }
    ctx->pc = 0x35FD14u;
    // 0x35fd14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fd18: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35FD18u;
    {
        const bool branch_taken_0x35fd18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd18) {
            ctx->pc = 0x35FD34u;
            return;
        }
    }
    ctx->pc = 0x35FD20u;
    // 0x35fd20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fd24: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35FD24u;
    {
        const bool branch_taken_0x35fd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd24) {
            ctx->pc = 0x35FD34u;
            return;
        }
    }
    ctx->pc = 0x35FD2Cu;
    // 0x35fd2c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x35FD2Cu;
    {
        const bool branch_taken_0x35fd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fd2c) {
            ctx->pc = 0x35FD34u;
            return;
        }
    }
    ctx->pc = 0x35FD34u;
}
