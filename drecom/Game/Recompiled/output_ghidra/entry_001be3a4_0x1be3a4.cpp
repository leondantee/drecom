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

// Function: entry_001be3a4
// Address: 0x1be3a4 - 0x1be414
void entry_001be3a4_0x1be3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be3a4_0x1be3a4");
#endif

    ctx->pc = 0x1be3a4u;

    // 0x1be3a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be3a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1be3ac: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1be3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1be3b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1be3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1be3b4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BE3B4u;
    {
        const bool branch_taken_0x1be3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be3b4) {
            ctx->pc = 0x1BE41Cu;
            return;
        }
    }
    ctx->pc = 0x1BE3BCu;
    // 0x1be3bc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be3c0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be3c4: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1be3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1be3c8: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1be3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1be3cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1be3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1be3d0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1be3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1be3d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be3d8: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x1be3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x1be3dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1be3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be3e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1be3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be3e4: 0x1085000b  beq         $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE3E4u;
    {
        const bool branch_taken_0x1be3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1be3e4) {
            ctx->pc = 0x1BE414u;
            return;
        }
    }
    ctx->pc = 0x1BE3ECu;
    // 0x1be3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be3f0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE3F0u;
    {
        const bool branch_taken_0x1be3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be3f0) {
            ctx->pc = 0x1BE414u;
            return;
        }
    }
    ctx->pc = 0x1BE3F8u;
    // 0x1be3f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1be3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be3fc: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE3FCu;
    {
        const bool branch_taken_0x1be3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1be3fc) {
            ctx->pc = 0x1BE41Cu;
            return;
        }
    }
    ctx->pc = 0x1BE404u;
    // 0x1be404: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE404u;
    {
        const bool branch_taken_0x1be404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be404) {
            ctx->pc = 0x1BE41Cu;
            return;
        }
    }
    ctx->pc = 0x1BE40Cu;
    // 0x1be40c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE40Cu;
    {
        const bool branch_taken_0x1be40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be40c) {
            ctx->pc = 0x1BE41Cu;
            return;
        }
    }
    ctx->pc = 0x1BE414u;
}
