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

// Function: entry_0035f6d8
// Address: 0x35f6d8 - 0x35f73c
void entry_0035f6d8_0x35f6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f6d8_0x35f6d8");
#endif

    ctx->pc = 0x35f6d8u;

    // 0x35f6d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6dc: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x35f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x35f6e0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x35f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x35f6e4: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x35f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x35f6e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6ec: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f6f0: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x35f6f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x35f6f4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x35F6F4u;
    {
        const bool branch_taken_0x35f6f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f6f4) {
            ctx->pc = 0x35F73Cu;
            return;
        }
    }
    ctx->pc = 0x35F6FCu;
    // 0x35f6fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f700: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35f704: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x35f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35f708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35f708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35f70c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x35f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x35f710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f714: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f718: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35f718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f71c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f720: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35f720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f724: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f728: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35f728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f72c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f730: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35f730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f738: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35f738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x35f73cu;
}
