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

// Function: entry_00100244
// Address: 0x100244 - 0x10025c
void entry_00100244_0x100244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100244_0x100244");
#endif

    ctx->pc = 0x100244u;

    // 0x100244: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x100244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x100248: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x100248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10024c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x10024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x100250: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x100250u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 3));
    // 0x100254: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x100254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100258: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x100258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x10025cu;
}
