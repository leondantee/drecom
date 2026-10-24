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

// Function: entry_00292604
// Address: 0x292604 - 0x292640
void entry_00292604_0x292604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292604_0x292604");
#endif

    ctx->pc = 0x292604u;

    // 0x292604: 0x920265ab  lbu         $v0, 0x65AB($s0)
    ctx->pc = 0x292604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26027)));
    // 0x292608: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x292608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29260c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292610: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x292610u;
    {
        const bool branch_taken_0x292610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292610) {
            ctx->pc = 0x292640u;
            return;
        }
    }
    ctx->pc = 0x292618u;
    // 0x292618: 0x920365ac  lbu         $v1, 0x65AC($s0)
    ctx->pc = 0x292618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26028)));
    // 0x29261c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x29261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x292620: 0xa20265ac  sb          $v0, 0x65AC($s0)
    ctx->pc = 0x292620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26028), (uint8_t)GPR_U32(ctx, 2));
    // 0x292624: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x292624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x292628: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x292628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x29262c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x29262Cu;
    {
        const bool branch_taken_0x29262c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29262c) {
            ctx->pc = 0x292640u;
            return;
        }
    }
    ctx->pc = 0x292634u;
    // 0x292634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292638: 0xa20265a8  sb          $v0, 0x65A8($s0)
    ctx->pc = 0x292638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26024), (uint8_t)GPR_U32(ctx, 2));
    // 0x29263c: 0xa20065ab  sb          $zero, 0x65AB($s0)
    ctx->pc = 0x29263cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26027), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x292640u;
}
