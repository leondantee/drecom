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

// Function: entry_002d82c8
// Address: 0x2d82c8 - 0x2d8348
void entry_002d82c8_0x2d82c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d82c8_0x2d82c8");
#endif

    ctx->pc = 0x2d82c8u;

    // 0x2d82c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d82cc: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2d82ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2d82d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d82d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d82d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d82d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d82d8: 0x461002e  bgez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D82D8u;
    {
        const bool branch_taken_0x2d82d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d82d8) {
            ctx->pc = 0x2D8394u;
            return;
        }
    }
    ctx->pc = 0x2D82E0u;
    // 0x2d82e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d82e4: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x2d82e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x2d82e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d82e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d82ec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2d82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d82f0: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D82F0u;
    {
        const bool branch_taken_0x2d82f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d82f0) {
            ctx->pc = 0x2D8348u;
            return;
        }
    }
    ctx->pc = 0x2D82F8u;
    // 0x2d82f8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2d82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d82fc: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D82FCu;
    {
        const bool branch_taken_0x2d82fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d82fc) {
            ctx->pc = 0x2D8348u;
            return;
        }
    }
    ctx->pc = 0x2D8304u;
    // 0x2d8304: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2d8304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d8308: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D8308u;
    {
        const bool branch_taken_0x2d8308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8308) {
            ctx->pc = 0x2D8348u;
            return;
        }
    }
    ctx->pc = 0x2D8310u;
    // 0x2d8310: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d8310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8314: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D8314u;
    {
        const bool branch_taken_0x2d8314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8314) {
            ctx->pc = 0x2D8348u;
            return;
        }
    }
    ctx->pc = 0x2D831Cu;
    // 0x2d831c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2d831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d8320: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8320u;
    {
        const bool branch_taken_0x2d8320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d8320) {
            ctx->pc = 0x2D8348u;
            return;
        }
    }
    ctx->pc = 0x2D8328u;
    // 0x2d8328: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d832c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D832Cu;
    {
        const bool branch_taken_0x2d832c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d832c) {
            ctx->pc = 0x2D8348u;
            return;
        }
    }
    ctx->pc = 0x2D8334u;
    // 0x2d8334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8338: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8338u;
    {
        const bool branch_taken_0x2d8338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8338) {
            ctx->pc = 0x2D8348u;
            return;
        }
    }
    ctx->pc = 0x2D8340u;
    // 0x2d8340: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D8340u;
    {
        const bool branch_taken_0x2d8340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8340) {
            ctx->pc = 0x2D8348u;
            return;
        }
    }
    ctx->pc = 0x2D8348u;
}
