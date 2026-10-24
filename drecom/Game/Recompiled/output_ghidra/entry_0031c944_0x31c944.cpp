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

// Function: entry_0031c944
// Address: 0x31c944 - 0x31c97c
void entry_0031c944_0x31c944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c944_0x31c944");
#endif

    ctx->pc = 0x31c944u;

    // 0x31c944: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c948: 0x8c631290  lw          $v1, 0x1290($v1)
    ctx->pc = 0x31c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31c94c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x31c94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31c950: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x31C950u;
    {
        const bool branch_taken_0x31c950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c950) {
            ctx->pc = 0x31CC58u;
            return;
        }
    }
    ctx->pc = 0x31C958u;
    // 0x31c958: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c95c: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x31c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31c960: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31c960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c964: 0x10470032  beq         $v0, $a3, . + 4 + (0x32 << 2)
    ctx->pc = 0x31C964u;
    {
        const bool branch_taken_0x31c964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x31c964) {
            ctx->pc = 0x31CA30u;
            return;
        }
    }
    ctx->pc = 0x31C96Cu;
    // 0x31c96c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C96Cu;
    {
        const bool branch_taken_0x31c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c96c) {
            ctx->pc = 0x31C97Cu;
            return;
        }
    }
    ctx->pc = 0x31C974u;
    // 0x31c974: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x31C974u;
    {
        const bool branch_taken_0x31c974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c974) {
            ctx->pc = 0x31CAD0u;
            return;
        }
    }
    ctx->pc = 0x31C97Cu;
}
