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

// Function: entry_0020abcc
// Address: 0x20abcc - 0x20abfc
void entry_0020abcc_0x20abcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020abcc_0x20abcc");
#endif

    ctx->pc = 0x20abccu;

    // 0x20abcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20abd0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abd4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20abd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20abd8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20abdc: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abe0: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x20abe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x20abe4: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abe8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x20abe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20abec: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abf0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x20abf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20abf4: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abf8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20abfcu;
}
