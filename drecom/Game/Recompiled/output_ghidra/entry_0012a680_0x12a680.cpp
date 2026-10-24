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

// Function: entry_0012a680
// Address: 0x12a680 - 0x12a718
void entry_0012a680_0x12a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a680_0x12a680");
#endif

    ctx->pc = 0x12a680u;

    // 0x12a680: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a684: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12a684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12a688: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12a688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12a68c: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12a68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12a690: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x12a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x12a694: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x12A694u;
    {
        const bool branch_taken_0x12a694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a694) {
            ctx->pc = 0x12A7E0u;
            return;
        }
    }
    ctx->pc = 0x12A69Cu;
    // 0x12a69c: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x12a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x12a6a0: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x12A6A0u;
    {
        const bool branch_taken_0x12a6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6a0) {
            ctx->pc = 0x12A7CCu;
            return;
        }
    }
    ctx->pc = 0x12A6A8u;
    // 0x12a6a8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12a6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a6ac: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x12A6ACu;
    {
        const bool branch_taken_0x12a6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6ac) {
            ctx->pc = 0x12A7B8u;
            return;
        }
    }
    ctx->pc = 0x12A6B4u;
    // 0x12a6b4: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x12a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x12a6b8: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x12A6B8u;
    {
        const bool branch_taken_0x12a6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6b8) {
            ctx->pc = 0x12A7A4u;
            return;
        }
    }
    ctx->pc = 0x12A6C0u;
    // 0x12a6c0: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x12a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x12a6c4: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x12A6C4u;
    {
        const bool branch_taken_0x12a6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6c4) {
            ctx->pc = 0x12A790u;
            return;
        }
    }
    ctx->pc = 0x12A6CCu;
    // 0x12a6cc: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x12a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x12a6d0: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x12A6D0u;
    {
        const bool branch_taken_0x12a6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6d0) {
            ctx->pc = 0x12A77Cu;
            return;
        }
    }
    ctx->pc = 0x12A6D8u;
    // 0x12a6d8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x12a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x12a6dc: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12A6DCu;
    {
        const bool branch_taken_0x12a6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6dc) {
            ctx->pc = 0x12A768u;
            return;
        }
    }
    ctx->pc = 0x12A6E4u;
    // 0x12a6e4: 0x24023000  addiu       $v0, $zero, 0x3000
    ctx->pc = 0x12a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x12a6e8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12A6E8u;
    {
        const bool branch_taken_0x12a6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6e8) {
            ctx->pc = 0x12A754u;
            return;
        }
    }
    ctx->pc = 0x12A6F0u;
    // 0x12a6f0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x12a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x12a6f4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12A6F4u;
    {
        const bool branch_taken_0x12a6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6f4) {
            ctx->pc = 0x12A740u;
            return;
        }
    }
    ctx->pc = 0x12A6FCu;
    // 0x12a6fc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x12a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x12a700: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12A700u;
    {
        const bool branch_taken_0x12a700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a700) {
            ctx->pc = 0x12A72Cu;
            return;
        }
    }
    ctx->pc = 0x12A708u;
    // 0x12a708: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A708u;
    {
        const bool branch_taken_0x12a708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a708) {
            ctx->pc = 0x12A718u;
            return;
        }
    }
    ctx->pc = 0x12A710u;
    // 0x12a710: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12A710u;
    {
        const bool branch_taken_0x12a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a710) {
            ctx->pc = 0x12A718u;
            return;
        }
    }
    ctx->pc = 0x12A718u;
}
