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

// Function: entry_0014f498
// Address: 0x14f498 - 0x14f4ac
void entry_0014f498_0x14f498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f498_0x14f498");
#endif

    ctx->pc = 0x14f498u;

    // 0x14f498: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
    // 0x14f49c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x14f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x14f4a0: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x14f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x14f4a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f4a8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f4a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x14f4acu;
}
