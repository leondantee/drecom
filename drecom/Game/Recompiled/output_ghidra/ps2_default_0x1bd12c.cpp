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

// Function: default
// Address: 0x1bd12c - 0x1bd184
void ps2_default_0x1bd12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1bd12c");
#endif

    ctx->pc = 0x1bd12cu;

    // 0x1bd12c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd130: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bd130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd134: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bd134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bd138: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bd138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bd13c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BD13Cu;
    {
        const bool branch_taken_0x1bd13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd13c) {
            ctx->pc = 0x1BD18Cu;
            return;
        }
    }
    ctx->pc = 0x1BD144u;
    // 0x1bd144: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd148: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1bd148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1bd14c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd150: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd154: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BD154u;
    {
        const bool branch_taken_0x1bd154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd154) {
            ctx->pc = 0x1BD184u;
            return;
        }
    }
    ctx->pc = 0x1BD15Cu;
    // 0x1bd15c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd160: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD160u;
    {
        const bool branch_taken_0x1bd160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bd160) {
            ctx->pc = 0x1BD184u;
            return;
        }
    }
    ctx->pc = 0x1BD168u;
    // 0x1bd168: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bd168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd16c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD16Cu;
    {
        const bool branch_taken_0x1bd16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd16c) {
            ctx->pc = 0x1BD18Cu;
            return;
        }
    }
    ctx->pc = 0x1BD174u;
    // 0x1bd174: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD174u;
    {
        const bool branch_taken_0x1bd174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd174) {
            ctx->pc = 0x1BD18Cu;
            return;
        }
    }
    ctx->pc = 0x1BD17Cu;
    // 0x1bd17c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD17Cu;
    {
        const bool branch_taken_0x1bd17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd17c) {
            ctx->pc = 0x1BD18Cu;
            return;
        }
    }
    ctx->pc = 0x1BD184u;
}
