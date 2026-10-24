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

// Function: entry_002d8448
// Address: 0x2d8448 - 0x2d84e0
void entry_002d8448_0x2d8448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8448_0x2d8448");
#endif

    ctx->pc = 0x2d8448u;

    // 0x2d8448: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d844c: 0x948311f6  lhu         $v1, 0x11F6($a0)
    ctx->pc = 0x2d844cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
    // 0x2d8450: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2d8450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d8454: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2d8454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d8458: 0x10a302b8  beq         $a1, $v1, . + 4 + (0x2B8 << 2)
    ctx->pc = 0x2D8458u;
    {
        const bool branch_taken_0x2d8458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8458) {
            ctx->pc = 0x2D8F3Cu;
            return;
        }
    }
    ctx->pc = 0x2D8460u;
    // 0x2d8460: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2d8460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d8464: 0x10a3026d  beq         $a1, $v1, . + 4 + (0x26D << 2)
    ctx->pc = 0x2D8464u;
    {
        const bool branch_taken_0x2d8464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8464) {
            ctx->pc = 0x2D8E1Cu;
            return;
        }
    }
    ctx->pc = 0x2D846Cu;
    // 0x2d846c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2d846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d8470: 0x10a3026a  beq         $a1, $v1, . + 4 + (0x26A << 2)
    ctx->pc = 0x2D8470u;
    {
        const bool branch_taken_0x2d8470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8470) {
            ctx->pc = 0x2D8E1Cu;
            return;
        }
    }
    ctx->pc = 0x2D8478u;
    // 0x2d8478: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2d8478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d847c: 0x10a3021e  beq         $a1, $v1, . + 4 + (0x21E << 2)
    ctx->pc = 0x2D847Cu;
    {
        const bool branch_taken_0x2d847c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d847c) {
            ctx->pc = 0x2D8CF8u;
            return;
        }
    }
    ctx->pc = 0x2D8484u;
    // 0x2d8484: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x2d8484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2d8488: 0x10a4021b  beq         $a1, $a0, . + 4 + (0x21B << 2)
    ctx->pc = 0x2D8488u;
    {
        const bool branch_taken_0x2d8488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d8488) {
            ctx->pc = 0x2D8CF8u;
            return;
        }
    }
    ctx->pc = 0x2D8490u;
    // 0x2d8490: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2d8490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d8494: 0x10a30191  beq         $a1, $v1, . + 4 + (0x191 << 2)
    ctx->pc = 0x2D8494u;
    {
        const bool branch_taken_0x2d8494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8494) {
            ctx->pc = 0x2D8ADCu;
            return;
        }
    }
    ctx->pc = 0x2D849Cu;
    // 0x2d849c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d84a0: 0x10a3014a  beq         $a1, $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x2D84A0u;
    {
        const bool branch_taken_0x2d84a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d84a0) {
            ctx->pc = 0x2D89CCu;
            return;
        }
    }
    ctx->pc = 0x2D84A8u;
    // 0x2d84a8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2d84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d84ac: 0x10a30138  beq         $a1, $v1, . + 4 + (0x138 << 2)
    ctx->pc = 0x2D84ACu;
    {
        const bool branch_taken_0x2d84ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d84ac) {
            ctx->pc = 0x2D8990u;
            return;
        }
    }
    ctx->pc = 0x2D84B4u;
    // 0x2d84b4: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2d84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2d84b8: 0x10a40126  beq         $a1, $a0, . + 4 + (0x126 << 2)
    ctx->pc = 0x2D84B8u;
    {
        const bool branch_taken_0x2d84b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d84b8) {
            ctx->pc = 0x2D8954u;
            return;
        }
    }
    ctx->pc = 0x2D84C0u;
    // 0x2d84c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d84c4: 0x10a30090  beq         $a1, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2D84C4u;
    {
        const bool branch_taken_0x2d84c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d84c4) {
            ctx->pc = 0x2D8708u;
            return;
        }
    }
    ctx->pc = 0x2D84CCu;
    // 0x2d84cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d84ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d84d0: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D84D0u;
    {
        const bool branch_taken_0x2d84d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d84d0) {
            ctx->pc = 0x2D84E0u;
            return;
        }
    }
    ctx->pc = 0x2D84D8u;
    // 0x2d84d8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D84D8u;
    {
        const bool branch_taken_0x2d84d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d84d8) {
            ctx->pc = 0x2D84E0u;
            return;
        }
    }
    ctx->pc = 0x2D84E0u;
}
