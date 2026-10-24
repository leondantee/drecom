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

// Function: entry_0035f904
// Address: 0x35f904 - 0x35f940
void entry_0035f904_0x35f904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f904_0x35f904");
#endif

    ctx->pc = 0x35f904u;

    // 0x35f904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f908: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x35f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x35f90c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x35f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x35f910: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x35f910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x35f914: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f918: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x35f918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x35f91c: 0x2c410061  sltiu       $at, $v0, 0x61
    ctx->pc = 0x35f91cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x35f920: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x35F920u;
    {
        const bool branch_taken_0x35f920 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f920) {
            ctx->pc = 0x35F9C4u;
            return;
        }
    }
    ctx->pc = 0x35F928u;
    // 0x35f928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f92c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f930: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f934: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f938: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35F938u;
    {
        const bool branch_taken_0x35f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f938) {
            ctx->pc = 0x35F9C4u;
            return;
        }
    }
    ctx->pc = 0x35F940u;
}
