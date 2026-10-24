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

// Function: entry_001e9a80
// Address: 0x1e9a80 - 0x1e9b3c
void entry_001e9a80_0x1e9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9a80_0x1e9a80");
#endif

    ctx->pc = 0x1e9a80u;

    // 0x1e9a80: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9a84: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1e9a84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1e9a88: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e9a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e9a8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9a8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e9a90: 0x4600044  bltz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1E9A90u;
    {
        const bool branch_taken_0x1e9a90 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e9a90) {
            ctx->pc = 0x1E9BA4u;
            return;
        }
    }
    ctx->pc = 0x1E9A98u;
    // 0x1e9a98: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9a9c: 0x94a311f6  lhu         $v1, 0x11F6($a1)
    ctx->pc = 0x1e9a9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4598)));
    // 0x1e9aa0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e9aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e9aa4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1e9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1e9aa8: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E9AA8u;
    {
        const bool branch_taken_0x1e9aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9aa8) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9AB0u;
    // 0x1e9ab0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1e9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1e9ab4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E9AB4u;
    {
        const bool branch_taken_0x1e9ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9ab4) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9ABCu;
    // 0x1e9abc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1e9abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e9ac0: 0x1086002b  beq         $a0, $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x1E9AC0u;
    {
        const bool branch_taken_0x1e9ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e9ac0) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9AC8u;
    // 0x1e9ac8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e9acc: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E9ACCu;
    {
        const bool branch_taken_0x1e9acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9acc) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9AD4u;
    // 0x1e9ad4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e9ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e9ad8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E9AD8u;
    {
        const bool branch_taken_0x1e9ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9ad8) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9AE0u;
    // 0x1e9ae0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1e9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e9ae4: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E9AE4u;
    {
        const bool branch_taken_0x1e9ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9ae4) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9AECu;
    // 0x1e9aec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1e9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e9af0: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E9AF0u;
    {
        const bool branch_taken_0x1e9af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9af0) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9AF8u;
    // 0x1e9af8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1e9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1e9afc: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E9AFCu;
    {
        const bool branch_taken_0x1e9afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9afc) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9B04u;
    // 0x1e9b04: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e9b08: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E9B08u;
    {
        const bool branch_taken_0x1e9b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9b08) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9B10u;
    // 0x1e9b10: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1e9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e9b14: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E9B14u;
    {
        const bool branch_taken_0x1e9b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9b14) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9B1Cu;
    // 0x1e9b1c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e9b20: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9B20u;
    {
        const bool branch_taken_0x1e9b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9b20) {
            ctx->pc = 0x1E9B70u;
            return;
        }
    }
    ctx->pc = 0x1E9B28u;
    // 0x1e9b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9b2c: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9B2Cu;
    {
        const bool branch_taken_0x1e9b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e9b2c) {
            ctx->pc = 0x1E9B3Cu;
            return;
        }
    }
    ctx->pc = 0x1E9B34u;
    // 0x1e9b34: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9B34u;
    {
        const bool branch_taken_0x1e9b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b34) {
            ctx->pc = 0x1E9B3Cu;
            return;
        }
    }
    ctx->pc = 0x1E9B3Cu;
}
