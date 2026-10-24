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

// Function: entry_00194340
// Address: 0x194340 - 0x194360
void entry_00194340_0x194340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194340_0x194340");
#endif

    ctx->pc = 0x194340u;

    // 0x194340: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x194340u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x194344: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x194344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x194348: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x194348u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x19434c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19434cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194350: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x194350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x194354: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x194354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x194358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19435c: 0x0  nop
    ctx->pc = 0x19435cu;
    // NOP
    ctx->pc = 0x194360u;
}
