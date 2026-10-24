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

// Function: entry_001bb8ac
// Address: 0x1bb8ac - 0x1bb924
void entry_001bb8ac_0x1bb8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb8ac_0x1bb8ac");
#endif

    ctx->pc = 0x1bb8acu;

    // 0x1bb8ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb8b0: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1bb8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1bb8b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb8b8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bb8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bb8bc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bb8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bb8c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bb8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bb8c4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BB8C4u;
    {
        const bool branch_taken_0x1bb8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8c4) {
            ctx->pc = 0x1BB92Cu;
            return;
        }
    }
    ctx->pc = 0x1BB8CCu;
    // 0x1bb8cc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb8d0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1bb8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bb8d4: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1bb8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1bb8d8: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1bb8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bb8dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bb8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bb8e0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1bb8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1bb8e4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb8e8: 0x90a613a6  lbu         $a2, 0x13A6($a1)
    ctx->pc = 0x1bb8e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5030)));
    // 0x1bb8ec: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bb8ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bb8f0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1bb8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb8f4: 0x10e8000b  beq         $a3, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB8F4u;
    {
        const bool branch_taken_0x1bb8f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x1bb8f4) {
            ctx->pc = 0x1BB924u;
            return;
        }
    }
    ctx->pc = 0x1BB8FCu;
    // 0x1bb8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb900: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB900u;
    {
        const bool branch_taken_0x1bb900 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bb900) {
            ctx->pc = 0x1BB924u;
            return;
        }
    }
    ctx->pc = 0x1BB908u;
    // 0x1bb908: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bb908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb90c: 0x10e40007  beq         $a3, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB90Cu;
    {
        const bool branch_taken_0x1bb90c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bb90c) {
            ctx->pc = 0x1BB92Cu;
            return;
        }
    }
    ctx->pc = 0x1BB914u;
    // 0x1bb914: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB914u;
    {
        const bool branch_taken_0x1bb914 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb914) {
            ctx->pc = 0x1BB92Cu;
            return;
        }
    }
    ctx->pc = 0x1BB91Cu;
    // 0x1bb91c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB91Cu;
    {
        const bool branch_taken_0x1bb91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb91c) {
            ctx->pc = 0x1BB92Cu;
            return;
        }
    }
    ctx->pc = 0x1BB924u;
}
