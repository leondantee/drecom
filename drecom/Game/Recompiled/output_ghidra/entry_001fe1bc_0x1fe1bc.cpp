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

// Function: entry_001fe1bc
// Address: 0x1fe1bc - 0x1fe214
void entry_001fe1bc_0x1fe1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe1bc_0x1fe1bc");
#endif

    ctx->pc = 0x1fe1bcu;

    // 0x1fe1bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe1c0: 0x90650347  lbu         $a1, 0x347($v1)
    ctx->pc = 0x1fe1c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fe1c4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fe1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe1c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe1cc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fe1ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fe1d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe1d4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1fe1d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe1d8: 0x102000e9  beqz        $at, . + 4 + (0xE9 << 2)
    ctx->pc = 0x1FE1D8u;
    {
        const bool branch_taken_0x1fe1d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1d8) {
            ctx->pc = 0x1FE580u;
            return;
        }
    }
    ctx->pc = 0x1FE1E0u;
    // 0x1fe1e0: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1fe1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe1e4: 0x92030abc  lbu         $v1, 0xABC($s0)
    ctx->pc = 0x1fe1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2748)));
    // 0x1fe1e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe1e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe1ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fe1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe1f0: 0x108300b1  beq         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1FE1F0u;
    {
        const bool branch_taken_0x1fe1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe1f0) {
            ctx->pc = 0x1FE4B8u;
            return;
        }
    }
    ctx->pc = 0x1FE1F8u;
    // 0x1fe1f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe1fc: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FE1FCu;
    {
        const bool branch_taken_0x1fe1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe1fc) {
            ctx->pc = 0x1FE2C8u;
            return;
        }
    }
    ctx->pc = 0x1FE204u;
    // 0x1fe204: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE204u;
    {
        const bool branch_taken_0x1fe204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe204) {
            ctx->pc = 0x1FE214u;
            return;
        }
    }
    ctx->pc = 0x1FE20Cu;
    // 0x1fe20c: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x1FE20Cu;
    {
        const bool branch_taken_0x1fe20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe20c) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE214u;
}
