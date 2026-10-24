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

// Function: entry_00136188
// Address: 0x136188 - 0x1361dc
void entry_00136188_0x136188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136188_0x136188");
#endif

    ctx->pc = 0x136188u;

    // 0x136188: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x136188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13618c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x13618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x136190: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x136190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x136194: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x136194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x136198: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x136198u;
    {
        const bool branch_taken_0x136198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136198) {
            ctx->pc = 0x1362D4u;
            return;
        }
    }
    ctx->pc = 0x1361A0u;
    // 0x1361a0: 0x92030098  lbu         $v1, 0x98($s0)
    ctx->pc = 0x1361a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1361a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1361a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1361a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1361a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1361ac: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1361ACu;
    {
        const bool branch_taken_0x1361ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361ac) {
            ctx->pc = 0x1362BCu;
            return;
        }
    }
    ctx->pc = 0x1361B4u;
    // 0x1361b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1361b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1361b8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1361B8u;
    {
        const bool branch_taken_0x1361b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361b8) {
            ctx->pc = 0x136228u;
            return;
        }
    }
    ctx->pc = 0x1361C0u;
    // 0x1361c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1361c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1361c4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1361C4u;
    {
        const bool branch_taken_0x1361c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361c4) {
            ctx->pc = 0x136208u;
            return;
        }
    }
    ctx->pc = 0x1361CCu;
    // 0x1361cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1361CCu;
    {
        const bool branch_taken_0x1361cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1361cc) {
            ctx->pc = 0x1361DCu;
            return;
        }
    }
    ctx->pc = 0x1361D4u;
    // 0x1361d4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1361D4u;
    {
        const bool branch_taken_0x1361d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1361d4) {
            ctx->pc = 0x1362D4u;
            return;
        }
    }
    ctx->pc = 0x1361DCu;
}
