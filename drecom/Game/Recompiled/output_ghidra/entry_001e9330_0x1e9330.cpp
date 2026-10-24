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

// Function: entry_001e9330
// Address: 0x1e9330 - 0x1e93c8
void entry_001e9330_0x1e9330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9330_0x1e9330");
#endif

    ctx->pc = 0x1e9330u;

    // 0x1e9330: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9334: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1e9334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x1e9338: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1e9338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e933c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1e933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1e9340: 0x10a300ef  beq         $a1, $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x1E9340u;
    {
        const bool branch_taken_0x1e9340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9340) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E9348u;
    // 0x1e9348: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1e9348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1e934c: 0x10a400ec  beq         $a1, $a0, . + 4 + (0xEC << 2)
    ctx->pc = 0x1E934Cu;
    {
        const bool branch_taken_0x1e934c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e934c) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E9354u;
    // 0x1e9354: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e9354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e9358: 0x10a300e9  beq         $a1, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x1E9358u;
    {
        const bool branch_taken_0x1e9358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9358) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E9360u;
    // 0x1e9360: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e9360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e9364: 0x10a300e6  beq         $a1, $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1E9364u;
    {
        const bool branch_taken_0x1e9364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9364) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E936Cu;
    // 0x1e936c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1e936cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e9370: 0x10a600e3  beq         $a1, $a2, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1E9370u;
    {
        const bool branch_taken_0x1e9370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e9370) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E9378u;
    // 0x1e9378: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1e9378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e937c: 0x10a300e0  beq         $a1, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x1E937Cu;
    {
        const bool branch_taken_0x1e937c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e937c) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E9384u;
    // 0x1e9384: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e9388: 0x10a300dd  beq         $a1, $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x1E9388u;
    {
        const bool branch_taken_0x1e9388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9388) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E9390u;
    // 0x1e9390: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1e9390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1e9394: 0x10a300da  beq         $a1, $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x1E9394u;
    {
        const bool branch_taken_0x1e9394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9394) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E939Cu;
    // 0x1e939c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e93a0: 0x10a300d7  beq         $a1, $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1E93A0u;
    {
        const bool branch_taken_0x1e93a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e93a0) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E93A8u;
    // 0x1e93a8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1e93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e93ac: 0x10a300d4  beq         $a1, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x1E93ACu;
    {
        const bool branch_taken_0x1e93ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e93ac) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E93B4u;
    // 0x1e93b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e93b8: 0x10a300d1  beq         $a1, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x1E93B8u;
    {
        const bool branch_taken_0x1e93b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e93b8) {
            ctx->pc = 0x1E9700u;
            return;
        }
    }
    ctx->pc = 0x1E93C0u;
    // 0x1e93c0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E93C0u;
    {
        const bool branch_taken_0x1e93c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e93c0) {
            ctx->pc = 0x1E93C8u;
            return;
        }
    }
    ctx->pc = 0x1E93C8u;
}
