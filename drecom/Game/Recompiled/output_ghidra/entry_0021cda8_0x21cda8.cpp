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

// Function: entry_0021cda8
// Address: 0x21cda8 - 0x21cdc4
void entry_0021cda8_0x21cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cda8_0x21cda8");
#endif

    ctx->pc = 0x21cda8u;

    // 0x21cda8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21cda8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cdac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21cdb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CDB0u;
    {
        const bool branch_taken_0x21cdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cdb0) {
            ctx->pc = 0x21CDC4u;
            return;
        }
    }
    ctx->pc = 0x21CDB8u;
    // 0x21cdb8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21cdbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21CDBCu;
    {
        const bool branch_taken_0x21cdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cdbc) {
            ctx->pc = 0x21CDCCu;
            return;
        }
    }
    ctx->pc = 0x21CDC4u;
}
