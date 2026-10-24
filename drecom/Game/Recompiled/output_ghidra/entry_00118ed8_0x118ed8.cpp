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

// Function: entry_00118ed8
// Address: 0x118ed8 - 0x118eec
void entry_00118ed8_0x118ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118ed8_0x118ed8");
#endif

    ctx->pc = 0x118ed8u;

    // 0x118ed8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x118ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x118edc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x118edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x118ee0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x118ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x118ee4: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x118ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x118ee8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x118ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118eecu;
}
